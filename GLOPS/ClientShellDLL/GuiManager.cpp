#include "GuiManager.h"
#include "IClientShell.h"

CGuiManager* g_pGuiMgr = nullptr; // Mapped to 0x101240d8
uint32 g_nWinningTeamID = 0;      // Mapped to 0x10127ef0

void CGuiManager::ChangeState(uint32 newState) {
    // Reconstructed from 0x10050e10
    m_nTargetState = newState;
    TransitionState();
}

void CGuiManager::TransitionState() {
    // Reconstructed from 0x10050ec0
    m_nFlags = 1;
    
    // Disable current state
    // SetWidgetFlags(m_pWidgetArray[m_nCurrentState], 0, 3);
    
    // Enable target state
    // SetWidgetFlags(m_pWidgetArray[m_nTargetState], 3, 0);
}

void CGuiManager::OnMessageGameStatus(void* hMessage) {
    // Reconstructed from 0x1007b51a
    uint8 subMsgID = g_pLTClient->ReadBits(hMessage, 8);

    if (subMsgID == 1) { // Round End / Match End
        if (m_nCurrentState == GUI_ENDROUND) {
            g_pLTClient->CPrint("SID_SCENARIO_EVALUATE_OBJECTIVES: GUI_ENDROUND still active!");
        }

        ChangeState(GUI_ENDROUND);

        // Read match state variables
        g_nWinningTeamID = g_pLTClient->Readuint32(hMessage);

        // Scoreboard parsing loop follows...
    } 
    else if (subMsgID == 2) {
        // Round Timer / TTD Timer updates
        // Uses ReadByte/ReadFloat internally and updates HUD widgets
    }
}
