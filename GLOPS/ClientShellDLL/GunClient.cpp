#include "GunClient.h"
#include "Protocol.h"

// 1007c760: GunClient::PullTrigger
void GunClient::PullTrigger() {
    // Reset specific state at 0x130
    m_bState130 = false; 

    // Logic at 1007c770
    // ... Substack allocation and LTVector initialization ...

    // 1007c950: Check firing mode
    if (m_nFiringMode == 1) { // FullAuto check
        if (m_bCanFire) {
            // 1007c95d: Create network message
            // ILTClient::CreateMessage at vtable offset 0x40?
            ILTMessage_Write* pMsg = g_pLTClient->CreateMessage();
            if (pMsg) {
                // Write position, rotation, and SendMessage
                pMsg->WriteVector(m_vPos);
                pMsg->WriteRotation(m_rRot);
                g_pLTClient->SendToServer(pMsg, MESSAGE_GUARANTEED);
            } else {
                // 1007c9ac: Error branch
                g_pLTClient->CPrint("ERROR!!: CreateMessage Failed! In GunClient::PullTrigger. FullAuto");
            }
        }
    }
}
