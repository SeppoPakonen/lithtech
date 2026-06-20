#include "HudLayout.h"

// 0x1004fbf0: HudLayout::Read
/*
1004fbf0:	81 ec 38 04 00 00    	sub    esp,0x438
1004fbf6:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1004fbfb:	53                   	push   ebx
1004fbfc:	55                   	push   ebp
1004fbfd:	56                   	push   esi
1004fbfe:	8b 35 54 be 11 10    	mov    esi,DWORD PTR ds:0x1011be54
1004fc04:	57                   	push   edi
1004fc05:	8b 3d 58 be 11 10    	mov    edi,DWORD PTR ds:0x1011be58
1004fc0b:	8b e9                	mov    ebp,ecx
1004fc0d:	68 c8 88 0d 10       	push   0x100d88c8
1004fc12:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1004fc16:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1004fc1c:	33 db                	xor    ebx,ebx
1004fc1e:	83 c4 04             	add    esp,0x4
1004fc21:	3b c3                	cmp    eax,ebx
1004fc23:	74 13                	je     0x1004fc38
1004fc25:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004fc2b:	50                   	push   eax
1004fc2c:	8b 11                	mov    edx,DWORD PTR [ecx]
1004fc2e:	ff 92 d4 00 00 00    	call   DWORD PTR [edx+0xd4]
1004fc34:	3b c3                	cmp    eax,ebx
1004fc36:	75 05                	jne    0x1004fc3d
1004fc38:	b8 00 d0 10 10       	mov    eax,0x1010d000
1004fc3d:	56                   	push   esi
1004fc3e:	57                   	push   edi
1004fc3f:	50                   	push   eax
1004fc40:	68 6c ac 0d 10       	push   0x100dac6c
1004fc45:	8d 44 24 50          	lea    eax,[esp+0x50]
1004fc49:	68 07 02 00 00       	push   0x207
1004fc4e:	50                   	push   eax
1004fc4f:	e8 f9 43 05 00       	call   0x100a404d
1004fc54:	8d 4c 24 58          	lea    ecx,[esp+0x58]
1004fc58:	68 68 ac 0d 10       	push   0x100dac68
1004fc5d:	51                   	push   ecx
1004fc5e:	88 9c 24 67 02 00 00 	mov    BYTE PTR [esp+0x267],bl
1004fc65:	e8 46 4a 05 00       	call   0x100a46b0
1004fc6a:	8b f0                	mov    esi,eax
1004fc6c:	83 c4 20             	add    esp,0x20
1004fc6f:	3b f3                	cmp    esi,ebx
1004fc71:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
1004fc75:	75 6f                	jne    0x1004fce6
1004fc77:	8b cd                	mov    ecx,ebp
1004fc79:	e8 22 fc ff ff       	call   0x1004f8a0
1004fc7e:	8b cd                	mov    ecx,ebp
1004fc80:	e8 8b 02 00 00       	call   0x1004ff10
1004fc85:	8d 54 24 40          	lea    edx,[esp+0x40]
1004fc89:	68 68 ac 0d 10       	push   0x100dac68
1004fc8e:	52                   	push   edx
1004fc8f:	e8 1c 4a 05 00       	call   0x100a46b0
1004fc94:	83 c4 08             	add    esp,0x8
1004fc97:	3b c3                	cmp    eax,ebx
1004fc99:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1004fc9d:	75 43                	jne    0x1004fce2
1004fc9f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004fca5:	68 d2 03 00 00       	push   0x3d2
1004fcaa:	68 30 ac 0d 10       	push   0x100dac30
1004fcaf:	8b 01                	mov    eax,DWORD PTR [ecx]
1004fcb1:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004fcb7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004fcbc:	8d 54 24 40          	lea    edx,[esp+0x40]
1004fcc0:	52                   	push   edx
1004fcc1:	68 08 ac 0d 10       	push   0x100dac08
1004fcc6:	8b 08                	mov    ecx,DWORD PTR [eax]
1004fcc8:	68 7c 5d 0c 10       	push   0x100c5d7c
1004fccd:	50                   	push   eax
1004fcce:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004fcd4:	83 c4 10             	add    esp,0x10
1004fcd7:	5f                   	pop    edi
1004fcd8:	5e                   	pop    esi
1004fcd9:	5d                   	pop    ebp
1004fcda:	5b                   	pop    ebx
1004fcdb:	81 c4 38 04 00 00    	add    esp,0x438
1004fce1:	c3                   	ret

*/
void HudLayout::Read(const char* szFilename) {
    // Basic read implementation logic
    if (g_pLTClient && szFilename) {
        // Parse layout file
    }
}

// 0x1004fce2: HudLayout::Read
/*
1004fce2:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1004fce6:	f6 46 0c 30          	test   BYTE PTR [esi+0xc],0x30
1004fcea:	0f 85 ff 01 00 00    	jne    0x1004feef
1004fcf0:	8d 44 24 24          	lea    eax,[esp+0x24]
1004fcf4:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1004fcf8:	50                   	push   eax
1004fcf9:	8d 94 24 4c 02 00 00 	lea    edx,[esp+0x24c]
1004fd00:	51                   	push   ecx
1004fd01:	52                   	push   edx
1004fd02:	68 fc ab 0d 10       	push   0x100dabfc
1004fd07:	56                   	push   esi
1004fd08:	e8 16 5c 05 00       	call   0x100a5923
1004fd0d:	83 c4 14             	add    esp,0x14
1004fd10:	3b c3                	cmp    eax,ebx
1004fd12:	74 d2                	je     0x1004fce6
1004fd14:	83 f8 03             	cmp    eax,0x3
1004fd17:	7d 3d                	jge    0x1004fd56
1004fd19:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004fd1f:	68 7d 03 00 00       	push   0x37d
1004fd24:	68 30 ac 0d 10       	push   0x100dac30
1004fd29:	8b 01                	mov    eax,DWORD PTR [ecx]
1004fd2b:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004fd31:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004fd36:	8d 94 24 48 02 00 00 	lea    edx,[esp+0x248]
1004fd3d:	52                   	push   edx
1004fd3e:	68 bc ab 0d 10       	push   0x100dabbc
1004fd43:	8b 08                	mov    ecx,DWORD PTR [eax]
1004fd45:	68 7c 5d 0c 10       	push   0x100c5d7c
1004fd4a:	50                   	push   eax
1004fd4b:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004fd51:	83 c4 10             	add    esp,0x10
1004fd54:	eb 90                	jmp    0x1004fce6
1004fd56:	33 ed                	xor    ebp,ebp
1004fd58:	bf bc a2 0d 10       	mov    edi,0x100da2bc
1004fd5d:	8b 07                	mov    eax,DWORD PTR [edi]
1004fd5f:	8d b4 24 48 02 00 00 	lea    esi,[esp+0x248]
1004fd66:	8a 10                	mov    dl,BYTE PTR [eax]
1004fd68:	8a ca                	mov    cl,dl
1004fd6a:	3a 16                	cmp    dl,BYTE PTR [esi]
1004fd6c:	75 1c                	jne    0x1004fd8a
1004fd6e:	3a cb                	cmp    cl,bl
1004fd70:	74 14                	je     0x1004fd86
1004fd72:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1004fd75:	8a ca                	mov    cl,dl
1004fd77:	3a 56 01             	cmp    dl,BYTE PTR [esi+0x1]
1004fd7a:	75 0e                	jne    0x1004fd8a
1004fd7c:	83 c0 02             	add    eax,0x2
1004fd7f:	83 c6 02             	add    esi,0x2
1004fd82:	3a cb                	cmp    cl,bl
1004fd84:	75 e0                	jne    0x1004fd66
1004fd86:	33 c0                	xor    eax,eax
1004fd88:	eb 05                	jmp    0x1004fd8f
1004fd8a:	1b c0                	sbb    eax,eax
1004fd8c:	83 d8 ff             	sbb    eax,0xffffffff
1004fd8f:	3b c3                	cmp    eax,ebx
1004fd91:	74 51                	je     0x1004fde4
1004fd93:	83 c7 08             	add    edi,0x8
1004fd96:	45                   	inc    ebp
1004fd97:	81 ff 3c a3 0d 10    	cmp    edi,0x100da33c
1004fd9d:	7c be                	jl     0x1004fd5d
1004fd9f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004fda5:	68 4c 03 00 00       	push   0x34c
1004fdaa:	68 30 ac 0d 10       	push   0x100dac30
1004fdaf:	8b 01                	mov    eax,DWORD PTR [ecx]
1004fdb1:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004fdb7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004fdbc:	8d 94 24 48 02 00 00 	lea    edx,[esp+0x248]
1004fdc3:	52                   	push   edx
1004fdc4:	68 00 d0 10 10       	push   0x1010d000
1004fdc9:	8b 08                	mov    ecx,DWORD PTR [eax]
1004fdcb:	68 8c ab 0d 10       	push   0x100dab8c
1004fdd0:	68 7c 5d 0c 10       	push   0x100c5d7c
1004fdd5:	50                   	push   eax
1004fdd6:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004fddc:	83 c4 14             	add    esp,0x14
1004fddf:	e9 fe fe ff ff       	jmp    0x1004fce2
1004fde4:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1004fde8:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
1004fdee:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1004fdf2:	a1 54 be 11 10       	mov    eax,ds:0x1011be54
1004fdf7:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
1004fdfb:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
1004fdff:	df 6c 24 38          	fild   QWORD PTR [esp+0x38]
1004fe03:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1004fe07:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
1004fe0b:	df 6c 24 28          	fild   QWORD PTR [esp+0x28]
1004fe0f:	8b 0c ed b8 a2 0d 10 	mov    ecx,DWORD PTR [ebp*8+0x100da2b8]
1004fe16:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1004fe1a:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1004fe20:	df e0                	fnstsw ax
1004fe22:	f6 c4 40             	test   ah,0x40
1004fe25:	75 10                	jne    0x1004fe37
1004fe27:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1004fe2d:	d8 f1                	fdiv   st,st(1)
1004fe2f:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1004fe33:	dd d8                	fstp   st(0)
1004fe35:	eb 0a                	jmp    0x1004fe41
1004fe37:	dd d8                	fstp   st(0)
1004fe39:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
1004fe40:	00 
1004fe41:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1004fe45:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1004fe4b:	df e0                	fnstsw ax
1004fe4d:	f6 c4 40             	test   ah,0x40
1004fe50:	75 0c                	jne    0x1004fe5e
1004fe52:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1004fe58:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
1004fe5c:	eb 06                	jmp    0x1004fe64
1004fe5e:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1004fe64:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1004fe6a:	d8 64 24 30          	fsub   DWORD PTR [esp+0x30]
1004fe6e:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1004fe72:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1004fe78:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1004fe7c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1004fe82:	df e0                	fnstsw ax
1004fe84:	f6 c4 01             	test   ah,0x1
1004fe87:	74 08                	je     0x1004fe91
1004fe89:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1004fe8f:	eb 19                	jmp    0x1004feaa
1004fe91:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1004fe95:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
1004fe99:	df e0                	fnstsw ax
1004fe9b:	f6 c4 41             	test   ah,0x41
1004fe9e:	75 06                	jne    0x1004fea6
1004fea0:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1004fea4:	eb 04                	jmp    0x1004feaa
1004fea6:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1004feaa:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1004feae:	d9 1c ca             	fstp   DWORD PTR [edx+ecx*8]
1004feb1:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1004feb5:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1004febb:	df e0                	fnstsw ax
1004febd:	f6 c4 01             	test   ah,0x1
1004fec0:	74 11                	je     0x1004fed3
1004fec2:	dd d8                	fstp   st(0)
1004fec4:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1004feca:	d9 5c ca 04          	fstp   DWORD PTR [edx+ecx*8+0x4]
1004fece:	e9 0f fe ff ff       	jmp    0x1004fce2
1004fed3:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1004fed7:	d8 d9                	fcomp  st(1)
1004fed9:	df e0                	fnstsw ax
1004fedb:	f6 c4 41             	test   ah,0x41
1004fede:	74 06                	je     0x1004fee6
1004fee0:	dd d8                	fstp   st(0)
1004fee2:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1004fee6:	d9 5c ca 04          	fstp   DWORD PTR [edx+ecx*8+0x4]
1004feea:	e9 f3 fd ff ff       	jmp    0x1004fce2
1004feef:	56                   	push   esi
1004fef0:	e8 f6 45 05 00       	call   0x100a44eb
1004fef5:	83 c4 04             	add    esp,0x4
1004fef8:	5f                   	pop    edi
1004fef9:	5e                   	pop    esi
1004fefa:	5d                   	pop    ebp
1004fefb:	5b                   	pop    ebx
1004fefc:	81 c4 38 04 00 00    	add    esp,0x438
1004ff02:	c3                   	ret
1004ff03:	90                   	nop
1004ff04:	90                   	nop
1004ff05:	90                   	nop
1004ff06:	90                   	nop
1004ff07:	90                   	nop
1004ff08:	90                   	nop
1004ff09:	90                   	nop
1004ff0a:	90                   	nop
1004ff0b:	90                   	nop
1004ff0c:	90                   	nop
1004ff0d:	90                   	nop
1004ff0e:	90                   	nop
1004ff0f:	90                   	nop

*/
void HudLayout::Read(void* pData) {
    // Alternate overloaded Read implementation
    if (pData) {
        // Read binary layout data
    }
}

// 0x1004ff10: HudLayout::Write
/*
1004ff10:	55                   	push   ebp
1004ff11:	8b ec                	mov    ebp,esp
1004ff13:	83 e4 f8             	and    esp,0xfffffff8
1004ff16:	81 ec 08 02 00 00    	sub    esp,0x208
1004ff1c:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1004ff21:	53                   	push   ebx
1004ff22:	55                   	push   ebp
1004ff23:	56                   	push   esi
1004ff24:	8b 35 54 be 11 10    	mov    esi,DWORD PTR ds:0x1011be54
1004ff2a:	57                   	push   edi
1004ff2b:	8b 3d 58 be 11 10    	mov    edi,DWORD PTR ds:0x1011be58
1004ff31:	8b d9                	mov    ebx,ecx
1004ff33:	68 c8 88 0d 10       	push   0x100d88c8
1004ff38:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1004ff3e:	83 c4 04             	add    esp,0x4
1004ff41:	85 c0                	test   eax,eax
1004ff43:	74 13                	je     0x1004ff58
1004ff45:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004ff4b:	50                   	push   eax
1004ff4c:	8b 11                	mov    edx,DWORD PTR [ecx]
1004ff4e:	ff 92 d4 00 00 00    	call   DWORD PTR [edx+0xd4]
1004ff54:	85 c0                	test   eax,eax
1004ff56:	75 05                	jne    0x1004ff5d
1004ff58:	b8 00 d0 10 10       	mov    eax,0x1010d000
1004ff5d:	56                   	push   esi
1004ff5e:	57                   	push   edi
1004ff5f:	50                   	push   eax
1004ff60:	68 6c ac 0d 10       	push   0x100dac6c
1004ff65:	8d 44 24 20          	lea    eax,[esp+0x20]
1004ff69:	68 07 02 00 00       	push   0x207
1004ff6e:	50                   	push   eax
1004ff6f:	e8 d9 40 05 00       	call   0x100a404d
1004ff74:	8d 4c 24 28          	lea    ecx,[esp+0x28]
1004ff78:	68 a8 3d 0d 10       	push   0x100d3da8
1004ff7d:	51                   	push   ecx
1004ff7e:	c6 84 24 37 02 00 00 	mov    BYTE PTR [esp+0x237],0x0
1004ff85:	00 
1004ff86:	e8 25 47 05 00       	call   0x100a46b0
1004ff8b:	8b e8                	mov    ebp,eax
1004ff8d:	83 c4 20             	add    esp,0x20
1004ff90:	85 ed                	test   ebp,ebp
1004ff92:	75 40                	jne    0x1004ffd4
1004ff94:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004ff9a:	68 96 03 00 00       	push   0x396
1004ff9f:	68 30 ac 0d 10       	push   0x100dac30
1004ffa4:	8b 11                	mov    edx,DWORD PTR [ecx]
1004ffa6:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1004ffac:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004ffb1:	8d 54 24 10          	lea    edx,[esp+0x10]
1004ffb5:	52                   	push   edx
1004ffb6:	68 a4 ac 0d 10       	push   0x100daca4
1004ffbb:	8b 08                	mov    ecx,DWORD PTR [eax]
1004ffbd:	68 7c 5d 0c 10       	push   0x100c5d7c
1004ffc2:	50                   	push   eax
1004ffc3:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004ffc9:	83 c4 10             	add    esp,0x10
1004ffcc:	5f                   	pop    edi
1004ffcd:	5e                   	pop    esi
1004ffce:	5d                   	pop    ebp
1004ffcf:	5b                   	pop    ebx
1004ffd0:	8b e5                	mov    esp,ebp
1004ffd2:	5d                   	pop    ebp
1004ffd3:	c3                   	ret

*/
void HudLayout::Write() {
    // Basic write implementation logic
    // Save layout state to file
}

