#include "EquipSelectWidget.h"
#include "GameClientShell.h"
#include "MoveMgr.h"
#include "EquipItemClient.h"

// 0x10084500: EquipSelectWidget::Init
/*
10084500:	a1 10 43 12 10       	mov    eax,ds:0x10124310
10084505:	83 ec 08             	sub    esp,0x8
10084508:	8b 40 60             	mov    eax,DWORD PTR [eax+0x60]
1008450b:	55                   	push   ebp
1008450c:	56                   	push   esi
1008450d:	8b f1                	mov    esi,ecx
1008450f:	33 ed                	xor    ebp,ebp
10084511:	39 86 e0 16 00 00    	cmp    DWORD PTR [esi+0x16e0],eax
10084517:	74 48                	je     0x10084561
10084519:	83 f8 07             	cmp    eax,0x7
1008451c:	89 86 e0 16 00 00    	mov    DWORD PTR [esi+0x16e0],eax
10084522:	77 37                	ja     0x1008455b
10084524:	ff 24 85 e8 46 08 10 	jmp    DWORD PTR [eax*4+0x100846e8]
1008452b:	c7 86 e4 16 00 00 20 	mov    DWORD PTR [esi+0x16e4],0x20
10084532:	00 00 00 
10084535:	eb 2a                	jmp    0x10084561
10084537:	c7 86 e4 16 00 00 22 	mov    DWORD PTR [esi+0x16e4],0x22
1008453e:	00 00 00 
10084541:	eb 1e                	jmp    0x10084561
10084543:	c7 86 e4 16 00 00 32 	mov    DWORD PTR [esi+0x16e4],0x32
1008454a:	00 00 00 
1008454d:	eb 12                	jmp    0x10084561
1008454f:	c7 86 e4 16 00 00 ff 	mov    DWORD PTR [esi+0x16e4],0x1ff
10084556:	01 00 00 
10084559:	eb 06                	jmp    0x10084561
1008455b:	89 ae e4 16 00 00    	mov    DWORD PTR [esi+0x16e4],ebp
10084561:	8b 86 dc 0e 00 00    	mov    eax,DWORD PTR [esi+0xedc]
10084567:	3b c5                	cmp    eax,ebp
10084569:	74 0c                	je     0x10084577
1008456b:	8b 8e e4 16 00 00    	mov    ecx,DWORD PTR [esi+0x16e4]
10084571:	89 88 94 0c 00 00    	mov    DWORD PTR [eax+0xc94],ecx
10084577:	53                   	push   ebx
10084578:	57                   	push   edi
10084579:	8b ce                	mov    ecx,esi
1008457b:	e8 20 02 00 00       	call   0x100847a0
10084580:	8d 86 d8 16 00 00    	lea    eax,[esi+0x16d8]
10084586:	33 d2                	xor    edx,edx
10084588:	c7 86 dc 16 00 00 ff 	mov    DWORD PTR [esi+0x16dc],0xffffffff
1008458f:	ff ff ff 
10084592:	33 c9                	xor    ecx,ecx
10084594:	c7 00 ff ff ff ff    	mov    DWORD PTR [eax],0xffffffff
1008459a:	8b f8                	mov    edi,eax
1008459c:	8b 86 e0 16 00 00    	mov    eax,DWORD PTR [esi+0x16e0]
100845a2:	8d 1c 41             	lea    ebx,[ecx+eax*2]
100845a5:	03 c3                	add    eax,ebx
100845a7:	39 2c 85 00 cc 0b 10 	cmp    DWORD PTR [eax*4+0x100bcc00],ebp
100845ae:	74 10                	je     0x100845c0
100845b0:	83 fa 01             	cmp    edx,0x1
100845b3:	7f 0b                	jg     0x100845c0
100845b5:	83 fa 02             	cmp    edx,0x2
100845b8:	7d 0e                	jge    0x100845c8
100845ba:	89 0f                	mov    DWORD PTR [edi],ecx
100845bc:	42                   	inc    edx
100845bd:	83 c7 04             	add    edi,0x4
100845c0:	41                   	inc    ecx
100845c1:	83 f9 03             	cmp    ecx,0x3
100845c4:	7c d6                	jl     0x1008459c
100845c6:	eb 35                	jmp    0x100845fd
100845c8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100845ce:	68 4c 09 00 00       	push   0x94c
100845d3:	68 4c dd 0d 10       	push   0x100ddd4c
100845d8:	8b 11                	mov    edx,DWORD PTR [ecx]
100845da:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
100845e0:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100845e5:	6a 02                	push   0x2
100845e7:	68 1c de 0d 10       	push   0x100dde1c
100845ec:	68 7c 5d 0c 10       	push   0x100c5d7c
100845f1:	8b 08                	mov    ecx,DWORD PTR [eax]
100845f3:	50                   	push   eax
100845f4:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100845fa:	83 c4 10             	add    esp,0x10
100845fd:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
10084603:	8b 82 c8 81 01 00    	mov    eax,DWORD PTR [edx+0x181c8]
10084609:	3b c5                	cmp    eax,ebp
1008460b:	74 18                	je     0x10084625
1008460d:	8b 88 40 01 00 00    	mov    ecx,DWORD PTR [eax+0x140]
10084613:	89 8e d4 16 00 00    	mov    DWORD PTR [esi+0x16d4],ecx
10084619:	8b 90 b8 00 00 00    	mov    edx,DWORD PTR [eax+0xb8]
1008461f:	89 96 18 17 00 00    	mov    DWORD PTR [esi+0x1718],edx
10084625:	8b ce                	mov    ecx,esi
10084627:	e8 04 29 00 00       	call   0x10086f30
1008462c:	8b be e4 0e 00 00    	mov    edi,DWORD PTR [esi+0xee4]
10084632:	6a 02                	push   0x2
10084634:	55                   	push   ebp
10084635:	8b cf                	mov    ecx,edi
10084637:	89 6f 2c             	mov    DWORD PTR [edi+0x2c],ebp
1008463a:	e8 41 a1 fe ff       	call   0x1006e780
1008463f:	8b bf 88 00 00 00    	mov    edi,DWORD PTR [edi+0x88]
10084645:	3b fd                	cmp    edi,ebp
10084647:	74 1a                	je     0x10084663
10084649:	8d 4f 2c             	lea    ecx,[edi+0x2c]
1008464c:	ba 0a 00 00 00       	mov    edx,0xa
10084651:	8b 01                	mov    eax,DWORD PTR [ecx]
10084653:	3b c5                	cmp    eax,ebp
10084655:	74 06                	je     0x1008465d
10084657:	89 a8 00 01 00 00    	mov    DWORD PTR [eax+0x100],ebp
1008465d:	83 c1 04             	add    ecx,0x4
10084663:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10084668:	8b be dc 0e 00 00    	mov    edi,DWORD PTR [esi+0xedc]
1008466e:	8d 4c 24 10          	lea    ecx,[esp+0x10]
10084672:	8d 54 24 14          	lea    edx,[esp+0x14]
10084676:	51                   	push   ecx
10084677:	52                   	push   edx
10084678:	8d 98 10 02 00 00    	lea    ebx,[eax+0x210]
1008467e:	ff 90 e0 01 00 00    	call   DWORD PTR [eax+0x1e0]
10084684:	50                   	push   eax
10084685:	ff 13                	call   DWORD PTR [ebx]
10084687:	83 c4 0c             	add    esp,0xc
1008468a:	8b cf                	mov    ecx,edi
1008468c:	89 af 4c 01 00 00    	mov    DWORD PTR [edi+0x14c],ebp
10084692:	6a 02                	push   0x2
10084694:	55                   	push   ebp
10084695:	e8 e6 a0 fe ff       	call   0x1006e780
1008469a:	8b 86 e0 0e 00 00    	mov    eax,DWORD PTR [esi+0xee0]
100846a0:	5f                   	pop    edi
100846a1:	5b                   	pop    ebx
100846a2:	89 a8 94 03 00 00    	mov    DWORD PTR [eax+0x394],ebp
100846a8:	8b 86 e4 16 00 00    	mov    eax,DWORD PTR [esi+0x16e4]
100846ae:	3d ff 01 00 00       	cmp    eax,0x1ff
100846b3:	75 12                	jne    0x100846c7
100846b5:	68 ff 00 00 00       	push   0xff
100846ba:	8b ce                	mov    ecx,esi
100846bc:	e8 5f 10 00 00       	call   0x10085720
100846c1:	5e                   	pop    esi
100846c2:	5d                   	pop    ebp
100846c3:	83 c4 08             	add    esp,0x8
100846c6:	c3                   	ret
100846c7:	a8 04                	test   al,0x4
100846c9:	74 0f                	je     0x100846da
100846cb:	6a 01                	push   0x1
100846cd:	8b ce                	mov    ecx,esi
100846cf:	e8 4c 10 00 00       	call   0x10085720
100846d4:	5e                   	pop    esi
100846d5:	5d                   	pop    ebp
100846d6:	83 c4 08             	add    esp,0x8
100846d9:	c3                   	ret
100846da:	55                   	push   ebp
100846db:	8b ce                	mov    ecx,esi
100846dd:	e8 3e 10 00 00       	call   0x10085720
100846e2:	5e                   	pop    esi
100846e3:	5d                   	pop    ebp
100846e4:	83 c4 08             	add    esp,0x8
100846e7:	c3                   	ret
100846e8:	2b 45 08             	sub    eax,DWORD PTR [ebp+0x8]
100846eb:	10 37                	adc    BYTE PTR [edi],dh
100846ed:	45                   	inc    ebp
100846ee:	08 10                	or     BYTE PTR [eax],dl
100846f0:	5b                   	pop    ebx
100846f1:	45                   	inc    ebp
100846f2:	08 10                	or     BYTE PTR [eax],dl
100846f4:	43                   	inc    ebx
100846f5:	45                   	inc    ebp
100846f6:	08 10                	or     BYTE PTR [eax],dl
100846f8:	43                   	inc    ebx
100846f9:	45                   	inc    ebp
100846fa:	08 10                	or     BYTE PTR [eax],dl
100846fc:	5b                   	pop    ebx
100846fd:	45                   	inc    ebp
100846fe:	08 10                	or     BYTE PTR [eax],dl
10084700:	4f                   	dec    edi
10084701:	45                   	inc    ebp
10084702:	08 10                	or     BYTE PTR [eax],dl
10084704:	4f                   	dec    edi
10084705:	45                   	inc    ebp
10084706:	08 10                	or     BYTE PTR [eax],dl
*/
void EquipSelectWidget::Init() {
    // Cast and read the specialty ID from ClassSelectScreen global pointer
    void* pClassSelect = *(void**)0x10124310;
    uint32 specialty = 0;
    if (pClassSelect) {
        specialty = *(uint32*)((char*)pClassSelect + 0x60);
    }

    if (m_nSelectedSpecialty != specialty) {
        m_nSelectedSpecialty = specialty;
        if (specialty > 7) {
            m_dwClassMask = 0;
        } else {
            switch (specialty) {
                case 0: m_dwClassMask = 0x20; break;
                case 1: m_dwClassMask = 0x22; break;
                case 3:
                case 4: m_dwClassMask = 0x32; break;
                case 6:
                case 7: m_dwClassMask = 0x1ff; break;
                default: m_dwClassMask = 0; break;
            }
        }
    }

    if (m_pEquipSelector) {
        *(uint32*)((char*)m_pEquipSelector + 0xc94) = m_dwClassMask;
    }

    UpdateFromPlayer();

    m_anSlotIndices[0] = 0xffffffff;
    m_anSlotIndices[1] = 0xffffffff;
    uint32 count = 0;
    for (uint32 slot = 0; slot < 3; slot++) {
        BOOL* pSpecialtySlots = (BOOL*)0x100bcc00;
        if (pSpecialtySlots[m_nSelectedSpecialty * 3 + slot]) {
            if (count < 2) {
                m_anSlotIndices[count++] = slot;
            } else {
                g_pLTClient->CPrint("Developer: %s, Error: EquipSelectWidget::Init: Too many selectable armour types (max %i) (File: %s, Line: %d)",
                                    "Darren", 2, "InGameMenu.cpp", 2380);
            }
        }
    }

    CMoveMgr* pMoveMgr = g_pGameClientShell->GetMoveMgr();
    if (pMoveMgr) {
        m_nMoveMgrVal140 = *(uint32*)((char*)pMoveMgr + 0x140);
        m_nMoveMgrValB8 = *(uint32*)((char*)pMoveMgr + 0xb8);
    }

    Method_86f30();

    if (m_pWidgetEE4) {
        m_pWidgetEE4->SetStateFlags(0, 2);
        CWidget* pSubWidget = *(CWidget**)((char*)m_pWidgetEE4 + 0x88);
        if (pSubWidget) {
            CWidget** apWidgets = (CWidget**)((char*)pSubWidget + 0x2c);
            for (int i = 0; i < 10; i++) {
                if (apWidgets[i]) {
                    *(uint32*)((char*)apWidgets[i] + 0x100) = 0;
                }
            }
        }
    }

    // Call screen resolution retrieval function pointers on g_pLTClient
    typedef uint32 (__cdecl *GetScreenResFn)(uint32*, uint32*);
    typedef void (__cdecl *UnkMethod210Fn)(uint32);
    uint32 width = 0, height = 0;
    GetScreenResFn getScreenRes = *(GetScreenResFn*)((char*)g_pLTClient + 0x1e0);
    UnkMethod210Fn method210 = *(UnkMethod210Fn*)((char*)g_pLTClient + 0x210);
    uint32 res = getScreenRes(&width, &height);
    method210(res);

    if (m_pEquipSelector) {
        *(uint32*)((char*)m_pEquipSelector + 0x14c) = 0;
        m_pEquipSelector->SetStateFlags(0, 2);
    }

    if (m_pItemInfoWindow) {
        *(uint32*)((char*)m_pItemInfoWindow + 0x394) = 0;
    }

    if (m_dwClassMask == 0x1ff) {
        SomeMethod_85720(0xff);
    } else if ((m_dwClassMask & 4) != 0) {
        SomeMethod_85720(1);
    } else {
        SomeMethod_85720(0);
    }
}

// 0x10084710: EquipSelectWidget::UpdateSelection
/*
10084710:	53                   	push   ebx
10084711:	55                   	push   ebp
10084712:	56                   	push   esi
10084713:	8b f1                	mov    esi,ecx
10084715:	57                   	push   edi
10084716:	33 db                	xor    ebx,ebx
10084718:	8b ae cc 16 00 00    	mov    ebp,DWORD PTR [esi+0x16cc]
1008471e:	53                   	push   ebx
1008471f:	8b ce                	mov    ecx,esi
10084721:	e8 fa 0f 00 00       	call   0x10085720
10084726:	8b 86 d0 16 00 00    	mov    eax,DWORD PTR [esi+0x16d0]
1008472c:	8d 0c c3             	lea    ecx,[ebx+eax*8]
1008472f:	03 c1                	add    eax,ecx
10084731:	8d 14 80             	lea    edx,[eax+eax*4]
10084734:	8d 04 50             	lea    eax,[eax+edx*2]
10084737:	8b 8c 86 10 0f 00 00 	mov    ecx,DWORD PTR [esi+eax*4+0xf10]
1008473e:	8d 04 86             	lea    eax,[esi+eax*4]
10084741:	81 f9 ff 00 00 00    	cmp    ecx,0xff
10084747:	74 42                	je     0x1008478b
10084749:	8b 90 18 0f 00 00    	mov    edx,DWORD PTR [eax+0xf18]
1008474f:	85 d2                	test   edx,edx
10084751:	75 0a                	jne    0x1008475d
10084753:	51                   	push   ecx
10084754:	8b ce                	mov    ecx,esi
10084756:	e8 c5 23 00 00       	call   0x10086b20
1008475b:	eb 2e                	jmp    0x1008478b
1008475d:	33 ff                	xor    edi,edi
1008475f:	8b 86 d0 16 00 00    	mov    eax,DWORD PTR [esi+0x16d0]
10084765:	8d 0c c3             	lea    ecx,[ebx+eax*8]
10084768:	03 c1                	add    eax,ecx
1008476a:	8d 14 80             	lea    edx,[eax+eax*4]
1008476d:	03 c7                	add    eax,edi
1008476f:	8d 0c 50             	lea    ecx,[eax+edx*2]
10084772:	8b 84 8e 2c 0f 00 00 	mov    eax,DWORD PTR [esi+ecx*4+0xf2c]
10084779:	85 c0                	test   eax,eax
1008477b:	75 08                	jne    0x10084785
1008477d:	57                   	push   edi
1008477e:	8b ce                	mov    ecx,esi
10084780:	e8 1b 1b 00 00       	call   0x100862a0
10084785:	47                   	inc    edi
10084786:	83 ff 03             	cmp    edi,0x3
10084789:	7c d4                	jl     0x1008475f
1008478b:	43                   	inc    ebx
1008478c:	83 fb 08             	cmp    ebx,0x8
1008478f:	7e 8d                	jle    0x1008471e
10084791:	55                   	push   ebp
10084792:	8b ce                	mov    ecx,esi
10084794:	e8 87 0f 00 00       	call   0x10085720
10084799:	5f                   	pop    edi
1008479a:	5e                   	pop    esi
1008479b:	5d                   	pop    ebp
1008479c:	5b                   	pop    ebx
1008479d:	c3                   	ret
*/
void EquipSelectWidget::UpdateSelection() {
    uint32 activeSlot = m_nSomeVal_16cc;
    for (uint32 i = 0; i <= 8; i++) {
        SomeMethod_85720(i);
        uint32 row = m_nSomeVal_16d0;
        EquipSelectItem& item = m_aSomeArray[row][i];
        if (item.field_0 == 0xff) {
            continue;
        }
        if (item.field_8 == 0) {
            SomeMethod_10086b20(item.field_0);
        } else {
            for (uint32 j = 0; j < 3; j++) {
                if (item.field_1C[j] == 0) {
                    SomeMethod_100862a0(j);
                }
            }
        }
    }
    SomeMethod_85720(activeSlot);
}

// 0x100847a0: EquipSelectWidget::UpdateFromPlayer
/*
100847a0:	51                   	push   ecx
100847a1:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
100847a6:	53                   	push   ebx
100847a7:	55                   	push   ebp
100847a8:	33 ed                	xor    ebp,ebp
100847aa:	8b 98 c8 81 01 00    	mov    ebx,DWORD PTR [eax+0x181c8]
100847b0:	56                   	push   esi
100847b1:	3b dd                	cmp    ebx,ebp
100847b3:	8b f1                	mov    esi,ecx
100847b5:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
100847b9:	0f 84 9d 00 00 00    	je     0x1008485c
100847bf:	8b 8e dc 0e 00 00    	mov    ecx,DWORD PTR [esi+0xedc]
100847c5:	57                   	push   edi
100847c6:	e8 d5 69 00 00       	call   0x1008b1a0
100847cb:	8b 8e e0 0e 00 00    	mov    ecx,DWORD PTR [esi+0xee0]
100847d1:	68 ff 00 00 00       	push   0xff
100847d6:	e8 55 79 00 00       	call   0x1008c130
100847db:	33 ff                	xor    edi,edi
100847dd:	8b 4c bb 5c          	mov    ecx,DWORD PTR [ebx+edi*4+0x5c]
100847e1:	3b cd                	cmp    ecx,ebp
100847e3:	74 0d                	je     0x100847f2
100847e5:	8b 11                	mov    edx,DWORD PTR [ecx]
100847e7:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
100847ea:	84 c0                	test   al,al
100847ec:	0f 84 96 00 00 00    	je     0x10084888
100847f2:	8b 4c bb 5c          	mov    ecx,DWORD PTR [ebx+edi*4+0x5c]
100847f6:	3b cd                	cmp    ecx,ebp
100847f8:	74 0f                	je     0x10084809
100847fa:	8b 01                	mov    eax,DWORD PTR [ecx]
100847fc:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
100847ff:	84 c0                	test   al,al
10084801:	74 06                	je     0x10084809
10084803:	8b 5c bb 5c          	mov    ebx,DWORD PTR [ebx+edi*4+0x5c]
10084807:	eb 02                	jmp    0x1008480b
10084809:	33 db                	xor    ebx,ebx
1008480b:	8b 13                	mov    edx,DWORD PTR [ebx]
1008480d:	8b cb                	mov    ecx,ebx
1008480f:	ff 52 08             	call   DWORD PTR [edx+0x8]
10084812:	3b c5                	cmp    eax,ebp
10084814:	74 4b                	je     0x10084861
10084816:	83 f8 01             	cmp    eax,0x1
10084819:	7e 2f                	jle    0x1008484a
1008481b:	83 f8 03             	cmp    eax,0x3
1008481e:	7f 2a                	jg     0x1008484a
10084820:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
10084823:	3d ff 00 00 00       	cmp    eax,0xff
10084828:	74 11                	je     0x1008483b
1008482a:	8b 5b 18             	mov    ebx,DWORD PTR [ebx+0x18]
1008482d:	3b dd                	cmp    ebx,ebp
1008482f:	74 0f                	je     0x10084840
10084831:	83 fb 01             	cmp    ebx,0x1
10084834:	75 05                	jne    0x1008483b
10084836:	83 c0 40             	add    eax,0x40
10084839:	eb 05                	jmp    0x10084840
1008483b:	b8 ff 00 00 00       	mov    eax,0xff
10084840:	55                   	push   ebp
10084841:	57                   	push   edi
10084842:	50                   	push   eax
10084843:	8b ce                	mov    ecx,esi
10084845:	e8 f6 20 00 00       	call   0x10086940
1008484a:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
1008484e:	47                   	inc    edi
1008484f:	83 ff 08             	cmp    edi,0x8
10084852:	7e 89                	jle    0x100847dd
10084854:	8b ce                	mov    ecx,esi
10084856:	e8 d5 26 00 00       	call   0x10086f30
1008485b:	5f                   	pop    edi
1008485c:	5e                   	pop    esi
1008485d:	5d                   	pop    ebp
1008485e:	5b                   	pop    ebx
1008485f:	59                   	pop    ecx
10084860:	c3                   	ret
10084861:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
10084864:	8b 4b 7c             	mov    ecx,DWORD PTR [ebx+0x7c]
10084867:	3d ff 00 00 00       	cmp    eax,0xff
1008486c:	74 12                	je     0x10084880
1008486e:	8b 5b 18             	mov    ebx,DWORD PTR [ebx+0x18]
10084871:	3b dd                	cmp    ebx,ebp
10084873:	74 10                	je     0x10084885
10084875:	83 fb 01             	cmp    ebx,0x1
10084878:	75 06                	jne    0x10084880
1008487a:	83 c0 40             	add    eax,0x40
1008487d:	51                   	push   ecx
1008487e:	eb c1                	jmp    0x10084841
10084880:	b8 ff 00 00 00       	mov    eax,0xff
10084885:	51                   	push   ecx
10084886:	eb b9                	jmp    0x10084841
10084888:	8b 86 d0 16 00 00    	mov    eax,DWORD PTR [esi+0x16d0]
1008488e:	8d 0c c7             	lea    ecx,[edi+eax*8]
10084891:	03 c1                	add    eax,ecx
10084893:	b9 ff 00 00 00       	mov    ecx,0xff
10084898:	8d 14 80             	lea    edx,[eax+eax*4]
1008489b:	8d 04 50             	lea    eax,[eax+edx*2]
1008489e:	8b 94 86 10 0f 00 00 	mov    edx,DWORD PTR [esi+eax*4+0xf10]
100848a5:	3b d1                	cmp    edx,ecx
100848a7:	8d 04 86             	lea    eax,[esi+eax*4]
100848aa:	74 a2                	je     0x1008484e
100848ac:	39 a8 18 0f 00 00    	cmp    DWORD PTR [eax+0xf18],ebp
100848b2:	74 9a                	je     0x1008484e
100848b4:	89 88 10 0f 00 00    	mov    DWORD PTR [eax+0xf10],ecx
100848ba:	8b 86 d0 16 00 00    	mov    eax,DWORD PTR [esi+0x16d0]
100848c0:	8d 0c c7             	lea    ecx,[edi+eax*8]
100848c3:	03 c1                	add    eax,ecx
100848c5:	8d 14 80             	lea    edx,[eax+eax*4]
100848c8:	8d 04 50             	lea    eax,[eax+edx*2]
100848cb:	89 ac 86 18 0f 00 00 	mov    DWORD PTR [esi+eax*4+0xf18],ebp
100848d2:	8b 86 d0 16 00 00    	mov    eax,DWORD PTR [esi+0x16d0]
100848d8:	8d 0c c7             	lea    ecx,[edi+eax*8]
100848db:	03 c1                	add    eax,ecx
100848dd:	33 c9                	xor    ecx,ecx
100848df:	8d 14 80             	lea    edx,[eax+eax*4]
100848e2:	8d 04 50             	lea    eax,[eax+edx*2]
100848e5:	89 ac 86 14 0f 00 00 	mov    DWORD PTR [esi+eax*4+0xf14],ebp
100848ec:	8b 86 d0 16 00 00    	mov    eax,DWORD PTR [esi+0x16d0]
100848f2:	8d 14 c7             	lea    edx,[edi+eax*8]
100848f5:	03 c2                	add    eax,edx
100848f7:	8d 14 80             	lea    edx,[eax+eax*4]
100848fa:	03 c1                	add    eax,ecx
100848fc:	8d 14 50             	lea    edx,[eax+edx*2]
100848ff:	c7 84 96 1c 0f 00 00 	mov    DWORD PTR [esi+edx*4+0xf1c],0xffffffff
10084906:	ff ff ff ff 
1008490a:	8b 86 d0 16 00 00    	mov    eax,DWORD PTR [esi+0x16d0]
10084910:	8d 14 c7             	lea    edx,[edi+eax*8]
10084913:	03 c2                	add    eax,edx
10084915:	8d 14 80             	lea    edx,[eax+eax*4]
10084918:	03 c1                	add    eax,ecx
1008491a:	41                   	inc    ecx
1008491b:	8d 14 50             	lea    edx,[eax+edx*2]
1008491e:	83 f9 04             	cmp    ecx,0x4
10084921:	89 ac 96 2c 0f 00 00 	mov    DWORD PTR [esi+edx*4+0xf2c],ebp
10084928:	7c c2                	jl     0x100848ec
1008492a:	8b 8e dc 0e 00 00    	mov    ecx,DWORD PTR [esi+0xedc]
10084930:	55                   	push   ebp
10084931:	55                   	push   ebp
10084932:	68 ff 00 00 00       	push   0xff
10084937:	57                   	push   edi
10084938:	e8 f3 68 00 00       	call   0x1008b230
1008493d:	e9 0c ff ff ff       	jmp    0x1008484e
*/
void EquipSelectWidget::UpdateFromPlayer() {
    CMoveMgr* pMoveMgr = g_pGameClientShell->GetMoveMgr();
    if (!pMoveMgr) return;

    m_pEquipSelector->ResetSlots();
    m_pItemInfoWindow->ClearInfo(0xff);

    for (uint32 i = 0; i <= 8; i++) {
        EquipItemClient* pObj = pMoveMgr->m_apObjects[i];
        if (pObj && pObj->IsActive()) {
            uint32 type = pObj->GetType();
            if (type == 0) {
                uint32 val_C = pObj->m_nItemId;
                uint32 val_7C = pObj->m_nSomeVal_7C;
                uint32 id = 0xff;
                if (val_C != 0xff) {
                    uint32 val_18 = pObj->m_nSlot;
                    if (val_18 == 1) {
                        id = val_C + 0x40;
                    } else if (val_18 == 0) {
                        id = val_C;
                    }
                }
                SomeMethod_10086940(id, i, val_7C);
            } else if (type == 2 || type == 3) {
                uint32 val_C = pObj->m_nItemId;
                uint32 id = 0xff;
                if (val_C != 0xff) {
                    uint32 val_18 = pObj->m_nSlot;
                    if (val_18 == 1) {
                        id = val_C + 0x40;
                    } else if (val_18 == 0) {
                        id = val_C;
                    }
                }
                SomeMethod_10086940(id, i, 0);
            }
        } else {
            uint32 row = m_nSomeVal_16d0;
            EquipSelectItem& item = m_aSomeArray[row][i];
            if (item.field_0 != 0xff && item.field_8 != 0) {
                item.field_0 = 0xff;
                item.field_8 = 0;
                item.field_4 = 0;
                for (int j = 0; j < 4; j++) {
                    item.field_C[j] = 0xffffffff;
                    item.field_1C[j] = 0;
                }
                m_pEquipSelector->UpdateSlot(i, 0xff, 0, 0);
            }
        }
    }
    Method_86f30();
}
