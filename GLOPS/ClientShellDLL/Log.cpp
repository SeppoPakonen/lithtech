#include "ltbasedefs.h"
#include "ILTClient.h"
#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <string.h>

extern ILTClient* g_pLTClient;

class Log {
public:
    void Open();
    void Print(const char* fmt, ...);
    void GenerateFilePrefix();

protected:
    uint32 m_nFlags;
    FILE* m_pFile;
    char m_szRootPath[512];
    char m_szPrefix[9];
    char m_szName[32];
};

void Log::Open() {
    if (m_nFlags & 1) {
        g_pLTClient->CPrint("Log::Open: Previous log was left open, closing");
        Print("Log file closed");
        m_nFlags &= ~1;
    }
    
    GenerateFilePrefix();
    
    char szFullPath[512];
    _snprintf(szFullPath, 511, "%s/%s-%s.log", m_szRootPath, m_szPrefix, m_szName);
    
    if (strlen(m_szRootPath) >= 494) {
        g_pLTClient->CPrint("Log::GenerateFullPath: Full path truncated to \"%s\"", szFullPath);
    }
    
    m_pFile = fopen(szFullPath, "w");
    if (!m_pFile) {
        g_pLTClient->CPrint("Log::Open: Couldn't open \"%s\" for writing", szFullPath);
        return;
    }
    
    m_nFlags |= 1;
    Print("Log file started");
}

void Log::Print(const char* fmt, ...) {
    if (!(m_nFlags & 1) || !m_pFile) return;
    
    char szBuffer[1024];
    va_list args;
    va_start(args, fmt);
    vsprintf(szBuffer, fmt, args);
    va_end(args);
    
    time_t t;
    time(&t);
    struct tm* ptm = localtime(&t);
    
    if (ptm) {
        fprintf(m_pFile, "L %02i/%02i/%04i - %02i:%02i:%02i:  %s\n",
            ptm->tm_mon + 1, ptm->tm_mday, ptm->tm_year + 1900,
            ptm->tm_hour, ptm->tm_min, ptm->tm_sec,
            szBuffer);
    } else {
        fprintf(m_pFile, "L 00/00/0000 - 00:00:00:  %s\n", szBuffer);
    }
    
    fflush(m_pFile);
}

void Log::GenerateFilePrefix() {
    time_t t;
    time(&t);
    struct tm* ptm = localtime(&t);
    
    if (ptm) {
        sprintf(m_szPrefix, "%04i%02i%02i", ptm->tm_year + 1900, ptm->tm_mon + 1, ptm->tm_mday);
    } else {
        g_pLTClient->CPrint("Log::GenerateFilePrefix: System time out of range");
        sprintf(m_szPrefix, "00000000");
    }
}
