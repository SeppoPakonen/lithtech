#include "InventoryPie.h"

// 0x1008ce80: InventoryPie::ValidateInvSlot
/*
1008ce80:	55                   	push   ebp
1008ce81:	56                   	push   esi
1008ce82:	57                   	push   edi
1008ce83:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1008ce87:	85 ff                	test   edi,edi
1008ce89:	8b e9                	mov    ebp,ecx
1008ce8b:	7c 05                	jl     0x1008ce92
1008ce8d:	83 ff 0b             	cmp    edi,0xb
1008ce90:	7c 41                	jl     0x1008ced3
1008ce92:	81 ff ff 00 00 00    	cmp    edi,0xff
1008ce98:	74 39                	je     0x1008ced3
1008ce9a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008cea0:	68 dc 01 00 00       	push   0x1dc
1008cea5:	68 30 e1 0d 10       	push   0x100de130
1008ceaa:	8b 01                	mov    eax,DWORD PTR [ecx]
1008ceac:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1008ceb2:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008ceb7:	57                   	push   edi
1008ceb8:	68 dc e0 0d 10       	push   0x100de0dc
1008cebd:	68 7c 5d 0c 10       	push   0x100c5d7c
1008cec2:	8b 08                	mov    ecx,DWORD PTR [eax]
1008cec4:	50                   	push   eax
1008cec5:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008cecb:	83 c4 10             	add    esp,0x10
1008cece:	bf ff 00 00 00       	mov    edi,0xff
1008ced3:	8d 14 7f             	lea    edx,[edi+edi*2]
1008ced6:	8b 04 95 58 e0 0d 10 	mov    eax,DWORD PTR [edx*4+0x100de058]
1008cedd:	8d 34 95 58 e0 0d 10 	lea    esi,[edx*4+0x100de058]
1008cee4:	85 c0                	test   eax,eax
1008cee6:	75 6d                	jne    0x1008cf55
1008cee8:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008ceec:	53                   	push   ebx
1008ceed:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
1008cef1:	8b c8                	mov    ecx,eax
1008cef3:	8b d0                	mov    edx,eax
1008cef5:	8b d8                	mov    ebx,eax
1008cef7:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
1008cefb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008cefe:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1008cf01:	c6 44 24 17 00       	mov    BYTE PTR [esp+0x17],0x0
1008cf06:	c1 eb 18             	shr    ebx,0x18
1008cf09:	c1 e9 08             	shr    ecx,0x8
1008cf0c:	c1 ea 10             	shr    edx,0x10
1008cf0f:	88 5c 24 1b          	mov    BYTE PTR [esp+0x1b],bl
1008cf13:	88 4c 24 19          	mov    BYTE PTR [esp+0x19],cl
1008cf17:	85 f6                	test   esi,esi
1008cf19:	88 54 24 1a          	mov    BYTE PTR [esp+0x1a],dl
1008cf1d:	88 4c 24 15          	mov    BYTE PTR [esp+0x15],cl
1008cf21:	88 54 24 16          	mov    BYTE PTR [esp+0x16],dl
1008cf25:	5b                   	pop    ebx
1008cf26:	0f 84 b7 00 00 00    	je     0x1008cfe3
1008cf2c:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1008cf30:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008cf34:	8d 04 40             	lea    eax,[eax+eax*2]
1008cf37:	c1 e0 04             	shl    eax,0x4
1008cf3a:	8d 84 28 88 00 00 00 	lea    eax,[eax+ebp*1+0x88]
1008cf41:	89 50 f0             	mov    DWORD PTR [eax-0x10],edx
1008cf44:	89 08                	mov    DWORD PTR [eax],ecx
1008cf46:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1008cf49:	83 c0 30             	add    eax,0x30
1008cf4c:	4e                   	dec    esi
1008cf4d:	75 f2                	jne    0x1008cf41
1008cf4f:	5f                   	pop    edi
1008cf50:	5e                   	pop    esi
1008cf51:	5d                   	pop    ebp
1008cf52:	c2 08 00             	ret    0x8
1008cf55:	83 f8 01             	cmp    eax,0x1
1008cf58:	75 52                	jne    0x1008cfac
1008cf5a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008cf5e:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
1008cf62:	8b c8                	mov    ecx,eax
1008cf64:	8b d0                	mov    edx,eax
1008cf66:	c1 e8 19             	shr    eax,0x19
1008cf69:	24 7f                	and    al,0x7f
1008cf6b:	88 44 24 17          	mov    BYTE PTR [esp+0x17],al
1008cf6f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008cf72:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1008cf75:	c1 e9 08             	shr    ecx,0x8
1008cf78:	c1 ea 10             	shr    edx,0x10
1008cf7b:	85 f6                	test   esi,esi
1008cf7d:	88 4c 24 15          	mov    BYTE PTR [esp+0x15],cl
1008cf81:	88 54 24 16          	mov    BYTE PTR [esp+0x16],dl
1008cf85:	74 5c                	je     0x1008cfe3
1008cf87:	8d 0c 40             	lea    ecx,[eax+eax*2]
1008cf8a:	8d 14 88             	lea    edx,[eax+ecx*4]
1008cf8d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1008cf91:	8d 84 95 dc 02 00 00 	lea    eax,[ebp+edx*4+0x2dc]
1008cf98:	8b 94 95 dc 02 00 00 	mov    edx,DWORD PTR [ebp+edx*4+0x2dc]
1008cf9f:	4e                   	dec    esi
1008cfa0:	8b d1                	mov    edx,ecx
1008cfa2:	75 fb                	jne    0x1008cf9f
1008cfa4:	5f                   	pop    edi
1008cfa5:	5e                   	pop    esi
1008cfa6:	89 10                	mov    DWORD PTR [eax],edx
1008cfa8:	5d                   	pop    ebp
1008cfa9:	c2 08 00             	ret    0x8

*/
void InventoryPie::ValidateInvSlot() {
    // TODO: Implement ValidateInvSlot
}

// 0x1008cfac: InventoryPie::SetSlotColour
/*
1008cfac:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008cfb2:	68 d0 01 00 00       	push   0x1d0
1008cfb7:	68 30 e1 0d 10       	push   0x100de130
1008cfbc:	8b 01                	mov    eax,DWORD PTR [ecx]
1008cfbe:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1008cfc4:	8b 16                	mov    edx,DWORD PTR [esi]
1008cfc6:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008cfcb:	57                   	push   edi
1008cfcc:	52                   	push   edx
1008cfcd:	8b 08                	mov    ecx,DWORD PTR [eax]
1008cfcf:	68 64 e1 0d 10       	push   0x100de164
1008cfd4:	68 7c 5d 0c 10       	push   0x100c5d7c
1008cfd9:	50                   	push   eax
1008cfda:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008cfe0:	83 c4 14             	add    esp,0x14
1008cfe3:	5f                   	pop    edi
1008cfe4:	5e                   	pop    esi
1008cfe5:	5d                   	pop    ebp
1008cfe6:	c2 08 00             	ret    0x8
1008cfe9:	90                   	nop
1008cfea:	90                   	nop
1008cfeb:	90                   	nop
1008cfec:	90                   	nop
1008cfed:	90                   	nop
1008cfee:	90                   	nop
1008cfef:	90                   	nop
1008cff0:	6a ff                	push   0xffffffff
1008cff2:	68 38 6d 0b 10       	push   0x100b6d38
1008cff7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1008cffd:	50                   	push   eax
1008cffe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1008d005:	83 ec 14             	sub    esp,0x14
1008d008:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1008d00c:	53                   	push   ebx
1008d00d:	55                   	push   ebp
1008d00e:	56                   	push   esi
1008d00f:	8b 74 24 38          	mov    esi,DWORD PTR [esp+0x38]
1008d013:	8b d9                	mov    ebx,ecx
1008d015:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1008d019:	57                   	push   edi
1008d01a:	0c 04                	or     al,0x4
1008d01c:	56                   	push   esi
1008d01d:	50                   	push   eax
1008d01e:	51                   	push   ecx
1008d01f:	8b cb                	mov    ecx,ebx
1008d021:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1008d025:	e8 56 13 fe ff       	call   0x1006e380
1008d02a:	8d 6b 2c             	lea    ebp,[ebx+0x2c]
1008d02d:	33 ff                	xor    edi,edi
1008d02f:	8b cd                	mov    ecx,ebp
1008d031:	89 7c 24 2c          	mov    DWORD PTR [esp+0x2c],edi
1008d035:	e8 a6 f7 ff ff       	call   0x1008c7e0
1008d03a:	3b f7                	cmp    esi,edi
1008d03c:	c7 03 44 d7 0b 10    	mov    DWORD PTR [ebx],0x100bd744
1008d042:	89 bb 40 03 00 00    	mov    DWORD PTR [ebx+0x340],edi
1008d048:	74 7a                	je     0x1008d0c4
1008d04a:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
1008d050:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008d055:	8d 0c 12             	lea    ecx,[edx+edx*1]
1008d058:	f7 e1                	mul    ecx
1008d05a:	8b ca                	mov    ecx,edx
1008d05c:	8b 15 54 be 11 10    	mov    edx,DWORD PTR ds:0x1011be54
1008d062:	03 d2                	add    edx,edx
1008d064:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008d069:	f7 e2                	mul    edx
1008d06b:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1008d06e:	8b fa                	mov    edi,edx
1008d070:	99                   	cdq
1008d071:	2b c2                	sub    eax,edx
1008d073:	8b d0                	mov    edx,eax
1008d075:	d1 e9                	shr    ecx,1
1008d077:	d1 fa                	sar    edx,1
1008d079:	8b c1                	mov    eax,ecx
1008d07b:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1008d07f:	99                   	cdq
1008d080:	2b c2                	sub    eax,edx
1008d082:	8b 16                	mov    edx,DWORD PTR [esi]
1008d084:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1008d088:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1008d08c:	d1 f8                	sar    eax,1
1008d08e:	2b c8                	sub    ecx,eax
1008d090:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1008d093:	03 ca                	add    ecx,edx
1008d095:	99                   	cdq
1008d096:	2b c2                	sub    eax,edx
1008d098:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1008d09c:	d1 ef                	shr    edi,1
1008d09e:	8b c8                	mov    ecx,eax
1008d0a0:	8b c7                	mov    eax,edi
1008d0a2:	99                   	cdq
1008d0a3:	2b c2                	sub    eax,edx
1008d0a5:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d0a8:	d1 f9                	sar    ecx,1
1008d0aa:	d1 f8                	sar    eax,1
1008d0ac:	2b c8                	sub    ecx,eax
1008d0ae:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
1008d0b2:	03 ca                	add    ecx,edx
1008d0b4:	8d 54 24 14          	lea    edx,[esp+0x14]
1008d0b8:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1008d0bc:	52                   	push   edx
1008d0bd:	8b cd                	mov    ecx,ebp
1008d0bf:	e8 1c f9 ff ff       	call   0x1008c9e0
1008d0c4:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1008d0c8:	5f                   	pop    edi
1008d0c9:	5e                   	pop    esi
1008d0ca:	8b c3                	mov    eax,ebx
1008d0cc:	5d                   	pop    ebp
1008d0cd:	5b                   	pop    ebx
1008d0ce:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1008d0d5:	83 c4 20             	add    esp,0x20
1008d0d8:	c2 0c 00             	ret    0xc
1008d0db:	90                   	nop
1008d0dc:	90                   	nop
1008d0dd:	90                   	nop
1008d0de:	90                   	nop
1008d0df:	90                   	nop
1008d0e0:	56                   	push   esi
1008d0e1:	8b f1                	mov    esi,ecx
1008d0e3:	e8 18 00 00 00       	call   0x1008d100
1008d0e8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1008d0ed:	74 09                	je     0x1008d0f8
1008d0ef:	56                   	push   esi
1008d0f0:	e8 29 68 01 00       	call   0x100a391e
1008d0f5:	83 c4 04             	add    esp,0x4
1008d0f8:	8b c6                	mov    eax,esi
1008d0fa:	5e                   	pop    esi
1008d0fb:	c2 04 00             	ret    0x4
1008d0fe:	90                   	nop
1008d0ff:	90                   	nop
1008d100:	6a ff                	push   0xffffffff
1008d102:	68 58 6d 0b 10       	push   0x100b6d58
1008d107:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1008d10d:	50                   	push   eax
1008d10e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1008d115:	51                   	push   ecx
1008d116:	56                   	push   esi
1008d117:	8b f1                	mov    esi,ecx
1008d119:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1008d11d:	8b 86 94 00 00 00    	mov    eax,DWORD PTR [esi+0x94]
1008d123:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1008d12a:	00 
1008d12b:	50                   	push   eax
1008d12c:	c7 46 2c 34 d7 0b 10 	mov    DWORD PTR [esi+0x2c],0x100bd734
1008d133:	e8 e6 67 01 00       	call   0x100a391e
1008d138:	83 c4 04             	add    esp,0x4
1008d13b:	8b ce                	mov    ecx,esi
1008d13d:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
1008d144:	ff 
1008d145:	e8 d6 13 fe ff       	call   0x1006e520
1008d14a:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1008d14e:	5e                   	pop    esi
1008d14f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1008d156:	83 c4 10             	add    esp,0x10
1008d159:	c3                   	ret
1008d15a:	90                   	nop
1008d15b:	90                   	nop
1008d15c:	90                   	nop
1008d15d:	90                   	nop
1008d15e:	90                   	nop
1008d15f:	90                   	nop
1008d160:	56                   	push   esi
1008d161:	8b f1                	mov    esi,ecx
1008d163:	e8 38 17 fe ff       	call   0x1006e8a0
1008d168:	a8 01                	test   al,0x1
1008d16a:	74 11                	je     0x1008d17d
1008d16c:	8b ce                	mov    ecx,esi
1008d16e:	c7 86 40 03 00 00 01 	mov    DWORD PTR [esi+0x340],0x1
1008d175:	00 00 00 
1008d178:	e8 03 18 fe ff       	call   0x1006e980
1008d17d:	5e                   	pop    esi
1008d17e:	c3                   	ret
1008d17f:	90                   	nop
1008d180:	83 ec 10             	sub    esp,0x10
1008d183:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1008d188:	53                   	push   ebx
1008d189:	55                   	push   ebp
1008d18a:	56                   	push   esi
1008d18b:	8d 14 00             	lea    edx,[eax+eax*1]
1008d18e:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008d193:	f7 e2                	mul    edx
1008d195:	a1 54 be 11 10       	mov    eax,ds:0x1011be54
1008d19a:	8b f2                	mov    esi,edx
1008d19c:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
1008d1a0:	57                   	push   edi
1008d1a1:	8d 14 00             	lea    edx,[eax+eax*1]
1008d1a4:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008d1a9:	f7 e2                	mul    edx
1008d1ab:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
1008d1ae:	8b fa                	mov    edi,edx
1008d1b0:	99                   	cdq
1008d1b1:	2b c2                	sub    eax,edx
1008d1b3:	83 c1 2c             	add    ecx,0x2c
1008d1b6:	d1 ee                	shr    esi,1
1008d1b8:	8b e8                	mov    ebp,eax
1008d1ba:	8b c6                	mov    eax,esi
1008d1bc:	99                   	cdq
1008d1bd:	2b c2                	sub    eax,edx
1008d1bf:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
1008d1c3:	d1 fd                	sar    ebp,1
1008d1c5:	d1 f8                	sar    eax,1
1008d1c7:	2b e8                	sub    ebp,eax
1008d1c9:	8b 03                	mov    eax,DWORD PTR [ebx]
1008d1cb:	03 e8                	add    ebp,eax
1008d1cd:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
1008d1d0:	99                   	cdq
1008d1d1:	2b c2                	sub    eax,edx
1008d1d3:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
1008d1d7:	d1 ef                	shr    edi,1
1008d1d9:	8b f0                	mov    esi,eax
1008d1db:	8b c7                	mov    eax,edi
1008d1dd:	99                   	cdq
1008d1de:	2b c2                	sub    eax,edx
1008d1e0:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
1008d1e4:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
1008d1e7:	d1 fe                	sar    esi,1
1008d1e9:	d1 f8                	sar    eax,1
1008d1eb:	2b f0                	sub    esi,eax
1008d1ed:	8d 44 24 10          	lea    eax,[esp+0x10]
1008d1f1:	03 f7                	add    esi,edi
1008d1f3:	50                   	push   eax
1008d1f4:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
1008d1f8:	e8 e3 f7 ff ff       	call   0x1008c9e0
1008d1fd:	5f                   	pop    edi
1008d1fe:	5e                   	pop    esi
1008d1ff:	5d                   	pop    ebp
1008d200:	5b                   	pop    ebx
1008d201:	83 c4 10             	add    esp,0x10
1008d204:	c2 04 00             	ret    0x4
1008d207:	90                   	nop
1008d208:	90                   	nop
1008d209:	90                   	nop
1008d20a:	90                   	nop
1008d20b:	90                   	nop
1008d20c:	90                   	nop
1008d20d:	90                   	nop
1008d20e:	90                   	nop
1008d20f:	90                   	nop

*/
void InventoryPie::SetSlotColour() {
    // TODO: Implement SetSlotColour
}

// 0x1008d210: InventoryPie::ValidateInvSlot
/*
1008d210:	83 ec 10             	sub    esp,0x10
1008d213:	8d 44 24 00          	lea    eax,[esp+0x0]
1008d217:	56                   	push   esi
1008d218:	57                   	push   edi
1008d219:	8b f1                	mov    esi,ecx
1008d21b:	50                   	push   eax
1008d21c:	e8 9f 14 fe ff       	call   0x1006e6c0
1008d221:	c7 86 40 03 00 00 00 	mov    DWORD PTR [esi+0x340],0x0
1008d228:	00 00 00 
1008d22b:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1008d231:	e8 fa e8 fa ff       	call   0x1003bb30
1008d236:	89 86 44 03 00 00    	mov    DWORD PTR [esi+0x344],eax
1008d23c:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1008d242:	56                   	push   esi
1008d243:	e8 b8 1f fe ff       	call   0x1006f200
1008d248:	6a 01                	push   0x1
1008d24a:	b9 68 4c 12 10       	mov    ecx,0x10124c68
1008d24f:	e8 3c 34 00 00       	call   0x10090690
1008d254:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008d258:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
1008d25c:	99                   	cdq
1008d25d:	2b c2                	sub    eax,edx
1008d25f:	b9 68 4c 12 10       	mov    ecx,0x10124c68
1008d264:	d1 f8                	sar    eax,1
1008d266:	03 c7                	add    eax,edi
1008d268:	8b 7c 24 08          	mov    edi,DWORD PTR [esp+0x8]
1008d26c:	50                   	push   eax
1008d26d:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008d271:	99                   	cdq
1008d272:	2b c2                	sub    eax,edx
1008d274:	d1 f8                	sar    eax,1
1008d276:	03 c7                	add    eax,edi
1008d278:	50                   	push   eax
1008d279:	e8 72 33 00 00       	call   0x100905f0
1008d27e:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1008d284:	8b 81 c8 81 01 00    	mov    eax,DWORD PTR [ecx+0x181c8]
1008d28a:	85 c0                	test   eax,eax
1008d28c:	0f 84 97 00 00 00    	je     0x1008d329
1008d292:	8b b8 8c 00 00 00    	mov    edi,DWORD PTR [eax+0x8c]
1008d298:	83 c6 2c             	add    esi,0x2c
1008d29b:	53                   	push   ebx
1008d29c:	8b 5e 60             	mov    ebx,DWORD PTR [esi+0x60]
1008d29f:	85 ff                	test   edi,edi
1008d2a1:	7c 05                	jl     0x1008d2a8
1008d2a3:	83 ff 0b             	cmp    edi,0xb
1008d2a6:	7c 41                	jl     0x1008d2e9
1008d2a8:	81 ff ff 00 00 00    	cmp    edi,0xff
1008d2ae:	74 39                	je     0x1008d2e9
1008d2b0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008d2b6:	68 dc 01 00 00       	push   0x1dc
1008d2bb:	68 30 e1 0d 10       	push   0x100de130
1008d2c0:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d2c2:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1008d2c8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008d2cd:	57                   	push   edi
1008d2ce:	68 dc e0 0d 10       	push   0x100de0dc
1008d2d3:	68 7c 5d 0c 10       	push   0x100c5d7c
1008d2d8:	8b 08                	mov    ecx,DWORD PTR [eax]
1008d2da:	50                   	push   eax
1008d2db:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008d2e1:	83 c4 10             	add    esp,0x10
1008d2e4:	bf ff 00 00 00       	mov    edi,0xff
1008d2e9:	81 fb ff 00 00 00    	cmp    ebx,0xff
1008d2ef:	89 7e 60             	mov    DWORD PTR [esi+0x60],edi
1008d2f2:	74 27                	je     0x1008d31b
1008d2f4:	3b 5e 5c             	cmp    ebx,DWORD PTR [esi+0x5c]
1008d2f7:	75 07                	jne    0x1008d300
1008d2f9:	b8 00 c8 00 5a       	mov    eax,0x5a00c800
1008d2fe:	eb 12                	jmp    0x1008d312
1008d300:	8b c3                	mov    eax,ebx
1008d302:	2b c7                	sub    eax,edi
1008d304:	f7 d8                	neg    eax
1008d306:	1b c0                	sbb    eax,eax
1008d308:	25 00 00 00 bf       	and    eax,0xbf000000
1008d30d:	05 ec b7 38 9b       	add    eax,0x9b38b7ec
1008d312:	50                   	push   eax
1008d313:	53                   	push   ebx
1008d314:	8b ce                	mov    ecx,esi
1008d316:	e8 65 fb ff ff       	call   0x1008ce80
1008d31b:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
1008d31e:	5b                   	pop    ebx
1008d31f:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1008d325:	74 61                	je     0x1008d388
1008d327:	eb 41                	jmp    0x1008d36a
1008d329:	8b 8e 8c 00 00 00    	mov    ecx,DWORD PTR [esi+0x8c]
1008d32f:	83 c6 2c             	add    esi,0x2c
1008d332:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1008d338:	c7 46 60 ff 00 00 00 	mov    DWORD PTR [esi+0x60],0xff
1008d33f:	74 1e                	je     0x1008d35f
1008d341:	8b 7e 5c             	mov    edi,DWORD PTR [esi+0x5c]
1008d344:	8b c1                	mov    eax,ecx
1008d346:	2b c7                	sub    eax,edi
1008d348:	f7 d8                	neg    eax
1008d34a:	1b c0                	sbb    eax,eax
1008d34c:	25 ec ef 37 00       	and    eax,0x37efec
1008d351:	05 00 c8 00 5a       	add    eax,0x5a00c800
1008d356:	50                   	push   eax
1008d357:	51                   	push   ecx
1008d358:	8b ce                	mov    ecx,esi
1008d35a:	e8 21 fb ff ff       	call   0x1008ce80
1008d35f:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
1008d362:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1008d368:	74 1e                	je     0x1008d388
1008d36a:	8b 7e 5c             	mov    edi,DWORD PTR [esi+0x5c]
1008d36d:	8b c1                	mov    eax,ecx
1008d36f:	2b c7                	sub    eax,edi
1008d371:	f7 d8                	neg    eax
1008d373:	1b c0                	sbb    eax,eax
1008d375:	25 ec ef 37 41       	and    eax,0x4137efec
1008d37a:	05 00 c8 00 5a       	add    eax,0x5a00c800
1008d37f:	50                   	push   eax
1008d380:	51                   	push   ecx
1008d381:	8b ce                	mov    ecx,esi
1008d383:	e8 f8 fa ff ff       	call   0x1008ce80
1008d388:	5f                   	pop    edi
1008d389:	5e                   	pop    esi
1008d38a:	83 c4 10             	add    esp,0x10
1008d38d:	c3                   	ret
1008d38e:	90                   	nop
1008d38f:	90                   	nop
1008d390:	56                   	push   esi
1008d391:	8b f1                	mov    esi,ecx
1008d393:	e8 c8 40 fc ff       	call   0x10051460
1008d398:	8b 86 44 03 00 00    	mov    eax,DWORD PTR [esi+0x344]
1008d39e:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1008d3a4:	50                   	push   eax
1008d3a5:	e8 56 1e fe ff       	call   0x1006f200
1008d3aa:	8b 86 40 03 00 00    	mov    eax,DWORD PTR [esi+0x340]
1008d3b0:	8b 8e 88 00 00 00    	mov    ecx,DWORD PTR [esi+0x88]
1008d3b6:	85 c0                	test   eax,eax
1008d3b8:	5e                   	pop    esi
1008d3b9:	75 21                	jne    0x1008d3dc
1008d3bb:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1008d3c1:	74 19                	je     0x1008d3dc
1008d3c3:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1008d3c9:	8b 82 c8 81 01 00    	mov    eax,DWORD PTR [edx+0x181c8]
1008d3cf:	85 c0                	test   eax,eax
1008d3d1:	74 09                	je     0x1008d3dc
1008d3d3:	51                   	push   ecx
1008d3d4:	8d 48 5c             	lea    ecx,[eax+0x5c]
1008d3d7:	e8 34 a2 f8 ff       	call   0x10017610
1008d3dc:	c3                   	ret
1008d3dd:	90                   	nop
1008d3de:	90                   	nop
1008d3df:	90                   	nop

*/
void InventoryPie::ValidateInvSlot() {
    // TODO: Implement ValidateInvSlot
}

// 0x1008d3e0: InventoryPie::ValidateInvSlot
/*
1008d3e0:	a1 6c 4c 12 10       	mov    eax,ds:0x10124c6c
1008d3e5:	8b 15 68 4c 12 10    	mov    edx,DWORD PTR ds:0x10124c68
1008d3eb:	53                   	push   ebx
1008d3ec:	56                   	push   esi
1008d3ed:	57                   	push   edi
1008d3ee:	8d 71 2c             	lea    esi,[ecx+0x2c]
1008d3f1:	50                   	push   eax
1008d3f2:	52                   	push   edx
1008d3f3:	8b ce                	mov    ecx,esi
1008d3f5:	e8 d6 f4 ff ff       	call   0x1008c8d0
1008d3fa:	8b 5e 5c             	mov    ebx,DWORD PTR [esi+0x5c]
1008d3fd:	8b f8                	mov    edi,eax
1008d3ff:	85 ff                	test   edi,edi
1008d401:	7c 05                	jl     0x1008d408
1008d403:	83 ff 0b             	cmp    edi,0xb
1008d406:	7c 41                	jl     0x1008d449
1008d408:	81 ff ff 00 00 00    	cmp    edi,0xff
1008d40e:	74 39                	je     0x1008d449
1008d410:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008d416:	68 dc 01 00 00       	push   0x1dc
1008d41b:	68 30 e1 0d 10       	push   0x100de130
1008d420:	8b 01                	mov    eax,DWORD PTR [ecx]
1008d422:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1008d428:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008d42d:	57                   	push   edi
1008d42e:	68 dc e0 0d 10       	push   0x100de0dc
1008d433:	68 7c 5d 0c 10       	push   0x100c5d7c
1008d438:	8b 08                	mov    ecx,DWORD PTR [eax]
1008d43a:	50                   	push   eax
1008d43b:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008d441:	83 c4 10             	add    esp,0x10
1008d444:	bf ff 00 00 00       	mov    edi,0xff
1008d449:	81 fb ff 00 00 00    	cmp    ebx,0xff
1008d44f:	89 7e 5c             	mov    DWORD PTR [esi+0x5c],edi
1008d452:	74 29                	je     0x1008d47d
1008d454:	3b df                	cmp    ebx,edi
1008d456:	75 07                	jne    0x1008d45f
1008d458:	b8 00 c8 00 5a       	mov    eax,0x5a00c800
1008d45d:	eb 15                	jmp    0x1008d474
1008d45f:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
1008d462:	8b c3                	mov    eax,ebx
1008d464:	2b c1                	sub    eax,ecx
1008d466:	f7 d8                	neg    eax
1008d468:	1b c0                	sbb    eax,eax
1008d46a:	25 00 00 00 bf       	and    eax,0xbf000000
1008d46f:	05 ec b7 38 9b       	add    eax,0x9b38b7ec
1008d474:	50                   	push   eax
1008d475:	53                   	push   ebx
1008d476:	8b ce                	mov    ecx,esi
1008d478:	e8 03 fa ff ff       	call   0x1008ce80
1008d47d:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
1008d480:	3d ff 00 00 00       	cmp    eax,0xff
1008d485:	74 0d                	je     0x1008d494
1008d487:	68 00 c8 00 5a       	push   0x5a00c800
1008d48c:	50                   	push   eax
1008d48d:	8b ce                	mov    ecx,esi
1008d48f:	e8 ec f9 ff ff       	call   0x1008ce80
1008d494:	5f                   	pop    edi
1008d495:	5e                   	pop    esi
1008d496:	5b                   	pop    ebx
1008d497:	c3                   	ret
1008d498:	90                   	nop
1008d499:	90                   	nop
1008d49a:	90                   	nop
1008d49b:	90                   	nop
1008d49c:	90                   	nop
1008d49d:	90                   	nop
1008d49e:	90                   	nop
1008d49f:	90                   	nop

*/
void InventoryPie::ValidateInvSlot() {
    // TODO: Implement ValidateInvSlot
}

// 0x1008d4a0: InventoryPie::ValidateInvSlot
/*
1008d4a0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1008d4a4:	53                   	push   ebx
1008d4a5:	56                   	push   esi
1008d4a6:	8d 71 2c             	lea    esi,[ecx+0x2c]
1008d4a9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008d4ad:	57                   	push   edi
1008d4ae:	50                   	push   eax
1008d4af:	51                   	push   ecx
1008d4b0:	8b ce                	mov    ecx,esi
1008d4b2:	e8 19 f4 ff ff       	call   0x1008c8d0
1008d4b7:	8b 5e 5c             	mov    ebx,DWORD PTR [esi+0x5c]
1008d4ba:	8b f8                	mov    edi,eax
1008d4bc:	85 ff                	test   edi,edi
1008d4be:	7c 05                	jl     0x1008d4c5
1008d4c0:	83 ff 0b             	cmp    edi,0xb
1008d4c3:	7c 41                	jl     0x1008d506
1008d4c5:	81 ff ff 00 00 00    	cmp    edi,0xff
1008d4cb:	74 39                	je     0x1008d506
1008d4cd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008d4d3:	68 dc 01 00 00       	push   0x1dc
1008d4d8:	68 30 e1 0d 10       	push   0x100de130
1008d4dd:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d4df:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1008d4e5:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008d4ea:	57                   	push   edi
1008d4eb:	68 dc e0 0d 10       	push   0x100de0dc
1008d4f0:	68 7c 5d 0c 10       	push   0x100c5d7c
1008d4f5:	8b 08                	mov    ecx,DWORD PTR [eax]
1008d4f7:	50                   	push   eax
1008d4f8:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008d4fe:	83 c4 10             	add    esp,0x10
1008d501:	bf ff 00 00 00       	mov    edi,0xff
1008d506:	81 fb ff 00 00 00    	cmp    ebx,0xff
1008d50c:	89 7e 5c             	mov    DWORD PTR [esi+0x5c],edi
1008d50f:	74 29                	je     0x1008d53a
1008d511:	3b df                	cmp    ebx,edi
1008d513:	75 07                	jne    0x1008d51c
1008d515:	b8 00 c8 00 5a       	mov    eax,0x5a00c800
1008d51a:	eb 15                	jmp    0x1008d531
1008d51c:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
1008d51f:	8b c3                	mov    eax,ebx
1008d521:	2b c1                	sub    eax,ecx
1008d523:	f7 d8                	neg    eax
1008d525:	1b c0                	sbb    eax,eax
1008d527:	25 00 00 00 bf       	and    eax,0xbf000000
1008d52c:	05 ec b7 38 9b       	add    eax,0x9b38b7ec
1008d531:	50                   	push   eax
1008d532:	53                   	push   ebx
1008d533:	8b ce                	mov    ecx,esi
1008d535:	e8 46 f9 ff ff       	call   0x1008ce80
1008d53a:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
1008d53d:	3d ff 00 00 00       	cmp    eax,0xff
1008d542:	74 0d                	je     0x1008d551
1008d544:	68 00 c8 00 5a       	push   0x5a00c800
1008d549:	50                   	push   eax
1008d54a:	8b ce                	mov    ecx,esi
1008d54c:	e8 2f f9 ff ff       	call   0x1008ce80
1008d551:	5f                   	pop    edi
1008d552:	5e                   	pop    esi
1008d553:	5b                   	pop    ebx
1008d554:	c2 0c 00             	ret    0xc
1008d557:	90                   	nop
1008d558:	90                   	nop
1008d559:	90                   	nop
1008d55a:	90                   	nop
1008d55b:	90                   	nop
1008d55c:	90                   	nop
1008d55d:	90                   	nop
1008d55e:	90                   	nop
1008d55f:	90                   	nop
1008d560:	56                   	push   esi
1008d561:	8b f1                	mov    esi,ecx
1008d563:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d569:	57                   	push   edi
1008d56a:	6a 01                	push   0x1
1008d56c:	8b 01                	mov    eax,DWORD PTR [ecx]
1008d56e:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1008d571:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d577:	6a 00                	push   0x0
1008d579:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d57b:	ff 52 10             	call   DWORD PTR [edx+0x10]
1008d57e:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d584:	6a 03                	push   0x3
1008d586:	8b 01                	mov    eax,DWORD PTR [ecx]
1008d588:	ff 50 14             	call   DWORD PTR [eax+0x14]
1008d58b:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d591:	6a 02                	push   0x2
1008d593:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d595:	ff 52 18             	call   DWORD PTR [edx+0x18]
1008d598:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d59e:	6a 00                	push   0x0
1008d5a0:	8b 01                	mov    eax,DWORD PTR [ecx]
1008d5a2:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
1008d5a5:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d5ab:	6a 00                	push   0x0
1008d5ad:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d5af:	ff 52 20             	call   DWORD PTR [edx+0x20]
1008d5b2:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d5b8:	6a 01                	push   0x1
1008d5ba:	8b 01                	mov    eax,DWORD PTR [ecx]
1008d5bc:	ff 50 24             	call   DWORD PTR [eax+0x24]
1008d5bf:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d5c5:	6a 00                	push   0x0
1008d5c7:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d5c9:	ff 52 28             	call   DWORD PTR [edx+0x28]
1008d5cc:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d5d2:	6a 00                	push   0x0
1008d5d4:	8b 01                	mov    eax,DWORD PTR [ecx]
1008d5d6:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008d5d9:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d5df:	8d 86 98 00 00 00    	lea    eax,[esi+0x98]
1008d5e5:	6a 0c                	push   0xc
1008d5e7:	50                   	push   eax
1008d5e8:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d5ea:	ff 52 50             	call   DWORD PTR [edx+0x50]
1008d5ed:	8b 86 90 00 00 00    	mov    eax,DWORD PTR [esi+0x90]
1008d5f3:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d5f9:	50                   	push   eax
1008d5fa:	8b 86 94 00 00 00    	mov    eax,DWORD PTR [esi+0x94]
1008d600:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d602:	50                   	push   eax
1008d603:	ff 52 30             	call   DWORD PTR [edx+0x30]
1008d606:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008d60c:	8d 86 d8 02 00 00    	lea    eax,[esi+0x2d8]
1008d612:	6a 02                	push   0x2
1008d614:	50                   	push   eax
1008d615:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d617:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1008d61a:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1008d620:	8b b9 c8 81 01 00    	mov    edi,DWORD PTR [ecx+0x181c8]
1008d626:	85 ff                	test   edi,edi
1008d628:	74 75                	je     0x1008d69f
1008d62a:	53                   	push   ebx
1008d62b:	55                   	push   ebp
1008d62c:	33 db                	xor    ebx,ebx
1008d62e:	8d 6e 30             	lea    ebp,[esi+0x30]
1008d631:	8b 4c 3b 5c          	mov    ecx,DWORD PTR [ebx+edi*1+0x5c]
1008d635:	85 c9                	test   ecx,ecx
1008d637:	74 09                	je     0x1008d642
1008d639:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d63b:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1008d63e:	84 c0                	test   al,al
1008d640:	74 50                	je     0x1008d692
1008d642:	8b 4c 3b 5c          	mov    ecx,DWORD PTR [ebx+edi*1+0x5c]
1008d646:	85 c9                	test   ecx,ecx
1008d648:	74 48                	je     0x1008d692
1008d64a:	8b 01                	mov    eax,DWORD PTR [ecx]
1008d64c:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1008d64f:	84 c0                	test   al,al
1008d651:	74 3f                	je     0x1008d692
1008d653:	8b 44 3b 5c          	mov    eax,DWORD PTR [ebx+edi*1+0x5c]
1008d657:	85 c0                	test   eax,eax
1008d659:	74 37                	je     0x1008d692
1008d65b:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1008d65e:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1008d661:	8b 75 04             	mov    esi,DWORD PTR [ebp+0x4]
1008d664:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1008d66a:	74 11                	je     0x1008d67d
1008d66c:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
1008d66f:	85 c0                	test   eax,eax
1008d671:	74 0f                	je     0x1008d682
1008d673:	83 f8 01             	cmp    eax,0x1
1008d676:	75 05                	jne    0x1008d67d
1008d678:	83 c1 40             	add    ecx,0x40
1008d67b:	eb 05                	jmp    0x1008d682
1008d67d:	b9 ff 00 00 00       	mov    ecx,0xff
1008d682:	6a ff                	push   0xffffffff
1008d684:	56                   	push   esi
1008d685:	52                   	push   edx
1008d686:	51                   	push   ecx
1008d687:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008d68d:	e8 3e e6 fb ff       	call   0x1004bcd0
1008d692:	83 c3 04             	add    ebx,0x4
1008d695:	83 c5 08             	add    ebp,0x8
1008d698:	83 fb 2c             	cmp    ebx,0x2c
1008d69b:	7c 94                	jl     0x1008d631
1008d69d:	5d                   	pop    ebp
1008d69e:	5b                   	pop    ebx
1008d69f:	5f                   	pop    edi
1008d6a0:	5e                   	pop    esi
1008d6a1:	c2 08 00             	ret    0x8
1008d6a4:	90                   	nop
1008d6a5:	90                   	nop
1008d6a6:	90                   	nop
1008d6a7:	90                   	nop
1008d6a8:	90                   	nop
1008d6a9:	90                   	nop
1008d6aa:	90                   	nop
1008d6ab:	90                   	nop
1008d6ac:	90                   	nop
1008d6ad:	90                   	nop
1008d6ae:	90                   	nop
1008d6af:	90                   	nop
1008d6b0:	53                   	push   ebx
1008d6b1:	56                   	push   esi
1008d6b2:	33 db                	xor    ebx,ebx
1008d6b4:	57                   	push   edi
1008d6b5:	8b 3d 30 80 0b 10    	mov    edi,DWORD PTR ds:0x100b8030
1008d6bb:	53                   	push   ebx
1008d6bc:	8b f1                	mov    esi,ecx
1008d6be:	53                   	push   ebx
1008d6bf:	6a 01                	push   0x1
1008d6c1:	53                   	push   ebx
1008d6c2:	89 5e 14             	mov    DWORD PTR [esi+0x14],ebx
1008d6c5:	89 9e a4 00 00 00    	mov    DWORD PTR [esi+0xa4],ebx
1008d6cb:	88 5e 24             	mov    BYTE PTR [esi+0x24],bl
1008d6ce:	ff d7                	call   edi
1008d6d0:	53                   	push   ebx
1008d6d1:	53                   	push   ebx
1008d6d2:	6a 01                	push   0x1
1008d6d4:	53                   	push   ebx
1008d6d5:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1008d6d8:	ff d7                	call   edi
1008d6da:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1008d6dd:	c7 46 10 10 27 00 00 	mov    DWORD PTR [esi+0x10],0x2710
1008d6e4:	89 5e 0c             	mov    DWORD PTR [esi+0xc],ebx
1008d6e7:	89 1e                	mov    DWORD PTR [esi],ebx
1008d6e9:	89 9e a8 00 00 00    	mov    DWORD PTR [esi+0xa8],ebx
1008d6ef:	89 9e ac 00 00 00    	mov    DWORD PTR [esi+0xac],ebx
1008d6f5:	8b c6                	mov    eax,esi
1008d6f7:	5f                   	pop    edi
1008d6f8:	5e                   	pop    esi
1008d6f9:	5b                   	pop    ebx
1008d6fa:	c3                   	ret
1008d6fb:	90                   	nop
1008d6fc:	90                   	nop
1008d6fd:	90                   	nop
1008d6fe:	90                   	nop
1008d6ff:	90                   	nop
1008d700:	53                   	push   ebx
1008d701:	56                   	push   esi
1008d702:	8b f1                	mov    esi,ecx
1008d704:	33 db                	xor    ebx,ebx
1008d706:	57                   	push   edi
1008d707:	83 7e 14 01          	cmp    DWORD PTR [esi+0x14],0x1
1008d70b:	75 52                	jne    0x1008d75f
1008d70d:	8b 86 a4 00 00 00    	mov    eax,DWORD PTR [esi+0xa4]
1008d713:	89 5e 14             	mov    DWORD PTR [esi+0x14],ebx
1008d716:	3b c3                	cmp    eax,ebx
1008d718:	74 15                	je     0x1008d72f
1008d71a:	50                   	push   eax
1008d71b:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008d720:	ff 90 f0 01 00 00    	call   DWORD PTR [eax+0x1f0]
1008d726:	83 c4 04             	add    esp,0x4
1008d729:	89 9e a4 00 00 00    	mov    DWORD PTR [esi+0xa4],ebx
1008d72f:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1008d735:	8b 86 a8 00 00 00    	mov    eax,DWORD PTR [esi+0xa8]
1008d73b:	50                   	push   eax
1008d73c:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d73e:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1008d741:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1008d747:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
1008d74d:	50                   	push   eax
1008d74e:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d750:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1008d753:	89 9e a8 00 00 00    	mov    DWORD PTR [esi+0xa8],ebx
1008d759:	89 9e ac 00 00 00    	mov    DWORD PTR [esi+0xac],ebx
1008d75f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008d762:	8b 3d 60 80 0b 10    	mov    edi,DWORD PTR ds:0x100b8060
1008d768:	51                   	push   ecx
1008d769:	ff d7                	call   edi
1008d76b:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1008d76e:	52                   	push   edx
1008d76f:	ff d7                	call   edi
1008d771:	8b 36                	mov    esi,DWORD PTR [esi]
1008d773:	3b f3                	cmp    esi,ebx
1008d775:	74 03                	je     0x1008d77a
1008d777:	56                   	push   esi
1008d778:	ff d7                	call   edi
1008d77a:	5f                   	pop    edi
1008d77b:	5e                   	pop    esi
1008d77c:	5b                   	pop    ebx
1008d77d:	c3                   	ret
1008d77e:	90                   	nop
1008d77f:	90                   	nop
1008d780:	56                   	push   esi
1008d781:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1008d785:	57                   	push   edi
1008d786:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1008d789:	c7 46 14 03 00 00 00 	mov    DWORD PTR [esi+0x14],0x3
1008d790:	50                   	push   eax
1008d791:	ff 15 3c 80 0b 10    	call   DWORD PTR ds:0x100b803c
1008d797:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008d79a:	8b 3d 68 80 0b 10    	mov    edi,DWORD PTR ds:0x100b8068
1008d7a0:	6a 00                	push   0x0
1008d7a2:	51                   	push   ecx
1008d7a3:	ff d7                	call   edi
1008d7a5:	3d 02 01 00 00       	cmp    eax,0x102
1008d7aa:	75 29                	jne    0x1008d7d5
1008d7ac:	53                   	push   ebx
1008d7ad:	8b 1d 6c 80 0b 10    	mov    ebx,DWORD PTR ds:0x100b806c
1008d7b3:	8b ce                	mov    ecx,esi
1008d7b5:	e8 26 00 00 00       	call   0x1008d7e0
1008d7ba:	6a 64                	push   0x64
1008d7bc:	ff d3                	call   ebx
1008d7be:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d7c1:	6a 00                	push   0x0
1008d7c3:	52                   	push   edx
1008d7c4:	ff d7                	call   edi
1008d7c6:	3d 02 01 00 00       	cmp    eax,0x102
1008d7cb:	74 e6                	je     0x1008d7b3
1008d7cd:	5b                   	pop    ebx
1008d7ce:	5f                   	pop    edi
1008d7cf:	33 c0                	xor    eax,eax
1008d7d1:	5e                   	pop    esi
1008d7d2:	c2 04 00             	ret    0x4
1008d7d5:	5f                   	pop    edi
1008d7d6:	33 c0                	xor    eax,eax
1008d7d8:	5e                   	pop    esi
1008d7d9:	c2 04 00             	ret    0x4
1008d7dc:	90                   	nop
1008d7dd:	90                   	nop
1008d7de:	90                   	nop
1008d7df:	90                   	nop
1008d7e0:	56                   	push   esi
1008d7e1:	8b f1                	mov    esi,ecx
1008d7e3:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1008d7e6:	83 f8 03             	cmp    eax,0x3
1008d7e9:	74 09                	je     0x1008d7f4
1008d7eb:	83 f8 02             	cmp    eax,0x2
1008d7ee:	74 04                	je     0x1008d7f4
1008d7f0:	33 c0                	xor    eax,eax
1008d7f2:	5e                   	pop    esi
1008d7f3:	c3                   	ret
1008d7f4:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008d7f9:	6a 00                	push   0x0
1008d7fb:	6a 03                	push   0x3
1008d7fd:	6a 00                	push   0x0
1008d7ff:	ff 50 40             	call   DWORD PTR [eax+0x40]
1008d802:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008d808:	83 c4 0c             	add    esp,0xc
1008d80b:	ff 51 44             	call   DWORD PTR [ecx+0x44]
1008d80e:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
1008d814:	ff 92 e0 01 00 00    	call   DWORD PTR [edx+0x1e0]
1008d81a:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008d81f:	ff 50 50             	call   DWORD PTR [eax+0x50]
1008d822:	8b 8e ac 00 00 00    	mov    ecx,DWORD PTR [esi+0xac]
1008d828:	8b 96 a8 00 00 00    	mov    edx,DWORD PTR [esi+0xa8]
1008d82e:	6a 00                	push   0x0
1008d830:	51                   	push   ecx
1008d831:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008d837:	8d 46 24             	lea    eax,[esi+0x24]
1008d83a:	52                   	push   edx
1008d83b:	50                   	push   eax
1008d83c:	e8 6f e7 fb ff       	call   0x1004bfb0
1008d841:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008d847:	ff 51 54             	call   DWORD PTR [ecx+0x54]
1008d84a:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
1008d850:	6a 01                	push   0x1
1008d852:	ff 52 68             	call   DWORD PTR [edx+0x68]
1008d855:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008d85a:	6a 00                	push   0x0
1008d85c:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1008d85f:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
1008d862:	83 c4 08             	add    esp,0x8
1008d865:	40                   	inc    eax
1008d866:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1008d869:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008d86f:	8b 11                	mov    edx,DWORD PTR [ecx]
1008d871:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1008d877:	d9 c0                	fld    st(0)
1008d879:	d8 66 1c             	fsub   DWORD PTR [esi+0x1c]
1008d87c:	b8 01 00 00 00       	mov    eax,0x1
1008d881:	d9 5e 20             	fstp   DWORD PTR [esi+0x20]
1008d884:	d9 5e 1c             	fstp   DWORD PTR [esi+0x1c]
1008d887:	5e                   	pop    esi
1008d888:	c3                   	ret
1008d889:	90                   	nop
1008d88a:	90                   	nop
1008d88b:	90                   	nop
1008d88c:	90                   	nop
1008d88d:	90                   	nop
1008d88e:	90                   	nop
1008d88f:	90                   	nop

*/
void InventoryPie::ValidateInvSlot() {
    // TODO: Implement ValidateInvSlot
}

