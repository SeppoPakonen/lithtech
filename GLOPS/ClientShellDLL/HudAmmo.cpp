#include "HudAmmo.h"

// 0x100598d0: HudAmmo::SyncBulletTextures
/*
100598d0:	53                   	push   ebx
100598d1:	56                   	push   esi
100598d2:	8b 35 58 be 11 10    	mov    esi,DWORD PTR ds:0x1011be58
100598d8:	57                   	push   edi
100598d9:	81 fe 00 04 00 00    	cmp    esi,0x400
100598df:	8d 79 38             	lea    edi,[ecx+0x38]
100598e2:	1b c0                	sbb    eax,eax
100598e4:	bb 08 00 00 00       	mov    ebx,0x8
100598e9:	40                   	inc    eax
100598ea:	8d 34 85 04 b1 0d 10 	lea    esi,[eax*4+0x100db104]
100598f1:	8b 06                	mov    eax,DWORD PTR [esi]
100598f3:	85 c0                	test   eax,eax
100598f5:	75 04                	jne    0x100598fb
100598f7:	89 07                	mov    DWORD PTR [edi],eax
100598f9:	eb 48                	jmp    0x10059943
100598fb:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
10059901:	50                   	push   eax
10059902:	57                   	push   edi
10059903:	8b 11                	mov    edx,DWORD PTR [ecx]
10059905:	ff 52 08             	call   DWORD PTR [edx+0x8]
10059908:	83 3f 00             	cmp    DWORD PTR [edi],0x0
1005990b:	75 36                	jne    0x10059943
1005990d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10059913:	68 82 03 00 00       	push   0x382
10059918:	68 b8 b3 0d 10       	push   0x100db3b8
1005991d:	8b 01                	mov    eax,DWORD PTR [ecx]
1005991f:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10059925:	8b 16                	mov    edx,DWORD PTR [esi]
10059927:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1005992c:	52                   	push   edx
1005992d:	68 84 b3 0d 10       	push   0x100db384
10059932:	8b 08                	mov    ecx,DWORD PTR [eax]
10059934:	68 7c 5d 0c 10       	push   0x100c5d7c
10059939:	50                   	push   eax
1005993a:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10059940:	83 c4 10             	add    esp,0x10
10059943:	83 c7 04             	add    edi,0x4
10059946:	83 c6 08             	add    esi,0x8
10059949:	4b                   	dec    ebx
1005994a:	75 a5                	jne    0x100598f1
1005994c:	5f                   	pop    edi
1005994d:	5e                   	pop    esi
1005994e:	5b                   	pop    ebx
1005994f:	c3                   	ret
10059950:	81 ec 84 00 00 00    	sub    esp,0x84
10059956:	53                   	push   ebx
10059957:	55                   	push   ebp
10059958:	8b e9                	mov    ebp,ecx
1005995a:	56                   	push   esi
1005995b:	57                   	push   edi
1005995c:	8b 85 08 01 00 00    	mov    eax,DWORD PTR [ebp+0x108]
10059962:	85 c0                	test   eax,eax
10059964:	7c 24                	jl     0x1005998a
10059966:	83 f8 08             	cmp    eax,0x8
10059969:	7d 1f                	jge    0x1005998a
1005996b:	81 3d 58 be 11 10 00 	cmp    DWORD PTR ds:0x1011be58,0x400
10059972:	04 00 00 
10059975:	1b c9                	sbb    ecx,ecx
10059977:	41                   	inc    ecx
10059978:	8d 14 41             	lea    edx,[ecx+eax*2]
1005997b:	8b 04 95 44 b1 0d 10 	mov    eax,DWORD PTR [edx*4+0x100db144]
10059982:	89 85 0c 01 00 00    	mov    DWORD PTR [ebp+0x10c],eax
10059988:	eb 0a                	jmp    0x10059994
1005998a:	c7 85 0c 01 00 00 01 	mov    DWORD PTR [ebp+0x10c],0x1
10059991:	00 00 00 
10059994:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
1005999a:	8b bd 14 01 00 00    	mov    edi,DWORD PTR [ebp+0x114]
100599a0:	8b 8c 24 98 00 00 00 	mov    ecx,DWORD PTR [esp+0x98]
100599a7:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
100599ab:	8d 58 01             	lea    ebx,[eax+0x1]
100599ae:	0f af df             	imul   ebx,edi
100599b1:	8b c3                	mov    eax,ebx
100599b3:	99                   	cdq
100599b4:	f7 bd 0c 01 00 00    	idiv   DWORD PTR [ebp+0x10c]
100599ba:	3b 41 0c             	cmp    eax,DWORD PTR [ecx+0xc]
100599bd:	7e 1a                	jle    0x100599d9
100599bf:	8b b5 0c 01 00 00    	mov    esi,DWORD PTR [ebp+0x10c]
100599c5:	8b c3                	mov    eax,ebx
100599c7:	99                   	cdq
100599c8:	d1 e6                	shl    esi,1
100599ca:	f7 fe                	idiv   esi
100599cc:	89 b5 0c 01 00 00    	mov    DWORD PTR [ebp+0x10c],esi
100599d2:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
100599d5:	3b c2                	cmp    eax,edx
100599d7:	7f e6                	jg     0x100599bf
100599d9:	8b 85 04 01 00 00    	mov    eax,DWORD PTR [ebp+0x104]
100599df:	8b 95 10 01 00 00    	mov    edx,DWORD PTR [ebp+0x110]
100599e5:	0f af c7             	imul   eax,edi
100599e8:	8b b5 0c 01 00 00    	mov    esi,DWORD PTR [ebp+0x10c]
100599ee:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
100599f2:	99                   	cdq
100599f3:	f7 fe                	idiv   esi
100599f5:	8b 11                	mov    edx,DWORD PTR [ecx]
100599f7:	8b 71 0c             	mov    esi,DWORD PTR [ecx+0xc]
100599fa:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
100599fe:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10059a01:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
10059a05:	8b 1d 00 b1 0d 10    	mov    ebx,DWORD PTR ds:0x100db100
10059a0b:	8d 7d 58             	lea    edi,[ebp+0x58]
10059a0e:	c1 eb 18             	shr    ebx,0x18
10059a11:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
10059a15:	d8 25 e0 83 0b 10    	fsub   DWORD PTR ds:0x100b83e0
10059a1b:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
10059a22:	00 
10059a23:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
10059a2a:	00 
10059a2b:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
10059a32:	00 
10059a33:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
10059a3a:	00 
10059a3b:	d9 c0                	fld    st(0)
10059a3d:	c7 44 24 60 00 00 00 	mov    DWORD PTR [esp+0x60],0x0
10059a44:	00 
10059a45:	c7 44 24 6c 00 00 00 	mov    DWORD PTR [esp+0x6c],0x0
10059a4c:	00 
10059a4d:	c7 44 24 70 00 00 80 	mov    DWORD PTR [esp+0x70],0x3f800000
10059a54:	3f 
10059a55:	c7 44 24 74 00 00 00 	mov    DWORD PTR [esp+0x74],0x0
10059a5c:	00 
10059a5d:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x0
10059a64:	00 00 00 00 
10059a68:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x3f800000
10059a6f:	00 00 80 3f 
10059a73:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0xff
10059a7a:	ff 
10059a7b:	c6 84 24 8d 00 00 00 	mov    BYTE PTR [esp+0x8d],0xff
10059a82:	ff 
10059a83:	c6 84 24 8e 00 00 00 	mov    BYTE PTR [esp+0x8e],0xff
10059a8a:	ff 
10059a8b:	88 9c 24 8f 00 00 00 	mov    BYTE PTR [esp+0x8f],bl
10059a92:	2b d0                	sub    edx,eax
10059a94:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
10059a98:	03 d6                	add    edx,esi
10059a9a:	8d 74 24 3c          	lea    esi,[esp+0x3c]
10059a9e:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10059aa2:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
10059aa6:	d9 c0                	fld    st(0)
10059aa8:	d8 25 e0 83 0b 10    	fsub   DWORD PTR ds:0x100b83e0
10059aae:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10059ab2:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
10059ab6:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10059aba:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
10059abe:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
10059ac2:	d9 94 24 90 00 00 00 	fst    DWORD PTR [esp+0x90]
10059ac9:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10059acd:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
10059ad1:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10059ad5:	89 54 24 64          	mov    DWORD PTR [esp+0x64],edx
10059ad9:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
10059add:	d8 c1                	fadd   st,st(1)
10059adf:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10059ae3:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10059ae7:	dd d8                	fstp   st(0)
10059ae9:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
10059aed:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
10059af1:	8b c1                	mov    eax,ecx
10059af3:	8b ca                	mov    ecx,edx
10059af5:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
10059af9:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
10059afd:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10059b01:	d8 74 24 38          	fdiv   DWORD PTR [esp+0x38]
10059b05:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
10059b09:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
10059b0d:	b9 15 00 00 00       	mov    ecx,0x15
10059b12:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
10059b16:	d9 e0                	fchs
10059b18:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
10059b1c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10059b20:	d9 c1                	fld    st(1)
10059b22:	89 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],eax
10059b29:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
10059b2f:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10059b33:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
10059b37:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
10059b3b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10059b3d:	8b 8d 04 01 00 00    	mov    ecx,DWORD PTR [ebp+0x104]
10059b43:	3b c8                	cmp    ecx,eax
10059b45:	0f 8d 2e 01 00 00    	jge    0x10059c79
10059b4b:	2b c1                	sub    eax,ecx
10059b4d:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10059b51:	0f af 44 24 14       	imul   eax,DWORD PTR [esp+0x14]
10059b56:	99                   	cdq
10059b57:	f7 bd 0c 01 00 00    	idiv   DWORD PTR [ebp+0x10c]
10059b5d:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10059b61:	8d bd ac 00 00 00    	lea    edi,[ebp+0xac]
10059b67:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10059b6b:	89 54 24 60          	mov    DWORD PTR [esp+0x60],edx
10059b6f:	89 54 24 74          	mov    DWORD PTR [esp+0x74],edx
10059b73:	8d 74 24 3c          	lea    esi,[esp+0x3c]
10059b77:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
10059b7e:	00 
10059b7f:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
10059b86:	00 
10059b87:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
10059b8e:	00 
10059b8f:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
10059b96:	00 
10059b97:	c7 44 24 6c 00 00 00 	mov    DWORD PTR [esp+0x6c],0x0
10059b9e:	00 
10059b9f:	c7 44 24 70 00 00 80 	mov    DWORD PTR [esp+0x70],0x3f800000
10059ba6:	3f 
10059ba7:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x0
10059bae:	00 00 00 00 
10059bb2:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x3f800000
10059bb9:	00 00 80 3f 
10059bbd:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0xff
10059bc4:	ff 
10059bc5:	c6 84 24 8d 00 00 00 	mov    BYTE PTR [esp+0x8d],0xff
10059bcc:	ff 
10059bcd:	c6 84 24 8e 00 00 00 	mov    BYTE PTR [esp+0x8e],0xff
10059bd4:	ff 
10059bd5:	2b c8                	sub    ecx,eax
10059bd7:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
10059bdb:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
10059bdf:	8b 8c 24 90 00 00 00 	mov    ecx,DWORD PTR [esp+0x90]
10059be6:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
10059bea:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
10059bee:	c0 eb 02             	shr    bl,0x2
10059bf1:	d9 c0                	fld    st(0)
10059bf3:	d8 25 e0 83 0b 10    	fsub   DWORD PTR ds:0x100b83e0
10059bf9:	88 9c 24 8f 00 00 00 	mov    BYTE PTR [esp+0x8f],bl
10059c00:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10059c04:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
10059c08:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10059c0c:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
10059c10:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10059c14:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
10059c18:	d8 c1                	fadd   st,st(1)
10059c1a:	89 44 24 64          	mov    DWORD PTR [esp+0x64],eax
10059c1e:	89 44 24 78          	mov    DWORD PTR [esp+0x78],eax
10059c22:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10059c26:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10059c2a:	dd d8                	fstp   st(0)
10059c2c:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10059c30:	d8 74 24 38          	fdiv   DWORD PTR [esp+0x38]
10059c34:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
10059c38:	89 4c 24 68          	mov    DWORD PTR [esp+0x68],ecx
10059c3c:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10059c40:	89 4c 24 7c          	mov    DWORD PTR [esp+0x7c],ecx
10059c44:	b9 15 00 00 00       	mov    ecx,0x15
10059c49:	d8 6c 24 10          	fsubr  DWORD PTR [esp+0x10]
10059c4d:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
10059c51:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10059c55:	d9 c1                	fld    st(1)
10059c57:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
10059c5e:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10059c62:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
10059c66:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
10059c6a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10059c6c:	5f                   	pop    edi
10059c6d:	5e                   	pop    esi
10059c6e:	5d                   	pop    ebp
10059c6f:	5b                   	pop    ebx
10059c70:	81 c4 84 00 00 00    	add    esp,0x84
10059c76:	c2 04 00             	ret    0x4
10059c79:	5f                   	pop    edi
10059c7a:	5e                   	pop    esi
10059c7b:	5d                   	pop    ebp
10059c7c:	5b                   	pop    ebx
10059c7d:	dd d8                	fstp   st(0)
10059c7f:	81 c4 84 00 00 00    	add    esp,0x84
10059c85:	c2 04 00             	ret    0x4
10059c88:	90                   	nop
10059c89:	90                   	nop
10059c8a:	90                   	nop
10059c8b:	90                   	nop
10059c8c:	90                   	nop
10059c8d:	90                   	nop
10059c8e:	90                   	nop
10059c8f:	90                   	nop
10059c90:	83 c8 ff             	or     eax,0xffffffff
10059c93:	c7 41 40 0e 00 00 00 	mov    DWORD PTR [ecx+0x40],0xe
10059c9a:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
10059c9d:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
10059ca0:	c7 41 44 00 d0 10 10 	mov    DWORD PTR [ecx+0x44],0x1010d000
10059ca7:	c3                   	ret
10059ca8:	90                   	nop
10059ca9:	90                   	nop
10059caa:	90                   	nop
10059cab:	90                   	nop
10059cac:	90                   	nop
10059cad:	90                   	nop
10059cae:	90                   	nop
10059caf:	90                   	nop
10059cb0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10059cb4:	8b 0d 5c d1 11 10    	mov    ecx,DWORD PTR ds:0x1011d15c
10059cba:	89 08                	mov    DWORD PTR [eax],ecx
10059cbc:	8b 15 60 d1 11 10    	mov    edx,DWORD PTR ds:0x1011d160
10059cc2:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
10059cc5:	c2 04 00             	ret    0x4
10059cc8:	90                   	nop
10059cc9:	90                   	nop
10059cca:	90                   	nop
10059ccb:	90                   	nop
10059ccc:	90                   	nop
10059ccd:	90                   	nop
10059cce:	90                   	nop
10059ccf:	90                   	nop
10059cd0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10059cd4:	50                   	push   eax
10059cd5:	e8 26 02 00 00       	call   0x10059f00
10059cda:	c2 04 00             	ret    0x4
10059cdd:	90                   	nop
10059cde:	90                   	nop
10059cdf:	90                   	nop
10059ce0:	83 ec 3c             	sub    esp,0x3c
10059ce3:	56                   	push   esi
10059ce4:	8b f1                	mov    esi,ecx
10059ce6:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
10059ce9:	83 f8 0e             	cmp    eax,0xe
10059cec:	7c 39                	jl     0x10059d27
10059cee:	f6 46 34 01          	test   BYTE PTR [esi+0x34],0x1
10059cf2:	0f 84 f8 01 00 00    	je     0x10059ef0
10059cf8:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
10059cfc:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10059cff:	8b 10                	mov    edx,DWORD PTR [eax]
10059d01:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
10059d06:	51                   	push   ecx
10059d07:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10059d0d:	0d ff ff ff 00       	or     eax,0xffffff
10059d12:	52                   	push   edx
10059d13:	50                   	push   eax
10059d14:	6a 00                	push   0x0
10059d16:	68 48 d1 11 10       	push   0x1011d148
10059d1b:	e8 d0 17 ff ff       	call   0x1004b4f0
10059d20:	5e                   	pop    esi
10059d21:	83 c4 3c             	add    esp,0x3c
10059d24:	c2 08 00             	ret    0x8
10059d27:	8b 04 85 84 b1 0d 10 	mov    eax,DWORD PTR [eax*4+0x100db184]
10059d2e:	53                   	push   ebx
10059d2f:	55                   	push   ebp
10059d30:	57                   	push   edi
10059d31:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
10059d38:	2b c8                	sub    ecx,eax
10059d3a:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
10059d3e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10059d41:	8b 00                	mov    eax,DWORD PTR [eax]
10059d43:	8d 3c 8d 08 c5 11 10 	lea    edi,[ecx*4+0x1011c508]
10059d4a:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
10059d50:	52                   	push   edx
10059d51:	81 c9 ff ff ff 00    	or     ecx,0xffffff
10059d57:	50                   	push   eax
10059d58:	51                   	push   ecx
10059d59:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10059d5f:	6a 00                	push   0x0
10059d61:	68 48 d1 11 10       	push   0x1011d148
10059d66:	e8 85 17 ff ff       	call   0x1004b4f0
10059d6b:	8b 56 6c             	mov    edx,DWORD PTR [esi+0x6c]
10059d6e:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
10059d74:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
10059d77:	52                   	push   edx
10059d78:	81 c9 ff ff ff 00    	or     ecx,0xffffff
10059d7e:	50                   	push   eax
10059d7f:	51                   	push   ecx
10059d80:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10059d86:	6a 00                	push   0x0
10059d88:	57                   	push   edi
10059d89:	e8 62 17 ff ff       	call   0x1004b4f0
10059d8e:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10059d91:	b9 e7 03 00 00       	mov    ecx,0x3e7
10059d96:	3b c1                	cmp    eax,ecx
10059d98:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10059d9c:	7c 04                	jl     0x10059da2
10059d9e:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10059da2:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10059da5:	3b c1                	cmp    eax,ecx
10059da7:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
10059dab:	7c 04                	jl     0x10059db1
10059dad:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
10059db1:	8d 4e 48             	lea    ecx,[esi+0x48]
10059db4:	8b 3d 58 be 11 10    	mov    edi,DWORD PTR ds:0x1011be58
10059dba:	8b d1                	mov    edx,ecx
10059dbc:	81 ff 00 04 00 00    	cmp    edi,0x400
10059dc2:	8b 6e 50             	mov    ebp,DWORD PTR [esi+0x50]
10059dc5:	8b 1a                	mov    ebx,DWORD PTR [edx]
10059dc7:	1b ff                	sbb    edi,edi
10059dc9:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10059dcc:	83 e7 fc             	and    edi,0xfffffffc
10059dcf:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
10059dd3:	83 c7 0c             	add    edi,0xc
10059dd6:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
10059dd9:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
10059ddc:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
10059de0:	8b 11                	mov    edx,DWORD PTR [ecx]
10059de2:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10059de6:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10059de9:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
10059ded:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
10059df0:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
10059df4:	8b 49 0c             	mov    ecx,DWORD PTR [ecx+0xc]
10059df7:	99                   	cdq
10059df8:	2b c2                	sub    eax,edx
10059dfa:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
10059dfe:	d1 f8                	sar    eax,1
10059e00:	03 f8                	add    edi,eax
10059e02:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10059e06:	2b ef                	sub    ebp,edi
10059e08:	8d 14 3b             	lea    edx,[ebx+edi*1]
10059e0b:	85 c0                	test   eax,eax
10059e0d:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10059e11:	7c 35                	jl     0x10059e48
10059e13:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
10059e17:	6a 0a                	push   0xa
10059e19:	85 c9                	test   ecx,ecx
10059e1b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
10059e1f:	51                   	push   ecx
10059e20:	50                   	push   eax
10059e21:	7c 1b                	jl     0x10059e3e
10059e23:	e8 29 bc 04 00       	call   0x100a5a51
10059e28:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
10059e2c:	8d 54 24 2c          	lea    edx,[esp+0x2c]
10059e30:	6a 0a                	push   0xa
10059e32:	52                   	push   edx
10059e33:	50                   	push   eax
10059e34:	e8 18 bc 04 00       	call   0x100a5a51
10059e39:	83 c4 18             	add    esp,0x18
10059e3c:	eb 14                	jmp    0x10059e52
10059e3e:	e8 0e bc 04 00       	call   0x100a5a51
10059e43:	83 c4 0c             	add    esp,0xc
10059e46:	eb 05                	jmp    0x10059e4d
10059e48:	c6 44 24 14 00       	mov    BYTE PTR [esp+0x14],0x0
10059e4d:	c6 44 24 20 00       	mov    BYTE PTR [esp+0x20],0x0
10059e52:	8b 15 00 b1 0d 10    	mov    edx,DWORD PTR ds:0x100db100
10059e58:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
10059e5b:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
10059e5e:	81 ca ff ff ff 00    	or     edx,0xffffff
10059e64:	6a 05                	push   0x5
10059e66:	52                   	push   edx
10059e67:	8b 56 5c             	mov    edx,DWORD PTR [esi+0x5c]
10059e6a:	50                   	push   eax
10059e6b:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
10059e6e:	51                   	push   ecx
10059e6f:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
10059e72:	52                   	push   edx
10059e73:	8b 15 ec b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6ec
10059e79:	50                   	push   eax
10059e7a:	51                   	push   ecx
10059e7b:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10059e81:	52                   	push   edx
10059e82:	e8 79 02 ff ff       	call   0x1004a100
10059e87:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
10059e8c:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
10059e90:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
10059e94:	0d ff ff ff 00       	or     eax,0xffffff
10059e99:	6a 05                	push   0x5
10059e9b:	50                   	push   eax
10059e9c:	51                   	push   ecx
10059e9d:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10059ea3:	57                   	push   edi
10059ea4:	52                   	push   edx
10059ea5:	8d 44 24 28          	lea    eax,[esp+0x28]
10059ea9:	53                   	push   ebx
10059eaa:	50                   	push   eax
10059eab:	51                   	push   ecx
10059eac:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10059eb2:	e8 49 02 ff ff       	call   0x1004a100
10059eb7:	8b 15 00 b1 0d 10    	mov    edx,DWORD PTR ds:0x100db100
10059ebd:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
10059ec1:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10059ec5:	81 ca ff ff ff 00    	or     edx,0xffffff
10059ecb:	6a 05                	push   0x5
10059ecd:	52                   	push   edx
10059ece:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
10059ed2:	50                   	push   eax
10059ed3:	55                   	push   ebp
10059ed4:	51                   	push   ecx
10059ed5:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10059edb:	8d 44 24 34          	lea    eax,[esp+0x34]
10059edf:	52                   	push   edx
10059ee0:	50                   	push   eax
10059ee1:	51                   	push   ecx
10059ee2:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10059ee8:	e8 13 02 ff ff       	call   0x1004a100
10059eed:	5f                   	pop    edi
10059eee:	5d                   	pop    ebp
10059eef:	5b                   	pop    ebx
10059ef0:	5e                   	pop    esi
10059ef1:	83 c4 3c             	add    esp,0x3c
10059ef4:	c2 08 00             	ret    0x8
10059ef7:	90                   	nop
10059ef8:	90                   	nop
10059ef9:	90                   	nop
10059efa:	90                   	nop
10059efb:	90                   	nop
10059efc:	90                   	nop
10059efd:	90                   	nop
10059efe:	90                   	nop
10059eff:	90                   	nop
10059f00:	83 ec 10             	sub    esp,0x10
10059f03:	53                   	push   ebx
10059f04:	55                   	push   ebp
10059f05:	56                   	push   esi
10059f06:	8b f1                	mov    esi,ecx
10059f08:	8b 6c 24 20          	mov    ebp,DWORD PTR [esp+0x20]
10059f0c:	57                   	push   edi
10059f0d:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
10059f10:	8b 7d 00             	mov    edi,DWORD PTR [ebp+0x0]
10059f13:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10059f16:	8b 04 85 84 b1 0d 10 	mov    eax,DWORD PTR [eax*4+0x100db184]
10059f1d:	83 c7 03             	add    edi,0x3
10059f20:	83 eb 06             	sub    ebx,0x6
10059f23:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
10059f2a:	2b c8                	sub    ecx,eax
10059f2c:	8d 14 8d 08 c5 11 10 	lea    edx,[ecx*4+0x1011c508]
10059f33:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10059f39:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10059f3d:	e8 2e 33 ff ff       	call   0x1004d270
10059f42:	8b c8                	mov    ecx,eax
10059f44:	89 7e 48             	mov    DWORD PTR [esi+0x48],edi
10059f47:	83 c1 02             	add    ecx,0x2
10059f4a:	89 5e 50             	mov    DWORD PTR [esi+0x50],ebx
10059f4d:	89 4e 54             	mov    DWORD PTR [esi+0x54],ecx
10059f50:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10059f53:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
10059f56:	2b c1                	sub    eax,ecx
10059f58:	8d 44 10 fd          	lea    eax,[eax+edx*1-0x3]
10059f5c:	8b 56 44             	mov    edx,DWORD PTR [esi+0x44]
10059f5f:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
10059f62:	8b 6d 04             	mov    ebp,DWORD PTR [ebp+0x4]
10059f65:	83 c5 03             	add    ebp,0x3
10059f68:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
10059f6c:	2b c5                	sub    eax,ebp
10059f6e:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
10059f72:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10059f76:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
10059f79:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10059f7d:	8a 02                	mov    al,BYTE PTR [edx]
10059f7f:	84 c0                	test   al,al
10059f81:	74 04                	je     0x10059f87
10059f83:	01 4c 24 24          	add    DWORD PTR [esp+0x24],ecx
10059f87:	8b c3                	mov    eax,ebx
10059f89:	99                   	cdq
10059f8a:	2b c2                	sub    eax,edx
10059f8c:	8b d0                	mov    edx,eax
10059f8e:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10059f91:	d1 fa                	sar    edx,1
10059f93:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10059f97:	99                   	cdq
10059f98:	2b c2                	sub    eax,edx
10059f9a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10059f9e:	d1 f8                	sar    eax,1
10059fa0:	2b d0                	sub    edx,eax
10059fa2:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10059fa6:	03 d7                	add    edx,edi
10059fa8:	89 56 68             	mov    DWORD PTR [esi+0x68],edx
10059fab:	99                   	cdq
10059fac:	2b c2                	sub    eax,edx
10059fae:	8b e8                	mov    ebp,eax
10059fb0:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10059fb4:	99                   	cdq
10059fb5:	2b c2                	sub    eax,edx
10059fb7:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
10059fbb:	d1 fd                	sar    ebp,1
10059fbd:	d1 f8                	sar    eax,1
10059fbf:	2b c5                	sub    eax,ebp
10059fc1:	03 c2                	add    eax,edx
10059fc3:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10059fc7:	89 46 6c             	mov    DWORD PTR [esi+0x6c],eax
10059fca:	8b 6a 14             	mov    ebp,DWORD PTR [edx+0x14]
10059fcd:	89 6e 70             	mov    DWORD PTR [esi+0x70],ebp
10059fd0:	8b 52 18             	mov    edx,DWORD PTR [edx+0x18]
10059fd3:	89 56 74             	mov    DWORD PTR [esi+0x74],edx
10059fd6:	03 d0                	add    edx,eax
10059fd8:	89 7e 58             	mov    DWORD PTR [esi+0x58],edi
10059fdb:	89 56 5c             	mov    DWORD PTR [esi+0x5c],edx
10059fde:	89 5e 60             	mov    DWORD PTR [esi+0x60],ebx
10059fe1:	89 4e 64             	mov    DWORD PTR [esi+0x64],ecx
10059fe4:	5f                   	pop    edi
10059fe5:	5e                   	pop    esi
10059fe6:	5d                   	pop    ebp
10059fe7:	5b                   	pop    ebx
10059fe8:	83 c4 10             	add    esp,0x10
10059feb:	c2 04 00             	ret    0x4
10059fee:	90                   	nop
10059fef:	90                   	nop
10059ff0:	c7 41 44 00 00 00 00 	mov    DWORD PTR [ecx+0x44],0x0
10059ff7:	c7 41 38 24 d3 11 10 	mov    DWORD PTR [ecx+0x38],0x1011d324
10059ffe:	c7 41 3c 40 d3 11 10 	mov    DWORD PTR [ecx+0x3c],0x1011d340
1005a005:	c7 41 40 5c d3 11 10 	mov    DWORD PTR [ecx+0x40],0x1011d35c
1005a00c:	c3                   	ret
1005a00d:	90                   	nop
1005a00e:	90                   	nop
1005a00f:	90                   	nop
1005a010:	56                   	push   esi
1005a011:	57                   	push   edi
1005a012:	8d 79 38             	lea    edi,[ecx+0x38]
1005a015:	ba f1 d8 ff ff       	mov    edx,0xffffd8f1
1005a01a:	8b cf                	mov    ecx,edi
1005a01c:	be 03 00 00 00       	mov    esi,0x3
1005a021:	8b 01                	mov    eax,DWORD PTR [ecx]
1005a023:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
1005a026:	3b c2                	cmp    eax,edx
1005a028:	7e 02                	jle    0x1005a02c
1005a02a:	8b d0                	mov    edx,eax
1005a02c:	83 c1 04             	add    ecx,0x4
1005a02f:	4e                   	dec    esi
1005a030:	75 ef                	jne    0x1005a021
1005a032:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1005a036:	89 10                	mov    DWORD PTR [eax],edx
1005a038:	8b 0f                	mov    ecx,DWORD PTR [edi]
1005a03a:	5f                   	pop    edi
1005a03b:	5e                   	pop    esi
1005a03c:	8b 51 18             	mov    edx,DWORD PTR [ecx+0x18]
1005a03f:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1005a042:	c2 04 00             	ret    0x4
1005a045:	90                   	nop
1005a046:	90                   	nop
1005a047:	90                   	nop
1005a048:	90                   	nop
1005a049:	90                   	nop
1005a04a:	90                   	nop
1005a04b:	90                   	nop
1005a04c:	90                   	nop
1005a04d:	90                   	nop
1005a04e:	90                   	nop
1005a04f:	90                   	nop
1005a050:	c7 41 38 24 d3 11 10 	mov    DWORD PTR [ecx+0x38],0x1011d324
1005a057:	c7 41 3c 40 d3 11 10 	mov    DWORD PTR [ecx+0x3c],0x1011d340
1005a05e:	c7 41 40 5c d3 11 10 	mov    DWORD PTR [ecx+0x40],0x1011d35c
1005a065:	c2 04 00             	ret    0x4
1005a068:	90                   	nop
1005a069:	90                   	nop
1005a06a:	90                   	nop
1005a06b:	90                   	nop
1005a06c:	90                   	nop
1005a06d:	90                   	nop
1005a06e:	90                   	nop
1005a06f:	90                   	nop
1005a070:	56                   	push   esi
1005a071:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1005a075:	57                   	push   edi
1005a076:	8b f9                	mov    edi,ecx
1005a078:	f6 47 34 01          	test   BYTE PTR [edi+0x34],0x1
1005a07c:	74 24                	je     0x1005a0a2
1005a07e:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1005a081:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1005a084:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1005a087:	68 00 00 00 a0       	push   0xa0000000
1005a08c:	68 00 00 00 a0       	push   0xa0000000
1005a091:	50                   	push   eax
1005a092:	8b 06                	mov    eax,DWORD PTR [esi]
1005a094:	51                   	push   ecx
1005a095:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a09b:	52                   	push   edx
1005a09c:	50                   	push   eax
1005a09d:	e8 ce f4 fe ff       	call   0x10049570
1005a0a2:	8b 0d 30 c3 11 10    	mov    ecx,DWORD PTR ds:0x1011c330
1005a0a8:	8b 51 54             	mov    edx,DWORD PTR [ecx+0x54]
1005a0ab:	83 ba 08 01 00 00 08 	cmp    DWORD PTR [edx+0x108],0x8
1005a0b2:	7d 33                	jge    0x1005a0e7
1005a0b4:	8b 47 44             	mov    eax,DWORD PTR [edi+0x44]
1005a0b7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1005a0ba:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1005a0bd:	51                   	push   ecx
1005a0be:	8b 44 87 38          	mov    eax,DWORD PTR [edi+eax*4+0x38]
1005a0c2:	8b 3e                	mov    edi,DWORD PTR [esi]
1005a0c4:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
1005a0c7:	2b d1                	sub    edx,ecx
1005a0c9:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
1005a0cf:	03 d7                	add    edx,edi
1005a0d1:	81 c9 ff ff ff 00    	or     ecx,0xffffff
1005a0d7:	52                   	push   edx
1005a0d8:	51                   	push   ecx
1005a0d9:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a0df:	6a 00                	push   0x0
1005a0e1:	50                   	push   eax
1005a0e2:	e8 09 14 ff ff       	call   0x1004b4f0
1005a0e7:	5f                   	pop    edi
1005a0e8:	5e                   	pop    esi
1005a0e9:	c2 08 00             	ret    0x8
1005a0ec:	90                   	nop
1005a0ed:	90                   	nop
1005a0ee:	90                   	nop
1005a0ef:	90                   	nop
1005a0f0:	83 c1 38             	add    ecx,0x38
1005a0f3:	e9 a8 6a 02 00       	jmp    0x10080ba0
1005a0f8:	90                   	nop
1005a0f9:	90                   	nop
1005a0fa:	90                   	nop
1005a0fb:	90                   	nop
1005a0fc:	90                   	nop
1005a0fd:	90                   	nop
1005a0fe:	90                   	nop
1005a0ff:	90                   	nop
1005a100:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005a104:	8b 0d 1c d3 11 10    	mov    ecx,DWORD PTR ds:0x1011d31c
1005a10a:	89 08                	mov    DWORD PTR [eax],ecx
1005a10c:	8b 15 20 d3 11 10    	mov    edx,DWORD PTR ds:0x1011d320
1005a112:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1005a115:	c2 04 00             	ret    0x4
1005a118:	90                   	nop
1005a119:	90                   	nop
1005a11a:	90                   	nop
1005a11b:	90                   	nop
1005a11c:	90                   	nop
1005a11d:	90                   	nop
1005a11e:	90                   	nop
1005a11f:	90                   	nop
1005a120:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1005a125:	3d 00 04 00 00       	cmp    eax,0x400
1005a12a:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005a12e:	8b 10                	mov    edx,DWORD PTR [eax]
1005a130:	73 20                	jae    0x1005a152
1005a132:	83 c2 03             	add    edx,0x3
1005a135:	89 51 48             	mov    DWORD PTR [ecx+0x48],edx
1005a138:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a13b:	83 c0 03             	add    eax,0x3
1005a13e:	c7 41 50 2f 00 00 00 	mov    DWORD PTR [ecx+0x50],0x2f
1005a145:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1005a148:	c7 41 54 1b 00 00 00 	mov    DWORD PTR [ecx+0x54],0x1b
1005a14f:	c2 04 00             	ret    0x4
1005a152:	83 c2 03             	add    edx,0x3
1005a155:	89 51 48             	mov    DWORD PTR [ecx+0x48],edx
1005a158:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a15b:	83 c0 04             	add    eax,0x4
1005a15e:	c7 41 50 3f 00 00 00 	mov    DWORD PTR [ecx+0x50],0x3f
1005a165:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1005a168:	c7 41 54 2c 00 00 00 	mov    DWORD PTR [ecx+0x54],0x2c
1005a16f:	c2 04 00             	ret    0x4
1005a172:	90                   	nop
1005a173:	90                   	nop
1005a174:	90                   	nop
1005a175:	90                   	nop
1005a176:	90                   	nop
1005a177:	90                   	nop
1005a178:	90                   	nop
1005a179:	90                   	nop
1005a17a:	90                   	nop
1005a17b:	90                   	nop
1005a17c:	90                   	nop
1005a17d:	90                   	nop
1005a17e:	90                   	nop
1005a17f:	90                   	nop
1005a180:	56                   	push   esi
1005a181:	8b f1                	mov    esi,ecx
1005a183:	57                   	push   edi
1005a184:	8d 7e 38             	lea    edi,[esi+0x38]
1005a187:	8b cf                	mov    ecx,edi
1005a189:	e8 42 6a 02 00       	call   0x10080bd0
1005a18e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1005a192:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1005a195:	8b 10                	mov    edx,DWORD PTR [eax]
1005a197:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
1005a19c:	51                   	push   ecx
1005a19d:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a1a3:	0d ff ff ff 00       	or     eax,0xffffff
1005a1a8:	52                   	push   edx
1005a1a9:	50                   	push   eax
1005a1aa:	6a 00                	push   0x0
1005a1ac:	68 08 d3 11 10       	push   0x1011d308
1005a1b1:	e8 3a 13 ff ff       	call   0x1004b4f0
1005a1b6:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
1005a1bc:	83 c6 48             	add    esi,0x48
1005a1bf:	c1 e9 18             	shr    ecx,0x18
1005a1c2:	51                   	push   ecx
1005a1c3:	56                   	push   esi
1005a1c4:	8b cf                	mov    ecx,edi
1005a1c6:	e8 25 6b 02 00       	call   0x10080cf0
1005a1cb:	5f                   	pop    edi
1005a1cc:	5e                   	pop    esi
1005a1cd:	c2 08 00             	ret    0x8
1005a1d0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005a1d4:	8b 0d 00 d3 11 10    	mov    ecx,DWORD PTR ds:0x1011d300
1005a1da:	89 08                	mov    DWORD PTR [eax],ecx
1005a1dc:	8b 15 04 d3 11 10    	mov    edx,DWORD PTR ds:0x1011d304
1005a1e2:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1005a1e5:	c2 04 00             	ret    0x4
1005a1e8:	90                   	nop
1005a1e9:	90                   	nop
1005a1ea:	90                   	nop
1005a1eb:	90                   	nop
1005a1ec:	90                   	nop
1005a1ed:	90                   	nop
1005a1ee:	90                   	nop
1005a1ef:	90                   	nop
1005a1f0:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1005a1f5:	3d 00 04 00 00       	cmp    eax,0x400
1005a1fa:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005a1fe:	8b 10                	mov    edx,DWORD PTR [eax]
1005a200:	73 20                	jae    0x1005a222
1005a202:	83 c2 16             	add    edx,0x16
1005a205:	89 51 48             	mov    DWORD PTR [ecx+0x48],edx
1005a208:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a20b:	83 c0 02             	add    eax,0x2
1005a20e:	c7 41 50 28 00 00 00 	mov    DWORD PTR [ecx+0x50],0x28
1005a215:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1005a218:	c7 41 54 0e 00 00 00 	mov    DWORD PTR [ecx+0x54],0xe
1005a21f:	c2 04 00             	ret    0x4
1005a222:	83 c2 24             	add    edx,0x24
1005a225:	89 51 48             	mov    DWORD PTR [ecx+0x48],edx
1005a228:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a22b:	83 c0 03             	add    eax,0x3
1005a22e:	c7 41 50 3f 00 00 00 	mov    DWORD PTR [ecx+0x50],0x3f
1005a235:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1005a238:	c7 41 54 16 00 00 00 	mov    DWORD PTR [ecx+0x54],0x16
1005a23f:	c2 04 00             	ret    0x4
1005a242:	90                   	nop
1005a243:	90                   	nop
1005a244:	90                   	nop
1005a245:	90                   	nop
1005a246:	90                   	nop
1005a247:	90                   	nop
1005a248:	90                   	nop
1005a249:	90                   	nop
1005a24a:	90                   	nop
1005a24b:	90                   	nop
1005a24c:	90                   	nop
1005a24d:	90                   	nop
1005a24e:	90                   	nop
1005a24f:	90                   	nop
1005a250:	56                   	push   esi
1005a251:	8b f1                	mov    esi,ecx
1005a253:	57                   	push   edi
1005a254:	8d 7e 38             	lea    edi,[esi+0x38]
1005a257:	8b cf                	mov    ecx,edi
1005a259:	e8 72 69 02 00       	call   0x10080bd0
1005a25e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1005a262:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1005a265:	8b 10                	mov    edx,DWORD PTR [eax]
1005a267:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
1005a26c:	51                   	push   ecx
1005a26d:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a273:	0d ff ff ff 00       	or     eax,0xffffff
1005a278:	52                   	push   edx
1005a279:	50                   	push   eax
1005a27a:	6a 00                	push   0x0
1005a27c:	68 ec d2 11 10       	push   0x1011d2ec
1005a281:	e8 6a 12 ff ff       	call   0x1004b4f0
1005a286:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
1005a28c:	83 c6 48             	add    esi,0x48
1005a28f:	c1 e9 18             	shr    ecx,0x18
1005a292:	51                   	push   ecx
1005a293:	56                   	push   esi
1005a294:	8b cf                	mov    ecx,edi
1005a296:	e8 55 6a 02 00       	call   0x10080cf0
1005a29b:	5f                   	pop    edi
1005a29c:	5e                   	pop    esi
1005a29d:	c2 08 00             	ret    0x8
1005a2a0:	33 c0                	xor    eax,eax
1005a2a2:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
1005a2a5:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
1005a2a8:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
1005a2ab:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
1005a2ae:	c3                   	ret
1005a2af:	90                   	nop
1005a2b0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005a2b4:	8b 0d d0 d0 11 10    	mov    ecx,DWORD PTR ds:0x1011d0d0
1005a2ba:	89 08                	mov    DWORD PTR [eax],ecx
1005a2bc:	8b 15 d4 d0 11 10    	mov    edx,DWORD PTR ds:0x1011d0d4
1005a2c2:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1005a2c5:	c2 04 00             	ret    0x4
1005a2c8:	90                   	nop
1005a2c9:	90                   	nop
1005a2ca:	90                   	nop
1005a2cb:	90                   	nop
1005a2cc:	90                   	nop
1005a2cd:	90                   	nop
1005a2ce:	90                   	nop
1005a2cf:	90                   	nop
1005a2d0:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1005a2d5:	56                   	push   esi
1005a2d6:	3d 00 04 00 00       	cmp    eax,0x400
1005a2db:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1005a2df:	8b 10                	mov    edx,DWORD PTR [eax]
1005a2e1:	73 3d                	jae    0x1005a320
1005a2e3:	83 c2 03             	add    edx,0x3
1005a2e6:	89 51 48             	mov    DWORD PTR [ecx+0x48],edx
1005a2e9:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1005a2ec:	83 c2 02             	add    edx,0x2
1005a2ef:	c7 41 54 0e 00 00 00 	mov    DWORD PTR [ecx+0x54],0xe
1005a2f6:	89 51 4c             	mov    DWORD PTR [ecx+0x4c],edx
1005a2f9:	ba 6d 00 00 00       	mov    edx,0x6d
1005a2fe:	89 51 50             	mov    DWORD PTR [ecx+0x50],edx
1005a301:	8b 30                	mov    esi,DWORD PTR [eax]
1005a303:	83 c6 03             	add    esi,0x3
1005a306:	89 71 58             	mov    DWORD PTR [ecx+0x58],esi
1005a309:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a30c:	83 c0 10             	add    eax,0x10
1005a30f:	89 51 60             	mov    DWORD PTR [ecx+0x60],edx
1005a312:	89 41 5c             	mov    DWORD PTR [ecx+0x5c],eax
1005a315:	c7 41 64 0a 00 00 00 	mov    DWORD PTR [ecx+0x64],0xa
1005a31c:	5e                   	pop    esi
1005a31d:	c2 04 00             	ret    0x4
1005a320:	83 c2 03             	add    edx,0x3
1005a323:	89 51 48             	mov    DWORD PTR [ecx+0x48],edx
1005a326:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1005a329:	83 c2 04             	add    edx,0x4
1005a32c:	c7 41 54 16 00 00 00 	mov    DWORD PTR [ecx+0x54],0x16
1005a333:	89 51 4c             	mov    DWORD PTR [ecx+0x4c],edx
1005a336:	ba b0 00 00 00       	mov    edx,0xb0
1005a33b:	89 51 50             	mov    DWORD PTR [ecx+0x50],edx
1005a33e:	8b 30                	mov    esi,DWORD PTR [eax]
1005a340:	83 c6 03             	add    esi,0x3
1005a343:	89 71 58             	mov    DWORD PTR [ecx+0x58],esi
1005a346:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a349:	83 c0 1a             	add    eax,0x1a
1005a34c:	89 51 60             	mov    DWORD PTR [ecx+0x60],edx
1005a34f:	89 41 5c             	mov    DWORD PTR [ecx+0x5c],eax
1005a352:	c7 41 64 10 00 00 00 	mov    DWORD PTR [ecx+0x64],0x10
1005a359:	5e                   	pop    esi
1005a35a:	c2 04 00             	ret    0x4
1005a35d:	90                   	nop
1005a35e:	90                   	nop
1005a35f:	90                   	nop
1005a360:	83 ec 18             	sub    esp,0x18
1005a363:	53                   	push   ebx
1005a364:	55                   	push   ebp
1005a365:	56                   	push   esi
1005a366:	8b f1                	mov    esi,ecx
1005a368:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005a36e:	57                   	push   edi
1005a36f:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
1005a373:	8b 01                	mov    eax,DWORD PTR [ecx]
1005a375:	ff 90 dc 00 00 00    	call   DWORD PTR [eax+0xdc]
1005a37b:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
1005a37e:	8d 7e 40             	lea    edi,[esi+0x40]
1005a381:	d8 0d 44 a1 0b 10    	fmul   DWORD PTR ds:0x100ba144
1005a387:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1005a38b:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1005a38f:	d8 27                	fsub   DWORD PTR [edi]
1005a391:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1005a395:	d8 15 c0 83 0b 10    	fcom   DWORD PTR ds:0x100b83c0
1005a39b:	df e0                	fnstsw ax
1005a39d:	f6 c4 01             	test   ah,0x1
1005a3a0:	74 06                	je     0x1005a3a8
1005a3a2:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1005a3a6:	eb 0a                	jmp    0x1005a3b2
1005a3a8:	dd d8                	fstp   st(0)
1005a3aa:	c7 44 24 10 00 00 80 	mov    DWORD PTR [esp+0x10],0x3f800000
1005a3b1:	3f 
1005a3b2:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1005a3b6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1005a3ba:	52                   	push   edx
1005a3bb:	6a 00                	push   0x0
1005a3bd:	8d 4c 24 20          	lea    ecx,[esp+0x20]
1005a3c1:	50                   	push   eax
1005a3c2:	51                   	push   ecx
1005a3c3:	57                   	push   edi
1005a3c4:	e8 57 6f fb ff       	call   0x10011320
1005a3c9:	db 05 ec d0 11 10    	fild   DWORD PTR ds:0x1011d0ec
1005a3cf:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
1005a3d3:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
1005a3d9:	83 c4 14             	add    esp,0x14
1005a3dc:	81 c9 ff ff ff 00    	or     ecx,0xffffff
1005a3e2:	dc c0                	fadd   st(0),st
1005a3e4:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1005a3e7:	8b 00                	mov    eax,DWORD PTR [eax]
1005a3e9:	52                   	push   edx
1005a3ea:	50                   	push   eax
1005a3eb:	d9 c0                	fld    st(0)
1005a3ed:	d8 0f                	fmul   DWORD PTR [edi]
1005a3ef:	51                   	push   ecx
1005a3f0:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a3f6:	6a 00                	push   0x0
1005a3f8:	68 bc d0 11 10       	push   0x1011d0bc
1005a3fd:	d8 0d f4 85 0b 10    	fmul   DWORD PTR ds:0x100b85f4
1005a403:	d9 c9                	fxch   st(1)
1005a405:	d8 0d bc 88 0b 10    	fmul   DWORD PTR ds:0x100b88bc
1005a40b:	de c1                	faddp  st(1),st
1005a40d:	db 46 50             	fild   DWORD PTR [esi+0x50]
1005a410:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1005a416:	de e9                	fsubp  st(1),st
1005a418:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1005a41c:	e8 cf 10 ff ff       	call   0x1004b4f0
1005a421:	8b 56 4c             	mov    edx,DWORD PTR [esi+0x4c]
1005a424:	8b 7e 48             	mov    edi,DWORD PTR [esi+0x48]
1005a427:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1005a42b:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1005a42f:	e8 00 9a 04 00       	call   0x100a3e34
1005a434:	8b 0d ec d0 11 10    	mov    ecx,DWORD PTR ds:0x1011d0ec
1005a43a:	8b 15 f0 d0 11 10    	mov    edx,DWORD PTR ds:0x1011d0f0
1005a440:	85 c0                	test   eax,eax
1005a442:	c7 44 24 20 d8 d0 11 	mov    DWORD PTR [esp+0x20],0x1011d0d8
1005a449:	10 
1005a44a:	c7 44 24 24 f4 d0 11 	mov    DWORD PTR [esp+0x24],0x1011d0f4
1005a451:	10 
1005a452:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
1005a456:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1005a45a:	7d 0c                	jge    0x1005a468
1005a45c:	f7 d8                	neg    eax
1005a45e:	99                   	cdq
1005a45f:	8d 2c 09             	lea    ebp,[ecx+ecx*1]
1005a462:	f7 fd                	idiv   ebp
1005a464:	2b ea                	sub    ebp,edx
1005a466:	eb 08                	jmp    0x1005a470
1005a468:	99                   	cdq
1005a469:	8d 1c 09             	lea    ebx,[ecx+ecx*1]
1005a46c:	f7 fb                	idiv   ebx
1005a46e:	8b ea                	mov    ebp,edx
1005a470:	8b c5                	mov    eax,ebp
1005a472:	99                   	cdq
1005a473:	f7 f9                	idiv   ecx
1005a475:	8b d8                	mov    ebx,eax
1005a477:	8b c5                	mov    eax,ebp
1005a479:	99                   	cdq
1005a47a:	f7 f9                	idiv   ecx
1005a47c:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
1005a47f:	83 e3 01             	and    ebx,0x1
1005a482:	8d 6c 07 ff          	lea    ebp,[edi+eax*1-0x1]
1005a486:	3b fd                	cmp    edi,ebp
1005a488:	7f 5e                	jg     0x1005a4e8
1005a48a:	eb 04                	jmp    0x1005a490
1005a48c:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1005a490:	8b f1                	mov    esi,ecx
1005a492:	2b f2                	sub    esi,edx
1005a494:	8d 04 3e             	lea    eax,[esi+edi*1]
1005a497:	3b c5                	cmp    eax,ebp
1005a499:	7e 05                	jle    0x1005a4a0
1005a49b:	8b f5                	mov    esi,ebp
1005a49d:	2b f7                	sub    esi,edi
1005a49f:	46                   	inc    esi
1005a4a0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1005a4a4:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1005a4a8:	51                   	push   ecx
1005a4a9:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
1005a4af:	56                   	push   esi
1005a4b0:	50                   	push   eax
1005a4b1:	57                   	push   edi
1005a4b2:	6a 00                	push   0x0
1005a4b4:	81 c9 ff ff ff 00    	or     ecx,0xffffff
1005a4ba:	52                   	push   edx
1005a4bb:	8b 54 9c 38          	mov    edx,DWORD PTR [esp+ebx*4+0x38]
1005a4bf:	51                   	push   ecx
1005a4c0:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a4c6:	6a 00                	push   0x0
1005a4c8:	52                   	push   edx
1005a4c9:	e8 02 0b ff ff       	call   0x1004afd0
1005a4ce:	33 d2                	xor    edx,edx
1005a4d0:	03 fe                	add    edi,esi
1005a4d2:	43                   	inc    ebx
1005a4d3:	81 e3 01 00 00 80    	and    ebx,0x80000001
1005a4d9:	79 05                	jns    0x1005a4e0
1005a4db:	4b                   	dec    ebx
1005a4dc:	83 cb fe             	or     ebx,0xfffffffe
1005a4df:	43                   	inc    ebx
1005a4e0:	3b fd                	cmp    edi,ebp
1005a4e2:	7e a8                	jle    0x1005a48c
1005a4e4:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
1005a4e8:	8b ce                	mov    ecx,esi
1005a4ea:	e8 11 01 00 00       	call   0x1005a600
1005a4ef:	5f                   	pop    edi
1005a4f0:	5e                   	pop    esi
1005a4f1:	5d                   	pop    ebp
1005a4f2:	5b                   	pop    ebx
1005a4f3:	83 c4 18             	add    esp,0x18
1005a4f6:	c2 08 00             	ret    0x8
1005a4f9:	90                   	nop
1005a4fa:	90                   	nop
1005a4fb:	90                   	nop
1005a4fc:	90                   	nop
1005a4fd:	90                   	nop
1005a4fe:	90                   	nop
1005a4ff:	90                   	nop
1005a500:	51                   	push   ecx
1005a501:	53                   	push   ebx
1005a502:	56                   	push   esi
1005a503:	57                   	push   edi
1005a504:	8b f9                	mov    edi,ecx
1005a506:	8b 5f 50             	mov    ebx,DWORD PTR [edi+0x50]
1005a509:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
1005a50d:	db 44 24 0c          	fild   DWORD PTR [esp+0xc]
1005a511:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1005a515:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1005a519:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1005a51d:	d9 f3                	fpatan
1005a51f:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1005a525:	d8 67 40             	fsub   DWORD PTR [edi+0x40]
1005a528:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
1005a52c:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1005a530:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1005a536:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1005a53a:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1005a540:	de c1                	faddp  st(1),st
1005a542:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1005a546:	e8 8f a9 04 00       	call   0x100a4eda
1005a54b:	d9 c0                	fld    st(0)
1005a54d:	e8 e2 98 04 00       	call   0x100a3e34
1005a552:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1005a558:	8b f0                	mov    esi,eax
1005a55a:	df e0                	fnstsw ax
1005a55c:	f6 c4 01             	test   ah,0x1
1005a55f:	74 04                	je     0x1005a565
1005a561:	8b c3                	mov    eax,ebx
1005a563:	eb 02                	jmp    0x1005a567
1005a565:	33 c0                	xor    eax,eax
1005a567:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1005a56b:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1005a571:	8b 4f 48             	mov    ecx,DWORD PTR [edi+0x48]
1005a574:	c7 44 24 18 68 01 00 	mov    DWORD PTR [esp+0x18],0x168
1005a57b:	00 
1005a57c:	03 c8                	add    ecx,eax
1005a57e:	03 f1                	add    esi,ecx
1005a580:	df e0                	fnstsw ax
1005a582:	f6 c4 01             	test   ah,0x1
1005a585:	75 08                	jne    0x1005a58f
1005a587:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1005a58e:	00 
1005a58f:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1005a593:	dd 05 e0 85 0b 10    	fld    QWORD PTR ds:0x100b85e0
1005a599:	e8 3c a9 04 00       	call   0x100a4eda
1005a59e:	da 44 24 18          	fiadd  DWORD PTR [esp+0x18]
1005a5a2:	d8 15 98 89 0b 10    	fcom   DWORD PTR ds:0x100b8998
1005a5a8:	df e0                	fnstsw ax
1005a5aa:	d8 15 20 85 0b 10    	fcom   DWORD PTR ds:0x100b8520
1005a5b0:	f6 c4 01             	test   ah,0x1
1005a5b3:	df e0                	fnstsw ax
1005a5b5:	74 12                	je     0x1005a5c9
1005a5b7:	f6 c4 01             	test   ah,0x1
1005a5ba:	75 12                	jne    0x1005a5ce
1005a5bc:	2b f3                	sub    esi,ebx
1005a5be:	5f                   	pop    edi
1005a5bf:	8b c6                	mov    eax,esi
1005a5c1:	5e                   	pop    esi
1005a5c2:	dd d8                	fstp   st(0)
1005a5c4:	5b                   	pop    ebx
1005a5c5:	59                   	pop    ecx
1005a5c6:	c2 08 00             	ret    0x8
1005a5c9:	f6 c4 01             	test   ah,0x1
1005a5cc:	74 18                	je     0x1005a5e6
1005a5ce:	d8 1d f8 85 0b 10    	fcomp  DWORD PTR ds:0x100b85f8
1005a5d4:	df e0                	fnstsw ax
1005a5d6:	f6 c4 41             	test   ah,0x41
1005a5d9:	75 0d                	jne    0x1005a5e8
1005a5db:	03 f3                	add    esi,ebx
1005a5dd:	5f                   	pop    edi
1005a5de:	8b c6                	mov    eax,esi
1005a5e0:	5e                   	pop    esi
1005a5e1:	5b                   	pop    ebx
1005a5e2:	59                   	pop    ecx
1005a5e3:	c2 08 00             	ret    0x8
1005a5e6:	dd d8                	fstp   st(0)
1005a5e8:	8b c6                	mov    eax,esi
1005a5ea:	5f                   	pop    edi
1005a5eb:	5e                   	pop    esi
1005a5ec:	5b                   	pop    ebx
1005a5ed:	59                   	pop    ecx
1005a5ee:	c2 08 00             	ret    0x8
1005a5f1:	90                   	nop
1005a5f2:	90                   	nop
1005a5f3:	90                   	nop
1005a5f4:	90                   	nop
1005a5f5:	90                   	nop
1005a5f6:	90                   	nop
1005a5f7:	90                   	nop
1005a5f8:	90                   	nop
1005a5f9:	90                   	nop
1005a5fa:	90                   	nop
1005a5fb:	90                   	nop
1005a5fc:	90                   	nop
1005a5fd:	90                   	nop
1005a5fe:	90                   	nop
1005a5ff:	90                   	nop
1005a600:	83 ec 30             	sub    esp,0x30
1005a603:	53                   	push   ebx
1005a604:	8b d9                	mov    ebx,ecx
1005a606:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005a60c:	55                   	push   ebp
1005a60d:	8b 01                	mov    eax,DWORD PTR [ecx]
1005a60f:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1005a615:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1005a61b:	33 ed                	xor    ebp,ebp
1005a61d:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1005a621:	8b 89 c8 81 01 00    	mov    ecx,DWORD PTR [ecx+0x181c8]
1005a627:	3b cd                	cmp    ecx,ebp
1005a629:	0f 84 90 01 00 00    	je     0x1005a7bf
1005a62f:	8b 11                	mov    edx,DWORD PTR [ecx]
1005a631:	56                   	push   esi
1005a632:	8d 44 24 30          	lea    eax,[esp+0x30]
1005a636:	57                   	push   edi
1005a637:	50                   	push   eax
1005a638:	ff 52 48             	call   DWORD PTR [edx+0x48]
1005a63b:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005a641:	6a 30                	push   0x30
1005a643:	c6 44 24 17 00       	mov    BYTE PTR [esp+0x17],0x0
1005a648:	e8 c3 2b ff ff       	call   0x1004d210
1005a64d:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1005a651:	d8 5b 3c             	fcomp  DWORD PTR [ebx+0x3c]
1005a654:	8b f0                	mov    esi,eax
1005a656:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
1005a65a:	df e0                	fnstsw ax
1005a65c:	f6 c4 01             	test   ah,0x1
1005a65f:	75 1a                	jne    0x1005a67b
1005a661:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1005a665:	8b 43 38             	mov    eax,DWORD PTR [ebx+0x38]
1005a668:	33 c9                	xor    ecx,ecx
1005a66a:	d8 05 cc 83 0b 10    	fadd   DWORD PTR ds:0x100b83cc
1005a670:	3b c5                	cmp    eax,ebp
1005a672:	0f 94 c1             	sete   cl
1005a675:	89 4b 38             	mov    DWORD PTR [ebx+0x38],ecx
1005a678:	d9 5b 3c             	fstp   DWORD PTR [ebx+0x3c]
1005a67b:	8b 3d 54 3b 0d 10    	mov    edi,DWORD PTR ds:0x100d3b54
1005a681:	33 c0                	xor    eax,eax
1005a683:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1005a687:	89 7c 24 30          	mov    DWORD PTR [esp+0x30],edi
1005a68b:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1005a68f:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
1005a693:	f6 47 0c 01          	test   BYTE PTR [edi+0xc],0x1
1005a697:	0f 84 0b 01 00 00    	je     0x1005a7a8
1005a69d:	83 f8 09             	cmp    eax,0x9
1005a6a0:	7d 13                	jge    0x1005a6b5
1005a6a2:	8d 54 24 12          	lea    edx,[esp+0x12]
1005a6a6:	6a 0a                	push   0xa
1005a6a8:	40                   	inc    eax
1005a6a9:	52                   	push   edx
1005a6aa:	50                   	push   eax
1005a6ab:	e8 a1 b3 04 00       	call   0x100a5a51
1005a6b0:	83 c4 0c             	add    esp,0xc
1005a6b3:	eb 05                	jmp    0x1005a6ba
1005a6b5:	c6 44 24 12 2a       	mov    BYTE PTR [esp+0x12],0x2a
1005a6ba:	d9 07                	fld    DWORD PTR [edi]
1005a6bc:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
1005a6c0:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1005a6c4:	d9 47 08             	fld    DWORD PTR [edi+0x8]
1005a6c7:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
1005a6cb:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
1005a6cf:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1005a6d3:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1005a6d7:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1005a6db:	de c1                	faddp  st(1),st
1005a6dd:	d8 1d 48 a1 0b 10    	fcomp  DWORD PTR ds:0x100ba148
1005a6e3:	df e0                	fnstsw ax
1005a6e5:	f6 c4 41             	test   ah,0x41
1005a6e8:	74 0f                	je     0x1005a6f9
1005a6ea:	8b 43 38             	mov    eax,DWORD PTR [ebx+0x38]
1005a6ed:	c7 44 24 28 00 00 ff 	mov    DWORD PTR [esp+0x28],0xffff0000
1005a6f4:	ff 
1005a6f5:	85 c0                	test   eax,eax
1005a6f7:	75 08                	jne    0x1005a701
1005a6f9:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
1005a700:	ff 
1005a701:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1005a705:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1005a709:	50                   	push   eax
1005a70a:	51                   	push   ecx
1005a70b:	8b cb                	mov    ecx,ebx
1005a70d:	e8 ee fd ff ff       	call   0x1005a500
1005a712:	8b c8                	mov    ecx,eax
1005a714:	8b c6                	mov    eax,esi
1005a716:	8b 6b 58             	mov    ebp,DWORD PTR [ebx+0x58]
1005a719:	99                   	cdq
1005a71a:	2b c2                	sub    eax,edx
1005a71c:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1005a720:	8b f8                	mov    edi,eax
1005a722:	8b c1                	mov    eax,ecx
1005a724:	d1 ff                	sar    edi,1
1005a726:	03 d5                	add    edx,ebp
1005a728:	2b c7                	sub    eax,edi
1005a72a:	3b c2                	cmp    eax,edx
1005a72c:	7f 11                	jg     0x1005a73f
1005a72e:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1005a732:	8d 0c 38             	lea    ecx,[eax+edi*1]
1005a735:	03 cd                	add    ecx,ebp
1005a737:	03 c6                	add    eax,esi
1005a739:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1005a73d:	eb 37                	jmp    0x1005a776
1005a73f:	8b 73 60             	mov    esi,DWORD PTR [ebx+0x60]
1005a742:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1005a746:	8b d6                	mov    edx,esi
1005a748:	2b d0                	sub    edx,eax
1005a74a:	8d 04 0f             	lea    eax,[edi+ecx*1]
1005a74d:	03 d5                	add    edx,ebp
1005a74f:	3b c2                	cmp    eax,edx
1005a751:	7c 1f                	jl     0x1005a772
1005a753:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1005a757:	99                   	cdq
1005a758:	2b c2                	sub    eax,edx
1005a75a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1005a75e:	d1 f8                	sar    eax,1
1005a760:	2b f0                	sub    esi,eax
1005a762:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1005a766:	2b f0                	sub    esi,eax
1005a768:	03 f5                	add    esi,ebp
1005a76a:	03 c2                	add    eax,edx
1005a76c:	8b ce                	mov    ecx,esi
1005a76e:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1005a772:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1005a776:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1005a77a:	8b 43 64             	mov    eax,DWORD PTR [ebx+0x64]
1005a77d:	6a 05                	push   0x5
1005a77f:	52                   	push   edx
1005a780:	8b 53 5c             	mov    edx,DWORD PTR [ebx+0x5c]
1005a783:	50                   	push   eax
1005a784:	56                   	push   esi
1005a785:	2b cf                	sub    ecx,edi
1005a787:	52                   	push   edx
1005a788:	51                   	push   ecx
1005a789:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005a78f:	8d 44 24 2a          	lea    eax,[esp+0x2a]
1005a793:	50                   	push   eax
1005a794:	51                   	push   ecx
1005a795:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a79b:	e8 60 f9 fe ff       	call   0x1004a100
1005a7a0:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1005a7a4:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
1005a7a8:	40                   	inc    eax
1005a7a9:	83 c7 14             	add    edi,0x14
1005a7ac:	83 f8 04             	cmp    eax,0x4
1005a7af:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1005a7b3:	89 7c 24 30          	mov    DWORD PTR [esp+0x30],edi
1005a7b7:	0f 8c d6 fe ff ff    	jl     0x1005a693
1005a7bd:	5f                   	pop    edi
1005a7be:	5e                   	pop    esi
1005a7bf:	5d                   	pop    ebp
1005a7c0:	5b                   	pop    ebx
1005a7c1:	83 c4 30             	add    esp,0x30
1005a7c4:	c3                   	ret
1005a7c5:	90                   	nop
1005a7c6:	90                   	nop
1005a7c7:	90                   	nop
1005a7c8:	90                   	nop
1005a7c9:	90                   	nop
1005a7ca:	90                   	nop
1005a7cb:	90                   	nop
1005a7cc:	90                   	nop
1005a7cd:	90                   	nop
1005a7ce:	90                   	nop
1005a7cf:	90                   	nop
1005a7d0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005a7d4:	8b 0d b8 cf 11 10    	mov    ecx,DWORD PTR ds:0x1011cfb8
1005a7da:	89 08                	mov    DWORD PTR [eax],ecx
1005a7dc:	8b 15 bc cf 11 10    	mov    edx,DWORD PTR ds:0x1011cfbc
1005a7e2:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1005a7e5:	c2 04 00             	ret    0x4
1005a7e8:	90                   	nop
1005a7e9:	90                   	nop
1005a7ea:	90                   	nop
1005a7eb:	90                   	nop
1005a7ec:	90                   	nop
1005a7ed:	90                   	nop
1005a7ee:	90                   	nop
1005a7ef:	90                   	nop
1005a7f0:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1005a7f5:	3d 00 04 00 00       	cmp    eax,0x400
1005a7fa:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005a7fe:	8b 10                	mov    edx,DWORD PTR [eax]
1005a800:	73 19                	jae    0x1005a81b
1005a802:	83 c2 35             	add    edx,0x35
1005a805:	89 51 38             	mov    DWORD PTR [ecx+0x38],edx
1005a808:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a80b:	83 c0 32             	add    eax,0x32
1005a80e:	c7 41 40 00 00 10 42 	mov    DWORD PTR [ecx+0x40],0x42100000
1005a815:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
1005a818:	c2 04 00             	ret    0x4
1005a81b:	83 c2 56             	add    edx,0x56
1005a81e:	89 51 38             	mov    DWORD PTR [ecx+0x38],edx
1005a821:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005a824:	83 c0 50             	add    eax,0x50
1005a827:	c7 41 40 00 00 64 42 	mov    DWORD PTR [ecx+0x40],0x42640000
1005a82e:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
1005a831:	c2 04 00             	ret    0x4
1005a834:	90                   	nop
1005a835:	90                   	nop
1005a836:	90                   	nop
1005a837:	90                   	nop
1005a838:	90                   	nop
1005a839:	90                   	nop
1005a83a:	90                   	nop
1005a83b:	90                   	nop
1005a83c:	90                   	nop
1005a83d:	90                   	nop
1005a83e:	90                   	nop
1005a83f:	90                   	nop
1005a840:	a1 68 44 12 10       	mov    eax,ds:0x10124468
1005a845:	56                   	push   esi
1005a846:	57                   	push   edi
1005a847:	8b f9                	mov    edi,ecx
1005a849:	83 3c c5 3c 43 12 10 	cmp    DWORD PTR [eax*8+0x1012433c],0x2
1005a850:	02 
1005a851:	74 04                	je     0x1005a857
1005a853:	33 c0                	xor    eax,eax
1005a855:	eb 07                	jmp    0x1005a85e
1005a857:	8b 04 c5 40 43 12 10 	mov    eax,DWORD PTR [eax*8+0x10124340]
1005a85e:	8d 04 80             	lea    eax,[eax+eax*4]
1005a861:	8d 34 85 90 e2 0d 10 	lea    esi,[eax*4+0x100de290]
1005a868:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1005a86c:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1005a86f:	8b 10                	mov    edx,DWORD PTR [eax]
1005a871:	8b 06                	mov    eax,DWORD PTR [esi]
1005a873:	51                   	push   ecx
1005a874:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005a87a:	52                   	push   edx
1005a87b:	6a ff                	push   0xffffffff
1005a87d:	6a 00                	push   0x0
1005a87f:	50                   	push   eax
1005a880:	e8 6b 0c ff ff       	call   0x1004b4f0
1005a885:	8b cf                	mov    ecx,edi
1005a887:	e8 04 01 00 00       	call   0x1005a990
1005a88c:	f6 46 04 07          	test   BYTE PTR [esi+0x4],0x7
1005a890:	74 0d                	je     0x1005a89f
1005a892:	68 70 44 12 10       	push   0x10124470
1005a897:	56                   	push   esi
1005a898:	8b cf                	mov    ecx,edi
1005a89a:	e8 d1 01 00 00       	call   0x1005aa70
1005a89f:	f6 46 04 08          	test   BYTE PTR [esi+0x4],0x8
1005a8a3:	74 0b                	je     0x1005a8b0
1005a8a5:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1005a8a8:	51                   	push   ecx
1005a8a9:	8b cf                	mov    ecx,edi
1005a8ab:	e8 d0 02 00 00       	call   0x1005ab80
1005a8b0:	5f                   	pop    edi
1005a8b1:	5e                   	pop    esi
1005a8b2:	c2 08 00             	ret    0x8
1005a8b5:	90                   	nop
1005a8b6:	90                   	nop
1005a8b7:	90                   	nop
1005a8b8:	90                   	nop
1005a8b9:	90                   	nop
1005a8ba:	90                   	nop
1005a8bb:	90                   	nop
1005a8bc:	90                   	nop
1005a8bd:	90                   	nop
1005a8be:	90                   	nop
1005a8bf:	90                   	nop
1005a8c0:	51                   	push   ecx
1005a8c1:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1005a8c5:	d9 fe                	fsin
1005a8c7:	56                   	push   esi
1005a8c8:	57                   	push   edi
1005a8c9:	8b f1                	mov    esi,ecx
1005a8cb:	bf 01 00 00 00       	mov    edi,0x1
1005a8d0:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
1005a8d4:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1005a8d8:	d9 ff                	fcos
1005a8da:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1005a8de:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1005a8e2:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1005a8e6:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1005a8ea:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1005a8ee:	de c1                	faddp  st(1),st
1005a8f0:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1005a8f4:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1005a8f8:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1005a8fc:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1005a900:	de e9                	fsubp  st(1),st
1005a902:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
1005a906:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1005a90a:	d9 c1                	fld    st(1)
1005a90c:	d8 ca                	fmul   st,st(2)
1005a90e:	de c1                	faddp  st(1),st
1005a910:	d9 fa                	fsqrt
1005a912:	d9 54 24 08          	fst    DWORD PTR [esp+0x8]
1005a916:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1005a91c:	df e0                	fnstsw ax
1005a91e:	f6 c4 40             	test   ah,0x40
1005a921:	75 3e                	jne    0x1005a961
1005a923:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1005a929:	d8 74 24 08          	fdiv   DWORD PTR [esp+0x8]
1005a92d:	d9 46 40             	fld    DWORD PTR [esi+0x40]
1005a930:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
1005a934:	d8 4c 24 08          	fmul   DWORD PTR [esp+0x8]
1005a938:	d8 56 40             	fcom   DWORD PTR [esi+0x40]
1005a93b:	df e0                	fnstsw ax
1005a93d:	f6 c4 41             	test   ah,0x41
1005a940:	75 07                	jne    0x1005a949
1005a942:	dd d8                	fstp   st(0)
1005a944:	d9 46 40             	fld    DWORD PTR [esi+0x40]
1005a947:	33 ff                	xor    edi,edi
1005a949:	d9 ca                	fxch   st(2)
1005a94b:	d8 c9                	fmul   st,st(1)
1005a94d:	d8 ca                	fmul   st,st(2)
1005a94f:	d9 ca                	fxch   st(2)
1005a951:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1005a955:	d8 ca                	fmul   st,st(2)
1005a957:	d8 c9                	fmul   st,st(1)
1005a959:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1005a95d:	dd d8                	fstp   st(0)
1005a95f:	dd d8                	fstp   st(0)
1005a961:	e8 ce 94 04 00       	call   0x100a3e34
1005a966:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1005a969:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1005a96d:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1005a971:	03 c8                	add    ecx,eax
1005a973:	89 0a                	mov    DWORD PTR [edx],ecx
1005a975:	e8 ba 94 04 00       	call   0x100a3e34
1005a97a:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
1005a97d:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1005a981:	03 c8                	add    ecx,eax
1005a983:	8b c7                	mov    eax,edi
1005a985:	5f                   	pop    edi
1005a986:	89 0a                	mov    DWORD PTR [edx],ecx
1005a988:	5e                   	pop    esi
1005a989:	59                   	pop    ecx
1005a98a:	c2 18 00             	ret    0x18
1005a98d:	90                   	nop
1005a98e:	90                   	nop
1005a98f:	90                   	nop
1005a990:	83 ec 20             	sub    esp,0x20
1005a993:	53                   	push   ebx
1005a994:	55                   	push   ebp
1005a995:	56                   	push   esi
1005a996:	57                   	push   edi
1005a997:	8b f9                	mov    edi,ecx
1005a999:	c7 44 24 20 fc b3 0d 	mov    DWORD PTR [esp+0x20],0x100db3fc
1005a9a0:	10 
1005a9a1:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005a9a7:	c7 44 24 24 f8 b3 0d 	mov    DWORD PTR [esp+0x24],0x100db3f8
1005a9ae:	10 
1005a9af:	c7 44 24 28 f4 b3 0d 	mov    DWORD PTR [esp+0x28],0x100db3f4
1005a9b6:	10 
1005a9b7:	c7 44 24 2c f0 b3 0d 	mov    DWORD PTR [esp+0x2c],0x100db3f0
1005a9be:	10 
1005a9bf:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1005a9c3:	e8 a8 28 ff ff       	call   0x1004d270
1005a9c8:	99                   	cdq
1005a9c9:	2b c2                	sub    eax,edx
1005a9cb:	8d 5c 24 20          	lea    ebx,[esp+0x20]
1005a9cf:	8b f0                	mov    esi,eax
1005a9d1:	d1 fe                	sar    esi,1
1005a9d3:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
1005a9d7:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
1005a9db:	8d 2c 36             	lea    ebp,[esi+esi*1]
1005a9de:	c7 44 24 18 04 00 00 	mov    DWORD PTR [esp+0x18],0x4
1005a9e5:	00 
1005a9e6:	d8 47 40             	fadd   DWORD PTR [edi+0x40]
1005a9e9:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1005a9ed:	d9 47 44             	fld    DWORD PTR [edi+0x44]
1005a9f0:	d8 0d 28 85 0b 10    	fmul   DWORD PTR ds:0x100b8528
1005a9f6:	d8 2d 24 43 12 10    	fsubr  DWORD PTR ds:0x10124324
1005a9fc:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1005aa00:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1005aa04:	d9 fe                	fsin
1005aa06:	6a 05                	push   0x5
1005aa08:	6a ff                	push   0xffffffff
1005aa0a:	55                   	push   ebp
1005aa0b:	55                   	push   ebp
1005aa0c:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
1005aa10:	e8 1f 94 04 00       	call   0x100a3e34
1005aa15:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1005aa19:	d9 ff                	fcos
1005aa1b:	8b 57 3c             	mov    edx,DWORD PTR [edi+0x3c]
1005aa1e:	2b c6                	sub    eax,esi
1005aa20:	03 c2                	add    eax,edx
1005aa22:	50                   	push   eax
1005aa23:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
1005aa27:	e8 08 94 04 00       	call   0x100a3e34
1005aa2c:	8b 4f 38             	mov    ecx,DWORD PTR [edi+0x38]
1005aa2f:	2b c6                	sub    eax,esi
1005aa31:	03 c1                	add    eax,ecx
1005aa33:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1005aa37:	50                   	push   eax
1005aa38:	8b 03                	mov    eax,DWORD PTR [ebx]
1005aa3a:	50                   	push   eax
1005aa3b:	51                   	push   ecx
1005aa3c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005aa42:	e8 b9 f6 fe ff       	call   0x1004a100
1005aa47:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1005aa4b:	d8 05 48 83 0b 10    	fadd   DWORD PTR ds:0x100b8348
1005aa51:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1005aa55:	83 c3 04             	add    ebx,0x4
1005aa58:	48                   	dec    eax
1005aa59:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1005aa5d:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1005aa61:	75 9d                	jne    0x1005aa00
1005aa63:	5f                   	pop    edi
1005aa64:	5e                   	pop    esi
1005aa65:	5d                   	pop    ebp
1005aa66:	5b                   	pop    ebx
1005aa67:	83 c4 20             	add    esp,0x20
1005aa6a:	c3                   	ret
1005aa6b:	90                   	nop
1005aa6c:	90                   	nop
1005aa6d:	90                   	nop
1005aa6e:	90                   	nop
1005aa6f:	90                   	nop
1005aa70:	83 ec 10             	sub    esp,0x10
1005aa73:	53                   	push   ebx
1005aa74:	55                   	push   ebp
1005aa75:	56                   	push   esi
1005aa76:	57                   	push   edi
1005aa77:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1005aa7b:	8b f9                	mov    edi,ecx
1005aa7d:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
1005aa81:	c7 44 24 14 00 ff 00 	mov    DWORD PTR [esp+0x14],0xff00ff00
1005aa88:	ff 
1005aa89:	d9 47 44             	fld    DWORD PTR [edi+0x44]
1005aa8c:	d8 0d 50 a1 0b 10    	fmul   DWORD PTR ds:0x100ba150
1005aa92:	c7 44 24 18 00 00 ff 	mov    DWORD PTR [esp+0x18],0xffff0000
1005aa99:	ff 
1005aa9a:	c7 44 24 1c 00 ff ff 	mov    DWORD PTR [esp+0x1c],0xffffff00
1005aaa1:	ff 
1005aaa2:	8d 70 08             	lea    esi,[eax+0x8]
1005aaa5:	bb 48 00 00 00       	mov    ebx,0x48
1005aaaa:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1005aaae:	8b 46 f8             	mov    eax,DWORD PTR [esi-0x8]
1005aab1:	85 c0                	test   eax,eax
1005aab3:	0f 84 ac 00 00 00    	je     0x1005ab65
1005aab9:	d9 05 48 83 0b 10    	fld    DWORD PTR ds:0x100b8348
1005aabf:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
1005aac3:	8d 4c 24 28          	lea    ecx,[esp+0x28]
1005aac7:	8d 54 24 24          	lea    edx,[esp+0x24]
1005aacb:	51                   	push   ecx
1005aacc:	52                   	push   edx
1005aacd:	51                   	push   ecx
1005aace:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1005aad1:	d9 1c 24             	fstp   DWORD PTR [esp]
1005aad4:	d9 46 04             	fld    DWORD PTR [esi+0x4]
1005aad7:	d8 25 64 44 12 10    	fsub   DWORD PTR ds:0x10124464
1005aadd:	51                   	push   ecx
1005aade:	d9 1c 24             	fstp   DWORD PTR [esp]
1005aae1:	d9 46 fc             	fld    DWORD PTR [esi-0x4]
1005aae4:	d8 25 5c 44 12 10    	fsub   DWORD PTR ds:0x1012445c
1005aaea:	51                   	push   ecx
1005aaeb:	8b cf                	mov    ecx,edi
1005aaed:	d9 1c 24             	fstp   DWORD PTR [esp]
1005aaf0:	50                   	push   eax
1005aaf1:	e8 ca fd ff ff       	call   0x1005a8c0
1005aaf6:	d9 05 60 44 12 10    	fld    DWORD PTR ds:0x10124460
1005aafc:	d8 05 4c a1 0b 10    	fadd   DWORD PTR ds:0x100ba14c
1005ab02:	d8 1e                	fcomp  DWORD PTR [esi]
1005ab04:	df e0                	fnstsw ax
1005ab06:	f6 c4 01             	test   ah,0x1
1005ab09:	74 07                	je     0x1005ab12
1005ab0b:	b9 14 d0 11 10       	mov    ecx,0x1011d014
1005ab10:	eb 1f                	jmp    0x1005ab31
1005ab12:	d9 05 60 44 12 10    	fld    DWORD PTR ds:0x10124460
1005ab18:	d8 25 4c a1 0b 10    	fsub   DWORD PTR ds:0x100ba14c
1005ab1e:	b9 4c d0 11 10       	mov    ecx,0x1011d04c
1005ab23:	d8 1e                	fcomp  DWORD PTR [esi]
1005ab25:	df e0                	fnstsw ax
1005ab27:	f6 c4 41             	test   ah,0x41
1005ab2a:	74 05                	je     0x1005ab31
1005ab2c:	b9 30 d0 11 10       	mov    ecx,0x1011d030
1005ab31:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
1005ab34:	99                   	cdq
1005ab35:	2b c2                	sub    eax,edx
1005ab37:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1005ab3b:	d1 f8                	sar    eax,1
1005ab3d:	2b d0                	sub    edx,eax
1005ab3f:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
1005ab42:	52                   	push   edx
1005ab43:	99                   	cdq
1005ab44:	2b c2                	sub    eax,edx
1005ab46:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1005ab4a:	d1 f8                	sar    eax,1
1005ab4c:	2b d0                	sub    edx,eax
1005ab4e:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
1005ab51:	52                   	push   edx
1005ab52:	8b 54 84 1c          	mov    edx,DWORD PTR [esp+eax*4+0x1c]
1005ab56:	52                   	push   edx
1005ab57:	6a 00                	push   0x0
1005ab59:	51                   	push   ecx
1005ab5a:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005ab60:	e8 8b 09 ff ff       	call   0x1004b4f0
1005ab65:	83 c6 1c             	add    esi,0x1c
1005ab68:	4b                   	dec    ebx
1005ab69:	0f 85 3f ff ff ff    	jne    0x1005aaae
1005ab6f:	5f                   	pop    edi
1005ab70:	5e                   	pop    esi
1005ab71:	5d                   	pop    ebp
1005ab72:	5b                   	pop    ebx
1005ab73:	83 c4 10             	add    esp,0x10
1005ab76:	c2 08 00             	ret    0x8
1005ab79:	90                   	nop
1005ab7a:	90                   	nop
1005ab7b:	90                   	nop
1005ab7c:	90                   	nop
1005ab7d:	90                   	nop
1005ab7e:	90                   	nop
1005ab7f:	90                   	nop
1005ab80:	83 ec 0c             	sub    esp,0xc
1005ab83:	53                   	push   ebx
1005ab84:	55                   	push   ebp
1005ab85:	8b e9                	mov    ebp,ecx
1005ab87:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
1005ab8b:	56                   	push   esi
1005ab8c:	8b 35 54 3b 0d 10    	mov    esi,DWORD PTR ds:0x100d3b54
1005ab92:	d9 45 44             	fld    DWORD PTR [ebp+0x44]
1005ab95:	d8 0d 50 a1 0b 10    	fmul   DWORD PTR ds:0x100ba150
1005ab9b:	57                   	push   edi
1005ab9c:	c6 44 24 13 00       	mov    BYTE PTR [esp+0x13],0x0
1005aba1:	33 ff                	xor    edi,edi
1005aba3:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1005aba7:	f6 46 0c 01          	test   BYTE PTR [esi+0xc],0x1
1005abab:	0f 84 8a 00 00 00    	je     0x1005ac3b
1005abb1:	83 ff 09             	cmp    edi,0x9
1005abb4:	7d 15                	jge    0x1005abcb
1005abb6:	8d 44 24 12          	lea    eax,[esp+0x12]
1005abba:	6a 0a                	push   0xa
1005abbc:	8d 4f 01             	lea    ecx,[edi+0x1]
1005abbf:	50                   	push   eax
1005abc0:	51                   	push   ecx
1005abc1:	e8 8b ae 04 00       	call   0x100a5a51
1005abc6:	83 c4 0c             	add    esp,0xc
1005abc9:	eb 05                	jmp    0x1005abd0
1005abcb:	c6 44 24 12 2a       	mov    BYTE PTR [esp+0x12],0x2a
1005abd0:	d9 05 48 83 0b 10    	fld    DWORD PTR ds:0x100b8348
1005abd6:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
1005abda:	8d 54 24 20          	lea    edx,[esp+0x20]
1005abde:	8d 44 24 18          	lea    eax,[esp+0x18]
1005abe2:	52                   	push   edx
1005abe3:	50                   	push   eax
1005abe4:	51                   	push   ecx
1005abe5:	d9 1c 24             	fstp   DWORD PTR [esp]
1005abe8:	d9 46 08             	fld    DWORD PTR [esi+0x8]
1005abeb:	d8 25 64 44 12 10    	fsub   DWORD PTR ds:0x10124464
1005abf1:	51                   	push   ecx
1005abf2:	d9 1c 24             	fstp   DWORD PTR [esp]
1005abf5:	d9 06                	fld    DWORD PTR [esi]
1005abf7:	d8 25 5c 44 12 10    	fsub   DWORD PTR ds:0x1012445c
1005abfd:	51                   	push   ecx
1005abfe:	8b cd                	mov    ecx,ebp
1005ac00:	d9 1c 24             	fstp   DWORD PTR [esp]
1005ac03:	53                   	push   ebx
1005ac04:	e8 b7 fc ff ff       	call   0x1005a8c0
1005ac09:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1005ac0d:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1005ac11:	6a 05                	push   0x5
1005ac13:	68 ff 00 ff ff       	push   0xffff00ff
1005ac18:	6a 10                	push   0x10
1005ac1a:	83 c1 f8             	add    ecx,0xfffffff8
1005ac1d:	6a 10                	push   0x10
1005ac1f:	83 c2 f8             	add    edx,0xfffffff8
1005ac22:	51                   	push   ecx
1005ac23:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005ac29:	8d 44 24 26          	lea    eax,[esp+0x26]
1005ac2d:	52                   	push   edx
1005ac2e:	50                   	push   eax
1005ac2f:	51                   	push   ecx
1005ac30:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005ac36:	e8 c5 f4 fe ff       	call   0x1004a100
1005ac3b:	47                   	inc    edi
1005ac3c:	83 c6 14             	add    esi,0x14
1005ac3f:	83 ff 04             	cmp    edi,0x4
1005ac42:	0f 8c 5f ff ff ff    	jl     0x1005aba7
1005ac48:	5f                   	pop    edi
1005ac49:	5e                   	pop    esi
1005ac4a:	5d                   	pop    ebp
1005ac4b:	5b                   	pop    ebx
1005ac4c:	83 c4 0c             	add    esp,0xc
1005ac4f:	c2 04 00             	ret    0x4
1005ac52:	90                   	nop
1005ac53:	90                   	nop
1005ac54:	90                   	nop
1005ac55:	90                   	nop
1005ac56:	90                   	nop
1005ac57:	90                   	nop
1005ac58:	90                   	nop
1005ac59:	90                   	nop
1005ac5a:	90                   	nop
1005ac5b:	90                   	nop
1005ac5c:	90                   	nop
1005ac5d:	90                   	nop
1005ac5e:	90                   	nop
1005ac5f:	90                   	nop
1005ac60:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005ac64:	8b 0d 0c d0 11 10    	mov    ecx,DWORD PTR ds:0x1011d00c
1005ac6a:	89 08                	mov    DWORD PTR [eax],ecx
1005ac6c:	8b 15 10 d0 11 10    	mov    edx,DWORD PTR ds:0x1011d010
1005ac72:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1005ac75:	c2 04 00             	ret    0x4
1005ac78:	90                   	nop
1005ac79:	90                   	nop
1005ac7a:	90                   	nop
1005ac7b:	90                   	nop
1005ac7c:	90                   	nop
1005ac7d:	90                   	nop
1005ac7e:	90                   	nop
1005ac7f:	90                   	nop
1005ac80:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1005ac85:	3d 00 04 00 00       	cmp    eax,0x400
1005ac8a:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005ac8e:	8b 10                	mov    edx,DWORD PTR [eax]
1005ac90:	73 20                	jae    0x1005acb2
1005ac92:	83 c2 04             	add    edx,0x4
1005ac95:	89 51 38             	mov    DWORD PTR [ecx+0x38],edx
1005ac98:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005ac9b:	83 c0 02             	add    eax,0x2
1005ac9e:	c7 41 40 68 00 00 00 	mov    DWORD PTR [ecx+0x40],0x68
1005aca5:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
1005aca8:	c7 41 44 02 00 00 00 	mov    DWORD PTR [ecx+0x44],0x2
1005acaf:	c2 04 00             	ret    0x4
1005acb2:	83 c2 07             	add    edx,0x7
1005acb5:	89 51 38             	mov    DWORD PTR [ecx+0x38],edx
1005acb8:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005acbb:	83 c0 03             	add    eax,0x3
1005acbe:	c7 41 40 a4 00 00 00 	mov    DWORD PTR [ecx+0x40],0xa4
1005acc5:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
1005acc8:	c7 41 44 03 00 00 00 	mov    DWORD PTR [ecx+0x44],0x3
1005accf:	c2 04 00             	ret    0x4
1005acd2:	90                   	nop
1005acd3:	90                   	nop
1005acd4:	90                   	nop
1005acd5:	90                   	nop
1005acd6:	90                   	nop
1005acd7:	90                   	nop
1005acd8:	90                   	nop
1005acd9:	90                   	nop
1005acda:	90                   	nop
1005acdb:	90                   	nop
1005acdc:	90                   	nop
1005acdd:	90                   	nop
1005acde:	90                   	nop
1005acdf:	90                   	nop
1005ace0:	53                   	push   ebx
1005ace1:	55                   	push   ebp
1005ace2:	56                   	push   esi
1005ace3:	8b f1                	mov    esi,ecx
1005ace5:	57                   	push   edi
1005ace6:	db 46 40             	fild   DWORD PTR [esi+0x40]
1005ace9:	d8 0d 50 4c 12 10    	fmul   DWORD PTR ds:0x10124c50
1005acef:	d8 0d 98 88 0b 10    	fmul   DWORD PTR ds:0x100b8898
1005acf5:	e8 3a 91 04 00       	call   0x100a3e34
1005acfa:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1005acfe:	8b e8                	mov    ebp,eax
1005ad00:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
1005ad05:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1005ad08:	8b 09                	mov    ecx,DWORD PTR [ecx]
1005ad0a:	8b f8                	mov    edi,eax
1005ad0c:	8b d8                	mov    ebx,eax
1005ad0e:	52                   	push   edx
1005ad0f:	0d ff ff ff 00       	or     eax,0xffffff
1005ad14:	51                   	push   ecx
1005ad15:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005ad1b:	50                   	push   eax
1005ad1c:	6a 00                	push   0x0
1005ad1e:	68 f8 cf 11 10       	push   0x1011cff8
1005ad23:	81 cf 00 80 00 00    	or     edi,0x8000
1005ad29:	80 cf ff             	or     bh,0xff
1005ad2c:	e8 bf 07 ff ff       	call   0x1004b4f0
1005ad31:	8b 56 44             	mov    edx,DWORD PTR [esi+0x44]
1005ad34:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1005ad37:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1005ad3a:	53                   	push   ebx
1005ad3b:	53                   	push   ebx
1005ad3c:	57                   	push   edi
1005ad3d:	57                   	push   edi
1005ad3e:	52                   	push   edx
1005ad3f:	55                   	push   ebp
1005ad40:	50                   	push   eax
1005ad41:	51                   	push   ecx
1005ad42:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005ad48:	e8 33 ea fe ff       	call   0x10049780
1005ad4d:	5f                   	pop    edi
1005ad4e:	5e                   	pop    esi
1005ad4f:	5d                   	pop    ebp
1005ad50:	5b                   	pop    ebx
1005ad51:	c2 08 00             	ret    0x8
1005ad54:	90                   	nop
1005ad55:	90                   	nop
1005ad56:	90                   	nop
1005ad57:	90                   	nop
1005ad58:	90                   	nop
1005ad59:	90                   	nop
1005ad5a:	90                   	nop
1005ad5b:	90                   	nop
1005ad5c:	90                   	nop
1005ad5d:	90                   	nop
1005ad5e:	90                   	nop
1005ad5f:	90                   	nop
1005ad60:	6a ff                	push   0xffffffff
1005ad62:	68 31 55 0b 10       	push   0x100b5531
1005ad67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1005ad6d:	50                   	push   eax
1005ad6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1005ad75:	51                   	push   ecx
1005ad76:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1005ad7a:	53                   	push   ebx
1005ad7b:	55                   	push   ebp
1005ad7c:	56                   	push   esi
1005ad7d:	33 ed                	xor    ebp,ebp
1005ad7f:	57                   	push   edi
1005ad80:	55                   	push   ebp
1005ad81:	8b f1                	mov    esi,ecx
1005ad83:	68 20 02 00 00       	push   0x220
1005ad88:	50                   	push   eax
1005ad89:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
1005ad8d:	e8 ee 35 01 00       	call   0x1006e380
1005ad92:	55                   	push   ebp
1005ad93:	6a 20                	push   0x20
1005ad95:	8b ce                	mov    ecx,esi
1005ad97:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1005ad9b:	c7 06 d8 9f 0b 10    	mov    DWORD PTR [esi],0x100b9fd8
1005ada1:	89 6e 34             	mov    DWORD PTR [esi+0x34],ebp
1005ada4:	e8 d7 39 01 00       	call   0x1006e780
1005ada9:	8b 7e 34             	mov    edi,DWORD PTR [esi+0x34]
1005adac:	bb fe ff ff ff       	mov    ebx,0xfffffffe
1005adb1:	23 fb                	and    edi,ebx
1005adb3:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
1005adb6:	6a 68                	push   0x68
1005adb8:	c7 44 24 20 01 00 00 	mov    DWORD PTR [esp+0x20],0x1
1005adbf:	00 
1005adc0:	c7 06 bc a2 0b 10    	mov    DWORD PTR [esi],0x100ba2bc
1005adc6:	e8 5e 8b 04 00       	call   0x100a3929
1005adcb:	8b f8                	mov    edi,eax
1005adcd:	83 c4 04             	add    esp,0x4
1005add0:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1005add4:	3b fd                	cmp    edi,ebp
1005add6:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
1005addb:	74 3d                	je     0x1005ae1a
1005addd:	55                   	push   ebp
1005adde:	68 20 02 00 00       	push   0x220
1005ade3:	56                   	push   esi
1005ade4:	8b cf                	mov    ecx,edi
1005ade6:	e8 95 35 01 00       	call   0x1006e380
1005adeb:	55                   	push   ebp
1005adec:	6a 20                	push   0x20
1005adee:	8b cf                	mov    ecx,edi
1005adf0:	c6 44 24 24 03       	mov    BYTE PTR [esp+0x24],0x3
1005adf5:	c7 07 d8 9f 0b 10    	mov    DWORD PTR [edi],0x100b9fd8
1005adfb:	89 6f 34             	mov    DWORD PTR [edi+0x34],ebp
1005adfe:	e8 7d 39 01 00       	call   0x1006e780
1005ae03:	21 5f 34             	and    DWORD PTR [edi+0x34],ebx
1005ae06:	8b cf                	mov    ecx,edi
1005ae08:	c6 44 24 1c 04       	mov    BYTE PTR [esp+0x1c],0x4
1005ae0d:	c7 07 44 a2 0b 10    	mov    DWORD PTR [edi],0x100ba244
1005ae13:	e8 08 3c 01 00       	call   0x1006ea20
1005ae18:	eb 02                	jmp    0x1005ae1c
1005ae1a:	33 ff                	xor    edi,edi
1005ae1c:	6a 48                	push   0x48
1005ae1e:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
1005ae23:	89 7e 38             	mov    DWORD PTR [esi+0x38],edi
1005ae26:	e8 fe 8a 04 00       	call   0x100a3929
1005ae2b:	8b f8                	mov    edi,eax
1005ae2d:	83 c4 04             	add    esp,0x4
1005ae30:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1005ae34:	3b fd                	cmp    edi,ebp
1005ae36:	c6 44 24 1c 05       	mov    BYTE PTR [esp+0x1c],0x5
1005ae3b:	74 3d                	je     0x1005ae7a
1005ae3d:	55                   	push   ebp
1005ae3e:	68 20 02 00 00       	push   0x220
1005ae43:	56                   	push   esi
1005ae44:	8b cf                	mov    ecx,edi
1005ae46:	e8 35 35 01 00       	call   0x1006e380
1005ae4b:	55                   	push   ebp
1005ae4c:	6a 20                	push   0x20
1005ae4e:	8b cf                	mov    ecx,edi
1005ae50:	c6 44 24 24 06       	mov    BYTE PTR [esp+0x24],0x6
1005ae55:	c7 07 d8 9f 0b 10    	mov    DWORD PTR [edi],0x100b9fd8
1005ae5b:	89 6f 34             	mov    DWORD PTR [edi+0x34],ebp
1005ae5e:	e8 1d 39 01 00       	call   0x1006e780
1005ae63:	21 5f 34             	and    DWORD PTR [edi+0x34],ebx
1005ae66:	8b cf                	mov    ecx,edi
1005ae68:	c6 44 24 1c 07       	mov    BYTE PTR [esp+0x1c],0x7
1005ae6d:	c7 07 cc a1 0b 10    	mov    DWORD PTR [edi],0x100ba1cc
1005ae73:	e8 a8 3b 01 00       	call   0x1006ea20
1005ae78:	eb 02                	jmp    0x1005ae7c
1005ae7a:	33 ff                	xor    edi,edi
1005ae7c:	6a 48                	push   0x48
1005ae7e:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
1005ae83:	89 7e 3c             	mov    DWORD PTR [esi+0x3c],edi
1005ae86:	e8 9e 8a 04 00       	call   0x100a3929
1005ae8b:	8b f8                	mov    edi,eax
1005ae8d:	83 c4 04             	add    esp,0x4
1005ae90:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1005ae94:	3b fd                	cmp    edi,ebp
1005ae96:	c6 44 24 1c 08       	mov    BYTE PTR [esp+0x1c],0x8
1005ae9b:	74 40                	je     0x1005aedd
1005ae9d:	55                   	push   ebp
1005ae9e:	68 20 02 00 00       	push   0x220
1005aea3:	56                   	push   esi
1005aea4:	8b cf                	mov    ecx,edi
1005aea6:	e8 d5 34 01 00       	call   0x1006e380
1005aeab:	55                   	push   ebp
1005aeac:	6a 20                	push   0x20
1005aeae:	8b cf                	mov    ecx,edi
1005aeb0:	c6 44 24 24 09       	mov    BYTE PTR [esp+0x24],0x9
1005aeb5:	c7 07 d8 9f 0b 10    	mov    DWORD PTR [edi],0x100b9fd8
1005aebb:	89 6f 34             	mov    DWORD PTR [edi+0x34],ebp
1005aebe:	e8 bd 38 01 00       	call   0x1006e780
1005aec3:	21 5f 34             	and    DWORD PTR [edi+0x34],ebx
1005aec6:	8b cf                	mov    ecx,edi
1005aec8:	c6 44 24 1c 0a       	mov    BYTE PTR [esp+0x1c],0xa
1005aecd:	c7 07 54 a1 0b 10    	mov    DWORD PTR [edi],0x100ba154
1005aed3:	e8 48 3b 01 00       	call   0x1006ea20
1005aed8:	89 7e 40             	mov    DWORD PTR [esi+0x40],edi
1005aedb:	eb 03                	jmp    0x1005aee0
1005aedd:	89 6e 40             	mov    DWORD PTR [esi+0x40],ebp
1005aee0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1005aee4:	8b c6                	mov    eax,esi
1005aee6:	5f                   	pop    edi
1005aee7:	5e                   	pop    esi
1005aee8:	5d                   	pop    ebp
1005aee9:	5b                   	pop    ebx
1005aeea:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1005aef1:	83 c4 10             	add    esp,0x10
1005aef4:	c2 04 00             	ret    0x4
1005aef7:	90                   	nop
1005aef8:	90                   	nop
1005aef9:	90                   	nop
1005aefa:	90                   	nop
1005aefb:	90                   	nop
1005aefc:	90                   	nop
1005aefd:	90                   	nop
1005aefe:	90                   	nop
1005aeff:	90                   	nop
1005af00:	56                   	push   esi
1005af01:	57                   	push   edi
1005af02:	8d 71 38             	lea    esi,[ecx+0x38]
1005af05:	bf 03 00 00 00       	mov    edi,0x3
1005af0a:	8b 0e                	mov    ecx,DWORD PTR [esi]
1005af0c:	8b 01                	mov    eax,DWORD PTR [ecx]
1005af0e:	ff 50 70             	call   DWORD PTR [eax+0x70]
1005af11:	83 c6 04             	add    esi,0x4
1005af14:	4f                   	dec    edi
1005af15:	75 f3                	jne    0x1005af0a
1005af17:	5f                   	pop    edi
1005af18:	5e                   	pop    esi
1005af19:	c3                   	ret
1005af1a:	90                   	nop
1005af1b:	90                   	nop
1005af1c:	90                   	nop
1005af1d:	90                   	nop
1005af1e:	90                   	nop
1005af1f:	90                   	nop
1005af20:	83 ec 08             	sub    esp,0x8
1005af23:	53                   	push   ebx
1005af24:	55                   	push   ebp
1005af25:	56                   	push   esi
1005af26:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
1005af2a:	33 c0                	xor    eax,eax
1005af2c:	57                   	push   edi
1005af2d:	bb 19 fc ff ff       	mov    ebx,0xfffffc19
1005af32:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1005af36:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1005af3a:	89 06                	mov    DWORD PTR [esi],eax
1005af3c:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1005af3f:	8d 79 38             	lea    edi,[ecx+0x38]
1005af42:	bd 03 00 00 00       	mov    ebp,0x3
1005af47:	8b 0f                	mov    ecx,DWORD PTR [edi]
1005af49:	8d 54 24 10          	lea    edx,[esp+0x10]
1005af4d:	52                   	push   edx
1005af4e:	8b 01                	mov    eax,DWORD PTR [ecx]
1005af50:	ff 50 74             	call   DWORD PTR [eax+0x74]
1005af53:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1005af57:	3b c3                	cmp    eax,ebx
1005af59:	7e 02                	jle    0x1005af5d
1005af5b:	8b d8                	mov    ebx,eax
1005af5d:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1005af61:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1005af64:	03 d0                	add    edx,eax
1005af66:	83 c7 04             	add    edi,0x4
1005af69:	4d                   	dec    ebp
1005af6a:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
1005af6d:	75 d8                	jne    0x1005af47
1005af6f:	89 1e                	mov    DWORD PTR [esi],ebx
1005af71:	5f                   	pop    edi
1005af72:	5e                   	pop    esi
1005af73:	5d                   	pop    ebp
1005af74:	5b                   	pop    ebx
1005af75:	83 c4 08             	add    esp,0x8
1005af78:	c2 04 00             	ret    0x4
1005af7b:	90                   	nop
1005af7c:	90                   	nop
1005af7d:	90                   	nop
1005af7e:	90                   	nop
1005af7f:	90                   	nop
1005af80:	83 ec 10             	sub    esp,0x10
1005af83:	53                   	push   ebx
1005af84:	55                   	push   ebp
1005af85:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
1005af89:	56                   	push   esi
1005af8a:	33 c0                	xor    eax,eax
1005af8c:	57                   	push   edi
1005af8d:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
1005af90:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1005af94:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1005af98:	8d 59 38             	lea    ebx,[ecx+0x38]
1005af9b:	8d 71 4c             	lea    esi,[ecx+0x4c]
1005af9e:	c7 44 24 10 03 00 00 	mov    DWORD PTR [esp+0x10],0x3
1005afa5:	00 
1005afa6:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1005afa8:	8d 54 24 18          	lea    edx,[esp+0x18]
1005afac:	52                   	push   edx
1005afad:	8b 01                	mov    eax,DWORD PTR [ecx]
1005afaf:	ff 50 74             	call   DWORD PTR [eax+0x74]
1005afb2:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1005afb6:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1005afba:	89 06                	mov    DWORD PTR [esi],eax
1005afbc:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
1005afbf:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1005afc2:	8d 4e f8             	lea    ecx,[esi-0x8]
1005afc5:	99                   	cdq
1005afc6:	2b c2                	sub    eax,edx
1005afc8:	51                   	push   ecx
1005afc9:	8b e8                	mov    ebp,eax
1005afcb:	8b 06                	mov    eax,DWORD PTR [esi]
1005afcd:	99                   	cdq
1005afce:	2b c2                	sub    eax,edx
1005afd0:	d1 fd                	sar    ebp,1
1005afd2:	d1 f8                	sar    eax,1
1005afd4:	2b e8                	sub    ebp,eax
1005afd6:	8b d5                	mov    edx,ebp
1005afd8:	8b 6c 24 28          	mov    ebp,DWORD PTR [esp+0x28]
1005afdc:	03 55 00             	add    edx,DWORD PTR [ebp+0x0]
1005afdf:	89 11                	mov    DWORD PTR [ecx],edx
1005afe1:	89 7e fc             	mov    DWORD PTR [esi-0x4],edi
1005afe4:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1005afe6:	e8 65 36 01 00       	call   0x1006e650
1005afeb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1005afee:	83 c3 04             	add    ebx,0x4
1005aff1:	03 f8                	add    edi,eax
1005aff3:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1005aff7:	83 c6 10             	add    esi,0x10
1005affa:	48                   	dec    eax
1005affb:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1005afff:	75 a5                	jne    0x1005afa6
1005b001:	5f                   	pop    edi
1005b002:	5e                   	pop    esi
1005b003:	5d                   	pop    ebp
1005b004:	5b                   	pop    ebx
1005b005:	83 c4 10             	add    esp,0x10
1005b008:	c2 04 00             	ret    0x4
1005b00b:	90                   	nop
1005b00c:	90                   	nop
1005b00d:	90                   	nop
1005b00e:	90                   	nop
1005b00f:	90                   	nop
1005b010:	f6 41 34 01          	test   BYTE PTR [ecx+0x34],0x1
1005b014:	74 28                	je     0x1005b03e
1005b016:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1005b01a:	68 00 00 00 a0       	push   0xa0000000
1005b01f:	68 00 00 00 a0       	push   0xa0000000
1005b024:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1005b027:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
1005b02a:	51                   	push   ecx
1005b02b:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1005b02e:	52                   	push   edx
1005b02f:	8b 10                	mov    edx,DWORD PTR [eax]
1005b031:	51                   	push   ecx
1005b032:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b038:	52                   	push   edx
1005b039:	e8 32 e5 fe ff       	call   0x10049570
1005b03e:	c2 08 00             	ret    0x8
1005b041:	90                   	nop
1005b042:	90                   	nop
1005b043:	90                   	nop
1005b044:	90                   	nop
1005b045:	90                   	nop
1005b046:	90                   	nop
1005b047:	90                   	nop
1005b048:	90                   	nop
1005b049:	90                   	nop
1005b04a:	90                   	nop
1005b04b:	90                   	nop
1005b04c:	90                   	nop
1005b04d:	90                   	nop
1005b04e:	90                   	nop
1005b04f:	90                   	nop
1005b050:	c7 41 38 00 00 00 00 	mov    DWORD PTR [ecx+0x38],0x0
1005b057:	c3                   	ret
1005b058:	90                   	nop
1005b059:	90                   	nop
1005b05a:	90                   	nop
1005b05b:	90                   	nop
1005b05c:	90                   	nop
1005b05d:	90                   	nop
1005b05e:	90                   	nop
1005b05f:	90                   	nop
1005b060:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
1005b066:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005b06a:	b9 00 04 00 00       	mov    ecx,0x400
1005b06f:	3b d1                	cmp    edx,ecx
1005b071:	1b d2                	sbb    edx,edx
1005b073:	83 e2 de             	and    edx,0xffffffde
1005b076:	83 c2 54             	add    edx,0x54
1005b079:	89 10                	mov    DWORD PTR [eax],edx
1005b07b:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
1005b081:	3b d1                	cmp    edx,ecx
1005b083:	1b c9                	sbb    ecx,ecx
1005b085:	83 e1 de             	and    ecx,0xffffffde
1005b088:	83 c1 54             	add    ecx,0x54
1005b08b:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
1005b08e:	c2 04 00             	ret    0x4
1005b091:	90                   	nop
1005b092:	90                   	nop
1005b093:	90                   	nop
1005b094:	90                   	nop
1005b095:	90                   	nop
1005b096:	90                   	nop
1005b097:	90                   	nop
1005b098:	90                   	nop
1005b099:	90                   	nop
1005b09a:	90                   	nop
1005b09b:	90                   	nop
1005b09c:	90                   	nop
1005b09d:	90                   	nop
1005b09e:	90                   	nop
1005b09f:	90                   	nop
1005b0a0:	56                   	push   esi
1005b0a1:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1005b0a5:	57                   	push   edi
1005b0a6:	8b f9                	mov    edi,ecx
1005b0a8:	f6 47 34 01          	test   BYTE PTR [edi+0x34],0x1
1005b0ac:	74 24                	je     0x1005b0d2
1005b0ae:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1005b0b1:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1005b0b4:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1005b0b7:	68 00 00 00 a0       	push   0xa0000000
1005b0bc:	68 00 00 00 a0       	push   0xa0000000
1005b0c1:	50                   	push   eax
1005b0c2:	8b 06                	mov    eax,DWORD PTR [esi]
1005b0c4:	51                   	push   ecx
1005b0c5:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b0cb:	52                   	push   edx
1005b0cc:	50                   	push   eax
1005b0cd:	e8 9e e4 fe ff       	call   0x10049570
1005b0d2:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
1005b0d5:	85 c0                	test   eax,eax
1005b0d7:	74 22                	je     0x1005b0fb
1005b0d9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1005b0dc:	8b 16                	mov    edx,DWORD PTR [esi]
1005b0de:	51                   	push   ecx
1005b0df:	8b 0d 00 b1 0d 10    	mov    ecx,DWORD PTR ds:0x100db100
1005b0e5:	81 c9 ff ff ff 00    	or     ecx,0xffffff
1005b0eb:	52                   	push   edx
1005b0ec:	51                   	push   ecx
1005b0ed:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b0f3:	6a 00                	push   0x0
1005b0f5:	50                   	push   eax
1005b0f6:	e8 f5 03 ff ff       	call   0x1004b4f0
1005b0fb:	5f                   	pop    edi
1005b0fc:	5e                   	pop    esi
1005b0fd:	c2 08 00             	ret    0x8
1005b100:	56                   	push   esi
1005b101:	8b 35 58 be 11 10    	mov    esi,DWORD PTR ds:0x1011be58
1005b107:	81 fe 00 04 00 00    	cmp    esi,0x400
1005b10d:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1005b111:	1b c0                	sbb    eax,eax
1005b113:	25 ec fe ff ff       	and    eax,0xfffffeec
1005b118:	05 e0 02 00 00       	add    eax,0x2e0
1005b11d:	89 06                	mov    DWORD PTR [esi],eax
1005b11f:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005b125:	e8 46 21 ff ff       	call   0x1004d270
1005b12a:	8d 0c 40             	lea    ecx,[eax+eax*2]
1005b12d:	8d 54 09 04          	lea    edx,[ecx+ecx*1+0x4]
1005b131:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
1005b134:	5e                   	pop    esi
1005b135:	c2 04 00             	ret    0x4
1005b138:	90                   	nop
1005b139:	90                   	nop
1005b13a:	90                   	nop
1005b13b:	90                   	nop
1005b13c:	90                   	nop
1005b13d:	90                   	nop
1005b13e:	90                   	nop
1005b13f:	90                   	nop
1005b140:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005b144:	8b 49 38             	mov    ecx,DWORD PTR [ecx+0x38]
1005b147:	50                   	push   eax
1005b148:	e8 03 35 01 00       	call   0x1006e650
1005b14d:	c2 04 00             	ret    0x4
1005b150:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1005b155:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1005b159:	3d 00 04 00 00       	cmp    eax,0x400
1005b15e:	1b c0                	sbb    eax,eax
1005b160:	24 88                	and    al,0x88
1005b162:	05 40 01 00 00       	add    eax,0x140
1005b167:	89 02                	mov    DWORD PTR [edx],eax
1005b169:	8b 81 04 01 00 00    	mov    eax,DWORD PTR [ecx+0x104]
1005b16f:	8d 0c 40             	lea    ecx,[eax+eax*2]
1005b172:	d1 e1                	shl    ecx,1
1005b174:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
1005b177:	c2 04 00             	ret    0x4
1005b17a:	90                   	nop
1005b17b:	90                   	nop
1005b17c:	90                   	nop
1005b17d:	90                   	nop
1005b17e:	90                   	nop
1005b17f:	90                   	nop
1005b180:	83 ec 10             	sub    esp,0x10
1005b183:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1005b187:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1005b18b:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1005b18f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1005b193:	56                   	push   esi
1005b194:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1005b198:	8b 81 00 01 00 00    	mov    eax,DWORD PTR [ecx+0x100]
1005b19e:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1005b1a2:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1005b1a6:	33 f6                	xor    esi,esi
1005b1a8:	3b c6                	cmp    eax,esi
1005b1aa:	57                   	push   edi
1005b1ab:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
1005b1af:	75 18                	jne    0x1005b1c9
1005b1b1:	89 b1 fc 00 00 00    	mov    DWORD PTR [ecx+0xfc],esi
1005b1b7:	89 b1 f8 00 00 00    	mov    DWORD PTR [ecx+0xf8],esi
1005b1bd:	c7 81 00 01 00 00 01 	mov    DWORD PTR [ecx+0x100],0x1
1005b1c4:	00 00 00 
1005b1c7:	eb 3f                	jmp    0x1005b208
1005b1c9:	83 f8 06             	cmp    eax,0x6
1005b1cc:	75 1f                	jne    0x1005b1ed
1005b1ce:	8b 81 f8 00 00 00    	mov    eax,DWORD PTR [ecx+0xf8]
1005b1d4:	bf 06 00 00 00       	mov    edi,0x6
1005b1d9:	40                   	inc    eax
1005b1da:	c7 81 00 01 00 00 05 	mov    DWORD PTR [ecx+0x100],0x5
1005b1e1:	00 00 00 
1005b1e4:	99                   	cdq
1005b1e5:	f7 ff                	idiv   edi
1005b1e7:	89 91 f8 00 00 00    	mov    DWORD PTR [ecx+0xf8],edx
1005b1ed:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
1005b1f3:	bf 06 00 00 00       	mov    edi,0x6
1005b1f8:	40                   	inc    eax
1005b1f9:	99                   	cdq
1005b1fa:	f7 ff                	idiv   edi
1005b1fc:	ff 81 00 01 00 00    	inc    DWORD PTR [ecx+0x100]
1005b202:	89 91 fc 00 00 00    	mov    DWORD PTR [ecx+0xfc],edx
1005b208:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
1005b20e:	c1 e0 05             	shl    eax,0x5
1005b211:	8d 7c 08 38          	lea    edi,[eax+ecx*1+0x38]
1005b215:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005b21b:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b21d:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1005b223:	d8 05 00 84 0b 10    	fadd   DWORD PTR ds:0x100b8400
1005b229:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1005b22d:	89 47 1c             	mov    DWORD PTR [edi+0x1c],eax
1005b230:	83 c7 0c             	add    edi,0xc
1005b233:	d9 5f f4             	fstp   DWORD PTR [edi-0xc]
1005b236:	8b 44 34 08          	mov    eax,DWORD PTR [esp+esi*1+0x8]
1005b23a:	89 47 f8             	mov    DWORD PTR [edi-0x8],eax
1005b23d:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005b243:	50                   	push   eax
1005b244:	e8 d7 1f ff ff       	call   0x1004d220
1005b249:	8b 4c 34 10          	mov    ecx,DWORD PTR [esp+esi*1+0x10]
1005b24d:	89 07                	mov    DWORD PTR [edi],eax
1005b24f:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
1005b252:	83 c6 04             	add    esi,0x4
1005b255:	83 c7 04             	add    edi,0x4
1005b258:	83 fe 08             	cmp    esi,0x8
1005b25b:	7c d9                	jl     0x1005b236
1005b25d:	5f                   	pop    edi
1005b25e:	5e                   	pop    esi
1005b25f:	83 c4 10             	add    esp,0x10
1005b262:	c2 14 00             	ret    0x14
1005b265:	90                   	nop
1005b266:	90                   	nop
1005b267:	90                   	nop
1005b268:	90                   	nop
1005b269:	90                   	nop
1005b26a:	90                   	nop
1005b26b:	90                   	nop
1005b26c:	90                   	nop
1005b26d:	90                   	nop
1005b26e:	90                   	nop
1005b26f:	90                   	nop
1005b270:	83 ec 08             	sub    esp,0x8
1005b273:	53                   	push   ebx
1005b274:	55                   	push   ebp
1005b275:	8b e9                	mov    ebp,ecx
1005b277:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005b27d:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1005b281:	e8 ea 1f ff ff       	call   0x1004d270
1005b286:	8b 9d f8 00 00 00    	mov    ebx,DWORD PTR [ebp+0xf8]
1005b28c:	c1 e0 02             	shl    eax,0x2
1005b28f:	89 85 04 01 00 00    	mov    DWORD PTR [ebp+0x104],eax
1005b295:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
1005b29b:	85 c0                	test   eax,eax
1005b29d:	74 41                	je     0x1005b2e0
1005b29f:	56                   	push   esi
1005b2a0:	57                   	push   edi
1005b2a1:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1005b2a5:	8b c3                	mov    eax,ebx
1005b2a7:	bf 02 00 00 00       	mov    edi,0x2
1005b2ac:	c1 e0 05             	shl    eax,0x5
1005b2af:	8d 44 28 38          	lea    eax,[eax+ebp*1+0x38]
1005b2b3:	8d 70 0c             	lea    esi,[eax+0xc]
1005b2b6:	8b 4e f8             	mov    ecx,DWORD PTR [esi-0x8]
1005b2b9:	51                   	push   ecx
1005b2ba:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1005b2be:	e8 5d 1f ff ff       	call   0x1004d220
1005b2c3:	89 06                	mov    DWORD PTR [esi],eax
1005b2c5:	83 c6 04             	add    esi,0x4
1005b2c8:	4f                   	dec    edi
1005b2c9:	75 eb                	jne    0x1005b2b6
1005b2cb:	8d 43 01             	lea    eax,[ebx+0x1]
1005b2ce:	b9 06 00 00 00       	mov    ecx,0x6
1005b2d3:	99                   	cdq
1005b2d4:	f7 f9                	idiv   ecx
1005b2d6:	ff 4c 24 10          	dec    DWORD PTR [esp+0x10]
1005b2da:	8b da                	mov    ebx,edx
1005b2dc:	75 c7                	jne    0x1005b2a5
1005b2de:	5f                   	pop    edi
1005b2df:	5e                   	pop    esi
1005b2e0:	5d                   	pop    ebp
1005b2e1:	5b                   	pop    ebx
1005b2e2:	83 c4 08             	add    esp,0x8
1005b2e5:	c2 04 00             	ret    0x4
1005b2e8:	90                   	nop
1005b2e9:	90                   	nop
1005b2ea:	90                   	nop
1005b2eb:	90                   	nop
1005b2ec:	90                   	nop
1005b2ed:	90                   	nop
1005b2ee:	90                   	nop
1005b2ef:	90                   	nop

void HudAmmo::SyncBulletTextures() {
    int resolutionIdx = (*(DWORD*)0x1011be58 >= 0x400) ? 1 : 0; 
    char** pTexStrings = (char**)(0x100db104 + (resolutionIdx * 4)); 
    
    for(int i = 0; i < 8; i++) {
        char* szTex = pTexStrings[i * 2]; 
        if(!szTex) {
            m_hBulletTextures[i] = nullptr;
            continue;
        }
        
        // 10059905: call DWORD PTR [edx+0x8] (CreateTextureFromName)
        m_hBulletTextures[i] = g_pLTClient->GetTexInterface()->CreateTextureFromName(szTex);
        
        if(!m_hBulletTextures[i]) {
            // 1005991f: call DWORD PTR [eax+0x120] (CPrint)
            g_pLTClient->CPrint("HudAmmo::SyncBulletTextures: Couldn't create texture %s", szTex);
        }
    }
}

