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
    void GenerateFileSuffix();

protected:
    FILE* m_pFile;
    char m_szSuffix[32];
};

void Log::Open() {
    if (m_pFile) {
        g_pLTClient->CPrint("Log::Open: Previous log was left open, closing");
        fclose(m_pFile);
        m_pFile = nullptr;
    }
    
    GenerateFileSuffix();
    
    // Construct full path, dummy implementation for the reconstructed file
    char szFullPath[512];
    sprintf(szFullPath, "Logs/Log-%s.log", m_szSuffix);
    
    m_pFile = fopen(szFullPath, "w");
    if (!m_pFile) {
        g_pLTClient->CPrint("Log::Open: Couldn't open \"%s\" for writing", szFullPath);
        return;
    }
    
    fprintf(m_pFile, "Log file started\n");
}

void Log::Print(const char* fmt, ...) {
    if (!m_pFile) return;
    
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

void Log::GenerateFileSuffix() {
    time_t t;
    time(&t);
    struct tm* ptm = localtime(&t);
    
    if (ptm) {
        sprintf(m_szSuffix, "%04i%02i%02i", ptm->tm_year + 1900, ptm->tm_mon + 1, ptm->tm_mday);
    } else {
        g_pLTClient->CPrint("Log::GenerateFilePrefix: System time out of range");
        sprintf(m_szSuffix, "00000000");
    }
}
