#include "DisplayOptionsScreen.h"

// 0x10047bf0: DisplayOptionsScreen::SaveSettings
/*
10047bf0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10047bf6:	6a ff                	push   0xffffffff
10047bf8:	68 06 49 0b 10       	push   0x100b4906
10047bfd:	50                   	push   eax
10047bfe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10047c05:	81 ec 1c 01 00 00    	sub    esp,0x11c
10047c0b:	8d 44 24 08          	lea    eax,[esp+0x8]
10047c0f:	53                   	push   ebx
10047c10:	55                   	push   ebp
10047c11:	56                   	push   esi
10047c12:	8b f1                	mov    esi,ecx
10047c14:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10047c1a:	57                   	push   edi
10047c1b:	50                   	push   eax
10047c1c:	ff 51 74             	call   DWORD PTR [ecx+0x74]
10047c1f:	8b 96 a0 03 00 00    	mov    edx,DWORD PTR [esi+0x3a0]
10047c25:	8b 8e a8 03 00 00    	mov    ecx,DWORD PTR [esi+0x3a8]
10047c2b:	83 c4 04             	add    esp,0x4
10047c2e:	8b 7a 0c             	mov    edi,DWORD PTR [edx+0xc]
10047c31:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
10047c34:	8b 8e a4 03 00 00    	mov    ecx,DWORD PTR [esi+0x3a4]
10047c3a:	69 d2 84 00 00 00    	imul   edx,edx,0x84
10047c40:	8b 59 0c             	mov    ebx,DWORD PTR [ecx+0xc]
10047c43:	8d 0c bf             	lea    ecx,[edi+edi*4]
10047c46:	8d 0c cf             	lea    ecx,[edi+ecx*8]
10047c49:	8d ac da 50 06 00 00 	lea    ebp,[edx+ebx*8+0x650]
10047c50:	8d 0c cf             	lea    ecx,[edi+ecx*8]
10047c53:	c1 e1 02             	shl    ecx,0x2
10047c56:	03 e9                	add    ebp,ecx
10047c58:	03 ca                	add    ecx,edx
10047c5a:	8b 2c 2e             	mov    ebp,DWORD PTR [esi+ebp*1]
10047c5d:	8d 14 d9             	lea    edx,[ecx+ebx*8]
10047c60:	8b 9c 32 54 06 00 00 	mov    ebx,DWORD PTR [edx+esi*1+0x654]
10047c67:	33 d2                	xor    edx,edx
10047c69:	8a 94 31 4c 06 00 00 	mov    dl,BYTE PTR [ecx+esi*1+0x64c]
10047c70:	85 c0                	test   eax,eax
10047c72:	8b f2                	mov    esi,edx
10047c74:	0f 84 ec 00 00 00    	je     0x10047d66
10047c7a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10047c80:	68 1c 02 00 00       	push   0x21c
10047c85:	68 cc 9f 0d 10       	push   0x100d9fcc
10047c8a:	8b 01                	mov    eax,DWORD PTR [ecx]
10047c8c:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10047c92:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10047c97:	56                   	push   esi
10047c98:	53                   	push   ebx
10047c99:	55                   	push   ebp
10047c9a:	8b 08                	mov    ecx,DWORD PTR [eax]
10047c9c:	57                   	push   edi
10047c9d:	68 7c 9f 0d 10       	push   0x100d9f7c
10047ca2:	68 7c 5d 0c 10       	push   0x100c5d7c
10047ca7:	50                   	push   eax
10047ca8:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10047cae:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10047cb3:	68 29 06 00 00       	push   0x629
10047cb8:	50                   	push   eax
10047cb9:	8b 10                	mov    edx,DWORD PTR [eax]
10047cbb:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10047cc1:	8b f8                	mov    edi,eax
10047cc3:	83 c4 24             	add    esp,0x24
10047cc6:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
10047cca:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10047cd0:	57                   	push   edi
10047cd1:	c7 84 24 38 01 00 00 	mov    DWORD PTR [esp+0x138],0x0
10047cd8:	00 00 00 00 
10047cdc:	8b 01                	mov    eax,DWORD PTR [ecx]
10047cde:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10047ce4:	8b e8                	mov    ebp,eax
10047ce6:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10047ceb:	68 2a 06 00 00       	push   0x62a
10047cf0:	50                   	push   eax
10047cf1:	8b 08                	mov    ecx,DWORD PTR [eax]
10047cf3:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10047cf9:	8b f0                	mov    esi,eax
10047cfb:	83 c4 08             	add    esp,0x8
10047cfe:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
10047d02:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10047d08:	56                   	push   esi
10047d09:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x1
10047d10:	01 
10047d11:	8b 11                	mov    edx,DWORD PTR [ecx]
10047d13:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10047d19:	6a 00                	push   0x0
10047d1b:	6a 00                	push   0x0
10047d1d:	6a 00                	push   0x0
10047d1f:	55                   	push   ebp
10047d20:	50                   	push   eax
10047d21:	e8 ba 92 00 00       	call   0x10050fe0
10047d26:	83 c4 14             	add    esp,0x14
10047d29:	c6 84 24 34 01 00 00 	mov    BYTE PTR [esp+0x134],0x0
10047d30:	00 
10047d31:	85 f6                	test   esi,esi
10047d33:	74 0f                	je     0x10047d44
10047d35:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10047d3b:	56                   	push   esi
10047d3c:	8b 01                	mov    eax,DWORD PTR [ecx]
10047d3e:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10047d44:	85 ff                	test   edi,edi
10047d46:	c7 84 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],0xffffffff
10047d4d:	ff ff ff ff 
10047d51:	74 0f                	je     0x10047d62
10047d53:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10047d59:	57                   	push   edi
10047d5a:	8b 11                	mov    edx,DWORD PTR [ecx]
10047d5c:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10047d62:	33 c0                	xor    eax,eax
10047d64:	eb 05                	jmp    0x10047d6b
10047d66:	b8 01 00 00 00       	mov    eax,0x1
10047d6b:	8b 8c 24 2c 01 00 00 	mov    ecx,DWORD PTR [esp+0x12c]
10047d72:	5f                   	pop    edi
10047d73:	5e                   	pop    esi
10047d74:	5d                   	pop    ebp
10047d75:	5b                   	pop    ebx
10047d76:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10047d7d:	81 c4 28 01 00 00    	add    esp,0x128
10047d83:	c3                   	ret
10047d84:	90                   	nop
10047d85:	90                   	nop
10047d86:	90                   	nop
10047d87:	90                   	nop
10047d88:	90                   	nop
10047d89:	90                   	nop
10047d8a:	90                   	nop
10047d8b:	90                   	nop
10047d8c:	90                   	nop
10047d8d:	90                   	nop
10047d8e:	90                   	nop
10047d8f:	90                   	nop
10047d90:	6a ff                	push   0xffffffff
10047d92:	68 65 49 0b 10       	push   0x100b4965
10047d97:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10047d9d:	50                   	push   eax
10047d9e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10047da5:	51                   	push   ecx
10047da6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10047daa:	53                   	push   ebx
10047dab:	55                   	push   ebp
10047dac:	56                   	push   esi
10047dad:	8b f1                	mov    esi,ecx
10047daf:	57                   	push   edi
10047db0:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10047db4:	50                   	push   eax
10047db5:	6a 02                	push   0x2
10047db7:	51                   	push   ecx
10047db8:	8b ce                	mov    ecx,esi
10047dba:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10047dbe:	e8 4d f8 00 00       	call   0x10057610
10047dc3:	33 db                	xor    ebx,ebx
10047dc5:	68 1c 02 00 00       	push   0x21c
10047dca:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
10047dce:	c7 06 80 93 0b 10    	mov    DWORD PTR [esi],0x100b9380
10047dd4:	c7 86 48 05 00 00 01 	mov    DWORD PTR [esi+0x548],0x1
10047ddb:	00 00 00 
10047dde:	e8 46 bb 05 00       	call   0x100a3929
10047de3:	83 c4 04             	add    esp,0x4
10047de6:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10047dea:	3b c3                	cmp    eax,ebx
10047dec:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
10047df1:	74 17                	je     0x10047e0a
10047df3:	53                   	push   ebx
10047df4:	53                   	push   ebx
10047df5:	6a 01                	push   0x1
10047df7:	68 98 05 00 00       	push   0x598
10047dfc:	68 97 05 00 00       	push   0x597
10047e01:	8b c8                	mov    ecx,eax
10047e03:	e8 b8 07 01 00       	call   0x100585c0
10047e08:	eb 02                	jmp    0x10047e0c
10047e0a:	33 c0                	xor    eax,eax
10047e0c:	68 1c 02 00 00       	push   0x21c
10047e11:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10047e15:	89 86 9c 03 00 00    	mov    DWORD PTR [esi+0x39c],eax
10047e1b:	e8 09 bb 05 00       	call   0x100a3929
10047e20:	83 c4 04             	add    esp,0x4
10047e23:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10047e27:	3b c3                	cmp    eax,ebx
10047e29:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
10047e2e:	74 17                	je     0x10047e47
10047e30:	53                   	push   ebx
10047e31:	53                   	push   ebx
10047e32:	6a 01                	push   0x1
10047e34:	68 da 05 00 00       	push   0x5da
10047e39:	68 d9 05 00 00       	push   0x5d9
10047e3e:	8b c8                	mov    ecx,eax
10047e40:	e8 7b 07 01 00       	call   0x100585c0
10047e45:	eb 02                	jmp    0x10047e49
10047e47:	33 c0                	xor    eax,eax
10047e49:	68 1c 02 00 00       	push   0x21c
10047e4e:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10047e52:	89 86 a0 03 00 00    	mov    DWORD PTR [esi+0x3a0],eax
10047e58:	e8 cc ba 05 00       	call   0x100a3929
10047e5d:	83 c4 04             	add    esp,0x4
10047e60:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10047e64:	3b c3                	cmp    eax,ebx
10047e66:	c6 44 24 1c 03       	mov    BYTE PTR [esp+0x1c],0x3
10047e6b:	74 17                	je     0x10047e84
10047e6d:	53                   	push   ebx
10047e6e:	53                   	push   ebx
10047e6f:	6a 01                	push   0x1
10047e71:	68 6c 0a 00 00       	push   0xa6c
10047e76:	68 6b 0a 00 00       	push   0xa6b
10047e7b:	8b c8                	mov    ecx,eax
10047e7d:	e8 3e 07 01 00       	call   0x100585c0
10047e82:	eb 02                	jmp    0x10047e86
10047e84:	33 c0                	xor    eax,eax
10047e86:	68 1c 02 00 00       	push   0x21c
10047e8b:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10047e8f:	89 86 a4 03 00 00    	mov    DWORD PTR [esi+0x3a4],eax
10047e95:	e8 8f ba 05 00       	call   0x100a3929
10047e9a:	83 c4 04             	add    esp,0x4
10047e9d:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10047ea1:	3b c3                	cmp    eax,ebx
10047ea3:	c6 44 24 1c 04       	mov    BYTE PTR [esp+0x1c],0x4
10047ea8:	74 17                	je     0x10047ec1
10047eaa:	53                   	push   ebx
10047eab:	53                   	push   ebx
10047eac:	6a 01                	push   0x1
10047eae:	68 62 06 00 00       	push   0x662
10047eb3:	68 61 06 00 00       	push   0x661
10047eb8:	8b c8                	mov    ecx,eax
10047eba:	e8 01 07 01 00       	call   0x100585c0
10047ebf:	eb 02                	jmp    0x10047ec3
10047ec1:	33 c0                	xor    eax,eax
10047ec3:	68 1c 02 00 00       	push   0x21c
10047ec8:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10047ecc:	89 86 a8 03 00 00    	mov    DWORD PTR [esi+0x3a8],eax
10047ed2:	e8 52 ba 05 00       	call   0x100a3929
10047ed7:	83 c4 04             	add    esp,0x4
10047eda:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10047ede:	3b c3                	cmp    eax,ebx
10047ee0:	c6 44 24 1c 05       	mov    BYTE PTR [esp+0x1c],0x5
10047ee5:	74 17                	je     0x10047efe
10047ee7:	53                   	push   ebx
10047ee8:	53                   	push   ebx
10047ee9:	6a 01                	push   0x1
10047eeb:	68 43 06 00 00       	push   0x643
10047ef0:	68 42 06 00 00       	push   0x642
10047ef5:	8b c8                	mov    ecx,eax
10047ef7:	e8 c4 06 01 00       	call   0x100585c0
10047efc:	eb 02                	jmp    0x10047f00
10047efe:	33 c0                	xor    eax,eax
10047f00:	68 1c 02 00 00       	push   0x21c
10047f05:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10047f09:	89 86 ac 03 00 00    	mov    DWORD PTR [esi+0x3ac],eax
10047f0f:	e8 15 ba 05 00       	call   0x100a3929
10047f14:	83 c4 04             	add    esp,0x4
10047f17:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10047f1b:	3b c3                	cmp    eax,ebx
10047f1d:	c6 44 24 1c 06       	mov    BYTE PTR [esp+0x1c],0x6
10047f22:	74 17                	je     0x10047f3b
10047f24:	53                   	push   ebx
10047f25:	53                   	push   ebx
10047f26:	6a 01                	push   0x1
10047f28:	68 3b 06 00 00       	push   0x63b
10047f2d:	68 3a 06 00 00       	push   0x63a
10047f32:	8b c8                	mov    ecx,eax
10047f34:	e8 87 06 01 00       	call   0x100585c0
10047f39:	eb 02                	jmp    0x10047f3d
10047f3b:	33 c0                	xor    eax,eax
10047f3d:	68 1c 02 00 00       	push   0x21c
10047f42:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10047f46:	89 86 b0 03 00 00    	mov    DWORD PTR [esi+0x3b0],eax
10047f4c:	e8 d8 b9 05 00       	call   0x100a3929
10047f51:	83 c4 04             	add    esp,0x4
10047f54:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10047f58:	3b c3                	cmp    eax,ebx
10047f5a:	c6 44 24 1c 07       	mov    BYTE PTR [esp+0x1c],0x7
10047f5f:	74 18                	je     0x10047f79
10047f61:	6a 06                	push   0x6
10047f63:	53                   	push   ebx
10047f64:	6a 07                	push   0x7
10047f66:	68 50 06 00 00       	push   0x650
10047f6b:	68 00 d0 10 10       	push   0x1010d000
10047f70:	8b c8                	mov    ecx,eax
10047f72:	e8 59 07 01 00       	call   0x100586d0
10047f77:	eb 02                	jmp    0x10047f7b
10047f79:	33 c0                	xor    eax,eax
10047f7b:	89 86 b4 03 00 00    	mov    DWORD PTR [esi+0x3b4],eax
10047f81:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
10047f86:	68 96 05 00 00       	push   0x596
10047f8b:	50                   	push   eax
10047f8c:	8b 10                	mov    edx,DWORD PTR [eax]
10047f8e:	88 5c 24 24          	mov    BYTE PTR [esp+0x24],bl
10047f92:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10047f98:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10047f9e:	83 c4 08             	add    esp,0x8
10047fa1:	8b e8                	mov    ebp,eax
10047fa3:	8b 01                	mov    eax,DWORD PTR [ecx]
10047fa5:	55                   	push   ebp
10047fa6:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10047fac:	8b be b4 03 00 00    	mov    edi,DWORD PTR [esi+0x3b4]
10047fb2:	68 ff 00 00 00       	push   0xff
10047fb7:	83 c7 10             	add    edi,0x10
10047fba:	50                   	push   eax
10047fbb:	57                   	push   edi
10047fbc:	e8 5f b8 05 00       	call   0x100a3820
10047fc1:	88 9f ff 00 00 00    	mov    BYTE PTR [edi+0xff],bl
10047fc7:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10047fcd:	83 c4 0c             	add    esp,0xc
10047fd0:	8b 11                	mov    edx,DWORD PTR [ecx]
10047fd2:	55                   	push   ebp
10047fd3:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10047fd9:	c7 86 2c 05 00 00 07 	mov    DWORD PTR [esi+0x52c],0x7
10047fe0:	00 00 00 
10047fe3:	33 ff                	xor    edi,edi
10047fe5:	8d ae 9c 03 00 00    	lea    ebp,[esi+0x39c]
10047feb:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
10047fee:	8b ce                	mov    ecx,esi
10047ff0:	50                   	push   eax
10047ff1:	e8 5a f7 00 00       	call   0x10057750
10047ff6:	8b 86 2c 05 00 00    	mov    eax,DWORD PTR [esi+0x52c]
10047ffc:	47                   	inc    edi
10047ffd:	83 c5 04             	add    ebp,0x4
10048000:	3b f8                	cmp    edi,eax
10048002:	7c e7                	jl     0x10047feb
10048004:	6a 01                	push   0x1
10048006:	6a 07                	push   0x7
10048008:	6a 01                	push   0x1
1004800a:	53                   	push   ebx
1004800b:	8b ce                	mov    ecx,esi
1004800d:	e8 8e fa 00 00       	call   0x10057aa0
10048012:	6a 01                	push   0x1
10048014:	6a 04                	push   0x4
10048016:	6a 01                	push   0x1
10048018:	6a 01                	push   0x1
1004801a:	8b ce                	mov    ecx,esi
1004801c:	e8 7f fa 00 00       	call   0x10057aa0
10048021:	6a 01                	push   0x1
10048023:	6a 04                	push   0x4
10048025:	6a 01                	push   0x1
10048027:	6a 02                	push   0x2
10048029:	8b ce                	mov    ecx,esi
1004802b:	e8 70 fa 00 00       	call   0x10057aa0
10048030:	6a 01                	push   0x1
10048032:	6a 04                	push   0x4
10048034:	6a 01                	push   0x1
10048036:	6a 03                	push   0x3
10048038:	8b ce                	mov    ecx,esi
1004803a:	e8 61 fa 00 00       	call   0x10057aa0
1004803f:	6a 01                	push   0x1
10048041:	6a 07                	push   0x7
10048043:	6a 01                	push   0x1
10048045:	6a 04                	push   0x4
10048047:	8b ce                	mov    ecx,esi
10048049:	e8 52 fa 00 00       	call   0x10057aa0
1004804e:	6a 01                	push   0x1
10048050:	6a 04                	push   0x4
10048052:	6a 01                	push   0x1
10048054:	6a 05                	push   0x5
10048056:	8b ce                	mov    ecx,esi
10048058:	e8 43 fa 00 00       	call   0x10057aa0
1004805d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10048061:	8b c6                	mov    eax,esi
10048063:	5f                   	pop    edi
10048064:	5e                   	pop    esi
10048065:	5d                   	pop    ebp
10048066:	5b                   	pop    ebx
10048067:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1004806e:	83 c4 10             	add    esp,0x10
10048071:	c2 10 00             	ret    0x10
10048074:	90                   	nop
10048075:	90                   	nop
10048076:	90                   	nop
10048077:	90                   	nop
10048078:	90                   	nop
10048079:	90                   	nop
1004807a:	90                   	nop
1004807b:	90                   	nop
1004807c:	90                   	nop
1004807d:	90                   	nop
1004807e:	90                   	nop
1004807f:	90                   	nop
10048080:	56                   	push   esi
10048081:	8b f1                	mov    esi,ecx
10048083:	e8 18 00 00 00       	call   0x100480a0
10048088:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1004808d:	74 09                	je     0x10048098
1004808f:	56                   	push   esi
10048090:	e8 89 b8 05 00       	call   0x100a391e
10048095:	83 c4 04             	add    esp,0x4
10048098:	8b c6                	mov    eax,esi
1004809a:	5e                   	pop    esi
1004809b:	c2 04 00             	ret    0x4
1004809e:	90                   	nop
1004809f:	90                   	nop
100480a0:	6a ff                	push   0xffffffff
100480a2:	68 78 49 0b 10       	push   0x100b4978
100480a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100480ad:	50                   	push   eax
100480ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100480b5:	51                   	push   ecx
100480b6:	53                   	push   ebx
100480b7:	8b d9                	mov    ebx,ecx
100480b9:	55                   	push   ebp
100480ba:	89 5c 24 08          	mov    DWORD PTR [esp+0x8],ebx
100480be:	c7 03 80 93 0b 10    	mov    DWORD PTR [ebx],0x100b9380
100480c4:	8b 83 2c 05 00 00    	mov    eax,DWORD PTR [ebx+0x52c]
100480ca:	33 ed                	xor    ebp,ebp
100480cc:	85 c0                	test   eax,eax
100480ce:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
100480d5:	00 
100480d6:	7e 34                	jle    0x1004810c
100480d8:	56                   	push   esi
100480d9:	57                   	push   edi
100480da:	8d bb 9c 03 00 00    	lea    edi,[ebx+0x39c]
100480e0:	8b 37                	mov    esi,DWORD PTR [edi]
100480e2:	85 f6                	test   esi,esi
100480e4:	74 16                	je     0x100480fc
100480e6:	8b ce                	mov    ecx,esi
100480e8:	e8 f3 06 01 00       	call   0x100587e0
100480ed:	56                   	push   esi
100480ee:	e8 2b b8 05 00       	call   0x100a391e
100480f3:	83 c4 04             	add    esp,0x4
100480f6:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
100480fc:	8b 83 2c 05 00 00    	mov    eax,DWORD PTR [ebx+0x52c]
10048102:	45                   	inc    ebp
10048103:	83 c7 04             	add    edi,0x4
10048106:	3b e8                	cmp    ebp,eax
10048108:	7c d6                	jl     0x100480e0
1004810a:	5f                   	pop    edi
1004810b:	5e                   	pop    esi
1004810c:	8b cb                	mov    ecx,ebx
1004810e:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
10048115:	ff 
10048116:	e8 25 f6 00 00       	call   0x10057740
1004811b:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1004811f:	5d                   	pop    ebp
10048120:	5b                   	pop    ebx
10048121:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10048128:	83 c4 10             	add    esp,0x10
1004812b:	c3                   	ret
1004812c:	90                   	nop
1004812d:	90                   	nop
1004812e:	90                   	nop
1004812f:	90                   	nop
10048130:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
10048135:	83 ec 3c             	sub    esp,0x3c
10048138:	53                   	push   ebx
10048139:	55                   	push   ebp
1004813a:	56                   	push   esi
1004813b:	57                   	push   edi
1004813c:	8b f1                	mov    esi,ecx
1004813e:	8d a8 d0 81 01 00    	lea    ebp,[eax+0x181d0]
10048144:	33 ff                	xor    edi,edi
10048146:	8d 5c 24 28          	lea    ebx,[esp+0x28]
1004814a:	57                   	push   edi
1004814b:	8b cd                	mov    ecx,ebp
1004814d:	e8 fe 43 ff ff       	call   0x1003c550
10048152:	89 03                	mov    DWORD PTR [ebx],eax
10048154:	47                   	inc    edi
10048155:	83 c3 04             	add    ebx,0x4
10048158:	83 ff 09             	cmp    edi,0x9
1004815b:	7c ed                	jl     0x1004814a
1004815d:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10048161:	85 c0                	test   eax,eax
10048163:	7f 0b                	jg     0x10048170
10048165:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10048169:	bb 07 00 00 00       	mov    ebx,0x7
1004816e:	eb 05                	jmp    0x10048175
10048170:	bb 04 00 00 00       	mov    ebx,0x4
10048175:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
10048179:	2b d8                	sub    ebx,eax
1004817b:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1004817f:	ba 04 00 00 00       	mov    edx,0x4
10048184:	2b d0                	sub    edx,eax
10048186:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
1004818a:	bf 04 00 00 00       	mov    edi,0x4
1004818f:	2b fd                	sub    edi,ebp
10048191:	85 c0                	test   eax,eax
10048193:	7f 0b                	jg     0x100481a0
10048195:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
10048199:	b9 07 00 00 00       	mov    ecx,0x7
1004819e:	eb 05                	jmp    0x100481a5
100481a0:	b9 04 00 00 00       	mov    ecx,0x4
100481a5:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
100481a9:	2b c8                	sub    ecx,eax
100481ab:	b8 04 00 00 00       	mov    eax,0x4
100481b0:	2b c5                	sub    eax,ebp
100481b2:	8b 6c 24 3c          	mov    ebp,DWORD PTR [esp+0x3c]
100481b6:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
100481ba:	b8 04 00 00 00       	mov    eax,0x4
100481bf:	2b c5                	sub    eax,ebp
100481c1:	8b ae 9c 03 00 00    	mov    ebp,DWORD PTR [esi+0x39c]
100481c7:	89 5d 0c             	mov    DWORD PTR [ebp+0xc],ebx
100481ca:	8b 9e a0 03 00 00    	mov    ebx,DWORD PTR [esi+0x3a0]
100481d0:	89 53 0c             	mov    DWORD PTR [ebx+0xc],edx
100481d3:	8b 96 a4 03 00 00    	mov    edx,DWORD PTR [esi+0x3a4]
100481d9:	89 7a 0c             	mov    DWORD PTR [edx+0xc],edi
100481dc:	8b 96 a8 03 00 00    	mov    edx,DWORD PTR [esi+0x3a8]
100481e2:	89 42 0c             	mov    DWORD PTR [edx+0xc],eax
100481e5:	8b 86 b0 03 00 00    	mov    eax,DWORD PTR [esi+0x3b0]
100481eb:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
100481ef:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
100481f2:	8b 86 ac 03 00 00    	mov    eax,DWORD PTR [esi+0x3ac]
100481f8:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
100481fb:	8d 86 30 05 00 00    	lea    eax,[esi+0x530]
10048201:	b9 06 00 00 00       	mov    ecx,0x6
10048206:	8b 90 6c fe ff ff    	mov    edx,DWORD PTR [eax-0x194]
1004820c:	83 c0 04             	add    eax,0x4
1004820f:	49                   	dec    ecx
10048210:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
10048213:	89 50 fc             	mov    DWORD PTR [eax-0x4],edx
10048216:	75 ee                	jne    0x10048206
10048218:	8b ce                	mov    ecx,esi
1004821a:	e8 b1 02 01 00       	call   0x100584d0
1004821f:	5f                   	pop    edi
10048220:	5e                   	pop    esi
10048221:	5d                   	pop    ebp
10048222:	5b                   	pop    ebx
10048223:	83 c4 3c             	add    esp,0x3c
10048226:	c3                   	ret
10048227:	90                   	nop
10048228:	90                   	nop
10048229:	90                   	nop
1004822a:	90                   	nop
1004822b:	90                   	nop
1004822c:	90                   	nop
1004822d:	90                   	nop
1004822e:	90                   	nop
1004822f:	90                   	nop
10048230:	6a ff                	push   0xffffffff
10048232:	68 a0 49 0b 10       	push   0x100b49a0
10048237:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1004823d:	50                   	push   eax
1004823e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10048245:	83 ec 44             	sub    esp,0x44
10048248:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1004824d:	53                   	push   ebx
1004824e:	55                   	push   ebp
1004824f:	56                   	push   esi
10048250:	8b f1                	mov    esi,ecx
10048252:	8d 98 d0 81 01 00    	lea    ebx,[eax+0x181d0]
10048258:	57                   	push   edi
10048259:	8b 8e 9c 03 00 00    	mov    ecx,DWORD PTR [esi+0x39c]
1004825f:	8b 86 a0 03 00 00    	mov    eax,DWORD PTR [esi+0x3a0]
10048265:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
10048268:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1004826c:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1004826f:	8b 96 a4 03 00 00    	mov    edx,DWORD PTR [esi+0x3a4]
10048275:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
10048279:	8b 8e a8 03 00 00    	mov    ecx,DWORD PTR [esi+0x3a8]
1004827f:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
10048282:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10048286:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
10048289:	8b 86 b0 03 00 00    	mov    eax,DWORD PTR [esi+0x3b0]
1004828f:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
10048293:	8b 96 ac 03 00 00    	mov    edx,DWORD PTR [esi+0x3ac]
10048299:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1004829c:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
100482a0:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
100482a3:	8d 4c 24 30          	lea    ecx,[esp+0x30]
100482a7:	8d 54 24 18          	lea    edx,[esp+0x18]
100482ab:	51                   	push   ecx
100482ac:	52                   	push   edx
100482ad:	8b ce                	mov    ecx,esi
100482af:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
100482b3:	e8 18 02 00 00       	call   0x100484d0
100482b8:	33 ff                	xor    edi,edi
100482ba:	8d 6c 24 30          	lea    ebp,[esp+0x30]
100482be:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
100482c1:	8b cb                	mov    ecx,ebx
100482c3:	50                   	push   eax
100482c4:	57                   	push   edi
100482c5:	e8 16 3b ff ff       	call   0x1003bde0
100482ca:	47                   	inc    edi
100482cb:	83 c5 04             	add    ebp,0x4
100482ce:	83 ff 09             	cmp    edi,0x9
100482d1:	7c eb                	jl     0x100482be
100482d3:	8b ce                	mov    ecx,esi
100482d5:	e8 66 f7 00 00       	call   0x10057a40
100482da:	33 c0                	xor    eax,eax
100482dc:	8d 8e 30 05 00 00    	lea    ecx,[esi+0x530]
100482e2:	8b 91 6c fe ff ff    	mov    edx,DWORD PTR [ecx-0x194]
100482e8:	8b 39                	mov    edi,DWORD PTR [ecx]
100482ea:	3b 7a 0c             	cmp    edi,DWORD PTR [edx+0xc]
100482ed:	75 1c                	jne    0x1004830b
100482ef:	40                   	inc    eax
100482f0:	83 c1 04             	add    ecx,0x4
100482f3:	83 f8 06             	cmp    eax,0x6
100482f6:	7c ea                	jl     0x100482e2
100482f8:	5f                   	pop    edi
100482f9:	5e                   	pop    esi
100482fa:	5d                   	pop    ebp
100482fb:	5b                   	pop    ebx
100482fc:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
10048300:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10048307:	83 c4 50             	add    esp,0x50
1004830a:	c3                   	ret
1004830b:	8b 86 48 05 00 00    	mov    eax,DWORD PTR [esi+0x548]
10048311:	85 c0                	test   eax,eax
10048313:	0f 84 be 00 00 00    	je     0x100483d7
10048319:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004831e:	68 4e 06 00 00       	push   0x64e
10048323:	50                   	push   eax
10048324:	8b 08                	mov    ecx,DWORD PTR [eax]
10048326:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1004832c:	8b f8                	mov    edi,eax
1004832e:	83 c4 08             	add    esp,0x8
10048331:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
10048335:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004833b:	57                   	push   edi
1004833c:	c7 44 24 60 00 00 00 	mov    DWORD PTR [esp+0x60],0x0
10048343:	00 
10048344:	8b 11                	mov    edx,DWORD PTR [ecx]
10048346:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1004834c:	8b e8                	mov    ebp,eax
1004834e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10048353:	68 4f 06 00 00       	push   0x64f
10048358:	50                   	push   eax
10048359:	8b 08                	mov    ecx,DWORD PTR [eax]
1004835b:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10048361:	8b f0                	mov    esi,eax
10048363:	83 c4 08             	add    esp,0x8
10048366:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
1004836a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10048370:	56                   	push   esi
10048371:	c6 44 24 60 01       	mov    BYTE PTR [esp+0x60],0x1
10048376:	8b 11                	mov    edx,DWORD PTR [ecx]
10048378:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1004837e:	6a 00                	push   0x0
10048380:	68 00 84 04 10       	push   0x10048400
10048385:	6a 02                	push   0x2
10048387:	55                   	push   ebp
10048388:	50                   	push   eax
10048389:	e8 52 8c 00 00       	call   0x10050fe0
1004838e:	83 c4 14             	add    esp,0x14
10048391:	c6 44 24 5c 00       	mov    BYTE PTR [esp+0x5c],0x0
10048396:	85 f6                	test   esi,esi
10048398:	74 0f                	je     0x100483a9
1004839a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100483a0:	56                   	push   esi
100483a1:	8b 01                	mov    eax,DWORD PTR [ecx]
100483a3:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
100483a9:	85 ff                	test   edi,edi
100483ab:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
100483b2:	ff 
100483b3:	74 35                	je     0x100483ea
100483b5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100483bb:	57                   	push   edi
100483bc:	8b 11                	mov    edx,DWORD PTR [ecx]
100483be:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100483c4:	5f                   	pop    edi
100483c5:	5e                   	pop    esi
100483c6:	5d                   	pop    ebp
100483c7:	5b                   	pop    ebx
100483c8:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100483cc:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100483d3:	83 c4 50             	add    esp,0x50
100483d6:	c3                   	ret

*/
void DisplayOptionsScreen::SaveSettings() {
    // Write configuration values to the engine console
    if (g_pLTClient) {
        g_pLTClient->RunConsoleString("Gamma %f", m_fGamma);
        g_pLTClient->RunConsoleString("LightMap %d", m_bLightMap ? 1 : 0);
        g_pLTClient->RunConsoleString("Shadows %d", m_bShadows ? 1 : 0);
        g_pLTClient->RunConsoleString("DetailTexture %d", m_bDetailTexture ? 1 : 0);
    }
}

