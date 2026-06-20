#include "TiledBitmap.h"

// 0x1006dd29: TiledBitmap::Load
/*
1006dd29:	8b bc 24 1c 02 00 00 	mov    edi,DWORD PTR [esp+0x21c]
1006dd30:	8b ac 24 20 02 00 00 	mov    ebp,DWORD PTR [esp+0x220]
1006dd37:	8b cf                	mov    ecx,edi
1006dd39:	53                   	push   ebx
1006dd3a:	81 e1 ff 00 00 80    	and    ecx,0x800000ff
1006dd40:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
1006dd43:	89 6e 08             	mov    DWORD PTR [esi+0x8],ebp
1006dd46:	79 08                	jns    0x1006dd50
1006dd48:	49                   	dec    ecx
1006dd49:	81 c9 00 ff ff ff    	or     ecx,0xffffff00
1006dd4f:	41                   	inc    ecx
1006dd50:	8b c7                	mov    eax,edi
1006dd52:	f7 d9                	neg    ecx
1006dd54:	99                   	cdq
1006dd55:	1b c9                	sbb    ecx,ecx
1006dd57:	81 e2 ff 00 00 00    	and    edx,0xff
1006dd5d:	03 c2                	add    eax,edx
1006dd5f:	f7 d9                	neg    ecx
1006dd61:	c1 f8 08             	sar    eax,0x8
1006dd64:	03 c8                	add    ecx,eax
1006dd66:	89 4e 14             	mov    DWORD PTR [esi+0x14],ecx
1006dd69:	8b cd                	mov    ecx,ebp
1006dd6b:	81 e1 ff 00 00 80    	and    ecx,0x800000ff
1006dd71:	79 08                	jns    0x1006dd7b
1006dd73:	49                   	dec    ecx
1006dd74:	81 c9 00 ff ff ff    	or     ecx,0xffffff00
1006dd7a:	41                   	inc    ecx
1006dd7b:	8b c5                	mov    eax,ebp
1006dd7d:	f7 d9                	neg    ecx
1006dd7f:	99                   	cdq
1006dd80:	1b c9                	sbb    ecx,ecx
1006dd82:	81 e2 ff 00 00 00    	and    edx,0xff
1006dd88:	03 c2                	add    eax,edx
1006dd8a:	f7 d9                	neg    ecx
1006dd8c:	c1 f8 08             	sar    eax,0x8
1006dd8f:	03 c8                	add    ecx,eax
1006dd91:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
1006dd94:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1006dd97:	8b d9                	mov    ebx,ecx
1006dd99:	8b c8                	mov    ecx,eax
1006dd9b:	c1 e0 08             	shl    eax,0x8
1006dd9e:	0f af cb             	imul   ecx,ebx
1006dda1:	99                   	cdq
1006dda2:	2b c2                	sub    eax,edx
1006dda4:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
1006dda7:	8b d0                	mov    edx,eax
1006dda9:	8b c7                	mov    eax,edi
1006ddab:	d1 fa                	sar    edx,1
1006ddad:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1006ddb1:	99                   	cdq
1006ddb2:	2b c2                	sub    eax,edx
1006ddb4:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006ddb8:	d1 f8                	sar    eax,1
1006ddba:	2b d0                	sub    edx,eax
1006ddbc:	8b c3                	mov    eax,ebx
1006ddbe:	c1 e0 08             	shl    eax,0x8
1006ddc1:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1006ddc4:	5b                   	pop    ebx
1006ddc5:	99                   	cdq
1006ddc6:	2b c2                	sub    eax,edx
1006ddc8:	8b f8                	mov    edi,eax
1006ddca:	8b c5                	mov    eax,ebp
1006ddcc:	99                   	cdq
1006ddcd:	2b c2                	sub    eax,edx
1006ddcf:	d1 ff                	sar    edi,1
1006ddd1:	d1 f8                	sar    eax,1
1006ddd3:	2b f8                	sub    edi,eax
1006ddd5:	85 c9                	test   ecx,ecx
1006ddd7:	89 7e 10             	mov    DWORD PTR [esi+0x10],edi
1006ddda:	0f 84 fd 00 00 00    	je     0x1006dedd
1006dde0:	8d 04 cd 00 00 00 00 	lea    eax,[ecx*8+0x0]
1006dde7:	2b c1                	sub    eax,ecx
1006dde9:	8d 04 40             	lea    eax,[eax+eax*2]
1006ddec:	c1 e0 02             	shl    eax,0x2
1006ddef:	50                   	push   eax
1006ddf0:	e8 34 5b 03 00       	call   0x100a3929
1006ddf5:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1006ddf8:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
1006ddfb:	c1 e1 02             	shl    ecx,0x2
1006ddfe:	51                   	push   ecx
1006ddff:	e8 25 5b 03 00       	call   0x100a3929
1006de04:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1006de07:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
1006de0a:	8b 7e 20             	mov    edi,DWORD PTR [esi+0x20]
1006de0d:	83 c4 08             	add    esp,0x8
1006de10:	8d 04 cd 00 00 00 00 	lea    eax,[ecx*8+0x0]
1006de17:	2b c1                	sub    eax,ecx
1006de19:	8d 0c 40             	lea    ecx,[eax+eax*2]
1006de1c:	33 c0                	xor    eax,eax
1006de1e:	c1 e1 02             	shl    ecx,0x2
1006de21:	8b d1                	mov    edx,ecx
1006de23:	c1 e9 02             	shr    ecx,0x2
1006de26:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1006de28:	8b ca                	mov    ecx,edx
1006de2a:	83 e1 03             	and    ecx,0x3
1006de2d:	f3 aa                	rep stos BYTE PTR es:[edi],al
1006de2f:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1006de32:	8b 7e 24             	mov    edi,DWORD PTR [esi+0x24]
1006de35:	c1 e1 02             	shl    ecx,0x2
1006de38:	8b d1                	mov    edx,ecx
1006de3a:	33 c0                	xor    eax,eax
1006de3c:	c1 e9 02             	shr    ecx,0x2
1006de3f:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1006de41:	8b ca                	mov    ecx,edx
1006de43:	83 e1 03             	and    ecx,0x3
1006de46:	f3 aa                	rep stos BYTE PTR es:[edi],al
1006de48:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1006de4b:	33 ff                	xor    edi,edi
1006de4d:	85 c0                	test   eax,eax
1006de4f:	0f 8e 88 00 00 00    	jle    0x1006dedd
1006de55:	8b 84 24 24 02 00 00 	mov    eax,DWORD PTR [esp+0x224]
1006de5c:	8d 6f 01             	lea    ebp,[edi+0x1]
1006de5f:	55                   	push   ebp
1006de60:	50                   	push   eax
1006de61:	68 5c d2 0d 10       	push   0x100dd25c
1006de66:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
1006de6a:	68 07 02 00 00       	push   0x207
1006de6f:	51                   	push   ecx
1006de70:	e8 d8 61 03 00       	call   0x100a404d
1006de75:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1006de7b:	83 c4 14             	add    esp,0x14
1006de7e:	8d 44 24 10          	lea    eax,[esp+0x10]
1006de82:	c6 84 24 17 02 00 00 	mov    BYTE PTR [esp+0x217],0x0
1006de89:	00 
1006de8a:	8b 11                	mov    edx,DWORD PTR [ecx]
1006de8c:	50                   	push   eax
1006de8d:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1006de90:	8d 04 b8             	lea    eax,[eax+edi*4]
1006de93:	50                   	push   eax
1006de94:	ff 52 08             	call   DWORD PTR [edx+0x8]
1006de97:	85 c0                	test   eax,eax
1006de99:	74 35                	je     0x1006ded0
1006de9b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006dea1:	6a 5b                	push   0x5b
1006dea3:	68 24 d2 0d 10       	push   0x100dd224
1006dea8:	8b 11                	mov    edx,DWORD PTR [ecx]
1006deaa:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1006deb0:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006deb5:	8d 54 24 10          	lea    edx,[esp+0x10]
1006deb9:	52                   	push   edx
1006deba:	68 f4 d1 0d 10       	push   0x100dd1f4
1006debf:	8b 08                	mov    ecx,DWORD PTR [eax]
1006dec1:	68 7c 5d 0c 10       	push   0x100c5d7c
1006dec6:	50                   	push   eax
1006dec7:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006decd:	83 c4 10             	add    esp,0x10
1006ded0:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1006ded3:	8b fd                	mov    edi,ebp
1006ded5:	3b f8                	cmp    edi,eax
1006ded7:	0f 8c 78 ff ff ff    	jl     0x1006de55
1006dedd:	5f                   	pop    edi
1006dede:	5e                   	pop    esi
1006dedf:	b8 01 00 00 00       	mov    eax,0x1
1006dee4:	5d                   	pop    ebp
1006dee5:	81 c4 0c 02 00 00    	add    esp,0x20c
1006deeb:	c2 0c 00             	ret    0xc
1006deee:	90                   	nop
1006deef:	90                   	nop
1006def0:	83 ec 38             	sub    esp,0x38
1006def3:	56                   	push   esi
1006def4:	8b f1                	mov    esi,ecx
1006def6:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1006def9:	85 c0                	test   eax,eax
1006defb:	75 09                	jne    0x1006df06
1006defd:	33 c0                	xor    eax,eax
1006deff:	5e                   	pop    esi
1006df00:	83 c4 38             	add    esp,0x38
1006df03:	c2 08 00             	ret    0x8
1006df06:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
1006df0a:	53                   	push   ebx
1006df0b:	55                   	push   ebp
1006df0c:	57                   	push   edi
1006df0d:	8b 08                	mov    ecx,DWORD PTR [eax]
1006df0f:	8b 5e 0c             	mov    ebx,DWORD PTR [esi+0xc]
1006df12:	2b cb                	sub    ecx,ebx
1006df14:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1006df17:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1006df1b:	8b 78 08             	mov    edi,DWORD PTR [eax+0x8]
1006df1e:	89 7c 24 40          	mov    DWORD PTR [esp+0x40],edi
1006df22:	8b 7e 10             	mov    edi,DWORD PTR [esi+0x10]
1006df25:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
1006df28:	2b d7                	sub    edx,edi
1006df2a:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1006df2e:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
1006df32:	8b 38                	mov    edi,DWORD PTR [eax]
1006df34:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
1006df37:	8b 68 08             	mov    ebp,DWORD PTR [eax+0x8]
1006df3a:	89 7c 24 4c          	mov    DWORD PTR [esp+0x4c],edi
1006df3e:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
1006df42:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
1006df45:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
1006df49:	8d 7c 2f ff          	lea    edi,[edi+ebp*1-0x1]
1006df4d:	33 ed                	xor    ebp,ebp
1006df4f:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1006df53:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
1006df57:	89 7c 24 4c          	mov    DWORD PTR [esp+0x4c],edi
1006df5b:	8d 44 18 ff          	lea    eax,[eax+ebx*1-0x1]
1006df5f:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
1006df63:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
1006df67:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
1006df6b:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1006df6f:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
1006df72:	3b c5                	cmp    eax,ebp
1006df74:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1006df78:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
1006df7c:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1006df80:	0f 8e c6 00 00 00    	jle    0x1006e04c
1006df86:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
1006df8a:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1006df8d:	33 db                	xor    ebx,ebx
1006df8f:	85 c0                	test   eax,eax
1006df91:	0f 8e 93 00 00 00    	jle    0x1006e02a
1006df97:	db 44 24 50          	fild   DWORD PTR [esp+0x50]
1006df9b:	8d 04 ed 00 00 00 00 	lea    eax,[ebp*8+0x0]
1006dfa2:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
1006dfa6:	2b c5                	sub    eax,ebp
1006dfa8:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1006dfac:	8d 3c 40             	lea    edi,[eax+eax*2]
1006dfaf:	c1 e7 02             	shl    edi,0x2
1006dfb2:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
1006dfb6:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006dfba:	8b d7                	mov    edx,edi
1006dfbc:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1006dfc0:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
1006dfc3:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1006dfc7:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1006dfcb:	d8 05 5c 8b 0b 10    	fadd   DWORD PTR ds:0x100b8b5c
1006dfd1:	03 d1                	add    edx,ecx
1006dfd3:	8d 44 24 20          	lea    eax,[esp+0x20]
1006dfd7:	52                   	push   edx
1006dfd8:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
1006dfdc:	d8 25 c0 83 0b 10    	fsub   DWORD PTR ds:0x100b83c0
1006dfe2:	50                   	push   eax
1006dfe3:	8d 54 24 38          	lea    edx,[esp+0x38]
1006dfe7:	51                   	push   ecx
1006dfe8:	8d 44 24 24          	lea    eax,[esp+0x24]
1006dfec:	52                   	push   edx
1006dfed:	50                   	push   eax
1006dfee:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
1006dff2:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
1006dff6:	d8 05 5c 8b 0b 10    	fadd   DWORD PTR ds:0x100b8b5c
1006dffc:	8b ce                	mov    ecx,esi
1006dffe:	d8 25 c0 83 0b 10    	fsub   DWORD PTR ds:0x100b83c0
1006e004:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
1006e008:	e8 63 01 00 00       	call   0x1006e170
1006e00d:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
1006e011:	43                   	inc    ebx
1006e012:	05 00 01 00 00       	add    eax,0x100
1006e017:	45                   	inc    ebp
1006e018:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1006e01c:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1006e01f:	83 c7 54             	add    edi,0x54
1006e022:	3b d8                	cmp    ebx,eax
1006e024:	7c 8c                	jl     0x1006dfb2
1006e026:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
1006e02a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1006e02e:	8b 7c 24 50          	mov    edi,DWORD PTR [esp+0x50]
1006e032:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
1006e035:	40                   	inc    eax
1006e036:	81 c7 00 01 00 00    	add    edi,0x100
1006e03c:	3b c2                	cmp    eax,edx
1006e03e:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1006e042:	89 7c 24 50          	mov    DWORD PTR [esp+0x50],edi
1006e046:	0f 8c 3e ff ff ff    	jl     0x1006df8a
1006e04c:	5f                   	pop    edi
1006e04d:	5d                   	pop    ebp
1006e04e:	5b                   	pop    ebx
1006e04f:	b8 01 00 00 00       	mov    eax,0x1
1006e054:	5e                   	pop    esi
1006e055:	83 c4 38             	add    esp,0x38
1006e058:	c2 08 00             	ret    0x8
1006e05b:	90                   	nop
1006e05c:	90                   	nop
1006e05d:	90                   	nop
1006e05e:	90                   	nop
1006e05f:	90                   	nop
1006e060:	8b 41 20             	mov    eax,DWORD PTR [ecx+0x20]
1006e063:	85 c0                	test   eax,eax
1006e065:	75 05                	jne    0x1006e06c
1006e067:	33 c0                	xor    eax,eax
1006e069:	c2 04 00             	ret    0x4
1006e06c:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1006e070:	8b d0                	mov    edx,eax
1006e072:	88 44 24 04          	mov    BYTE PTR [esp+0x4],al
1006e076:	c1 ea 08             	shr    edx,0x8
1006e079:	88 54 24 05          	mov    BYTE PTR [esp+0x5],dl
1006e07d:	8b d0                	mov    edx,eax
1006e07f:	c1 ea 10             	shr    edx,0x10
1006e082:	c1 e8 18             	shr    eax,0x18
1006e085:	88 54 24 06          	mov    BYTE PTR [esp+0x6],dl
1006e089:	8b 51 1c             	mov    edx,DWORD PTR [ecx+0x1c]
1006e08c:	88 44 24 07          	mov    BYTE PTR [esp+0x7],al
1006e090:	33 c0                	xor    eax,eax
1006e092:	85 d2                	test   edx,edx
1006e094:	7e 1c                	jle    0x1006e0b2
1006e096:	56                   	push   esi
1006e097:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1006e09b:	57                   	push   edi
1006e09c:	33 d2                	xor    edx,edx
1006e09e:	8b 79 20             	mov    edi,DWORD PTR [ecx+0x20]
1006e0a1:	40                   	inc    eax
1006e0a2:	89 74 3a 50          	mov    DWORD PTR [edx+edi*1+0x50],esi
1006e0a6:	8b 79 1c             	mov    edi,DWORD PTR [ecx+0x1c]
1006e0a9:	83 c2 54             	add    edx,0x54
1006e0ac:	3b c7                	cmp    eax,edi
1006e0ae:	7c ee                	jl     0x1006e09e
1006e0b0:	5f                   	pop    edi
1006e0b1:	5e                   	pop    esi
1006e0b2:	b8 01 00 00 00       	mov    eax,0x1
1006e0b7:	c2 04 00             	ret    0x4
1006e0ba:	90                   	nop
1006e0bb:	90                   	nop
1006e0bc:	90                   	nop
1006e0bd:	90                   	nop
1006e0be:	90                   	nop
1006e0bf:	90                   	nop
1006e0c0:	53                   	push   ebx
1006e0c1:	55                   	push   ebp
1006e0c2:	56                   	push   esi
1006e0c3:	8b f1                	mov    esi,ecx
1006e0c5:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e0cb:	57                   	push   edi
1006e0cc:	8b 5e 20             	mov    ebx,DWORD PTR [esi+0x20]
1006e0cf:	8b 6e 24             	mov    ebp,DWORD PTR [esi+0x24]
1006e0d2:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e0d4:	6a 02                	push   0x2
1006e0d6:	ff 50 18             	call   DWORD PTR [eax+0x18]
1006e0d9:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e0df:	6a 01                	push   0x1
1006e0e1:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e0e3:	ff 52 0c             	call   DWORD PTR [edx+0xc]
1006e0e6:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e0ec:	6a 00                	push   0x0
1006e0ee:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e0f0:	ff 50 20             	call   DWORD PTR [eax+0x20]
1006e0f3:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e0f9:	6a 01                	push   0x1
1006e0fb:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e0fd:	ff 52 24             	call   DWORD PTR [edx+0x24]
1006e100:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e106:	6a 00                	push   0x0
1006e108:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e10a:	ff 50 28             	call   DWORD PTR [eax+0x28]
1006e10d:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e113:	6a 03                	push   0x3
1006e115:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e117:	ff 52 10             	call   DWORD PTR [edx+0x10]
1006e11a:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e120:	6a 00                	push   0x0
1006e122:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e124:	ff 50 14             	call   DWORD PTR [eax+0x14]
1006e127:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e12d:	6a 00                	push   0x0
1006e12f:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e131:	ff 52 1c             	call   DWORD PTR [edx+0x1c]
1006e134:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1006e137:	33 ff                	xor    edi,edi
1006e139:	85 c0                	test   eax,eax
1006e13b:	7e 2b                	jle    0x1006e168
1006e13d:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e143:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1006e146:	52                   	push   edx
1006e147:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e149:	ff 50 08             	call   DWORD PTR [eax+0x8]
1006e14c:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e152:	6a 01                	push   0x1
1006e154:	53                   	push   ebx
1006e155:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e157:	ff 50 44             	call   DWORD PTR [eax+0x44]
1006e15a:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1006e15d:	47                   	inc    edi
1006e15e:	83 c3 54             	add    ebx,0x54
1006e161:	83 c5 04             	add    ebp,0x4
1006e164:	3b f8                	cmp    edi,eax
1006e166:	7c d5                	jl     0x1006e13d
1006e168:	5f                   	pop    edi
1006e169:	5e                   	pop    esi
1006e16a:	5d                   	pop    ebp
1006e16b:	5b                   	pop    ebx
1006e16c:	c3                   	ret
1006e16d:	90                   	nop
1006e16e:	90                   	nop
1006e16f:	90                   	nop
1006e170:	83 ec 18             	sub    esp,0x18
1006e173:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1006e177:	56                   	push   esi
1006e178:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1006e17f:	00 
1006e180:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1006e187:	00 
1006e188:	8b 08                	mov    ecx,DWORD PTR [eax]
1006e18a:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1006e18d:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1006e191:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1006e195:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
1006e199:	c7 44 24 14 00 00 80 	mov    DWORD PTR [esp+0x14],0x3f800000
1006e1a0:	3f 
1006e1a1:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1006e1a4:	8b 08                	mov    ecx,DWORD PTR [eax]
1006e1a6:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1006e1aa:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
1006e1ae:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1006e1b2:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1006e1b6:	c7 44 24 10 00 00 80 	mov    DWORD PTR [esp+0x10],0x3f800000
1006e1bd:	3f 
1006e1be:	d8 1a                	fcomp  DWORD PTR [edx]
1006e1c0:	df e0                	fnstsw ax
1006e1c2:	f6 c4 41             	test   ah,0x41
1006e1c5:	0f 84 6c 01 00 00    	je     0x1006e337
1006e1cb:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1006e1cf:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1006e1d3:	d8 19                	fcomp  DWORD PTR [ecx]
1006e1d5:	df e0                	fnstsw ax
1006e1d7:	f6 c4 01             	test   ah,0x1
1006e1da:	0f 85 57 01 00 00    	jne    0x1006e337
1006e1e0:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1006e1e4:	d8 5a 04             	fcomp  DWORD PTR [edx+0x4]
1006e1e7:	df e0                	fnstsw ax
1006e1e9:	f6 c4 41             	test   ah,0x41
1006e1ec:	0f 84 45 01 00 00    	je     0x1006e337
1006e1f2:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1006e1f6:	d8 59 04             	fcomp  DWORD PTR [ecx+0x4]
1006e1f9:	df e0                	fnstsw ax
1006e1fb:	f6 c4 01             	test   ah,0x1
1006e1fe:	0f 85 33 01 00 00    	jne    0x1006e337
1006e204:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1006e208:	d8 19                	fcomp  DWORD PTR [ecx]
1006e20a:	df e0                	fnstsw ax
1006e20c:	f6 c4 01             	test   ah,0x1
1006e20f:	74 16                	je     0x1006e227
1006e211:	d9 01                	fld    DWORD PTR [ecx]
1006e213:	d8 64 24 04          	fsub   DWORD PTR [esp+0x4]
1006e217:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e219:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1006e21d:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1006e223:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1006e227:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1006e22b:	d8 59 04             	fcomp  DWORD PTR [ecx+0x4]
1006e22e:	df e0                	fnstsw ax
1006e230:	f6 c4 01             	test   ah,0x1
1006e233:	74 18                	je     0x1006e24d
1006e235:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
1006e238:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
1006e23c:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1006e23f:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1006e243:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1006e249:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1006e24d:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1006e251:	d8 1a                	fcomp  DWORD PTR [edx]
1006e253:	df e0                	fnstsw ax
1006e255:	f6 c4 41             	test   ah,0x41
1006e258:	75 1c                	jne    0x1006e276
1006e25a:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1006e25e:	d8 22                	fsub   DWORD PTR [edx]
1006e260:	8b 02                	mov    eax,DWORD PTR [edx]
1006e262:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1006e266:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1006e26c:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1006e272:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1006e276:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1006e27a:	d8 5a 04             	fcomp  DWORD PTR [edx+0x4]
1006e27d:	df e0                	fnstsw ax
1006e27f:	f6 c4 41             	test   ah,0x41
1006e282:	75 1e                	jne    0x1006e2a2
1006e284:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1006e288:	d8 62 04             	fsub   DWORD PTR [edx+0x4]
1006e28b:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
1006e28e:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1006e292:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1006e298:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1006e29e:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1006e2a2:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1006e2a6:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006e2aa:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1006e2ae:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e2b4:	53                   	push   ebx
1006e2b5:	57                   	push   edi
1006e2b6:	8b 39                	mov    edi,DWORD PTR [ecx]
1006e2b8:	50                   	push   eax
1006e2b9:	52                   	push   edx
1006e2ba:	56                   	push   esi
1006e2bb:	52                   	push   edx
1006e2bc:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
1006e2c0:	56                   	push   esi
1006e2c1:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
1006e2c5:	52                   	push   edx
1006e2c6:	50                   	push   eax
1006e2c7:	52                   	push   edx
1006e2c8:	56                   	push   esi
1006e2c9:	ff 97 a4 00 00 00    	call   DWORD PTR [edi+0xa4]
1006e2cf:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1006e2d3:	d8 25 e0 83 0b 10    	fsub   DWORD PTR ds:0x100b83e0
1006e2d9:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e2df:	8b 19                	mov    ebx,DWORD PTR [ecx]
1006e2e1:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1006e2e5:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1006e2e9:	d8 25 e0 83 0b 10    	fsub   DWORD PTR ds:0x100b83e0
1006e2ef:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1006e2f3:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1006e2f7:	d8 05 e0 83 0b 10    	fadd   DWORD PTR ds:0x100b83e0
1006e2fd:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1006e301:	50                   	push   eax
1006e302:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1006e306:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1006e30a:	d8 05 e0 83 0b 10    	fadd   DWORD PTR ds:0x100b83e0
1006e310:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
1006e314:	52                   	push   edx
1006e315:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1006e319:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
1006e31d:	57                   	push   edi
1006e31e:	52                   	push   edx
1006e31f:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1006e323:	57                   	push   edi
1006e324:	52                   	push   edx
1006e325:	50                   	push   eax
1006e326:	52                   	push   edx
1006e327:	56                   	push   esi
1006e328:	ff 93 8c 00 00 00    	call   DWORD PTR [ebx+0x8c]
1006e32e:	5f                   	pop    edi
1006e32f:	5b                   	pop    ebx
1006e330:	5e                   	pop    esi
1006e331:	83 c4 18             	add    esp,0x18
1006e334:	c2 14 00             	ret    0x14
1006e337:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e33d:	8b 74 24 30          	mov    esi,DWORD PTR [esp+0x30]
1006e341:	6a 00                	push   0x0
1006e343:	6a 00                	push   0x0
1006e345:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e347:	6a 00                	push   0x0
1006e349:	6a 00                	push   0x0
1006e34b:	56                   	push   esi
1006e34c:	ff 92 ac 00 00 00    	call   DWORD PTR [edx+0xac]
1006e352:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1006e356:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1006e35c:	6a 00                	push   0x0
1006e35e:	6a 00                	push   0x0
1006e360:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e362:	52                   	push   edx
1006e363:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006e367:	52                   	push   edx
1006e368:	56                   	push   esi
1006e369:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
1006e36f:	5e                   	pop    esi
1006e370:	83 c4 18             	add    esp,0x18
1006e373:	c2 14 00             	ret    0x14
1006e376:	90                   	nop
1006e377:	90                   	nop
1006e378:	90                   	nop
1006e379:	90                   	nop
1006e37a:	90                   	nop
1006e37b:	90                   	nop
1006e37c:	90                   	nop
1006e37d:	90                   	nop
1006e37e:	90                   	nop
1006e37f:	90                   	nop
1006e380:	8b c1                	mov    eax,ecx
1006e382:	33 d2                	xor    edx,edx
1006e384:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1006e388:	56                   	push   esi
1006e389:	89 48 18             	mov    DWORD PTR [eax+0x18],ecx
1006e38c:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1006e390:	3b ca                	cmp    ecx,edx
1006e392:	c7 00 4c b9 0b 10    	mov    DWORD PTR [eax],0x100bb94c
1006e398:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1006e39b:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1006e39e:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
1006e3a1:	89 50 1c             	mov    DWORD PTR [eax+0x1c],edx
1006e3a4:	89 50 20             	mov    DWORD PTR [eax+0x20],edx
1006e3a7:	89 50 24             	mov    DWORD PTR [eax+0x24],edx
1006e3aa:	89 50 28             	mov    DWORD PTR [eax+0x28],edx
1006e3ad:	74 24                	je     0x1006e3d3
1006e3af:	8b 71 0c             	mov    esi,DWORD PTR [ecx+0xc]
1006e3b2:	3b f2                	cmp    esi,edx
1006e3b4:	74 11                	je     0x1006e3c7
1006e3b6:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
1006e3b9:	8b 71 0c             	mov    esi,DWORD PTR [ecx+0xc]
1006e3bc:	89 70 14             	mov    DWORD PTR [eax+0x14],esi
1006e3bf:	89 50 10             	mov    DWORD PTR [eax+0x10],edx
1006e3c2:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
1006e3c5:	eb 0c                	jmp    0x1006e3d3
1006e3c7:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
1006e3ca:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1006e3cd:	89 50 14             	mov    DWORD PTR [eax+0x14],edx
1006e3d0:	89 50 10             	mov    DWORD PTR [eax+0x10],edx
1006e3d3:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006e3d7:	5e                   	pop    esi
1006e3d8:	3b ca                	cmp    ecx,edx
1006e3da:	74 17                	je     0x1006e3f3
1006e3dc:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e3de:	89 50 1c             	mov    DWORD PTR [eax+0x1c],edx
1006e3e1:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1006e3e4:	89 50 20             	mov    DWORD PTR [eax+0x20],edx
1006e3e7:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
1006e3ea:	89 50 24             	mov    DWORD PTR [eax+0x24],edx
1006e3ed:	8b 49 0c             	mov    ecx,DWORD PTR [ecx+0xc]
1006e3f0:	89 48 28             	mov    DWORD PTR [eax+0x28],ecx
1006e3f3:	c2 0c 00             	ret    0xc
1006e3f6:	90                   	nop
1006e3f7:	90                   	nop
1006e3f8:	90                   	nop
1006e3f9:	90                   	nop
1006e3fa:	90                   	nop
1006e3fb:	90                   	nop
1006e3fc:	90                   	nop
1006e3fd:	90                   	nop
1006e3fe:	90                   	nop
1006e3ff:	90                   	nop
1006e400:	55                   	push   ebp
1006e401:	56                   	push   esi
1006e402:	57                   	push   edi
1006e403:	8b f9                	mov    edi,ecx
1006e405:	33 ed                	xor    ebp,ebp
1006e407:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1006e40a:	c7 07 4c b9 0b 10    	mov    DWORD PTR [edi],0x100bb94c
1006e410:	3b c5                	cmp    eax,ebp
1006e412:	74 30                	je     0x1006e444
1006e414:	3b 78 08             	cmp    edi,DWORD PTR [eax+0x8]
1006e417:	75 06                	jne    0x1006e41f
1006e419:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
1006e41c:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1006e41f:	3b 78 0c             	cmp    edi,DWORD PTR [eax+0xc]
1006e422:	75 06                	jne    0x1006e42a
1006e424:	8b 57 14             	mov    edx,DWORD PTR [edi+0x14]
1006e427:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1006e42a:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1006e42d:	3b c5                	cmp    eax,ebp
1006e42f:	74 06                	je     0x1006e437
1006e431:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
1006e434:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1006e437:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
1006e43a:	3b c5                	cmp    eax,ebp
1006e43c:	74 06                	je     0x1006e444
1006e43e:	8b 57 14             	mov    edx,DWORD PTR [edi+0x14]
1006e441:	89 50 14             	mov    DWORD PTR [eax+0x14],edx
1006e444:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1006e447:	3b cd                	cmp    ecx,ebp
1006e449:	74 16                	je     0x1006e461
1006e44b:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
1006e44e:	3b cd                	cmp    ecx,ebp
1006e450:	89 69 04             	mov    DWORD PTR [ecx+0x4],ebp
1006e453:	74 06                	je     0x1006e45b
1006e455:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e457:	6a 01                	push   0x1
1006e459:	ff 10                	call   DWORD PTR [eax]
1006e45b:	3b f5                	cmp    esi,ebp
1006e45d:	8b ce                	mov    ecx,esi
1006e45f:	75 ea                	jne    0x1006e44b
1006e461:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006e467:	3b f5                	cmp    esi,ebp
1006e469:	0f 84 99 00 00 00    	je     0x1006e508
1006e46f:	39 7e 2c             	cmp    DWORD PTR [esi+0x2c],edi
1006e472:	75 03                	jne    0x1006e477
1006e474:	89 76 2c             	mov    DWORD PTR [esi+0x2c],esi
1006e477:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1006e47a:	53                   	push   ebx
1006e47b:	3b c7                	cmp    eax,edi
1006e47d:	75 21                	jne    0x1006e4a0
1006e47f:	8b 5e 2c             	mov    ebx,DWORD PTR [esi+0x2c]
1006e482:	3b d8                	cmp    ebx,eax
1006e484:	74 1a                	je     0x1006e4a0
1006e486:	3b dd                	cmp    ebx,ebp
1006e488:	74 07                	je     0x1006e491
1006e48a:	8b 13                	mov    edx,DWORD PTR [ebx]
1006e48c:	8b cb                	mov    ecx,ebx
1006e48e:	ff 52 44             	call   DWORD PTR [edx+0x44]
1006e491:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1006e494:	3b cd                	cmp    ecx,ebp
1006e496:	74 05                	je     0x1006e49d
1006e498:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e49a:	ff 50 48             	call   DWORD PTR [eax+0x48]
1006e49d:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
1006e4a0:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006e4a3:	5b                   	pop    ebx
1006e4a4:	3b cf                	cmp    ecx,edi
1006e4a6:	75 37                	jne    0x1006e4df
1006e4a8:	3b cd                	cmp    ecx,ebp
1006e4aa:	74 33                	je     0x1006e4df
1006e4ac:	39 6e 44             	cmp    DWORD PTR [esi+0x44],ebp
1006e4af:	74 05                	je     0x1006e4b6
1006e4b1:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e4b3:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1006e4b6:	89 6e 44             	mov    DWORD PTR [esi+0x44],ebp
1006e4b9:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006e4bf:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e4c1:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1006e4c7:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006e4cd:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006e4d0:	3b cd                	cmp    ecx,ebp
1006e4d2:	d9 5e 48             	fstp   DWORD PTR [esi+0x48]
1006e4d5:	74 05                	je     0x1006e4dc
1006e4d7:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e4d9:	ff 52 40             	call   DWORD PTR [edx+0x40]
1006e4dc:	89 6e 34             	mov    DWORD PTR [esi+0x34],ebp
1006e4df:	39 7e 38             	cmp    DWORD PTR [esi+0x38],edi
1006e4e2:	75 19                	jne    0x1006e4fd
1006e4e4:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
1006e4e7:	89 6e 38             	mov    DWORD PTR [esi+0x38],ebp
1006e4ea:	3b c5                	cmp    eax,ebp
1006e4ec:	75 03                	jne    0x1006e4f1
1006e4ee:	55                   	push   ebp
1006e4ef:	eb 06                	jmp    0x1006e4f7
1006e4f1:	a1 d4 40 12 10       	mov    eax,ds:0x101240d4
1006e4f6:	50                   	push   eax
1006e4f7:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006e4fd:	39 7e 3c             	cmp    DWORD PTR [esi+0x3c],edi
1006e500:	75 06                	jne    0x1006e508
1006e502:	89 6e 3c             	mov    DWORD PTR [esi+0x3c],ebp
1006e505:	89 6e 40             	mov    DWORD PTR [esi+0x40],ebp
1006e508:	f6 44 24 10 01       	test   BYTE PTR [esp+0x10],0x1
1006e50d:	74 09                	je     0x1006e518
1006e50f:	57                   	push   edi
1006e510:	e8 09 54 03 00       	call   0x100a391e
1006e515:	83 c4 04             	add    esp,0x4
1006e518:	8b c7                	mov    eax,edi
1006e51a:	5f                   	pop    edi
1006e51b:	5e                   	pop    esi
1006e51c:	5d                   	pop    ebp
1006e51d:	c2 04 00             	ret    0x4
1006e520:	55                   	push   ebp
1006e521:	56                   	push   esi
1006e522:	57                   	push   edi
1006e523:	8b f9                	mov    edi,ecx
1006e525:	33 ed                	xor    ebp,ebp
1006e527:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1006e52a:	c7 07 4c b9 0b 10    	mov    DWORD PTR [edi],0x100bb94c
1006e530:	3b c5                	cmp    eax,ebp
1006e532:	74 30                	je     0x1006e564
1006e534:	3b 78 08             	cmp    edi,DWORD PTR [eax+0x8]
1006e537:	75 06                	jne    0x1006e53f
1006e539:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
1006e53c:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1006e53f:	3b 78 0c             	cmp    edi,DWORD PTR [eax+0xc]
1006e542:	75 06                	jne    0x1006e54a
1006e544:	8b 57 14             	mov    edx,DWORD PTR [edi+0x14]
1006e547:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1006e54a:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1006e54d:	3b c5                	cmp    eax,ebp
1006e54f:	74 06                	je     0x1006e557
1006e551:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
1006e554:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1006e557:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
1006e55a:	3b c5                	cmp    eax,ebp
1006e55c:	74 06                	je     0x1006e564
1006e55e:	8b 57 14             	mov    edx,DWORD PTR [edi+0x14]
1006e561:	89 50 14             	mov    DWORD PTR [eax+0x14],edx
1006e564:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1006e567:	3b cd                	cmp    ecx,ebp
1006e569:	74 16                	je     0x1006e581
1006e56b:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
1006e56e:	3b cd                	cmp    ecx,ebp
1006e570:	89 69 04             	mov    DWORD PTR [ecx+0x4],ebp
1006e573:	74 06                	je     0x1006e57b
1006e575:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e577:	6a 01                	push   0x1
1006e579:	ff 10                	call   DWORD PTR [eax]
1006e57b:	3b f5                	cmp    esi,ebp
1006e57d:	8b ce                	mov    ecx,esi
1006e57f:	75 ea                	jne    0x1006e56b
1006e581:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006e587:	3b f5                	cmp    esi,ebp
1006e589:	0f 84 99 00 00 00    	je     0x1006e628
1006e58f:	39 7e 2c             	cmp    DWORD PTR [esi+0x2c],edi
1006e592:	75 03                	jne    0x1006e597
1006e594:	89 76 2c             	mov    DWORD PTR [esi+0x2c],esi
1006e597:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1006e59a:	53                   	push   ebx
1006e59b:	3b c7                	cmp    eax,edi
1006e59d:	75 21                	jne    0x1006e5c0
1006e59f:	8b 5e 2c             	mov    ebx,DWORD PTR [esi+0x2c]
1006e5a2:	3b d8                	cmp    ebx,eax
1006e5a4:	74 1a                	je     0x1006e5c0
1006e5a6:	3b dd                	cmp    ebx,ebp
1006e5a8:	74 07                	je     0x1006e5b1
1006e5aa:	8b 13                	mov    edx,DWORD PTR [ebx]
1006e5ac:	8b cb                	mov    ecx,ebx
1006e5ae:	ff 52 44             	call   DWORD PTR [edx+0x44]
1006e5b1:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1006e5b4:	3b cd                	cmp    ecx,ebp
1006e5b6:	74 05                	je     0x1006e5bd
1006e5b8:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e5ba:	ff 50 48             	call   DWORD PTR [eax+0x48]
1006e5bd:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
1006e5c0:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006e5c3:	5b                   	pop    ebx
1006e5c4:	3b cf                	cmp    ecx,edi
1006e5c6:	75 37                	jne    0x1006e5ff
1006e5c8:	3b cd                	cmp    ecx,ebp
1006e5ca:	74 33                	je     0x1006e5ff
1006e5cc:	39 6e 44             	cmp    DWORD PTR [esi+0x44],ebp
1006e5cf:	74 05                	je     0x1006e5d6
1006e5d1:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e5d3:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1006e5d6:	89 6e 44             	mov    DWORD PTR [esi+0x44],ebp
1006e5d9:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006e5df:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e5e1:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1006e5e7:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006e5ed:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006e5f0:	3b cd                	cmp    ecx,ebp
1006e5f2:	d9 5e 48             	fstp   DWORD PTR [esi+0x48]
1006e5f5:	74 05                	je     0x1006e5fc
1006e5f7:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e5f9:	ff 52 40             	call   DWORD PTR [edx+0x40]
1006e5fc:	89 6e 34             	mov    DWORD PTR [esi+0x34],ebp
1006e5ff:	39 7e 38             	cmp    DWORD PTR [esi+0x38],edi
1006e602:	75 19                	jne    0x1006e61d
1006e604:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
1006e607:	89 6e 38             	mov    DWORD PTR [esi+0x38],ebp
1006e60a:	3b c5                	cmp    eax,ebp
1006e60c:	75 03                	jne    0x1006e611
1006e60e:	55                   	push   ebp
1006e60f:	eb 06                	jmp    0x1006e617
1006e611:	a1 d4 40 12 10       	mov    eax,ds:0x101240d4
1006e616:	50                   	push   eax
1006e617:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006e61d:	39 7e 3c             	cmp    DWORD PTR [esi+0x3c],edi
1006e620:	75 06                	jne    0x1006e628
1006e622:	89 6e 3c             	mov    DWORD PTR [esi+0x3c],ebp
1006e625:	89 6e 40             	mov    DWORD PTR [esi+0x40],ebp
1006e628:	5f                   	pop    edi
1006e629:	5e                   	pop    esi
1006e62a:	5d                   	pop    ebp
1006e62b:	c3                   	ret
1006e62c:	90                   	nop
1006e62d:	90                   	nop
1006e62e:	90                   	nop
1006e62f:	90                   	nop
1006e630:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1006e634:	8d 41 1c             	lea    eax,[ecx+0x1c]
1006e637:	50                   	push   eax
1006e638:	89 10                	mov    DWORD PTR [eax],edx
1006e63a:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1006e63e:	89 51 20             	mov    DWORD PTR [ecx+0x20],edx
1006e641:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e643:	ff 52 54             	call   DWORD PTR [edx+0x54]
1006e646:	c2 08 00             	ret    0x8
1006e649:	90                   	nop
1006e64a:	90                   	nop
1006e64b:	90                   	nop
1006e64c:	90                   	nop
1006e64d:	90                   	nop
1006e64e:	90                   	nop
1006e64f:	90                   	nop
1006e650:	83 ec 10             	sub    esp,0x10
1006e653:	56                   	push   esi
1006e654:	8b f1                	mov    esi,ecx
1006e656:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006e65a:	57                   	push   edi
1006e65b:	8d 46 1c             	lea    eax,[esi+0x1c]
1006e65e:	8b 39                	mov    edi,DWORD PTR [ecx]
1006e660:	8b d0                	mov    edx,eax
1006e662:	50                   	push   eax
1006e663:	89 3a                	mov    DWORD PTR [edx],edi
1006e665:	8b 79 04             	mov    edi,DWORD PTR [ecx+0x4]
1006e668:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
1006e66b:	8b 79 08             	mov    edi,DWORD PTR [ecx+0x8]
1006e66e:	89 7a 08             	mov    DWORD PTR [edx+0x8],edi
1006e671:	8b 49 0c             	mov    ecx,DWORD PTR [ecx+0xc]
1006e674:	89 4a 0c             	mov    DWORD PTR [edx+0xc],ecx
1006e677:	8b 16                	mov    edx,DWORD PTR [esi]
1006e679:	8b ce                	mov    ecx,esi
1006e67b:	ff 52 54             	call   DWORD PTR [edx+0x54]
1006e67e:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1006e681:	85 f6                	test   esi,esi
1006e683:	74 32                	je     0x1006e6b7
1006e685:	8d 46 1c             	lea    eax,[esi+0x1c]
1006e688:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1006e68b:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1006e68f:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1006e692:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
1006e696:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1006e699:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006e69d:	8b ce                	mov    ecx,esi
1006e69f:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
1006e6a2:	8d 44 24 08          	lea    eax,[esp+0x8]
1006e6a6:	50                   	push   eax
1006e6a7:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1006e6ab:	e8 a0 ff ff ff       	call   0x1006e650
1006e6b0:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006e6b3:	85 f6                	test   esi,esi
1006e6b5:	75 ce                	jne    0x1006e685
1006e6b7:	5f                   	pop    edi
1006e6b8:	5e                   	pop    esi
1006e6b9:	83 c4 10             	add    esp,0x10
1006e6bc:	c2 04 00             	ret    0x4
1006e6bf:	90                   	nop
1006e6c0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1006e6c4:	83 c1 1c             	add    ecx,0x1c
1006e6c7:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e6c9:	89 10                	mov    DWORD PTR [eax],edx
1006e6cb:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1006e6ce:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1006e6d1:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
1006e6d4:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1006e6d7:	8b 49 0c             	mov    ecx,DWORD PTR [ecx+0xc]
1006e6da:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006e6dd:	c2 04 00             	ret    0x4
1006e6e0:	83 ec 10             	sub    esp,0x10
1006e6e3:	53                   	push   ebx
1006e6e4:	55                   	push   ebp
1006e6e5:	56                   	push   esi
1006e6e6:	8b f1                	mov    esi,ecx
1006e6e8:	57                   	push   edi
1006e6e9:	8d 46 1c             	lea    eax,[esi+0x1c]
1006e6ec:	8b f8                	mov    edi,eax
1006e6ee:	8b e8                	mov    ebp,eax
1006e6f0:	50                   	push   eax
1006e6f1:	8b 0f                	mov    ecx,DWORD PTR [edi]
1006e6f3:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1006e6f6:	8b 5f 08             	mov    ebx,DWORD PTR [edi+0x8]
1006e6f9:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1006e6fd:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
1006e701:	8b 7f 0c             	mov    edi,DWORD PTR [edi+0xc]
1006e704:	89 4d 00             	mov    DWORD PTR [ebp+0x0],ecx
1006e707:	8b ce                	mov    ecx,esi
1006e709:	89 55 04             	mov    DWORD PTR [ebp+0x4],edx
1006e70c:	8b 16                	mov    edx,DWORD PTR [esi]
1006e70e:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
1006e711:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
1006e714:	ff 52 54             	call   DWORD PTR [edx+0x54]
1006e717:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1006e71a:	85 f6                	test   esi,esi
1006e71c:	74 32                	je     0x1006e750
1006e71e:	8d 46 1c             	lea    eax,[esi+0x1c]
1006e721:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1006e724:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006e728:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1006e72b:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1006e72f:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1006e732:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1006e736:	8b ce                	mov    ecx,esi
1006e738:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
1006e73b:	8d 44 24 10          	lea    eax,[esp+0x10]
1006e73f:	50                   	push   eax
1006e740:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1006e744:	e8 07 ff ff ff       	call   0x1006e650
1006e749:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006e74c:	85 f6                	test   esi,esi
1006e74e:	75 ce                	jne    0x1006e71e
1006e750:	5f                   	pop    edi
1006e751:	5e                   	pop    esi
1006e752:	5d                   	pop    ebp
1006e753:	5b                   	pop    ebx
1006e754:	83 c4 10             	add    esp,0x10
1006e757:	c2 04 00             	ret    0x4
1006e75a:	90                   	nop
1006e75b:	90                   	nop
1006e75c:	90                   	nop
1006e75d:	90                   	nop
1006e75e:	90                   	nop
1006e75f:	90                   	nop
1006e760:	8a 51 18             	mov    dl,BYTE PTR [ecx+0x18]
1006e763:	b8 01 00 00 00       	mov    eax,0x1
1006e768:	84 d0                	test   al,dl
1006e76a:	74 0c                	je     0x1006e778
1006e76c:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1006e76f:	85 c9                	test   ecx,ecx
1006e771:	74 07                	je     0x1006e77a
1006e773:	84 41 18             	test   BYTE PTR [ecx+0x18],al
1006e776:	75 f4                	jne    0x1006e76c
1006e778:	33 c0                	xor    eax,eax
1006e77a:	c3                   	ret
1006e77b:	90                   	nop
1006e77c:	90                   	nop
1006e77d:	90                   	nop
1006e77e:	90                   	nop
1006e77f:	90                   	nop
1006e780:	53                   	push   ebx
1006e781:	56                   	push   esi
1006e782:	57                   	push   edi
1006e783:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1006e787:	8b f1                	mov    esi,ecx
1006e789:	8b c7                	mov    eax,edi
1006e78b:	8b 5e 18             	mov    ebx,DWORD PTR [esi+0x18]
1006e78e:	8b 16                	mov    edx,DWORD PTR [esi]
1006e790:	0b c3                	or     eax,ebx
1006e792:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
1006e796:	8b cb                	mov    ecx,ebx
1006e798:	53                   	push   ebx
1006e799:	f7 d1                	not    ecx
1006e79b:	23 c1                	and    eax,ecx
1006e79d:	57                   	push   edi
1006e79e:	8b ce                	mov    ecx,esi
1006e7a0:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1006e7a3:	ff 52 58             	call   DWORD PTR [edx+0x58]
1006e7a6:	83 e7 01             	and    edi,0x1
1006e7a9:	74 4f                	je     0x1006e7fa
1006e7ab:	f6 c3 01             	test   bl,0x1
1006e7ae:	75 4a                	jne    0x1006e7fa
1006e7b0:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006e7b4:	0f 84 d8 00 00 00    	je     0x1006e892
1006e7ba:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1006e7bd:	85 c9                	test   ecx,ecx
1006e7bf:	74 0d                	je     0x1006e7ce
1006e7c1:	e8 9a ff ff ff       	call   0x1006e760
1006e7c6:	85 c0                	test   eax,eax
1006e7c8:	0f 84 c4 00 00 00    	je     0x1006e892
1006e7ce:	8b 06                	mov    eax,DWORD PTR [esi]
1006e7d0:	8b ce                	mov    ecx,esi
1006e7d2:	ff 50 60             	call   DWORD PTR [eax+0x60]
1006e7d5:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006e7d8:	85 f6                	test   esi,esi
1006e7da:	0f 84 b2 00 00 00    	je     0x1006e892
1006e7e0:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006e7e4:	74 07                	je     0x1006e7ed
1006e7e6:	8b ce                	mov    ecx,esi
1006e7e8:	e8 a3 03 00 00       	call   0x1006eb90
1006e7ed:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006e7f0:	85 f6                	test   esi,esi
1006e7f2:	75 ec                	jne    0x1006e7e0
1006e7f4:	5f                   	pop    edi
1006e7f5:	5e                   	pop    esi
1006e7f6:	5b                   	pop    ebx
1006e7f7:	c2 08 00             	ret    0x8
1006e7fa:	85 ff                	test   edi,edi
1006e7fc:	0f 85 90 00 00 00    	jne    0x1006e892
1006e802:	f6 c3 01             	test   bl,0x1
1006e805:	0f 84 87 00 00 00    	je     0x1006e892
1006e80b:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006e80f:	74 10                	je     0x1006e821
1006e811:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1006e814:	85 c9                	test   ecx,ecx
1006e816:	74 7a                	je     0x1006e892
1006e818:	e8 43 ff ff ff       	call   0x1006e760
1006e81d:	85 c0                	test   eax,eax
1006e81f:	75 71                	jne    0x1006e892
1006e821:	8b 3d d8 40 12 10    	mov    edi,DWORD PTR ds:0x101240d8
1006e827:	39 77 34             	cmp    DWORD PTR [edi+0x34],esi
1006e82a:	75 44                	jne    0x1006e870
1006e82c:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
1006e82f:	85 c9                	test   ecx,ecx
1006e831:	74 3d                	je     0x1006e870
1006e833:	8b 47 44             	mov    eax,DWORD PTR [edi+0x44]
1006e836:	85 c0                	test   eax,eax
1006e838:	74 05                	je     0x1006e83f
1006e83a:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e83c:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1006e83f:	c7 47 44 00 00 00 00 	mov    DWORD PTR [edi+0x44],0x0
1006e846:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006e84c:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e84e:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1006e854:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006e85a:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
1006e85d:	85 c9                	test   ecx,ecx
1006e85f:	d9 5f 48             	fstp   DWORD PTR [edi+0x48]
1006e862:	74 05                	je     0x1006e869
1006e864:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e866:	ff 52 40             	call   DWORD PTR [edx+0x40]
1006e869:	c7 47 34 00 00 00 00 	mov    DWORD PTR [edi+0x34],0x0
1006e870:	8b 06                	mov    eax,DWORD PTR [esi]
1006e872:	8b ce                	mov    ecx,esi
1006e874:	ff 50 64             	call   DWORD PTR [eax+0x64]
1006e877:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006e87a:	85 f6                	test   esi,esi
1006e87c:	74 14                	je     0x1006e892
1006e87e:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006e882:	74 07                	je     0x1006e88b
1006e884:	8b ce                	mov    ecx,esi
1006e886:	e8 35 03 00 00       	call   0x1006ebc0
1006e88b:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006e88e:	85 f6                	test   esi,esi
1006e890:	75 ec                	jne    0x1006e87e
1006e892:	5f                   	pop    edi
1006e893:	5e                   	pop    esi
1006e894:	5b                   	pop    ebx
1006e895:	c2 08 00             	ret    0x8
1006e898:	90                   	nop
1006e899:	90                   	nop
1006e89a:	90                   	nop
1006e89b:	90                   	nop
1006e89c:	90                   	nop
1006e89d:	90                   	nop
1006e89e:	90                   	nop
1006e89f:	90                   	nop
1006e8a0:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
1006e8a3:	c3                   	ret
1006e8a4:	90                   	nop
1006e8a5:	90                   	nop
1006e8a6:	90                   	nop
1006e8a7:	90                   	nop
1006e8a8:	90                   	nop
1006e8a9:	90                   	nop
1006e8aa:	90                   	nop
1006e8ab:	90                   	nop
1006e8ac:	90                   	nop
1006e8ad:	90                   	nop
1006e8ae:	90                   	nop
1006e8af:	90                   	nop
1006e8b0:	53                   	push   ebx
1006e8b1:	55                   	push   ebp
1006e8b2:	56                   	push   esi
1006e8b3:	57                   	push   edi
1006e8b4:	8b f9                	mov    edi,ecx
1006e8b6:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
1006e8b9:	a8 01                	test   al,0x1
1006e8bb:	74 50                	je     0x1006e90d
1006e8bd:	a8 20                	test   al,0x20
1006e8bf:	75 4c                	jne    0x1006e90d
1006e8c1:	8b 4f 1c             	mov    ecx,DWORD PTR [edi+0x1c]
1006e8c4:	8b 6c 24 14          	mov    ebp,DWORD PTR [esp+0x14]
1006e8c8:	3b e9                	cmp    ebp,ecx
1006e8ca:	7c 41                	jl     0x1006e90d
1006e8cc:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
1006e8cf:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
1006e8d3:	3b d8                	cmp    ebx,eax
1006e8d5:	7c 36                	jl     0x1006e90d
1006e8d7:	8b 57 24             	mov    edx,DWORD PTR [edi+0x24]
1006e8da:	03 d1                	add    edx,ecx
1006e8dc:	3b ea                	cmp    ebp,edx
1006e8de:	7d 2d                	jge    0x1006e90d
1006e8e0:	8b 4f 28             	mov    ecx,DWORD PTR [edi+0x28]
1006e8e3:	03 c8                	add    ecx,eax
1006e8e5:	3b d9                	cmp    ebx,ecx
1006e8e7:	7d 24                	jge    0x1006e90d
1006e8e9:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
1006e8ec:	85 f6                	test   esi,esi
1006e8ee:	74 14                	je     0x1006e904
1006e8f0:	53                   	push   ebx
1006e8f1:	55                   	push   ebp
1006e8f2:	8b ce                	mov    ecx,esi
1006e8f4:	e8 b7 ff ff ff       	call   0x1006e8b0
1006e8f9:	85 c0                	test   eax,eax
1006e8fb:	75 12                	jne    0x1006e90f
1006e8fd:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006e900:	85 f6                	test   esi,esi
1006e902:	75 ec                	jne    0x1006e8f0
1006e904:	8b c7                	mov    eax,edi
1006e906:	5f                   	pop    edi
1006e907:	5e                   	pop    esi
1006e908:	5d                   	pop    ebp
1006e909:	5b                   	pop    ebx
1006e90a:	c2 08 00             	ret    0x8
1006e90d:	33 c0                	xor    eax,eax
1006e90f:	5f                   	pop    edi
1006e910:	5e                   	pop    esi
1006e911:	5d                   	pop    ebp
1006e912:	5b                   	pop    ebx
1006e913:	c2 08 00             	ret    0x8
1006e916:	90                   	nop
1006e917:	90                   	nop
1006e918:	90                   	nop
1006e919:	90                   	nop
1006e91a:	90                   	nop
1006e91b:	90                   	nop
1006e91c:	90                   	nop
1006e91d:	90                   	nop
1006e91e:	90                   	nop
1006e91f:	90                   	nop
1006e920:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1006e924:	83 f8 ff             	cmp    eax,0xffffffff
1006e927:	74 14                	je     0x1006e93d
1006e929:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1006e92c:	85 c9                	test   ecx,ecx
1006e92e:	74 0d                	je     0x1006e93d
1006e930:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e932:	56                   	push   esi
1006e933:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1006e937:	56                   	push   esi
1006e938:	50                   	push   eax
1006e939:	ff 52 5c             	call   DWORD PTR [edx+0x5c]
1006e93c:	5e                   	pop    esi
1006e93d:	c2 08 00             	ret    0x8
1006e940:	53                   	push   ebx
1006e941:	55                   	push   ebp
1006e942:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
1006e946:	56                   	push   esi
1006e947:	83 fd ff             	cmp    ebp,0xffffffff
1006e94a:	57                   	push   edi
1006e94b:	8b d9                	mov    ebx,ecx
1006e94d:	74 2a                	je     0x1006e979
1006e94f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1006e952:	85 c0                	test   eax,eax
1006e954:	74 23                	je     0x1006e979
1006e956:	8b 70 0c             	mov    esi,DWORD PTR [eax+0xc]
1006e959:	85 f6                	test   esi,esi
1006e95b:	74 1c                	je     0x1006e979
1006e95d:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
1006e961:	3b f3                	cmp    esi,ebx
1006e963:	74 0d                	je     0x1006e972
1006e965:	8b 06                	mov    eax,DWORD PTR [esi]
1006e967:	57                   	push   edi
1006e968:	55                   	push   ebp
1006e969:	8b ce                	mov    ecx,esi
1006e96b:	ff 50 5c             	call   DWORD PTR [eax+0x5c]
1006e96e:	85 c0                	test   eax,eax
1006e970:	75 07                	jne    0x1006e979
1006e972:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006e975:	85 f6                	test   esi,esi
1006e977:	75 e8                	jne    0x1006e961
1006e979:	5f                   	pop    edi
1006e97a:	5e                   	pop    esi
1006e97b:	5d                   	pop    ebp
1006e97c:	5b                   	pop    ebx
1006e97d:	c2 08 00             	ret    0x8
1006e980:	56                   	push   esi
1006e981:	8b f1                	mov    esi,ecx
1006e983:	57                   	push   edi
1006e984:	6a 01                	push   0x1
1006e986:	8b 7e 18             	mov    edi,DWORD PTR [esi+0x18]
1006e989:	8b 06                	mov    eax,DWORD PTR [esi]
1006e98b:	83 e7 fe             	and    edi,0xfffffffe
1006e98e:	6a 00                	push   0x0
1006e990:	89 7e 18             	mov    DWORD PTR [esi+0x18],edi
1006e993:	ff 50 58             	call   DWORD PTR [eax+0x58]
1006e996:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006e99a:	74 10                	je     0x1006e9ac
1006e99c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1006e99f:	85 c9                	test   ecx,ecx
1006e9a1:	74 7a                	je     0x1006ea1d
1006e9a3:	e8 b8 fd ff ff       	call   0x1006e760
1006e9a8:	85 c0                	test   eax,eax
1006e9aa:	75 71                	jne    0x1006ea1d
1006e9ac:	8b 3d d8 40 12 10    	mov    edi,DWORD PTR ds:0x101240d8
1006e9b2:	39 77 34             	cmp    DWORD PTR [edi+0x34],esi
1006e9b5:	75 44                	jne    0x1006e9fb
1006e9b7:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
1006e9ba:	85 c9                	test   ecx,ecx
1006e9bc:	74 3d                	je     0x1006e9fb
1006e9be:	8b 47 44             	mov    eax,DWORD PTR [edi+0x44]
1006e9c1:	85 c0                	test   eax,eax
1006e9c3:	74 05                	je     0x1006e9ca
1006e9c5:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e9c7:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1006e9ca:	c7 47 44 00 00 00 00 	mov    DWORD PTR [edi+0x44],0x0
1006e9d1:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006e9d7:	8b 01                	mov    eax,DWORD PTR [ecx]
1006e9d9:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1006e9df:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006e9e5:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
1006e9e8:	85 c9                	test   ecx,ecx
1006e9ea:	d9 5f 48             	fstp   DWORD PTR [edi+0x48]
1006e9ed:	74 05                	je     0x1006e9f4
1006e9ef:	8b 11                	mov    edx,DWORD PTR [ecx]
1006e9f1:	ff 52 40             	call   DWORD PTR [edx+0x40]
1006e9f4:	c7 47 34 00 00 00 00 	mov    DWORD PTR [edi+0x34],0x0
1006e9fb:	8b 06                	mov    eax,DWORD PTR [esi]
1006e9fd:	8b ce                	mov    ecx,esi
1006e9ff:	ff 50 64             	call   DWORD PTR [eax+0x64]
1006ea02:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006ea05:	85 f6                	test   esi,esi
1006ea07:	74 14                	je     0x1006ea1d
1006ea09:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006ea0d:	74 07                	je     0x1006ea16
1006ea0f:	8b ce                	mov    ecx,esi
1006ea11:	e8 aa 01 00 00       	call   0x1006ebc0
1006ea16:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006ea19:	85 f6                	test   esi,esi
1006ea1b:	75 ec                	jne    0x1006ea09
1006ea1d:	5f                   	pop    edi
1006ea1e:	5e                   	pop    esi
1006ea1f:	c3                   	ret
1006ea20:	53                   	push   ebx
1006ea21:	56                   	push   esi
1006ea22:	8b f1                	mov    esi,ecx
1006ea24:	bb 01 00 00 00       	mov    ebx,0x1
1006ea29:	6a 00                	push   0x0
1006ea2b:	53                   	push   ebx
1006ea2c:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
1006ea2f:	0b c3                	or     eax,ebx
1006ea31:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1006ea34:	8b 06                	mov    eax,DWORD PTR [esi]
1006ea36:	ff 50 58             	call   DWORD PTR [eax+0x58]
1006ea39:	84 5e 18             	test   BYTE PTR [esi+0x18],bl
1006ea3c:	74 31                	je     0x1006ea6f
1006ea3e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1006ea41:	85 c9                	test   ecx,ecx
1006ea43:	74 09                	je     0x1006ea4e
1006ea45:	e8 16 fd ff ff       	call   0x1006e760
1006ea4a:	85 c0                	test   eax,eax
1006ea4c:	74 21                	je     0x1006ea6f
1006ea4e:	8b 16                	mov    edx,DWORD PTR [esi]
1006ea50:	8b ce                	mov    ecx,esi
1006ea52:	ff 52 60             	call   DWORD PTR [edx+0x60]
1006ea55:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006ea58:	85 f6                	test   esi,esi
1006ea5a:	74 13                	je     0x1006ea6f
1006ea5c:	84 5e 18             	test   BYTE PTR [esi+0x18],bl
1006ea5f:	74 07                	je     0x1006ea68
1006ea61:	8b ce                	mov    ecx,esi
1006ea63:	e8 28 01 00 00       	call   0x1006eb90
1006ea68:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006ea6b:	85 f6                	test   esi,esi
1006ea6d:	75 ed                	jne    0x1006ea5c
1006ea6f:	5e                   	pop    esi
1006ea70:	5b                   	pop    ebx
1006ea71:	c3                   	ret
1006ea72:	90                   	nop
1006ea73:	90                   	nop
1006ea74:	90                   	nop
1006ea75:	90                   	nop
1006ea76:	90                   	nop
1006ea77:	90                   	nop
1006ea78:	90                   	nop
1006ea79:	90                   	nop
1006ea7a:	90                   	nop
1006ea7b:	90                   	nop
1006ea7c:	90                   	nop
1006ea7d:	90                   	nop
1006ea7e:	90                   	nop
1006ea7f:	90                   	nop
1006ea80:	33 c0                	xor    eax,eax
1006ea82:	c2 04 00             	ret    0x4
1006ea85:	90                   	nop
1006ea86:	90                   	nop
1006ea87:	90                   	nop
1006ea88:	90                   	nop
1006ea89:	90                   	nop
1006ea8a:	90                   	nop
1006ea8b:	90                   	nop
1006ea8c:	90                   	nop
1006ea8d:	90                   	nop
1006ea8e:	90                   	nop
1006ea8f:	90                   	nop
1006ea90:	33 c0                	xor    eax,eax
1006ea92:	c2 08 00             	ret    0x8
1006ea95:	90                   	nop
1006ea96:	90                   	nop
1006ea97:	90                   	nop
1006ea98:	90                   	nop
1006ea99:	90                   	nop
1006ea9a:	90                   	nop
1006ea9b:	90                   	nop
1006ea9c:	90                   	nop
1006ea9d:	90                   	nop
1006ea9e:	90                   	nop
1006ea9f:	90                   	nop
1006eaa0:	c2 10 00             	ret    0x10
1006eaa3:	90                   	nop
1006eaa4:	90                   	nop
1006eaa5:	90                   	nop
1006eaa6:	90                   	nop
1006eaa7:	90                   	nop
1006eaa8:	90                   	nop
1006eaa9:	90                   	nop
1006eaaa:	90                   	nop
1006eaab:	90                   	nop
1006eaac:	90                   	nop
1006eaad:	90                   	nop
1006eaae:	90                   	nop
1006eaaf:	90                   	nop
1006eab0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1006eab3:	85 c0                	test   eax,eax
1006eab5:	74 5b                	je     0x1006eb12
1006eab7:	39 48 0c             	cmp    DWORD PTR [eax+0xc],ecx
1006eaba:	74 56                	je     0x1006eb12
1006eabc:	3b 48 08             	cmp    ecx,DWORD PTR [eax+0x8]
1006eabf:	75 06                	jne    0x1006eac7
1006eac1:	8b 51 10             	mov    edx,DWORD PTR [ecx+0x10]
1006eac4:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1006eac7:	8b 51 14             	mov    edx,DWORD PTR [ecx+0x14]
1006eaca:	57                   	push   edi
1006eacb:	85 d2                	test   edx,edx
1006eacd:	74 06                	je     0x1006ead5
1006eacf:	8b 79 10             	mov    edi,DWORD PTR [ecx+0x10]
1006ead2:	89 7a 10             	mov    DWORD PTR [edx+0x10],edi
1006ead5:	8b 51 10             	mov    edx,DWORD PTR [ecx+0x10]
1006ead8:	85 d2                	test   edx,edx
1006eada:	74 06                	je     0x1006eae2
1006eadc:	8b 79 14             	mov    edi,DWORD PTR [ecx+0x14]
1006eadf:	89 7a 14             	mov    DWORD PTR [edx+0x14],edi
1006eae2:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
1006eae5:	5f                   	pop    edi
1006eae6:	85 d2                	test   edx,edx
1006eae8:	74 14                	je     0x1006eafe
1006eaea:	89 4a 10             	mov    DWORD PTR [edx+0x10],ecx
1006eaed:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
1006eaf0:	89 51 14             	mov    DWORD PTR [ecx+0x14],edx
1006eaf3:	c7 41 10 00 00 00 00 	mov    DWORD PTR [ecx+0x10],0x0
1006eafa:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006eafd:	c3                   	ret
1006eafe:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006eb01:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1006eb04:	c7 41 14 00 00 00 00 	mov    DWORD PTR [ecx+0x14],0x0
1006eb0b:	c7 41 10 00 00 00 00 	mov    DWORD PTR [ecx+0x10],0x0
1006eb12:	c3                   	ret
1006eb13:	90                   	nop
1006eb14:	90                   	nop
1006eb15:	90                   	nop
1006eb16:	90                   	nop
1006eb17:	90                   	nop
1006eb18:	90                   	nop
1006eb19:	90                   	nop
1006eb1a:	90                   	nop
1006eb1b:	90                   	nop
1006eb1c:	90                   	nop
1006eb1d:	90                   	nop
1006eb1e:	90                   	nop
1006eb1f:	90                   	nop
1006eb20:	56                   	push   esi
1006eb21:	8b f1                	mov    esi,ecx
1006eb23:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006eb27:	74 20                	je     0x1006eb49
1006eb29:	8b 06                	mov    eax,DWORD PTR [esi]
1006eb2b:	8d 4e 1c             	lea    ecx,[esi+0x1c]
1006eb2e:	51                   	push   ecx
1006eb2f:	8b ce                	mov    ecx,esi
1006eb31:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
1006eb34:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1006eb37:	85 f6                	test   esi,esi
1006eb39:	74 0e                	je     0x1006eb49
1006eb3b:	8b ce                	mov    ecx,esi
1006eb3d:	e8 de ff ff ff       	call   0x1006eb20
1006eb42:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006eb45:	85 f6                	test   esi,esi
1006eb47:	75 f2                	jne    0x1006eb3b
1006eb49:	5e                   	pop    esi
1006eb4a:	c3                   	ret
1006eb4b:	90                   	nop
1006eb4c:	90                   	nop
1006eb4d:	90                   	nop
1006eb4e:	90                   	nop
1006eb4f:	90                   	nop
1006eb50:	56                   	push   esi
1006eb51:	8b f1                	mov    esi,ecx
1006eb53:	57                   	push   edi
1006eb54:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006eb58:	74 26                	je     0x1006eb80
1006eb5a:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
1006eb5e:	8b 06                	mov    eax,DWORD PTR [esi]
1006eb60:	8d 4e 1c             	lea    ecx,[esi+0x1c]
1006eb63:	51                   	push   ecx
1006eb64:	57                   	push   edi
1006eb65:	8b ce                	mov    ecx,esi
1006eb67:	ff 50 50             	call   DWORD PTR [eax+0x50]
1006eb6a:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1006eb6d:	85 f6                	test   esi,esi
1006eb6f:	74 0f                	je     0x1006eb80
1006eb71:	57                   	push   edi
1006eb72:	8b ce                	mov    ecx,esi
1006eb74:	e8 d7 ff ff ff       	call   0x1006eb50
1006eb79:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006eb7c:	85 f6                	test   esi,esi
1006eb7e:	75 f1                	jne    0x1006eb71
1006eb80:	5f                   	pop    edi
1006eb81:	5e                   	pop    esi
1006eb82:	c2 04 00             	ret    0x4
1006eb85:	90                   	nop
1006eb86:	90                   	nop
1006eb87:	90                   	nop
1006eb88:	90                   	nop
1006eb89:	90                   	nop
1006eb8a:	90                   	nop
1006eb8b:	90                   	nop
1006eb8c:	90                   	nop
1006eb8d:	90                   	nop
1006eb8e:	90                   	nop
1006eb8f:	90                   	nop
1006eb90:	56                   	push   esi
1006eb91:	8b f1                	mov    esi,ecx
1006eb93:	8b 06                	mov    eax,DWORD PTR [esi]
1006eb95:	ff 50 60             	call   DWORD PTR [eax+0x60]
1006eb98:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006eb9b:	85 f6                	test   esi,esi
1006eb9d:	74 14                	je     0x1006ebb3
1006eb9f:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006eba3:	74 07                	je     0x1006ebac
1006eba5:	8b ce                	mov    ecx,esi
1006eba7:	e8 e4 ff ff ff       	call   0x1006eb90
1006ebac:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006ebaf:	85 f6                	test   esi,esi
1006ebb1:	75 ec                	jne    0x1006eb9f
1006ebb3:	5e                   	pop    esi
1006ebb4:	c3                   	ret
1006ebb5:	90                   	nop
1006ebb6:	90                   	nop
1006ebb7:	90                   	nop
1006ebb8:	90                   	nop
1006ebb9:	90                   	nop
1006ebba:	90                   	nop
1006ebbb:	90                   	nop
1006ebbc:	90                   	nop
1006ebbd:	90                   	nop
1006ebbe:	90                   	nop
1006ebbf:	90                   	nop
1006ebc0:	56                   	push   esi
1006ebc1:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006ebc7:	57                   	push   edi
1006ebc8:	8b f9                	mov    edi,ecx
1006ebca:	39 7e 34             	cmp    DWORD PTR [esi+0x34],edi
1006ebcd:	75 44                	jne    0x1006ec13
1006ebcf:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006ebd2:	85 c9                	test   ecx,ecx
1006ebd4:	74 3d                	je     0x1006ec13
1006ebd6:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
1006ebd9:	85 c0                	test   eax,eax
1006ebdb:	74 05                	je     0x1006ebe2
1006ebdd:	8b 01                	mov    eax,DWORD PTR [ecx]
1006ebdf:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
1006ebe2:	c7 46 44 00 00 00 00 	mov    DWORD PTR [esi+0x44],0x0
1006ebe9:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006ebef:	8b 11                	mov    edx,DWORD PTR [ecx]
1006ebf1:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1006ebf7:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006ebfd:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006ec00:	85 c9                	test   ecx,ecx
1006ec02:	d9 5e 48             	fstp   DWORD PTR [esi+0x48]
1006ec05:	74 05                	je     0x1006ec0c
1006ec07:	8b 01                	mov    eax,DWORD PTR [ecx]
1006ec09:	ff 50 40             	call   DWORD PTR [eax+0x40]
1006ec0c:	c7 46 34 00 00 00 00 	mov    DWORD PTR [esi+0x34],0x0
1006ec13:	8b 17                	mov    edx,DWORD PTR [edi]
1006ec15:	8b cf                	mov    ecx,edi
1006ec17:	ff 52 64             	call   DWORD PTR [edx+0x64]
1006ec1a:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
1006ec1d:	85 f6                	test   esi,esi
1006ec1f:	74 14                	je     0x1006ec35
1006ec21:	f6 46 18 01          	test   BYTE PTR [esi+0x18],0x1
1006ec25:	74 07                	je     0x1006ec2e
1006ec27:	8b ce                	mov    ecx,esi
1006ec29:	e8 92 ff ff ff       	call   0x1006ebc0
1006ec2e:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006ec31:	85 f6                	test   esi,esi
1006ec33:	75 ec                	jne    0x1006ec21
1006ec35:	5f                   	pop    edi
1006ec36:	5e                   	pop    esi
1006ec37:	c3                   	ret
1006ec38:	90                   	nop
1006ec39:	90                   	nop
1006ec3a:	90                   	nop
1006ec3b:	90                   	nop
1006ec3c:	90                   	nop
1006ec3d:	90                   	nop
1006ec3e:	90                   	nop
1006ec3f:	90                   	nop
1006ec40:	53                   	push   ebx
1006ec41:	55                   	push   ebp
1006ec42:	56                   	push   esi
1006ec43:	57                   	push   edi
1006ec44:	8b f9                	mov    edi,ecx
1006ec46:	8b 57 18             	mov    edx,DWORD PTR [edi+0x18]
1006ec49:	f6 c2 01             	test   dl,0x1
1006ec4c:	74 7d                	je     0x1006eccb
1006ec4e:	f6 c2 20             	test   dl,0x20
1006ec51:	75 78                	jne    0x1006eccb
1006ec53:	8b 4f 1c             	mov    ecx,DWORD PTR [edi+0x1c]
1006ec56:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
1006ec5a:	3b e9                	cmp    ebp,ecx
1006ec5c:	7c 6d                	jl     0x1006eccb
1006ec5e:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
1006ec61:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1006ec65:	3b d8                	cmp    ebx,eax
1006ec67:	7c 62                	jl     0x1006eccb
1006ec69:	8b 77 24             	mov    esi,DWORD PTR [edi+0x24]
1006ec6c:	03 f1                	add    esi,ecx
1006ec6e:	3b ee                	cmp    ebp,esi
1006ec70:	7d 59                	jge    0x1006eccb
1006ec72:	8b 4f 28             	mov    ecx,DWORD PTR [edi+0x28]
1006ec75:	03 c8                	add    ecx,eax
1006ec77:	3b d9                	cmp    ebx,ecx
1006ec79:	7d 50                	jge    0x1006eccb
1006ec7b:	f6 c2 40             	test   dl,0x40
1006ec7e:	74 0e                	je     0x1006ec8e
1006ec80:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006ec84:	8b 17                	mov    edx,DWORD PTR [edi]
1006ec86:	53                   	push   ebx
1006ec87:	55                   	push   ebp
1006ec88:	50                   	push   eax
1006ec89:	8b cf                	mov    ecx,edi
1006ec8b:	ff 52 38             	call   DWORD PTR [edx+0x38]
1006ec8e:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
1006ec91:	85 f6                	test   esi,esi
1006ec93:	74 19                	je     0x1006ecae
1006ec95:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006ec99:	53                   	push   ebx
1006ec9a:	55                   	push   ebp
1006ec9b:	51                   	push   ecx
1006ec9c:	8b ce                	mov    ecx,esi
1006ec9e:	e8 9d ff ff ff       	call   0x1006ec40
1006eca3:	85 c0                	test   eax,eax
1006eca5:	75 26                	jne    0x1006eccd
1006eca7:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006ecaa:	85 f6                	test   esi,esi
1006ecac:	75 e7                	jne    0x1006ec95
1006ecae:	f6 47 18 04          	test   BYTE PTR [edi+0x18],0x4
1006ecb2:	74 0e                	je     0x1006ecc2
1006ecb4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006ecb8:	8b 17                	mov    edx,DWORD PTR [edi]
1006ecba:	53                   	push   ebx
1006ecbb:	55                   	push   ebp
1006ecbc:	50                   	push   eax
1006ecbd:	8b cf                	mov    ecx,edi
1006ecbf:	ff 52 38             	call   DWORD PTR [edx+0x38]
1006ecc2:	8b c7                	mov    eax,edi
1006ecc4:	5f                   	pop    edi
1006ecc5:	5e                   	pop    esi
1006ecc6:	5d                   	pop    ebp
1006ecc7:	5b                   	pop    ebx
1006ecc8:	c2 0c 00             	ret    0xc
1006eccb:	33 c0                	xor    eax,eax
1006eccd:	5f                   	pop    edi
1006ecce:	5e                   	pop    esi
1006eccf:	5d                   	pop    ebp
1006ecd0:	5b                   	pop    ebx
1006ecd1:	c2 0c 00             	ret    0xc
1006ecd4:	90                   	nop
1006ecd5:	90                   	nop
1006ecd6:	90                   	nop
1006ecd7:	90                   	nop
1006ecd8:	90                   	nop
1006ecd9:	90                   	nop
1006ecda:	90                   	nop
1006ecdb:	90                   	nop
1006ecdc:	90                   	nop
1006ecdd:	90                   	nop
1006ecde:	90                   	nop
1006ecdf:	90                   	nop
1006ece0:	53                   	push   ebx
1006ece1:	55                   	push   ebp
1006ece2:	56                   	push   esi
1006ece3:	57                   	push   edi
1006ece4:	8b f9                	mov    edi,ecx
1006ece6:	8b 57 18             	mov    edx,DWORD PTR [edi+0x18]
1006ece9:	f6 c2 01             	test   dl,0x1
1006ecec:	74 73                	je     0x1006ed61
1006ecee:	f6 c2 20             	test   dl,0x20
1006ecf1:	75 6e                	jne    0x1006ed61
1006ecf3:	8b 4f 1c             	mov    ecx,DWORD PTR [edi+0x1c]
1006ecf6:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
1006ecfa:	3b e9                	cmp    ebp,ecx
1006ecfc:	7c 63                	jl     0x1006ed61
1006ecfe:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
1006ed01:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
1006ed05:	3b d8                	cmp    ebx,eax
1006ed07:	7c 58                	jl     0x1006ed61
1006ed09:	8b 77 24             	mov    esi,DWORD PTR [edi+0x24]
1006ed0c:	03 f1                	add    esi,ecx
1006ed0e:	3b ee                	cmp    ebp,esi
1006ed10:	7d 4f                	jge    0x1006ed61
1006ed12:	8b 4f 28             	mov    ecx,DWORD PTR [edi+0x28]
1006ed15:	03 c8                	add    ecx,eax
1006ed17:	3b d9                	cmp    ebx,ecx
1006ed19:	7d 46                	jge    0x1006ed61
1006ed1b:	f6 c2 80             	test   dl,0x80
1006ed1e:	75 25                	jne    0x1006ed45
1006ed20:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
1006ed23:	85 f6                	test   esi,esi
1006ed25:	74 1e                	je     0x1006ed45
1006ed27:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1006ed2b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006ed2f:	53                   	push   ebx
1006ed30:	55                   	push   ebp
1006ed31:	52                   	push   edx
1006ed32:	50                   	push   eax
1006ed33:	8b ce                	mov    ecx,esi
1006ed35:	e8 a6 ff ff ff       	call   0x1006ece0
1006ed3a:	85 c0                	test   eax,eax
1006ed3c:	75 25                	jne    0x1006ed63
1006ed3e:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006ed41:	85 f6                	test   esi,esi
1006ed43:	75 e2                	jne    0x1006ed27
1006ed45:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1006ed49:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006ed4d:	8b 17                	mov    edx,DWORD PTR [edi]
1006ed4f:	53                   	push   ebx
1006ed50:	55                   	push   ebp
1006ed51:	50                   	push   eax
1006ed52:	51                   	push   ecx
1006ed53:	8b cf                	mov    ecx,edi
1006ed55:	ff 52 34             	call   DWORD PTR [edx+0x34]
1006ed58:	8b c7                	mov    eax,edi
1006ed5a:	5f                   	pop    edi
1006ed5b:	5e                   	pop    esi
1006ed5c:	5d                   	pop    ebp
1006ed5d:	5b                   	pop    ebx
1006ed5e:	c2 10 00             	ret    0x10
1006ed61:	33 c0                	xor    eax,eax
1006ed63:	5f                   	pop    edi
1006ed64:	5e                   	pop    esi
1006ed65:	5d                   	pop    ebp
1006ed66:	5b                   	pop    ebx
1006ed67:	c2 10 00             	ret    0x10
1006ed6a:	90                   	nop
1006ed6b:	90                   	nop
1006ed6c:	90                   	nop
1006ed6d:	90                   	nop
1006ed6e:	90                   	nop
1006ed6f:	90                   	nop
1006ed70:	53                   	push   ebx
1006ed71:	55                   	push   ebp
1006ed72:	56                   	push   esi
1006ed73:	8b f1                	mov    esi,ecx
1006ed75:	57                   	push   edi
1006ed76:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
1006ed79:	f6 c2 01             	test   dl,0x1
1006ed7c:	0f 84 93 00 00 00    	je     0x1006ee15
1006ed82:	f6 c2 20             	test   dl,0x20
1006ed85:	0f 85 8a 00 00 00    	jne    0x1006ee15
1006ed8b:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1006ed8e:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
1006ed92:	3b e9                	cmp    ebp,ecx
1006ed94:	7c 7f                	jl     0x1006ee15
1006ed96:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1006ed99:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1006ed9d:	3b d8                	cmp    ebx,eax
1006ed9f:	7c 74                	jl     0x1006ee15
1006eda1:	8b 7e 24             	mov    edi,DWORD PTR [esi+0x24]
1006eda4:	03 f9                	add    edi,ecx
1006eda6:	3b ef                	cmp    ebp,edi
1006eda8:	7d 6b                	jge    0x1006ee15
1006edaa:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
1006edad:	03 c8                	add    ecx,eax
1006edaf:	3b d9                	cmp    ebx,ecx
1006edb1:	7d 62                	jge    0x1006ee15
1006edb3:	f6 c6 01             	test   dh,0x1
1006edb6:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1006edbd:	00 
1006edbe:	74 16                	je     0x1006edd6
1006edc0:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006edc4:	8b 16                	mov    edx,DWORD PTR [esi]
1006edc6:	53                   	push   ebx
1006edc7:	55                   	push   ebp
1006edc8:	50                   	push   eax
1006edc9:	8b ce                	mov    ecx,esi
1006edcb:	ff 52 24             	call   DWORD PTR [edx+0x24]
1006edce:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
1006edd5:	00 
1006edd6:	8b 7e 0c             	mov    edi,DWORD PTR [esi+0xc]
1006edd9:	85 ff                	test   edi,edi
1006eddb:	74 19                	je     0x1006edf6
1006eddd:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006ede1:	53                   	push   ebx
1006ede2:	55                   	push   ebp
1006ede3:	51                   	push   ecx
1006ede4:	8b cf                	mov    ecx,edi
1006ede6:	e8 85 ff ff ff       	call   0x1006ed70
1006edeb:	85 c0                	test   eax,eax
1006eded:	75 28                	jne    0x1006ee17
1006edef:	8b 7f 14             	mov    edi,DWORD PTR [edi+0x14]
1006edf2:	85 ff                	test   edi,edi
1006edf4:	75 e7                	jne    0x1006eddd
1006edf6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1006edfa:	85 c0                	test   eax,eax
1006edfc:	75 0e                	jne    0x1006ee0c
1006edfe:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006ee02:	8b 16                	mov    edx,DWORD PTR [esi]
1006ee04:	53                   	push   ebx
1006ee05:	55                   	push   ebp
1006ee06:	50                   	push   eax
1006ee07:	8b ce                	mov    ecx,esi
1006ee09:	ff 52 24             	call   DWORD PTR [edx+0x24]
1006ee0c:	8b c6                	mov    eax,esi
1006ee0e:	5f                   	pop    edi
1006ee0f:	5e                   	pop    esi
1006ee10:	5d                   	pop    ebp
1006ee11:	5b                   	pop    ebx
1006ee12:	c2 0c 00             	ret    0xc
1006ee15:	33 c0                	xor    eax,eax
1006ee17:	5f                   	pop    edi
1006ee18:	5e                   	pop    esi
1006ee19:	5d                   	pop    ebp
1006ee1a:	5b                   	pop    ebx
1006ee1b:	c2 0c 00             	ret    0xc
1006ee1e:	90                   	nop
1006ee1f:	90                   	nop

*/
void TiledBitmap::Load(const char* szFilename) {
    // Basic texture loading logic from assembly
    if (g_pLTClient && szFilename) {
        m_hTexture = g_pLTClient->GetTexInterface()->CreateTextureFromName(szFilename);
    }
}

