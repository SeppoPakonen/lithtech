#include "EquipItemClient.h"

// 0x10021ca0: EquipItemClient::Update
/*
10021ca0:	83 ec 60             	sub    esp,0x60
10021ca3:	53                   	push   ebx
10021ca4:	56                   	push   esi
10021ca5:	8b f1                	mov    esi,ecx
10021ca7:	33 db                	xor    ebx,ebx
10021ca9:	57                   	push   edi
10021caa:	39 5e 04             	cmp    DWORD PTR [esi+0x4],ebx
10021cad:	0f 84 63 06 00 00    	je     0x10022316
10021cb3:	e8 68 51 fe ff       	call   0x10006e20
10021cb8:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10021cbb:	3d ff 00 00 00       	cmp    eax,0xff
10021cc0:	74 14                	je     0x10021cd6
10021cc2:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10021cc5:	3b cb                	cmp    ecx,ebx
10021cc7:	74 08                	je     0x10021cd1
10021cc9:	83 f9 01             	cmp    ecx,0x1
10021ccc:	75 08                	jne    0x10021cd6
10021cce:	83 c0 40             	add    eax,0x40
10021cd1:	83 f8 4f             	cmp    eax,0x4f
10021cd4:	74 08                	je     0x10021cde
10021cd6:	8d 4e 64             	lea    ecx,[esi+0x64]
10021cd9:	e8 b2 b1 07 00       	call   0x1009ce90
10021cde:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10021ce1:	3d ff 00 00 00       	cmp    eax,0xff
10021ce6:	0f 84 d1 00 00 00    	je     0x10021dbd
10021cec:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10021cef:	3b cb                	cmp    ecx,ebx
10021cf1:	75 04                	jne    0x10021cf7
10021cf3:	8b c8                	mov    ecx,eax
10021cf5:	eb 0c                	jmp    0x10021d03
10021cf7:	83 f9 01             	cmp    ecx,0x1
10021cfa:	0f 85 bd 00 00 00    	jne    0x10021dbd
10021d00:	8d 48 40             	lea    ecx,[eax+0x40]
10021d03:	83 f9 49             	cmp    ecx,0x49
10021d06:	0f 85 b1 00 00 00    	jne    0x10021dbd
10021d0c:	d9 86 00 01 00 00    	fld    DWORD PTR [esi+0x100]
10021d12:	d8 5e 28             	fcomp  DWORD PTR [esi+0x28]
10021d15:	df e0                	fnstsw ax
10021d17:	f6 c4 40             	test   ah,0x40
10021d1a:	75 4f                	jne    0x10021d6b
10021d1c:	d9 46 28             	fld    DWORD PTR [esi+0x28]
10021d1f:	b8 18 00 00 00       	mov    eax,0x18
10021d24:	66 c7 44 24 10 3a 00 	mov    WORD PTR [esp+0x10],0x3a
10021d2b:	66 89 44 24 12       	mov    WORD PTR [esp+0x12],ax
10021d30:	66 c7 44 24 0c 4a 00 	mov    WORD PTR [esp+0xc],0x4a
10021d37:	66 89 44 24 0e       	mov    WORD PTR [esp+0xe],ax
10021d3c:	e8 f3 20 08 00       	call   0x100a3e34
10021d41:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10021d45:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10021d48:	50                   	push   eax
10021d49:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10021d4d:	68 66 66 86 3f       	push   0x3f866666
10021d52:	50                   	push   eax
10021d53:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
10021d58:	51                   	push   ecx
10021d59:	52                   	push   edx
10021d5a:	8d 48 30             	lea    ecx,[eax+0x30]
10021d5d:	e8 4e af 00 00       	call   0x1002ccb0
10021d62:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
10021d65:	89 8e 00 01 00 00    	mov    DWORD PTR [esi+0x100],ecx
10021d6b:	d9 86 0c 01 00 00    	fld    DWORD PTR [esi+0x10c]
10021d71:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10021d77:	df e0                	fnstsw ax
10021d79:	f6 c4 40             	test   ah,0x40
10021d7c:	0f 85 d8 00 00 00    	jne    0x10021e5a
10021d82:	d9 86 0c 01 00 00    	fld    DWORD PTR [esi+0x10c]
10021d88:	d8 05 08 84 0b 10    	fadd   DWORD PTR ds:0x100b8408
10021d8e:	d8 5e 44             	fcomp  DWORD PTR [esi+0x44]
10021d91:	df e0                	fnstsw ax
10021d93:	f6 c4 01             	test   ah,0x1
10021d96:	0f 84 be 00 00 00    	je     0x10021e5a
10021d9c:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
10021d9f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10021da5:	50                   	push   eax
10021da6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10021da9:	8b 11                	mov    edx,DWORD PTR [ecx]
10021dab:	50                   	push   eax
10021dac:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
10021db2:	89 9e 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],ebx
10021db8:	e9 9d 00 00 00       	jmp    0x10021e5a
10021dbd:	3d ff 00 00 00       	cmp    eax,0xff
10021dc2:	ba 4e 00 00 00       	mov    edx,0x4e
10021dc7:	0f 84 8d 00 00 00    	je     0x10021e5a
10021dcd:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10021dd0:	3b cb                	cmp    ecx,ebx
10021dd2:	75 04                	jne    0x10021dd8
10021dd4:	8b c8                	mov    ecx,eax
10021dd6:	eb 08                	jmp    0x10021de0
10021dd8:	83 f9 01             	cmp    ecx,0x1
10021ddb:	75 07                	jne    0x10021de4
10021ddd:	8d 48 40             	lea    ecx,[eax+0x40]
10021de0:	3b ca                	cmp    ecx,edx
10021de2:	74 1b                	je     0x10021dff
10021de4:	3d ff 00 00 00       	cmp    eax,0xff
10021de9:	74 6f                	je     0x10021e5a
10021deb:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10021dee:	3b cb                	cmp    ecx,ebx
10021df0:	74 08                	je     0x10021dfa
10021df2:	83 f9 01             	cmp    ecx,0x1
10021df5:	75 63                	jne    0x10021e5a
10021df7:	83 c0 40             	add    eax,0x40
10021dfa:	83 f8 4f             	cmp    eax,0x4f
10021dfd:	75 5b                	jne    0x10021e5a
10021dff:	d9 86 00 01 00 00    	fld    DWORD PTR [esi+0x100]
10021e05:	d8 5e 28             	fcomp  DWORD PTR [esi+0x28]
10021e08:	df e0                	fnstsw ax
10021e0a:	f6 c4 40             	test   ah,0x40
10021e0d:	75 4b                	jne    0x10021e5a
10021e0f:	d9 46 28             	fld    DWORD PTR [esi+0x28]
10021e12:	66 c7 44 24 0c b3 00 	mov    WORD PTR [esp+0xc],0xb3
10021e19:	66 89 54 24 0e       	mov    WORD PTR [esp+0xe],dx
10021e1e:	66 c7 44 24 10 c3 00 	mov    WORD PTR [esp+0x10],0xc3
10021e25:	66 89 54 24 12       	mov    WORD PTR [esp+0x12],dx
10021e2a:	e8 05 20 08 00       	call   0x100a3e34
10021e2f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10021e33:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10021e37:	50                   	push   eax
10021e38:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10021e3b:	68 66 66 86 3f       	push   0x3f866666
10021e40:	51                   	push   ecx
10021e41:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10021e47:	52                   	push   edx
10021e48:	50                   	push   eax
10021e49:	83 c1 30             	add    ecx,0x30
10021e4c:	e8 5f ae 00 00       	call   0x1002ccb0
10021e51:	8b 56 28             	mov    edx,DWORD PTR [esi+0x28]
10021e54:	89 96 00 01 00 00    	mov    DWORD PTR [esi+0x100],edx
10021e5a:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10021e5d:	3d ff 00 00 00       	cmp    eax,0xff
10021e62:	0f 84 ae 04 00 00    	je     0x10022316
10021e68:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10021e6b:	3b cb                	cmp    ecx,ebx
10021e6d:	75 04                	jne    0x10021e73
10021e6f:	8b c8                	mov    ecx,eax
10021e71:	eb 0c                	jmp    0x10021e7f
10021e73:	83 f9 01             	cmp    ecx,0x1
10021e76:	0f 85 2d 04 00 00    	jne    0x100222a9
10021e7c:	8d 48 40             	lea    ecx,[eax+0x40]
10021e7f:	83 f9 4f             	cmp    ecx,0x4f
10021e82:	0f 85 21 04 00 00    	jne    0x100222a9
10021e88:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
10021e8b:	bf 03 00 00 00       	mov    edi,0x3
10021e90:	3b c7                	cmp    eax,edi
10021e92:	74 0e                	je     0x10021ea2
10021e94:	83 f8 02             	cmp    eax,0x2
10021e97:	74 09                	je     0x10021ea2
10021e99:	83 f8 0a             	cmp    eax,0xa
10021e9c:	0f 85 c9 02 00 00    	jne    0x1002216b
10021ea2:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10021ea8:	8b 01                	mov    eax,DWORD PTR [ecx]
10021eaa:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
10021eb0:	d8 6e 34             	fsubr  DWORD PTR [esi+0x34]
10021eb3:	d9 54 24 0c          	fst    DWORD PTR [esp+0xc]
10021eb7:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10021ebd:	df e0                	fnstsw ax
10021ebf:	f6 c4 41             	test   ah,0x41
10021ec2:	0f 85 a3 02 00 00    	jne    0x1002216b
10021ec8:	d9 86 04 01 00 00    	fld    DWORD PTR [esi+0x104]
10021ece:	d8 25 e0 83 0b 10    	fsub   DWORD PTR ds:0x100b83e0
10021ed4:	d8 5c 24 0c          	fcomp  DWORD PTR [esp+0xc]
10021ed8:	df e0                	fnstsw ax
10021eda:	f6 c4 41             	test   ah,0x41
10021edd:	0f 85 88 02 00 00    	jne    0x1002216b
10021ee3:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
10021ee9:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10021eed:	83 f8 ff             	cmp    eax,0xffffffff
10021ef0:	89 8e 04 01 00 00    	mov    DWORD PTR [esi+0x104],ecx
10021ef6:	0f 85 4b 01 00 00    	jne    0x10022047
10021efc:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10021eff:	8d 54 24 0c          	lea    edx,[esp+0xc]
10021f03:	8d 44 24 14          	lea    eax,[esp+0x14]
10021f07:	52                   	push   edx
10021f08:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10021f0e:	50                   	push   eax
10021f0f:	53                   	push   ebx
10021f10:	51                   	push   ecx
10021f11:	ff 92 5c 01 00 00    	call   DWORD PTR [edx+0x15c]
10021f17:	83 c4 10             	add    esp,0x10
10021f1a:	85 c0                	test   eax,eax
10021f1c:	74 3a                	je     0x10021f58
10021f1e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10021f24:	68 3b 01 00 00       	push   0x13b
10021f29:	68 30 6d 0d 10       	push   0x100d6d30
10021f2e:	8b 01                	mov    eax,DWORD PTR [ecx]
10021f30:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10021f36:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10021f3b:	68 cc 6c 0d 10       	push   0x100d6ccc
10021f40:	68 c4 6c 0d 10       	push   0x100d6cc4
10021f45:	50                   	push   eax
10021f46:	8b 08                	mov    ecx,DWORD PTR [eax]
10021f48:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10021f4e:	83 c4 0c             	add    esp,0xc
10021f51:	5f                   	pop    edi
10021f52:	5e                   	pop    esi
10021f53:	5b                   	pop    ebx
10021f54:	83 c4 60             	add    esp,0x60
10021f57:	c3                   	ret

*/
void EquipItemClient::Update() {
    // TODO: Implement Update
}

// 0x10021f58: EquipItemClient::Update
/*
10021f58:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10021f5c:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10021f60:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
10021f64:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
10021f68:	df 6c 24 24          	fild   QWORD PTR [esp+0x24]
10021f6c:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10021f70:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
10021f74:	df 6c 24 24          	fild   QWORD PTR [esp+0x24]
10021f78:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10021f7b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10021f80:	8d 54 24 3c          	lea    edx,[esp+0x3c]
10021f84:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
10021f88:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10021f8c:	d9 05 54 89 0b 10    	fld    DWORD PTR ds:0x100b8954
10021f92:	d8 f1                	fdiv   st,st(1)
10021f94:	52                   	push   edx
10021f95:	c7 44 24 44 9c 6c 0d 	mov    DWORD PTR [esp+0x44],0x100d6c9c
10021f9c:	10 
10021f9d:	89 5c 24 6c          	mov    DWORD PTR [esp+0x6c],ebx
10021fa1:	89 5c 24 68          	mov    DWORD PTR [esp+0x68],ebx
10021fa5:	c7 44 24 48 00 00 f5 	mov    DWORD PTR [esp+0x48],0x3ef50000
10021fac:	3e 
10021fad:	c7 44 24 50 00 80 14 	mov    DWORD PTR [esp+0x50],0x3f148000
10021fb4:	3f 
10021fb5:	c7 44 24 4c 00 00 64 	mov    DWORD PTR [esp+0x4c],0x3f640000
10021fbc:	3f 
10021fbd:	c7 44 24 54 00 80 6a 	mov    DWORD PTR [esp+0x54],0x3f6a8000
10021fc4:	3f 
10021fc5:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
10021fc9:	d9 05 50 89 0b 10    	fld    DWORD PTR ds:0x100b8950
10021fcf:	d8 f1                	fdiv   st,st(1)
10021fd1:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
10021fd5:	dd d8                	fstp   st(0)
10021fd7:	d9 05 4c 89 0b 10    	fld    DWORD PTR ds:0x100b894c
10021fdd:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
10021fe1:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
10021fe5:	d9 05 48 89 0b 10    	fld    DWORD PTR ds:0x100b8948
10021feb:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
10021fef:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
10021ff3:	ff 90 3c 01 00 00    	call   DWORD PTR [eax+0x13c]
10021ff9:	83 c4 04             	add    esp,0x4
10021ffc:	3d ff 00 00 00       	cmp    eax,0xff
10022001:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
10022007:	0f 85 5e 01 00 00    	jne    0x1002216b
1002200d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10022013:	68 57 01 00 00       	push   0x157
10022018:	68 30 6d 0d 10       	push   0x100d6d30
1002201d:	8b 11                	mov    edx,DWORD PTR [ecx]
1002201f:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
10022025:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002202a:	68 60 6c 0d 10       	push   0x100d6c60
1002202f:	68 c4 6c 0d 10       	push   0x100d6cc4
10022034:	50                   	push   eax
10022035:	8b 08                	mov    ecx,DWORD PTR [eax]
10022037:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1002203d:	83 c4 0c             	add    esp,0xc
10022040:	5f                   	pop    edi
10022041:	5e                   	pop    esi
10022042:	5b                   	pop    ebx
10022043:	83 c4 60             	add    esp,0x60
10022046:	c3                   	ret

*/
void EquipItemClient::Update() {
    // TODO: Implement Update
}

// 0x10022047: EquipItemClient::Update
/*
10022047:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002204a:	8d 54 24 18          	lea    edx,[esp+0x18]
1002204e:	8d 44 24 14          	lea    eax,[esp+0x14]
10022052:	52                   	push   edx
10022053:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10022059:	50                   	push   eax
1002205a:	53                   	push   ebx
1002205b:	51                   	push   ecx
1002205c:	ff 92 5c 01 00 00    	call   DWORD PTR [edx+0x15c]
10022062:	83 c4 10             	add    esp,0x10
10022065:	85 c0                	test   eax,eax
10022067:	74 3a                	je     0x100220a3
10022069:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002206f:	68 62 01 00 00       	push   0x162
10022074:	68 30 6d 0d 10       	push   0x100d6d30
10022079:	8b 01                	mov    eax,DWORD PTR [ecx]
1002207b:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10022081:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10022086:	68 fc 6b 0d 10       	push   0x100d6bfc
1002208b:	68 c4 6c 0d 10       	push   0x100d6cc4
10022090:	50                   	push   eax
10022091:	8b 08                	mov    ecx,DWORD PTR [eax]
10022093:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10022099:	83 c4 0c             	add    esp,0xc
1002209c:	5f                   	pop    edi
1002209d:	5e                   	pop    esi
1002209e:	5b                   	pop    ebx
1002209f:	83 c4 60             	add    esp,0x60
100220a2:	c3                   	ret

*/
void EquipItemClient::Update() {
    // TODO: Implement Update
}

// 0x100220a3: EquipItemClient::Update
/*
100220a3:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100220a7:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100220ab:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
100220af:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
100220b3:	df 6c 24 24          	fild   QWORD PTR [esp+0x24]
100220b7:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
100220bb:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
100220bf:	df 6c 24 24          	fild   QWORD PTR [esp+0x24]
100220c3:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
100220c9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100220cc:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
100220d0:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
100220d4:	d9 05 54 89 0b 10    	fld    DWORD PTR ds:0x100b8954
100220da:	d8 f1                	fdiv   st,st(1)
100220dc:	51                   	push   ecx
100220dd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100220e3:	52                   	push   edx
100220e4:	50                   	push   eax
100220e5:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
100220e9:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
100220ed:	d8 76 30             	fdiv   DWORD PTR [esi+0x30]
100220f0:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
100220f6:	d8 0d 44 89 0b 10    	fmul   DWORD PTR ds:0x100b8944
100220fc:	d8 f1                	fdiv   st,st(1)
100220fe:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
10022102:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
10022106:	dd d8                	fstp   st(0)
10022108:	d9 05 4c 89 0b 10    	fld    DWORD PTR ds:0x100b894c
1002210e:	d8 74 24 1c          	fdiv   DWORD PTR [esp+0x1c]
10022112:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10022116:	d9 05 48 89 0b 10    	fld    DWORD PTR ds:0x100b8948
1002211c:	d8 74 24 1c          	fdiv   DWORD PTR [esp+0x1c]
10022120:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
10022124:	ff 91 50 01 00 00    	call   DWORD PTR [ecx+0x150]
1002212a:	83 c4 0c             	add    esp,0xc
1002212d:	85 c0                	test   eax,eax
1002212f:	74 3a                	je     0x1002216b
10022131:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10022137:	68 72 01 00 00       	push   0x172
1002213c:	68 30 6d 0d 10       	push   0x100d6d30
10022141:	8b 11                	mov    edx,DWORD PTR [ecx]
10022143:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
10022149:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002214e:	68 c0 6b 0d 10       	push   0x100d6bc0
10022153:	68 c4 6c 0d 10       	push   0x100d6cc4
10022158:	50                   	push   eax
10022159:	8b 08                	mov    ecx,DWORD PTR [eax]
1002215b:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10022161:	83 c4 0c             	add    esp,0xc
10022164:	5f                   	pop    edi
10022165:	5e                   	pop    esi
10022166:	5b                   	pop    ebx
10022167:	83 c4 60             	add    esp,0x60
1002216a:	c3                   	ret
1002216b:	39 7e 4c             	cmp    DWORD PTR [esi+0x4c],edi
1002216e:	0f 85 a2 01 00 00    	jne    0x10022316
10022174:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10022179:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1002217d:	55                   	push   ebp
1002217e:	8b 2d 6c 4c 12 10    	mov    ebp,DWORD PTR ds:0x10124c6c
10022184:	8d 90 10 02 00 00    	lea    edx,[eax+0x210]
1002218a:	51                   	push   ecx
1002218b:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1002218f:	8d 54 24 28          	lea    edx,[esp+0x28]
10022193:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
10022197:	8b 1d 68 4c 12 10    	mov    ebx,DWORD PTR ds:0x10124c68
1002219d:	52                   	push   edx
1002219e:	ff 90 e0 01 00 00    	call   DWORD PTR [eax+0x1e0]
100221a4:	50                   	push   eax
100221a5:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100221a9:	ff 10                	call   DWORD PTR [eax]
100221ab:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
100221af:	83 c4 0c             	add    esp,0xc
100221b2:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
100221b6:	33 db                	xor    ebx,ebx
100221b8:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
100221bc:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
100221c0:	df 6c 24 1c          	fild   QWORD PTR [esp+0x1c]
100221c4:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
100221c8:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
100221cc:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
100221d0:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
100221d4:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
100221d8:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
100221dc:	5d                   	pop    ebp
100221dd:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
100221e1:	df 6c 24 18          	fild   QWORD PTR [esp+0x18]
100221e5:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
100221e9:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
100221ed:	da 74 24 18          	fidiv  DWORD PTR [esp+0x18]
100221f1:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
100221f5:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100221f9:	83 fa 03             	cmp    edx,0x3
100221fc:	73 6d                	jae    0x1002226b
100221fe:	3b d3                	cmp    edx,ebx
10022200:	75 09                	jne    0x1002220b
10022202:	b9 18 6b 0d 10       	mov    ecx,0x100d6b18
10022207:	33 ff                	xor    edi,edi
10022209:	eb 1a                	jmp    0x10022225
1002220b:	83 fa 01             	cmp    edx,0x1
1002220e:	75 09                	jne    0x10022219
10022210:	b9 28 6b 0d 10       	mov    ecx,0x100d6b28
10022215:	8b fa                	mov    edi,edx
10022217:	eb 0c                	jmp    0x10022225
10022219:	83 fa 02             	cmp    edx,0x2
1002221c:	75 07                	jne    0x10022225
1002221e:	b9 38 6b 0d 10       	mov    ecx,0x100d6b38
10022223:	8b fa                	mov    edi,edx
10022225:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
10022229:	d8 19                	fcomp  DWORD PTR [ecx]
1002222b:	df e0                	fnstsw ax
1002222d:	f6 c4 41             	test   ah,0x41
10022230:	75 2a                	jne    0x1002225c
10022232:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
10022236:	d8 59 08             	fcomp  DWORD PTR [ecx+0x8]
10022239:	df e0                	fnstsw ax
1002223b:	f6 c4 01             	test   ah,0x1
1002223e:	74 1c                	je     0x1002225c
10022240:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
10022244:	d8 59 04             	fcomp  DWORD PTR [ecx+0x4]
10022247:	df e0                	fnstsw ax
10022249:	f6 c4 41             	test   ah,0x41
1002224c:	75 0e                	jne    0x1002225c
1002224e:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
10022252:	d8 59 0c             	fcomp  DWORD PTR [ecx+0xc]
10022255:	df e0                	fnstsw ax
10022257:	f6 c4 01             	test   ah,0x1
1002225a:	75 05                	jne    0x10022261
1002225c:	bf 03 00 00 00       	mov    edi,0x3
10022261:	42                   	inc    edx
10022262:	83 ff 03             	cmp    edi,0x3
10022265:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10022269:	74 8a                	je     0x100221f5
1002226b:	a1 fc 7d 11 10       	mov    eax,ds:0x10117dfc
10022270:	3b c3                	cmp    eax,ebx
10022272:	0f 84 9e 00 00 00    	je     0x10022316
10022278:	3b be 20 01 00 00    	cmp    edi,DWORD PTR [esi+0x120]
1002227e:	0f 84 92 00 00 00    	je     0x10022316
10022284:	83 ff 03             	cmp    edi,0x3
10022287:	75 0c                	jne    0x10022295
10022289:	68 00 7f 00 00       	push   0x7f00
1002228e:	53                   	push   ebx
1002228f:	ff 15 b4 81 0b 10    	call   DWORD PTR ds:0x100b81b4
10022295:	50                   	push   eax
10022296:	ff 15 b0 81 0b 10    	call   DWORD PTR ds:0x100b81b0
1002229c:	89 be 20 01 00 00    	mov    DWORD PTR [esi+0x120],edi
100222a2:	5f                   	pop    edi
100222a3:	5e                   	pop    esi
100222a4:	5b                   	pop    ebx
100222a5:	83 c4 60             	add    esp,0x60
100222a8:	c3                   	ret
100222a9:	3d ff 00 00 00       	cmp    eax,0xff
100222ae:	74 66                	je     0x10022316
100222b0:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100222b3:	3b cb                	cmp    ecx,ebx
100222b5:	74 08                	je     0x100222bf
100222b7:	83 f9 01             	cmp    ecx,0x1
100222ba:	75 5a                	jne    0x10022316
100222bc:	83 c0 40             	add    eax,0x40
100222bf:	83 f8 44             	cmp    eax,0x44
100222c2:	75 52                	jne    0x10022316
100222c4:	d9 46 44             	fld    DWORD PTR [esi+0x44]
100222c7:	d8 9e 08 01 00 00    	fcomp  DWORD PTR [esi+0x108]
100222cd:	df e0                	fnstsw ax
100222cf:	f6 c4 01             	test   ah,0x1
100222d2:	75 42                	jne    0x10022316
100222d4:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
100222d7:	83 f8 02             	cmp    eax,0x2
100222da:	74 05                	je     0x100222e1
100222dc:	83 f8 05             	cmp    eax,0x5
100222df:	75 35                	jne    0x10022316
100222e1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100222e7:	83 f8 05             	cmp    eax,0x5
100222ea:	8b 01                	mov    eax,DWORD PTR [ecx]
100222ec:	75 08                	jne    0x100222f6
100222ee:	8b 96 90 00 00 00    	mov    edx,DWORD PTR [esi+0x90]
100222f4:	eb 06                	jmp    0x100222fc
100222f6:	8b 96 9c 00 00 00    	mov    edx,DWORD PTR [esi+0x9c]
100222fc:	52                   	push   edx
100222fd:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10022300:	52                   	push   edx
10022301:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
10022307:	d9 46 44             	fld    DWORD PTR [esi+0x44]
1002230a:	d8 05 e4 83 0b 10    	fadd   DWORD PTR ds:0x100b83e4
10022310:	d9 9e 08 01 00 00    	fstp   DWORD PTR [esi+0x108]
10022316:	5f                   	pop    edi
10022317:	5e                   	pop    esi
10022318:	5b                   	pop    ebx
10022319:	83 c4 60             	add    esp,0x60
1002231c:	c3                   	ret
1002231d:	90                   	nop
1002231e:	90                   	nop
1002231f:	90                   	nop
10022320:	56                   	push   esi
10022321:	8b f1                	mov    esi,ecx
10022323:	83 7e 4c 07          	cmp    DWORD PTR [esi+0x4c],0x7
10022327:	75 05                	jne    0x1002232e
10022329:	8b 06                	mov    eax,DWORD PTR [esi]
1002232b:	ff 50 54             	call   DWORD PTR [eax+0x54]
1002232e:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
10022334:	83 f8 ff             	cmp    eax,0xffffffff
10022337:	74 14                	je     0x1002234d
10022339:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002233c:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10022342:	50                   	push   eax
10022343:	51                   	push   ecx
10022344:	ff 92 40 01 00 00    	call   DWORD PTR [edx+0x140]
1002234a:	83 c4 08             	add    esp,0x8
1002234d:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
10022353:	83 f8 ff             	cmp    eax,0xffffffff
10022356:	74 14                	je     0x1002236c
10022358:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002235e:	50                   	push   eax
1002235f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10022362:	50                   	push   eax
10022363:	ff 91 40 01 00 00    	call   DWORD PTR [ecx+0x140]
10022369:	83 c4 08             	add    esp,0x8
1002236c:	8b 86 18 01 00 00    	mov    eax,DWORD PTR [esi+0x118]
10022372:	83 f8 ff             	cmp    eax,0xffffffff
10022375:	74 13                	je     0x1002238a
10022377:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1002237a:	50                   	push   eax
1002237b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10022380:	52                   	push   edx
10022381:	ff 90 40 01 00 00    	call   DWORD PTR [eax+0x140]
10022387:	83 c4 08             	add    esp,0x8
1002238a:	8b 86 1c 01 00 00    	mov    eax,DWORD PTR [esi+0x11c]
10022390:	83 f8 ff             	cmp    eax,0xffffffff
10022393:	74 14                	je     0x100223a9
10022395:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10022398:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002239e:	50                   	push   eax
1002239f:	51                   	push   ecx
100223a0:	ff 92 40 01 00 00    	call   DWORD PTR [edx+0x140]
100223a6:	83 c4 08             	add    esp,0x8
100223a9:	d9 86 00 01 00 00    	fld    DWORD PTR [esi+0x100]
100223af:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
100223b5:	df e0                	fnstsw ax
100223b7:	f6 c4 40             	test   ah,0x40
100223ba:	75 12                	jne    0x100223ce
100223bc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100223bf:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100223c5:	50                   	push   eax
100223c6:	83 c1 30             	add    ecx,0x30
100223c9:	e8 02 ad 00 00       	call   0x1002d0d0
100223ce:	6a 00                	push   0x0
100223d0:	6a 00                	push   0x0
100223d2:	68 ff 00 00 00       	push   0xff
100223d7:	8b ce                	mov    ecx,esi
100223d9:	e8 12 44 fe ff       	call   0x100067f0
100223de:	5e                   	pop    esi
100223df:	c3                   	ret

*/
void EquipItemClient::Update() {
    // TODO: Implement Update
}

// 0x10024020: EquipItemClient::Update
/*
10024020:	83 ec 40             	sub    esp,0x40
10024023:	8d 44 24 0c          	lea    eax,[esp+0xc]
10024027:	56                   	push   esi
10024028:	8b f1                	mov    esi,ecx
1002402a:	57                   	push   edi
1002402b:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1002402f:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10024032:	50                   	push   eax
10024033:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10024038:	33 ff                	xor    edi,edi
1002403a:	51                   	push   ecx
1002403b:	57                   	push   edi
1002403c:	52                   	push   edx
1002403d:	ff 90 5c 01 00 00    	call   DWORD PTR [eax+0x15c]
10024043:	83 c4 10             	add    esp,0x10
10024046:	85 c0                	test   eax,eax
10024048:	74 29                	je     0x10024073
1002404a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10024050:	68 2a 05 00 00       	push   0x52a
10024055:	68 30 6d 0d 10       	push   0x100d6d30
1002405a:	8b 11                	mov    edx,DWORD PTR [ecx]
1002405c:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
10024062:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10024067:	68 cc 6c 0d 10       	push   0x100d6ccc
1002406c:	8b 08                	mov    ecx,DWORD PTR [eax]
1002406e:	e9 93 01 00 00       	jmp    0x10024206
10024073:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10024077:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002407b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002407e:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
10024082:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
10024086:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1002408a:	df 6c 24 08          	fild   QWORD PTR [esp+0x8]
1002408e:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10024092:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
10024096:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
1002409a:	3b c7                	cmp    eax,edi
1002409c:	df 6c 24 08          	fild   QWORD PTR [esp+0x8]
100240a0:	c7 44 24 1c 9c 6c 0d 	mov    DWORD PTR [esp+0x1c],0x100d6c9c
100240a7:	10 
100240a8:	89 7c 24 44          	mov    DWORD PTR [esp+0x44],edi
100240ac:	89 7c 24 40          	mov    DWORD PTR [esp+0x40],edi
100240b0:	c7 44 24 20 00 00 9f 	mov    DWORD PTR [esp+0x20],0x3e9f0000
100240b7:	3e 
100240b8:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
100240bc:	c7 44 24 28 00 00 d3 	mov    DWORD PTR [esp+0x28],0x3ed30000
100240c3:	3e 
100240c4:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
100240cb:	00 
100240cc:	c7 44 24 2c 00 00 d0 	mov    DWORD PTR [esp+0x2c],0x3dd00000
100240d3:	3d 
100240d4:	75 50                	jne    0x10024126
100240d6:	d9 05 6c 89 0b 10    	fld    DWORD PTR ds:0x100b896c
100240dc:	d8 f1                	fdiv   st,st(1)
100240de:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100240e3:	8d 54 24 18          	lea    edx,[esp+0x18]
100240e7:	52                   	push   edx
100240e8:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
100240ef:	00 
100240f0:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
100240f4:	dd d8                	fstp   st(0)
100240f6:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
100240fc:	d8 74 24 0c          	fdiv   DWORD PTR [esp+0xc]
10024100:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
10024104:	d9 05 6c 89 0b 10    	fld    DWORD PTR ds:0x100b896c
1002410a:	d8 74 24 0c          	fdiv   DWORD PTR [esp+0xc]
1002410e:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
10024112:	ff 90 3c 01 00 00    	call   DWORD PTR [eax+0x13c]
10024118:	83 c4 04             	add    esp,0x4
1002411b:	89 86 14 01 00 00    	mov    DWORD PTR [esi+0x114],eax
10024121:	e9 b0 00 00 00       	jmp    0x100241d6
10024126:	83 f8 01             	cmp    eax,0x1
10024129:	75 52                	jne    0x1002417d
1002412b:	d9 05 68 89 0b 10    	fld    DWORD PTR ds:0x100b8968
10024131:	d8 f1                	fdiv   st,st(1)
10024133:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10024139:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1002413d:	51                   	push   ecx
1002413e:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10024142:	d9 05 64 89 0b 10    	fld    DWORD PTR ds:0x100b8964
10024148:	d8 f1                	fdiv   st,st(1)
1002414a:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
1002414e:	dd d8                	fstp   st(0)
10024150:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10024156:	d8 74 24 0c          	fdiv   DWORD PTR [esp+0xc]
1002415a:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1002415e:	d9 05 6c 89 0b 10    	fld    DWORD PTR ds:0x100b896c
10024164:	d8 74 24 0c          	fdiv   DWORD PTR [esp+0xc]
10024168:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1002416c:	ff 92 3c 01 00 00    	call   DWORD PTR [edx+0x13c]
10024172:	83 c4 04             	add    esp,0x4
10024175:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
1002417b:	eb 59                	jmp    0x100241d6
1002417d:	83 f8 02             	cmp    eax,0x2
10024180:	75 52                	jne    0x100241d4
10024182:	d9 05 60 89 0b 10    	fld    DWORD PTR ds:0x100b8960
10024188:	d8 f1                	fdiv   st,st(1)
1002418a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10024190:	8d 44 24 18          	lea    eax,[esp+0x18]
10024194:	50                   	push   eax
10024195:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10024199:	d9 05 5c 89 0b 10    	fld    DWORD PTR ds:0x100b895c
1002419f:	d8 f1                	fdiv   st,st(1)
100241a1:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
100241a5:	dd d8                	fstp   st(0)
100241a7:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
100241ad:	d8 74 24 0c          	fdiv   DWORD PTR [esp+0xc]
100241b1:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
100241b5:	d9 05 6c 89 0b 10    	fld    DWORD PTR ds:0x100b896c
100241bb:	d8 74 24 0c          	fdiv   DWORD PTR [esp+0xc]
100241bf:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
100241c3:	ff 91 3c 01 00 00    	call   DWORD PTR [ecx+0x13c]
100241c9:	83 c4 04             	add    esp,0x4
100241cc:	89 86 1c 01 00 00    	mov    DWORD PTR [esi+0x11c],eax
100241d2:	eb 02                	jmp    0x100241d6
100241d4:	dd d8                	fstp   st(0)
100241d6:	81 be 10 01 00 00 ff 	cmp    DWORD PTR [esi+0x110],0xff
100241dd:	00 00 00 
100241e0:	75 33                	jne    0x10024215
100241e2:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100241e8:	68 5d 05 00 00       	push   0x55d
100241ed:	68 30 6d 0d 10       	push   0x100d6d30
100241f2:	8b 11                	mov    edx,DWORD PTR [ecx]
100241f4:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
100241fa:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100241ff:	68 60 6c 0d 10       	push   0x100d6c60
10024204:	8b 08                	mov    ecx,DWORD PTR [eax]
10024206:	68 c4 6c 0d 10       	push   0x100d6cc4
1002420b:	50                   	push   eax
1002420c:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10024212:	83 c4 0c             	add    esp,0xc
10024215:	5f                   	pop    edi
10024216:	5e                   	pop    esi
10024217:	83 c4 40             	add    esp,0x40
1002421a:	c2 04 00             	ret    0x4
1002421d:	90                   	nop
1002421e:	90                   	nop
1002421f:	90                   	nop

*/
void EquipItemClient::Update() {
    // TODO: Implement Update
}

