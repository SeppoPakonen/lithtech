#include "ProfileDialog.h"

// 0x10055959: ProfileDialog::ConfirmDeleteProfile
/*
10055959:	3b da                	cmp    ebx,edx
1005595b:	76 44                	jbe    0x100559a1
1005595d:	3b d8                	cmp    ebx,eax
1005595f:	75 40                	jne    0x100559a1
10055961:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10055964:	3b c2                	cmp    eax,edx
10055966:	75 05                	jne    0x1005596d
10055968:	b8 c0 8f 0b 10       	mov    eax,0x100b8fc0
1005596d:	80 78 ff fe          	cmp    BYTE PTR [eax-0x1],0xfe
10055971:	73 2e                	jae    0x100559a1
10055973:	6a 01                	push   0x1
10055975:	8b cd                	mov    ecx,ebp
10055977:	e8 94 f1 fe ff       	call   0x10044b10
1005597c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1005597f:	85 c0                	test   eax,eax
10055981:	75 05                	jne    0x10055988
10055983:	b8 c0 8f 0b 10       	mov    eax,0x100b8fc0
10055988:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
1005598b:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1005598e:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
10055991:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
10055994:	89 55 0c             	mov    DWORD PTR [ebp+0xc],edx
10055997:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
1005599a:	fe c1                	inc    cl
1005599c:	88 48 ff             	mov    BYTE PTR [eax-0x1],cl
1005599f:	eb 9b                	jmp    0x1005593c
100559a1:	6a 01                	push   0x1
100559a3:	53                   	push   ebx
100559a4:	8b cd                	mov    ecx,ebp
100559a6:	e8 d5 f1 fe ff       	call   0x10044b80
100559ab:	84 c0                	test   al,al
100559ad:	74 8d                	je     0x1005593c
100559af:	8b 76 04             	mov    esi,DWORD PTR [esi+0x4]
100559b2:	85 f6                	test   esi,esi
100559b4:	75 05                	jne    0x100559bb
100559b6:	be c0 8f 0b 10       	mov    esi,0x100b8fc0
100559bb:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
100559be:	8b cb                	mov    ecx,ebx
100559c0:	8b c1                	mov    eax,ecx
100559c2:	c1 e9 02             	shr    ecx,0x2
100559c5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100559c7:	8b c8                	mov    ecx,eax
100559c9:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100559cd:	83 e1 03             	and    ecx,0x3
100559d0:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100559d2:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
100559d5:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
100559d8:	c6 04 0b 00          	mov    BYTE PTR [ebx+ecx*1],0x0
100559dc:	c7 00 8c ec 0b 10    	mov    DWORD PTR [eax],0x100bec8c
100559e2:	e9 5d ff ff ff       	jmp    0x10055944
100559e7:	90                   	nop
100559e8:	90                   	nop
100559e9:	90                   	nop
100559ea:	90                   	nop
100559eb:	90                   	nop
100559ec:	90                   	nop
100559ed:	90                   	nop
100559ee:	90                   	nop
100559ef:	90                   	nop
100559f0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100559f4:	81 ec 0c 01 00 00    	sub    esp,0x10c
100559fa:	85 c0                	test   eax,eax
100559fc:	55                   	push   ebp
100559fd:	56                   	push   esi
100559fe:	57                   	push   edi
100559ff:	0f 85 3f 01 00 00    	jne    0x10055b44
10055a05:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
10055a0a:	68 3c af 0d 10       	push   0x100daf3c
10055a0f:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
10055a15:	8b 8c 24 24 01 00 00 	mov    ecx,DWORD PTR [esp+0x124]
10055a1c:	8b f0                	mov    esi,eax
10055a1e:	33 c0                	xor    eax,eax
10055a20:	83 c4 04             	add    esp,0x4
10055a23:	8b a9 fc 00 00 00    	mov    ebp,DWORD PTR [ecx+0xfc]
10055a29:	83 c9 ff             	or     ecx,0xffffffff
10055a2c:	83 c5 30             	add    ebp,0x30
10055a2f:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
10055a33:	8b fd                	mov    edi,ebp
10055a35:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10055a37:	f7 d1                	not    ecx
10055a39:	49                   	dec    ecx
10055a3a:	85 f6                	test   esi,esi
10055a3c:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10055a40:	0f 84 fe 00 00 00    	je     0x10055b44
10055a46:	53                   	push   ebx
10055a47:	8b 1d 14 80 0b 10    	mov    ebx,DWORD PTR ds:0x100b8014
10055a4d:	83 3e 01             	cmp    DWORD PTR [esi],0x1
10055a50:	0f 85 b8 00 00 00    	jne    0x10055b0e
10055a56:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10055a59:	6a 2e                	push   0x2e
10055a5b:	52                   	push   edx
10055a5c:	e8 7f f3 04 00       	call   0x100a4de0
10055a61:	8b f8                	mov    edi,eax
10055a63:	83 c4 08             	add    esp,0x8
10055a66:	85 ff                	test   edi,edi
10055a68:	0f 84 a0 00 00 00    	je     0x10055b0e
10055a6e:	68 34 af 0d 10       	push   0x100daf34
10055a73:	57                   	push   edi
10055a74:	e8 57 12 05 00       	call   0x100a6cd0
10055a79:	83 c4 08             	add    esp,0x8
10055a7c:	85 c0                	test   eax,eax
10055a7e:	74 12                	je     0x10055a92
10055a80:	68 c8 af 0d 10       	push   0x100dafc8
10055a85:	57                   	push   edi
10055a86:	e8 45 12 05 00       	call   0x100a6cd0
10055a8b:	83 c4 08             	add    esp,0x8
10055a8e:	85 c0                	test   eax,eax
10055a90:	75 7c                	jne    0x10055b0e
10055a92:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10055a96:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10055a99:	50                   	push   eax
10055a9a:	55                   	push   ebp
10055a9b:	51                   	push   ecx
10055a9c:	e8 af fe 04 00       	call   0x100a5950
10055aa1:	83 c4 0c             	add    esp,0xc
10055aa4:	85 c0                	test   eax,eax
10055aa6:	75 66                	jne    0x10055b0e
10055aa8:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10055aab:	8d 44 24 18          	lea    eax,[esp+0x18]
10055aaf:	52                   	push   edx
10055ab0:	68 b8 af 0d 10       	push   0x100dafb8
10055ab5:	68 03 01 00 00       	push   0x103
10055aba:	50                   	push   eax
10055abb:	e8 8d e5 04 00       	call   0x100a404d
10055ac0:	83 c4 10             	add    esp,0x10
10055ac3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
10055ac7:	c6 84 24 1b 01 00 00 	mov    BYTE PTR [esp+0x11b],0x0
10055ace:	00 
10055acf:	51                   	push   ecx
10055ad0:	ff d3                	call   ebx
10055ad2:	85 c0                	test   eax,eax
10055ad4:	75 38                	jne    0x10055b0e
10055ad6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10055adc:	68 55 01 00 00       	push   0x155
10055ae1:	68 84 af 0d 10       	push   0x100daf84
10055ae6:	8b 11                	mov    edx,DWORD PTR [ecx]
10055ae8:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
10055aee:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10055af3:	8d 54 24 18          	lea    edx,[esp+0x18]
10055af7:	52                   	push   edx
10055af8:	68 44 af 0d 10       	push   0x100daf44
10055afd:	8b 08                	mov    ecx,DWORD PTR [eax]
10055aff:	68 7c 5d 0c 10       	push   0x100c5d7c
10055b04:	50                   	push   eax
10055b05:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10055b0b:	83 c4 10             	add    esp,0x10
10055b0e:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
10055b11:	85 f6                	test   esi,esi
10055b13:	0f 85 34 ff ff ff    	jne    0x10055a4d
10055b19:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10055b1d:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10055b23:	50                   	push   eax
10055b24:	ff 91 84 00 00 00    	call   DWORD PTR [ecx+0x84]
10055b2a:	8b 8c 24 28 01 00 00 	mov    ecx,DWORD PTR [esp+0x128]
10055b31:	83 c4 04             	add    esp,0x4
10055b34:	8b 11                	mov    edx,DWORD PTR [ecx]
10055b36:	c7 81 10 01 00 00 ff 	mov    DWORD PTR [ecx+0x110],0xffffffff
10055b3d:	ff ff ff 
10055b40:	ff 52 78             	call   DWORD PTR [edx+0x78]
10055b43:	5b                   	pop    ebx
10055b44:	5f                   	pop    edi
10055b45:	5e                   	pop    esi
10055b46:	5d                   	pop    ebp
10055b47:	81 c4 0c 01 00 00    	add    esp,0x10c
10055b4d:	c3                   	ret
10055b4e:	90                   	nop
10055b4f:	90                   	nop
10055b50:	83 ec 10             	sub    esp,0x10
10055b53:	55                   	push   ebp
10055b54:	56                   	push   esi
10055b55:	57                   	push   edi
10055b56:	8b f9                	mov    edi,ecx
10055b58:	33 c0                	xor    eax,eax
10055b5a:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10055b61:	ff 
10055b62:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
10055b68:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
10055b6c:	c7 44 24 14 34 74 0d 	mov    DWORD PTR [esp+0x14],0x100d7434
10055b73:	10 
10055b74:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10055b78:	e8 93 f3 01 00       	call   0x10074f10
10055b7d:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
10055b83:	8b f0                	mov    esi,eax
10055b85:	e8 96 f3 01 00       	call   0x10074f20
10055b8a:	8d 6c 30 ff          	lea    ebp,[eax+esi*1-0x1]
10055b8e:	3b f5                	cmp    esi,ebp
10055b90:	7f 6a                	jg     0x10055bfc
10055b92:	53                   	push   ebx
10055b93:	8d 9f 00 01 00 00    	lea    ebx,[edi+0x100]
10055b99:	8b 97 10 01 00 00    	mov    edx,DWORD PTR [edi+0x110]
10055b9f:	33 c0                	xor    eax,eax
10055ba1:	3b f2                	cmp    esi,edx
10055ba3:	0f 94 c0             	sete   al
10055ba6:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10055baa:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10055bad:	85 c0                	test   eax,eax
10055baf:	74 0c                	je     0x10055bbd
10055bb1:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
10055bb4:	2b c8                	sub    ecx,eax
10055bb6:	c1 f9 02             	sar    ecx,0x2
10055bb9:	3b ce                	cmp    ecx,esi
10055bbb:	77 07                	ja     0x10055bc4
10055bbd:	8b cb                	mov    ecx,ebx
10055bbf:	e8 9c 0c 00 00       	call   0x10056860
10055bc4:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10055bc7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10055bcd:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
10055bd0:	8b 11                	mov    edx,DWORD PTR [ecx]
10055bd2:	50                   	push   eax
10055bd3:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10055bd9:	8d 4c 24 10          	lea    ecx,[esp+0x10]
10055bdd:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10055be1:	51                   	push   ecx
10055be2:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
10055be8:	56                   	push   esi
10055be9:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
10055bf0:	00 
10055bf1:	e8 ba f2 01 00       	call   0x10074eb0
10055bf6:	46                   	inc    esi
10055bf7:	3b f5                	cmp    esi,ebp
10055bf9:	7e 9e                	jle    0x10055b99
10055bfb:	5b                   	pop    ebx
10055bfc:	5f                   	pop    edi
10055bfd:	5e                   	pop    esi
10055bfe:	5d                   	pop    ebp
10055bff:	83 c4 10             	add    esp,0x10
10055c02:	c3                   	ret
10055c03:	90                   	nop
10055c04:	90                   	nop
10055c05:	90                   	nop
10055c06:	90                   	nop
10055c07:	90                   	nop
10055c08:	90                   	nop
10055c09:	90                   	nop
10055c0a:	90                   	nop
10055c0b:	90                   	nop
10055c0c:	90                   	nop
10055c0d:	90                   	nop
10055c0e:	90                   	nop
10055c0f:	90                   	nop

*/
#include <stdio.h>
#include <string.h>
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

void ProfileDialog::ConfirmDeleteProfile() {
    // Abstracted based on 10055959
    // In actual implementation, the profile name would be fetched from a UI element.
    const char* profileName = "profile"; 
    char fileName[256];
    char fullPath[256];

    // Attempt to delete the .cfg file
    sprintf(fileName, "%s.cfg", profileName);
    sprintf(fullPath, "globalops/%s", fileName);
    
    // Abstracted remove() call (100b8014 might be a function pointer to remove)
    if (remove(fullPath) != 0) {
        g_pLTClient->CPrint("ProfileDialog::ConfirmDeleteProfile: Couldn't delete file \"%s\"", fullPath);
    }

    // Attempt to delete the .hud file
    sprintf(fileName, "%s.hud", profileName);
    sprintf(fullPath, "globalops/%s", fileName);
    
    if (remove(fullPath) != 0) {
        g_pLTClient->CPrint("ProfileDialog::ConfirmDeleteProfile: Couldn't delete file \"%s\"", fullPath);
    }
}

