#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class ConsolePrompt {
public:
    void Invoke(int arg1); // 0x10075f40
    
    // Member variables inferred from offsets:
    uint32_t m_0x2C;
    uint32_t m_0x30;
    uint32_t m_0x38;
    char m_0x3C[255]; // string buffer
    void* m_0x50; // some object pointer, maybe CWidget/CUISurface
};

static uint8_t g_PromptInitFlags = 0;
static void* g_PromptObj1 = nullptr;
static void* g_PromptObj2 = nullptr;

// External engine functions/data
extern "C" {
    void* EngineCall_B4(void* ltClient, int id);
    void* EngineCall_CC(void* ltClient, void* obj);
    void InitPromptString(void* obj, const char* str);
    int GetSomeStringLength(const char* str);
    int GetEngineMetric(int id);
    void EngineCall_120(void* ltClient, void* obj, int id);
    void EngineCall_128(void* ltClient, void* obj, int x, int y);
    void UpdateWidgetPos(void* widget, int* rect);
    void WidgetSetVisible(void* widget, int flag1, int flag2);
    void AddWidgetToUI(void* uiObj, void* widget);
}

// 0x10075f40
void ConsolePrompt::Invoke(int arg1) {
    if (!(g_PromptInitFlags & 1)) {
        g_PromptInitFlags |= 1;
        void* obj = EngineCall_B4(g_pLTClient, 0x6e2);
        g_PromptObj1 = obj;
        InitPromptString(obj, (const char*)0x10076140);
    }
    
    if (!(g_PromptInitFlags & 2)) {
        g_PromptInitFlags |= 2;
        void* obj = EngineCall_B4(g_pLTClient, 0x6e6);
        g_PromptObj2 = obj;
        InitPromptString(obj, (const char*)0x10076110);
    }
    
    void* res1 = EngineCall_CC(g_pLTClient, g_PromptObj1);
    void* res2 = EngineCall_CC(g_pLTClient, g_PromptObj2);
    
    // string length or copy loop
    char* strBuf = this->m_0x3C;
    strBuf[0] = 0;
    // The assembly does a repnz scasb to find the length of what seems to be m_0x3C
    int len = 0;
    while (strBuf[len] != 0 && len < 255) {
        len++;
    }
    this->m_0x30 = len;
    
    this->m_0x38 = GetEngineMetric(0); // 1004d220 might be a metric getter
    
    if (arg1 < 0 || arg1 >= 2) {
        EngineCall_120(g_pLTClient, (void*)0x100dd6f8, 0x1251);
        EngineCall_128(g_pLTClient, (void*)0x100dd7f0, 0x100c5d7c, arg1);
    }
    
    this->m_0x2C = 0;
    
    // Update widget geometry
    int rect[4];
    UpdateWidgetPos(this, rect);
    
    int val1 = GetEngineMetric(0); // ebp
    int val2 = GetEngineMetric(0x100d770c); // another call to 1004d220
    
    int w = rect[2] - rect[0];
    int h = rect[3] - rect[1];
    
    rect[0] = val2 + val1;
    rect[2] = rect[0] + w;
    rect[1] = val1;
    rect[3] = rect[1] + h;
    
    UpdateWidgetPos(this->m_0x50, rect);
    
    WidgetSetVisible(this, 0, 1);
    WidgetSetVisible(this->m_0x50, 0, 1);
    AddWidgetToUI((void*)0x101240d8, this->m_0x50);
}
