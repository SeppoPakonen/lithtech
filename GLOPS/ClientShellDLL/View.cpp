#include "View.h"

// 0x10052b20: View::View
/*
10052b20:	6a ff                	push   0xffffffff
10052b22:	68 99 4f 0b 10       	push   0x100b4f99
10052b27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10052b2d:	50                   	push   eax
10052b2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10052b35:	81 ec 8c 06 00 00    	sub    esp,0x68c
10052b3b:	8b 84 24 9c 06 00 00 	mov    eax,DWORD PTR [esp+0x69c]
10052b42:	53                   	push   ebx
10052b43:	55                   	push   ebp
10052b44:	56                   	push   esi
10052b45:	33 db                	xor    ebx,ebx
10052b47:	57                   	push   edi
10052b48:	53                   	push   ebx
10052b49:	8b f1                	mov    esi,ecx
10052b4b:	6a 01                	push   0x1
10052b4d:	50                   	push   eax
10052b4e:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
10052b52:	e8 29 b8 01 00       	call   0x1006e380
10052b57:	89 5e 2c             	mov    DWORD PTR [esi+0x2c],ebx
10052b5a:	89 9c 24 a4 06 00 00 	mov    DWORD PTR [esp+0x6a4],ebx
10052b61:	c7 06 18 9b 0b 10    	mov    DWORD PTR [esi],0x100b9b18
10052b67:	89 5e 34             	mov    DWORD PTR [esi+0x34],ebx
10052b6a:	e8 f1 57 fb ff       	call   0x10008360
10052b6f:	8b 8c 24 b0 06 00 00 	mov    ecx,DWORD PTR [esp+0x6b0]
10052b76:	8d 6e 3c             	lea    ebp,[esi+0x3c]
10052b79:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10052b7c:	89 4e 30             	mov    DWORD PTR [esi+0x30],ecx
10052b7f:	b9 0f 00 00 00       	mov    ecx,0xf
10052b84:	33 c0                	xor    eax,eax
10052b86:	8b fd                	mov    edi,ebp
10052b88:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10052b8a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
10052b8e:	89 75 00             	mov    DWORD PTR [ebp+0x0],esi
10052b91:	e8 1a 42 fb ff       	call   0x10006db0
10052b96:	53                   	push   ebx
10052b97:	53                   	push   ebx
10052b98:	53                   	push   ebx
10052b99:	8d 4c 24 34          	lea    ecx,[esp+0x34]
10052b9d:	66 89 5c 24 24       	mov    WORD PTR [esp+0x24],bx
10052ba2:	66 89 5c 24 26       	mov    WORD PTR [esp+0x26],bx
10052ba7:	c7 44 24 28 01 00 00 	mov    DWORD PTR [esp+0x28],0x1
10052bae:	00 
10052baf:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
10052bb3:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
10052bb7:	e8 04 88 fb ff       	call   0x1000b3c0
10052bbc:	68 00 00 80 3f       	push   0x3f800000
10052bc1:	68 00 00 80 3f       	push   0x3f800000
10052bc6:	68 00 00 80 3f       	push   0x3f800000
10052bcb:	8d 4c 24 40          	lea    ecx,[esp+0x40]
10052bcf:	e8 ec 87 fb ff       	call   0x1000b3c0
10052bd4:	68 00 00 80 3f       	push   0x3f800000
10052bd9:	53                   	push   ebx
10052bda:	53                   	push   ebx
10052bdb:	53                   	push   ebx
10052bdc:	8d 4c 24 50          	lea    ecx,[esp+0x50]
10052be0:	e8 ab 41 fb ff       	call   0x10006d90
10052be5:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
10052be9:	88 5c 24 54          	mov    BYTE PTR [esp+0x54],bl
10052bed:	88 9c 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],bl
10052bf4:	8d 84 24 14 01 00 00 	lea    eax,[esp+0x114]
10052bfb:	b9 0a 00 00 00       	mov    ecx,0xa
10052c00:	88 18                	mov    BYTE PTR [eax],bl
10052c02:	05 80 00 00 00       	add    eax,0x80
10052c07:	49                   	dec    ecx
10052c08:	75 f6                	jne    0x10052c00
10052c0a:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
10052c0f:	8d 54 24 18          	lea    edx,[esp+0x18]
10052c13:	52                   	push   edx
10052c14:	88 9c 24 18 06 00 00 	mov    BYTE PTR [esp+0x618],bl
10052c1b:	c7 84 24 98 06 00 00 	mov    DWORD PTR [esp+0x698],0x0
10052c22:	00 00 00 00 
10052c26:	c7 84 24 9c 06 00 00 	mov    DWORD PTR [esp+0x69c],0x0
10052c2d:	00 00 00 00 
10052c31:	66 c7 44 24 1c 05 00 	mov    WORD PTR [esp+0x1c],0x5
10052c38:	ff 90 ec 02 00 00    	call   DWORD PTR [eax+0x2ec]
10052c3e:	6a 18                	push   0x18
10052c40:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10052c43:	e8 e1 0c 05 00       	call   0x100a3929
10052c48:	83 c4 08             	add    esp,0x8
10052c4b:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10052c4f:	3b c3                	cmp    eax,ebx
10052c51:	c6 84 24 a4 06 00 00 	mov    BYTE PTR [esp+0x6a4],0x1
10052c58:	01 
10052c59:	74 09                	je     0x10052c64
10052c5b:	8b c8                	mov    ecx,eax
10052c5d:	e8 7e f4 fb ff       	call   0x100120e0
10052c62:	eb 02                	jmp    0x10052c66
10052c64:	33 c0                	xor    eax,eax
10052c66:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
10052c69:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
10052c6c:	3b c3                	cmp    eax,ebx
10052c6e:	88 9c 24 a4 06 00 00 	mov    BYTE PTR [esp+0x6a4],bl
10052c75:	75 33                	jne    0x10052caa
10052c77:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10052c7d:	68 9d 04 00 00       	push   0x49d
10052c82:	68 6c ae 0d 10       	push   0x100dae6c
10052c87:	8b 11                	mov    edx,DWORD PTR [ecx]
10052c89:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
10052c8f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10052c94:	68 48 ae 0d 10       	push   0x100dae48
10052c99:	68 7c 5d 0c 10       	push   0x100c5d7c
10052c9e:	50                   	push   eax
10052c9f:	8b 08                	mov    ecx,DWORD PTR [eax]
10052ca1:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10052ca7:	83 c4 0c             	add    esp,0xc
10052caa:	89 5e 48             	mov    DWORD PTR [esi+0x48],ebx
10052cad:	c7 46 4c 88 ad 0d 10 	mov    DWORD PTR [esi+0x4c],0x100dad88
10052cb4:	a1 88 ad 0d 10       	mov    eax,ds:0x100dad88
10052cb9:	3b c3                	cmp    eax,ebx
10052cbb:	74 06                	je     0x10052cc3
10052cbd:	55                   	push   ebp
10052cbe:	ff d0                	call   eax
10052cc0:	83 c4 04             	add    esp,0x4
10052cc3:	8b 8c 24 9c 06 00 00 	mov    ecx,DWORD PTR [esp+0x69c]
10052cca:	8b c6                	mov    eax,esi
10052ccc:	5f                   	pop    edi
10052ccd:	5e                   	pop    esi
10052cce:	5d                   	pop    ebp
10052ccf:	5b                   	pop    ebx
10052cd0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10052cd7:	81 c4 98 06 00 00    	add    esp,0x698
10052cdd:	c2 08 00             	ret    0x8
10052ce0:	56                   	push   esi
10052ce1:	8b f1                	mov    esi,ecx
10052ce3:	e8 18 00 00 00       	call   0x10052d00
10052ce8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10052ced:	74 09                	je     0x10052cf8
10052cef:	56                   	push   esi
10052cf0:	e8 29 0c 05 00       	call   0x100a391e
10052cf5:	83 c4 04             	add    esp,0x4
10052cf8:	8b c6                	mov    eax,esi
10052cfa:	5e                   	pop    esi
10052cfb:	c2 04 00             	ret    0x4
10052cfe:	90                   	nop
10052cff:	90                   	nop
10052d00:	6a ff                	push   0xffffffff
10052d02:	68 b8 4f 0b 10       	push   0x100b4fb8
10052d07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10052d0d:	50                   	push   eax
10052d0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10052d15:	51                   	push   ecx
10052d16:	56                   	push   esi
10052d17:	8b f1                	mov    esi,ecx
10052d19:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
10052d1d:	c7 06 18 9b 0b 10    	mov    DWORD PTR [esi],0x100b9b18
10052d23:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
10052d26:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10052d2d:	00 
10052d2e:	85 c9                	test   ecx,ecx
10052d30:	74 0a                	je     0x10052d3c
10052d32:	8b 01                	mov    eax,DWORD PTR [ecx]
10052d34:	a8 01                	test   al,0x1
10052d36:	74 04                	je     0x10052d3c
10052d38:	24 fd                	and    al,0xfd
10052d3a:	89 01                	mov    DWORD PTR [ecx],eax
10052d3c:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
10052d3f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10052d42:	85 c0                	test   eax,eax
10052d44:	74 09                	je     0x10052d4f
10052d46:	8d 4e 3c             	lea    ecx,[esi+0x3c]
10052d49:	51                   	push   ecx
10052d4a:	ff d0                	call   eax
10052d4c:	83 c4 04             	add    esp,0x4
10052d4f:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
10052d52:	85 c0                	test   eax,eax
10052d54:	74 09                	je     0x10052d5f
10052d56:	50                   	push   eax
10052d57:	e8 c2 0b 05 00       	call   0x100a391e
10052d5c:	83 c4 04             	add    esp,0x4
10052d5f:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10052d65:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
10052d68:	50                   	push   eax
10052d69:	8b 11                	mov    edx,DWORD PTR [ecx]
10052d6b:	ff 92 e0 00 00 00    	call   DWORD PTR [edx+0xe0]
10052d71:	8b ce                	mov    ecx,esi
10052d73:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10052d7a:	ff 
10052d7b:	e8 a0 b7 01 00       	call   0x1006e520
10052d80:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10052d84:	5e                   	pop    esi
10052d85:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10052d8c:	83 c4 10             	add    esp,0x10
10052d8f:	c3                   	ret
10052d90:	56                   	push   esi
10052d91:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10052d95:	57                   	push   edi
10052d96:	8b f9                	mov    edi,ecx
10052d98:	85 f6                	test   esi,esi
10052d9a:	74 05                	je     0x10052da1
10052d9c:	f6 06 01             	test   BYTE PTR [esi],0x1
10052d9f:	75 05                	jne    0x10052da6
10052da1:	be 88 3d 12 10       	mov    esi,0x10123d88
10052da6:	8b 4f 48             	mov    ecx,DWORD PTR [edi+0x48]
10052da9:	85 c9                	test   ecx,ecx
10052dab:	74 0a                	je     0x10052db7
10052dad:	8b 01                	mov    eax,DWORD PTR [ecx]
10052daf:	a8 01                	test   al,0x1
10052db1:	74 04                	je     0x10052db7
10052db3:	24 fd                	and    al,0xfd
10052db5:	89 01                	mov    DWORD PTR [ecx],eax
10052db7:	8b 47 4c             	mov    eax,DWORD PTR [edi+0x4c]
10052dba:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10052dbd:	85 c0                	test   eax,eax
10052dbf:	74 09                	je     0x10052dca
10052dc1:	8d 4f 3c             	lea    ecx,[edi+0x3c]
10052dc4:	51                   	push   ecx
10052dc5:	ff d0                	call   eax
10052dc7:	83 c4 04             	add    esp,0x4
10052dca:	85 f6                	test   esi,esi
10052dcc:	89 77 48             	mov    DWORD PTR [edi+0x48],esi
10052dcf:	74 05                	je     0x10052dd6
10052dd1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10052dd4:	eb 02                	jmp    0x10052dd8
10052dd6:	33 c0                	xor    eax,eax
10052dd8:	8d 14 40             	lea    edx,[eax+eax*2]
10052ddb:	c1 e2 04             	shl    edx,0x4
10052dde:	81 c2 88 ad 0d 10    	add    edx,0x100dad88
10052de4:	85 f6                	test   esi,esi
10052de6:	89 57 4c             	mov    DWORD PTR [edi+0x4c],edx
10052de9:	74 0a                	je     0x10052df5
10052deb:	8b 06                	mov    eax,DWORD PTR [esi]
10052ded:	a8 01                	test   al,0x1
10052def:	74 04                	je     0x10052df5
10052df1:	0c 02                	or     al,0x2
10052df3:	89 06                	mov    DWORD PTR [esi],eax
10052df5:	8b 47 4c             	mov    eax,DWORD PTR [edi+0x4c]
10052df8:	8b 00                	mov    eax,DWORD PTR [eax]
10052dfa:	85 c0                	test   eax,eax
10052dfc:	74 09                	je     0x10052e07
10052dfe:	83 c7 3c             	add    edi,0x3c
10052e01:	57                   	push   edi
10052e02:	ff d0                	call   eax
10052e04:	83 c4 04             	add    esp,0x4
10052e07:	5f                   	pop    edi
10052e08:	5e                   	pop    esi
10052e09:	c2 04 00             	ret    0x4
10052e0c:	90                   	nop
10052e0d:	90                   	nop
10052e0e:	90                   	nop
10052e0f:	90                   	nop
10052e10:	83 ec 10             	sub    esp,0x10
10052e13:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10052e17:	56                   	push   esi
10052e18:	8b f1                	mov    esi,ecx
10052e1a:	50                   	push   eax
10052e1b:	e8 f0 7c 01 00       	call   0x1006ab10
10052e20:	8d 4c 24 04          	lea    ecx,[esp+0x4]
10052e24:	51                   	push   ecx
10052e25:	8b ce                	mov    ecx,esi
10052e27:	e8 94 b8 01 00       	call   0x1006e6c0
10052e2c:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10052e31:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10052e35:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10052e39:	3d 00 04 00 00       	cmp    eax,0x400
10052e3e:	b8 04 00 00 00       	mov    eax,0x4
10052e43:	03 d0                	add    edx,eax
10052e45:	03 c8                	add    ecx,eax
10052e47:	89 54 24 04          	mov    DWORD PTR [esp+0x4],edx
10052e4b:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10052e4f:	b8 08 00 00 00       	mov    eax,0x8
10052e54:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
10052e58:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10052e5c:	2b d0                	sub    edx,eax
10052e5e:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
10052e62:	8b 56 4c             	mov    edx,DWORD PTR [esi+0x4c]
10052e65:	2b c8                	sub    ecx,eax
10052e67:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10052e6b:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
10052e6e:	85 c0                	test   eax,eax
10052e70:	74 0e                	je     0x10052e80
10052e72:	8d 4c 24 04          	lea    ecx,[esp+0x4]
10052e76:	83 c6 3c             	add    esi,0x3c
10052e79:	51                   	push   ecx
10052e7a:	56                   	push   esi
10052e7b:	ff d0                	call   eax
10052e7d:	83 c4 08             	add    esp,0x8
10052e80:	5e                   	pop    esi
10052e81:	83 c4 10             	add    esp,0x10
10052e84:	c2 04 00             	ret    0x4
10052e87:	90                   	nop
10052e88:	90                   	nop
10052e89:	90                   	nop
10052e8a:	90                   	nop
10052e8b:	90                   	nop
10052e8c:	90                   	nop
10052e8d:	90                   	nop
10052e8e:	90                   	nop
10052e8f:	90                   	nop
10052e90:	83 ec 20             	sub    esp,0x20
10052e93:	56                   	push   esi
10052e94:	57                   	push   edi
10052e95:	8b f9                	mov    edi,ecx
10052e97:	8b 47 48             	mov    eax,DWORD PTR [edi+0x48]
10052e9a:	85 c0                	test   eax,eax
10052e9c:	74 05                	je     0x10052ea3
10052e9e:	f6 00 01             	test   BYTE PTR [eax],0x1
10052ea1:	75 07                	jne    0x10052eaa
10052ea3:	c7 47 48 88 3d 12 10 	mov    DWORD PTR [edi+0x48],0x10123d88
10052eaa:	8b 47 4c             	mov    eax,DWORD PTR [edi+0x4c]
10052ead:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
10052eb0:	85 c9                	test   ecx,ecx
10052eb2:	74 5c                	je     0x10052f10
10052eb4:	8d 4c 24 08          	lea    ecx,[esp+0x8]
10052eb8:	51                   	push   ecx
10052eb9:	8b cf                	mov    ecx,edi
10052ebb:	e8 00 b8 01 00       	call   0x1006e6c0
10052ec0:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10052ec5:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10052ec9:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10052ecd:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10052ed1:	3d 00 04 00 00       	cmp    eax,0x400
10052ed6:	b8 04 00 00 00       	mov    eax,0x4
10052edb:	03 c8                	add    ecx,eax
10052edd:	03 f0                	add    esi,eax
10052edf:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
10052ee3:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10052ee7:	b8 08 00 00 00       	mov    eax,0x8
10052eec:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
10052ef0:	2b d0                	sub    edx,eax
10052ef2:	2b c8                	sub    ecx,eax
10052ef4:	8d 44 24 08          	lea    eax,[esp+0x8]
10052ef8:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10052efc:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10052f00:	8b 57 4c             	mov    edx,DWORD PTR [edi+0x4c]
10052f03:	50                   	push   eax
10052f04:	8d 4f 3c             	lea    ecx,[edi+0x3c]
10052f07:	6a 00                	push   0x0
10052f09:	51                   	push   ecx
10052f0a:	ff 52 0c             	call   DWORD PTR [edx+0xc]
10052f0d:	83 c4 0c             	add    esp,0xc
10052f10:	8b cf                	mov    ecx,edi
10052f12:	e8 39 4f 01 00       	call   0x10067e50
10052f17:	8b 50 3c             	mov    edx,DWORD PTR [eax+0x3c]
10052f1a:	33 c9                	xor    ecx,ecx
10052f1c:	8b 74 90 2c          	mov    esi,DWORD PTR [eax+edx*4+0x2c]
10052f20:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10052f24:	3b f7                	cmp    esi,edi
10052f26:	50                   	push   eax
10052f27:	0f 94 c1             	sete   cl
10052f2a:	8b f1                	mov    esi,ecx
10052f2c:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10052f30:	33 d2                	xor    edx,edx
10052f32:	51                   	push   ecx
10052f33:	85 f6                	test   esi,esi
10052f35:	0f 95 c2             	setne  dl
10052f38:	8b cf                	mov    ecx,edi
10052f3a:	89 57 2c             	mov    DWORD PTR [edi+0x2c],edx
10052f3d:	e8 1e e6 ff ff       	call   0x10051560
10052f42:	f7 de                	neg    esi
10052f44:	1b f6                	sbb    esi,esi
10052f46:	8d 54 24 18          	lea    edx,[esp+0x18]
10052f4a:	81 e6 5f 5f 5f 13    	and    esi,0x135f5f5f
10052f50:	52                   	push   edx
10052f51:	8b cf                	mov    ecx,edi
10052f53:	81 c6 a0 a0 a0 ec    	add    esi,0xeca0a0a0
10052f59:	e8 62 b7 01 00       	call   0x1006e6c0
10052f5e:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10052f63:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10052f67:	3d 00 04 00 00       	cmp    eax,0x400
10052f6c:	b8 06 00 00 00       	mov    eax,0x6
10052f71:	73 22                	jae    0x10052f95
10052f73:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10052f77:	03 d0                	add    edx,eax
10052f79:	03 c8                	add    ecx,eax
10052f7b:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10052f7f:	83 e8 0c             	sub    eax,0xc
10052f82:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10052f86:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10052f8a:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
10052f8e:	b8 0e 00 00 00       	mov    eax,0xe
10052f93:	eb 20                	jmp    0x10052fb5
10052f95:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10052f99:	03 d0                	add    edx,eax
10052f9b:	03 c8                	add    ecx,eax
10052f9d:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10052fa1:	83 e8 0c             	sub    eax,0xc
10052fa4:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10052fa8:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10052fac:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
10052fb0:	b8 11 00 00 00       	mov    eax,0x11
10052fb5:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10052fb9:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10052fbd:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10052fc1:	50                   	push   eax
10052fc2:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10052fc6:	50                   	push   eax
10052fc7:	8b 47 48             	mov    eax,DWORD PTR [edi+0x48]
10052fca:	51                   	push   ecx
10052fcb:	52                   	push   edx
10052fcc:	56                   	push   esi
10052fcd:	6a 00                	push   0x0
10052fcf:	6a 00                	push   0x0
10052fd1:	56                   	push   esi
10052fd2:	50                   	push   eax
10052fd3:	e8 f8 8b 01 00       	call   0x1006bbd0
10052fd8:	83 c4 24             	add    esp,0x24
10052fdb:	5f                   	pop    edi
10052fdc:	5e                   	pop    esi
10052fdd:	83 c4 20             	add    esp,0x20
10052fe0:	c2 08 00             	ret    0x8
10052fe3:	90                   	nop
10052fe4:	90                   	nop
10052fe5:	90                   	nop
10052fe6:	90                   	nop
10052fe7:	90                   	nop
10052fe8:	90                   	nop
10052fe9:	90                   	nop
10052fea:	90                   	nop
10052feb:	90                   	nop
10052fec:	90                   	nop
10052fed:	90                   	nop
10052fee:	90                   	nop
10052fef:	90                   	nop
10052ff0:	56                   	push   esi
10052ff1:	8b f1                	mov    esi,ecx
10052ff3:	6a 00                	push   0x0
10052ff5:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10052ff8:	50                   	push   eax
10052ff9:	e8 22 b9 01 00       	call   0x1006e920
10052ffe:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10053001:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
10053004:	85 c0                	test   eax,eax
10053006:	74 1c                	je     0x10053024
10053008:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1005300c:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10053010:	52                   	push   edx
10053011:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10053015:	51                   	push   ecx
10053016:	8d 4e 3c             	lea    ecx,[esi+0x3c]
10053019:	52                   	push   edx
1005301a:	51                   	push   ecx
1005301b:	ff d0                	call   eax
1005301d:	83 c4 10             	add    esp,0x10
10053020:	85 c0                	test   eax,eax
10053022:	75 08                	jne    0x1005302c
10053024:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10053027:	0c 03                	or     al,0x3
10053029:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
1005302c:	5e                   	pop    esi
1005302d:	c2 0c 00             	ret    0xc
10053030:	56                   	push   esi
10053031:	8b f1                	mov    esi,ecx
10053033:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
10053036:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
10053039:	85 c0                	test   eax,eax
1005303b:	74 18                	je     0x10053055
1005303d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10053041:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10053045:	51                   	push   ecx
10053046:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1005304a:	52                   	push   edx
1005304b:	8d 56 3c             	lea    edx,[esi+0x3c]
1005304e:	51                   	push   ecx
1005304f:	52                   	push   edx
10053050:	ff d0                	call   eax
10053052:	83 c4 10             	add    esp,0x10
10053055:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10053058:	24 fc                	and    al,0xfc
1005305a:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
1005305d:	5e                   	pop    esi
1005305e:	c2 0c 00             	ret    0xc
10053061:	90                   	nop
10053062:	90                   	nop
10053063:	90                   	nop
10053064:	90                   	nop
10053065:	90                   	nop
10053066:	90                   	nop
10053067:	90                   	nop
10053068:	90                   	nop
10053069:	90                   	nop
1005306a:	90                   	nop
1005306b:	90                   	nop
1005306c:	90                   	nop
1005306d:	90                   	nop
1005306e:	90                   	nop
1005306f:	90                   	nop
10053070:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10053073:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
10053076:	85 c0                	test   eax,eax
10053078:	74 18                	je     0x10053092
1005307a:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1005307e:	83 c1 3c             	add    ecx,0x3c
10053081:	52                   	push   edx
10053082:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10053086:	52                   	push   edx
10053087:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1005308b:	52                   	push   edx
1005308c:	51                   	push   ecx
1005308d:	ff d0                	call   eax
1005308f:	83 c4 10             	add    esp,0x10
10053092:	c2 0c 00             	ret    0xc
10053095:	90                   	nop
10053096:	90                   	nop
10053097:	90                   	nop
10053098:	90                   	nop
10053099:	90                   	nop
1005309a:	90                   	nop
1005309b:	90                   	nop
1005309c:	90                   	nop
1005309d:	90                   	nop
1005309e:	90                   	nop
1005309f:	90                   	nop
100530a0:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
100530a3:	8b 40 1c             	mov    eax,DWORD PTR [eax+0x1c]
100530a6:	85 c0                	test   eax,eax
100530a8:	74 18                	je     0x100530c2
100530aa:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100530ae:	83 c1 3c             	add    ecx,0x3c
100530b1:	52                   	push   edx
100530b2:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100530b6:	52                   	push   edx
100530b7:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100530bb:	52                   	push   edx
100530bc:	51                   	push   ecx
100530bd:	ff d0                	call   eax
100530bf:	83 c4 10             	add    esp,0x10
100530c2:	c2 0c 00             	ret    0xc
100530c5:	90                   	nop
100530c6:	90                   	nop
100530c7:	90                   	nop
100530c8:	90                   	nop
100530c9:	90                   	nop
100530ca:	90                   	nop
100530cb:	90                   	nop
100530cc:	90                   	nop
100530cd:	90                   	nop
100530ce:	90                   	nop
100530cf:	90                   	nop
100530d0:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
100530d3:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
100530d6:	85 c0                	test   eax,eax
100530d8:	74 1d                	je     0x100530f7
100530da:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100530de:	83 c1 3c             	add    ecx,0x3c
100530e1:	52                   	push   edx
100530e2:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100530e6:	52                   	push   edx
100530e7:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100530eb:	52                   	push   edx
100530ec:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100530f0:	52                   	push   edx
100530f1:	51                   	push   ecx
100530f2:	ff d0                	call   eax
100530f4:	83 c4 14             	add    esp,0x14
100530f7:	c2 10 00             	ret    0x10
100530fa:	90                   	nop
100530fb:	90                   	nop
100530fc:	90                   	nop
100530fd:	90                   	nop
100530fe:	90                   	nop
100530ff:	90                   	nop
10053100:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10053103:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
10053106:	85 c0                	test   eax,eax
10053108:	74 18                	je     0x10053122
1005310a:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1005310e:	83 c1 3c             	add    ecx,0x3c
10053111:	52                   	push   edx
10053112:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10053116:	52                   	push   edx
10053117:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1005311b:	52                   	push   edx
1005311c:	51                   	push   ecx
1005311d:	ff d0                	call   eax
1005311f:	83 c4 10             	add    esp,0x10
10053122:	c2 0c 00             	ret    0xc
10053125:	90                   	nop
10053126:	90                   	nop
10053127:	90                   	nop
10053128:	90                   	nop
10053129:	90                   	nop
1005312a:	90                   	nop
1005312b:	90                   	nop
1005312c:	90                   	nop
1005312d:	90                   	nop
1005312e:	90                   	nop
1005312f:	90                   	nop
10053130:	56                   	push   esi
10053131:	8b f1                	mov    esi,ecx
10053133:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
10053136:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
10053139:	85 c0                	test   eax,eax
1005313b:	74 09                	je     0x10053146
1005313d:	8d 4e 3c             	lea    ecx,[esi+0x3c]
10053140:	51                   	push   ecx
10053141:	ff d0                	call   eax
10053143:	83 c4 04             	add    esp,0x4
10053146:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10053149:	a8 02                	test   al,0x2
1005314b:	74 05                	je     0x10053152
1005314d:	0c 01                	or     al,0x1
1005314f:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10053152:	5e                   	pop    esi
10053153:	c3                   	ret
10053154:	90                   	nop
10053155:	90                   	nop
10053156:	90                   	nop
10053157:	90                   	nop
10053158:	90                   	nop
10053159:	90                   	nop
1005315a:	90                   	nop
1005315b:	90                   	nop
1005315c:	90                   	nop
1005315d:	90                   	nop
1005315e:	90                   	nop
1005315f:	90                   	nop
10053160:	56                   	push   esi
10053161:	8b f1                	mov    esi,ecx
10053163:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
10053166:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
10053169:	85 c0                	test   eax,eax
1005316b:	74 09                	je     0x10053176
1005316d:	8d 4e 3c             	lea    ecx,[esi+0x3c]
10053170:	51                   	push   ecx
10053171:	ff d0                	call   eax
10053173:	83 c4 04             	add    esp,0x4
10053176:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10053179:	a8 02                	test   al,0x2
1005317b:	74 05                	je     0x10053182
1005317d:	24 fe                	and    al,0xfe
1005317f:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10053182:	5e                   	pop    esi
10053183:	c3                   	ret
10053184:	90                   	nop
10053185:	90                   	nop
10053186:	90                   	nop
10053187:	90                   	nop
10053188:	90                   	nop
10053189:	90                   	nop
1005318a:	90                   	nop
1005318b:	90                   	nop
1005318c:	90                   	nop
1005318d:	90                   	nop
1005318e:	90                   	nop
1005318f:	90                   	nop
10053190:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10053194:	85 c0                	test   eax,eax
10053196:	89 41 48             	mov    DWORD PTR [ecx+0x48],eax
10053199:	74 14                	je     0x100531af
1005319b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005319e:	8d 04 40             	lea    eax,[eax+eax*2]
100531a1:	c1 e0 04             	shl    eax,0x4
100531a4:	05 88 ad 0d 10       	add    eax,0x100dad88
100531a9:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
100531ac:	c2 04 00             	ret    0x4
100531af:	33 c0                	xor    eax,eax
100531b1:	8d 04 40             	lea    eax,[eax+eax*2]
100531b4:	c1 e0 04             	shl    eax,0x4
100531b7:	05 88 ad 0d 10       	add    eax,0x100dad88
100531bc:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
100531bf:	c2 04 00             	ret    0x4
100531c2:	90                   	nop
100531c3:	90                   	nop
100531c4:	90                   	nop
100531c5:	90                   	nop
100531c6:	90                   	nop
100531c7:	90                   	nop
100531c8:	90                   	nop
100531c9:	90                   	nop
100531ca:	90                   	nop
100531cb:	90                   	nop
100531cc:	90                   	nop
100531cd:	90                   	nop
100531ce:	90                   	nop
100531cf:	90                   	nop
100531d0:	8b 51 48             	mov    edx,DWORD PTR [ecx+0x48]
100531d3:	85 d2                	test   edx,edx
100531d5:	74 0a                	je     0x100531e1
100531d7:	8b 02                	mov    eax,DWORD PTR [edx]
100531d9:	a8 01                	test   al,0x1
100531db:	74 04                	je     0x100531e1
100531dd:	0c 02                	or     al,0x2
100531df:	89 02                	mov    DWORD PTR [edx],eax
100531e1:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
100531e4:	8b 00                	mov    eax,DWORD PTR [eax]
100531e6:	85 c0                	test   eax,eax
100531e8:	74 07                	je     0x100531f1
100531ea:	83 c1 3c             	add    ecx,0x3c
100531ed:	51                   	push   ecx
100531ee:	ff d0                	call   eax
100531f0:	59                   	pop    ecx
100531f1:	c3                   	ret
100531f2:	90                   	nop
100531f3:	90                   	nop
100531f4:	90                   	nop
100531f5:	90                   	nop
100531f6:	90                   	nop
100531f7:	90                   	nop
100531f8:	90                   	nop
100531f9:	90                   	nop
100531fa:	90                   	nop
100531fb:	90                   	nop
100531fc:	90                   	nop
100531fd:	90                   	nop
100531fe:	90                   	nop
100531ff:	90                   	nop
10053200:	8b 51 48             	mov    edx,DWORD PTR [ecx+0x48]
10053203:	85 d2                	test   edx,edx
10053205:	74 0a                	je     0x10053211
10053207:	8b 02                	mov    eax,DWORD PTR [edx]
10053209:	a8 01                	test   al,0x1
1005320b:	74 04                	je     0x10053211
1005320d:	24 fd                	and    al,0xfd
1005320f:	89 02                	mov    DWORD PTR [edx],eax
10053211:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10053214:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10053217:	85 c0                	test   eax,eax
10053219:	74 07                	je     0x10053222
1005321b:	83 c1 3c             	add    ecx,0x3c
1005321e:	51                   	push   ecx
1005321f:	ff d0                	call   eax
10053221:	59                   	pop    ecx
10053222:	c3                   	ret
10053223:	90                   	nop
10053224:	90                   	nop
10053225:	90                   	nop
10053226:	90                   	nop
10053227:	90                   	nop
10053228:	90                   	nop
10053229:	90                   	nop
1005322a:	90                   	nop
1005322b:	90                   	nop
1005322c:	90                   	nop
1005322d:	90                   	nop
1005322e:	90                   	nop
1005322f:	90                   	nop
10053230:	56                   	push   esi
10053231:	8b f1                	mov    esi,ecx
10053233:	e8 18 00 00 00       	call   0x10053250
10053238:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1005323d:	74 09                	je     0x10053248
1005323f:	56                   	push   esi
10053240:	e8 d9 06 05 00       	call   0x100a391e
10053245:	83 c4 04             	add    esp,0x4
10053248:	8b c6                	mov    eax,esi
1005324a:	5e                   	pop    esi
1005324b:	c2 04 00             	ret    0x4
1005324e:	90                   	nop
1005324f:	90                   	nop
10053250:	6a ff                	push   0xffffffff
10053252:	68 d8 4f 0b 10       	push   0x100b4fd8
10053257:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1005325d:	50                   	push   eax
1005325e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10053265:	51                   	push   ecx
10053266:	56                   	push   esi
10053267:	8b f1                	mov    esi,ecx
10053269:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1005326d:	c7 06 88 9b 0b 10    	mov    DWORD PTR [esi],0x100b9b88
10053273:	a1 e0 bf 11 10       	mov    eax,ds:0x1011bfe0
10053278:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1005327f:	00 
10053280:	85 c0                	test   eax,eax
10053282:	74 16                	je     0x1005329a
10053284:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1005328a:	50                   	push   eax
1005328b:	8b 11                	mov    edx,DWORD PTR [ecx]
1005328d:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
10053290:	c7 05 e0 bf 11 10 00 	mov    DWORD PTR ds:0x1011bfe0,0x0
10053297:	00 00 00 
1005329a:	8b ce                	mov    ecx,esi
1005329c:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
100532a3:	ff 
100532a4:	e8 77 b2 01 00       	call   0x1006e520
100532a9:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100532ad:	5e                   	pop    esi
100532ae:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100532b5:	83 c4 10             	add    esp,0x10
100532b8:	c3                   	ret
100532b9:	90                   	nop
100532ba:	90                   	nop
100532bb:	90                   	nop
100532bc:	90                   	nop
100532bd:	90                   	nop
100532be:	90                   	nop
100532bf:	90                   	nop
100532c0:	a0 24 c1 11 10       	mov    al,ds:0x1011c124
100532c5:	56                   	push   esi
100532c6:	a8 01                	test   al,0x1
100532c8:	8b f1                	mov    esi,ecx
100532ca:	0f 84 b2 00 00 00    	je     0x10053382
100532d0:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
100532d3:	53                   	push   ebx
100532d4:	57                   	push   edi
100532d5:	e8 46 b7 01 00       	call   0x1006ea20
100532da:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100532de:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
100532e1:	50                   	push   eax
100532e2:	e8 69 b3 01 00       	call   0x1006e650
100532e7:	8d 7e 30             	lea    edi,[esi+0x30]
100532ea:	bb 03 00 00 00       	mov    ebx,0x3
100532ef:	8b 37                	mov    esi,DWORD PTR [edi]
100532f1:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
100532f4:	85 c9                	test   ecx,ecx
100532f6:	74 0a                	je     0x10053302
100532f8:	8b 01                	mov    eax,DWORD PTR [ecx]
100532fa:	a8 01                	test   al,0x1
100532fc:	74 04                	je     0x10053302
100532fe:	24 fd                	and    al,0xfd
10053300:	89 01                	mov    DWORD PTR [ecx],eax
10053302:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10053305:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10053308:	85 c0                	test   eax,eax
1005330a:	74 09                	je     0x10053315
1005330c:	8d 56 3c             	lea    edx,[esi+0x3c]
1005330f:	52                   	push   edx
10053310:	ff d0                	call   eax
10053312:	83 c4 04             	add    esp,0x4
10053315:	b8 88 3d 12 10       	mov    eax,0x10123d88
1005331a:	c7 46 48 88 3d 12 10 	mov    DWORD PTR [esi+0x48],0x10123d88
10053321:	8b 0d 8c 3d 12 10    	mov    ecx,DWORD PTR ds:0x10123d8c
10053327:	f7 d8                	neg    eax
10053329:	1b c0                	sbb    eax,eax
1005332b:	23 c1                	and    eax,ecx
1005332d:	b9 88 3d 12 10       	mov    ecx,0x10123d88
10053332:	8d 04 40             	lea    eax,[eax+eax*2]
10053335:	c1 e0 04             	shl    eax,0x4
10053338:	05 88 ad 0d 10       	add    eax,0x100dad88
1005333d:	85 c9                	test   ecx,ecx
1005333f:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
10053342:	74 15                	je     0x10053359
10053344:	f6 05 88 3d 12 10 01 	test   BYTE PTR ds:0x10123d88,0x1
1005334b:	74 0c                	je     0x10053359
1005334d:	a1 88 3d 12 10       	mov    eax,ds:0x10123d88
10053352:	0c 02                	or     al,0x2
10053354:	a3 88 3d 12 10       	mov    ds:0x10123d88,eax
10053359:	8b 56 4c             	mov    edx,DWORD PTR [esi+0x4c]
1005335c:	8b 02                	mov    eax,DWORD PTR [edx]
1005335e:	85 c0                	test   eax,eax
10053360:	74 09                	je     0x1005336b
10053362:	83 c6 3c             	add    esi,0x3c
10053365:	56                   	push   esi
10053366:	ff d0                	call   eax
10053368:	83 c4 04             	add    esp,0x4
1005336b:	8b 0f                	mov    ecx,DWORD PTR [edi]
1005336d:	e8 0e b6 01 00       	call   0x1006e980
10053372:	83 c7 04             	add    edi,0x4
10053375:	4b                   	dec    ebx
10053376:	0f 85 73 ff ff ff    	jne    0x100532ef
1005337c:	5f                   	pop    edi
1005337d:	5b                   	pop    ebx
1005337e:	5e                   	pop    esi
1005337f:	c2 04 00             	ret    0x4
10053382:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10053386:	8b ce                	mov    ecx,esi
10053388:	50                   	push   eax
10053389:	e8 22 00 00 00       	call   0x100533b0
1005338e:	5e                   	pop    esi
1005338f:	c2 04 00             	ret    0x4
10053392:	90                   	nop
10053393:	90                   	nop
10053394:	90                   	nop
10053395:	90                   	nop
10053396:	90                   	nop
10053397:	90                   	nop
10053398:	90                   	nop
10053399:	90                   	nop
1005339a:	90                   	nop
1005339b:	90                   	nop
1005339c:	90                   	nop
1005339d:	90                   	nop
1005339e:	90                   	nop
1005339f:	90                   	nop
100533a0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100533a4:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
100533a7:	b8 01 00 00 00       	mov    eax,0x1
100533ac:	c2 08 00             	ret    0x8
100533af:	90                   	nop
100533b0:	83 ec 48             	sub    esp,0x48
100533b3:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
100533b7:	53                   	push   ebx
100533b8:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
100533bc:	55                   	push   ebp
100533bd:	56                   	push   esi
100533be:	b8 56 55 55 55       	mov    eax,0x55555556
100533c3:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
100533c6:	57                   	push   edi
100533c7:	f7 ee                	imul   esi
100533c9:	8b 79 0c             	mov    edi,DWORD PTR [ecx+0xc]
100533cc:	8b c2                	mov    eax,edx
100533ce:	c1 e8 1f             	shr    eax,0x1f
100533d1:	03 d0                	add    edx,eax
100533d3:	8b c7                	mov    eax,edi
100533d5:	8b ea                	mov    ebp,edx
100533d7:	8b de                	mov    ebx,esi
100533d9:	99                   	cdq
100533da:	83 e2 03             	and    edx,0x3
100533dd:	2b dd                	sub    ebx,ebp
100533df:	03 c2                	add    eax,edx
100533e1:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
100533e4:	8b 09                	mov    ecx,DWORD PTR [ecx]
100533e6:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
100533ea:	c1 f8 02             	sar    eax,0x2
100533ed:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100533f1:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100533f5:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
100533f9:	2b d0                	sub    edx,eax
100533fb:	03 d7                	add    edx,edi
100533fd:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
10053401:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10053405:	2b f8                	sub    edi,eax
10053407:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1005340b:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
1005340f:	8d 3c 29             	lea    edi,[ecx+ebp*1]
10053412:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
10053416:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
1005341a:	8b fb                	mov    edi,ebx
1005341c:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10053420:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
10053424:	2b fd                	sub    edi,ebp
10053426:	03 cb                	add    ecx,ebx
10053428:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
1005342c:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10053430:	2b f3                	sub    esi,ebx
10053432:	89 7c 24 40          	mov    DWORD PTR [esp+0x40],edi
10053436:	89 74 24 50          	mov    DWORD PTR [esp+0x50],esi
1005343a:	89 6c 24 30          	mov    DWORD PTR [esp+0x30],ebp
1005343e:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
10053442:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
10053446:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
1005344a:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1005344e:	8d 7c 24 18          	lea    edi,[esp+0x18]
10053452:	8d 72 2c             	lea    esi,[edx+0x2c]
10053455:	bb 04 00 00 00       	mov    ebx,0x4
1005345a:	8b 0e                	mov    ecx,DWORD PTR [esi]
1005345c:	e8 bf b5 01 00       	call   0x1006ea20
10053461:	8b 0e                	mov    ecx,DWORD PTR [esi]
10053463:	57                   	push   edi
10053464:	e8 e7 b1 01 00       	call   0x1006e650
10053469:	83 c6 04             	add    esi,0x4
1005346c:	83 c7 10             	add    edi,0x10
1005346f:	4b                   	dec    ebx
10053470:	75 e8                	jne    0x1005345a
10053472:	5f                   	pop    edi
10053473:	5e                   	pop    esi
10053474:	5d                   	pop    ebp
10053475:	5b                   	pop    ebx
10053476:	83 c4 48             	add    esp,0x48
10053479:	c2 04 00             	ret    0x4
1005347c:	90                   	nop
1005347d:	90                   	nop
1005347e:	90                   	nop
1005347f:	90                   	nop
10053480:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
10053485:	c7 05 2c c1 11 10 05 	mov    DWORD PTR ds:0x1011c12c,0x5
1005348c:	00 00 00 
1005348f:	a3 28 c1 11 10       	mov    ds:0x1011c128,eax
10053494:	83 c8 ff             	or     eax,0xffffffff
10053497:	a3 30 c1 11 10       	mov    ds:0x1011c130,eax
1005349c:	c7 05 34 c1 11 10 58 	mov    DWORD PTR ds:0x1011c134,0x1011d458
100534a3:	d4 11 10 
100534a6:	c7 05 38 c1 11 10 e4 	mov    DWORD PTR ds:0x1011c138,0x1011d4e4
100534ad:	d4 11 10 
100534b0:	a3 3c c1 11 10       	mov    ds:0x1011c13c,eax
100534b5:	c7 05 40 c1 11 10 74 	mov    DWORD PTR ds:0x1011c140,0x1011d474
100534bc:	d4 11 10 
100534bf:	c7 05 44 c1 11 10 00 	mov    DWORD PTR ds:0x1011c144,0x1011d500
100534c6:	d5 11 10 
100534c9:	c7 05 48 c1 11 10 db 	mov    DWORD PTR ds:0x1011c148,0xffa6c7db
100534d0:	c7 a6 ff 
100534d3:	c7 05 4c c1 11 10 90 	mov    DWORD PTR ds:0x1011c14c,0x1011d490
100534da:	d4 11 10 
100534dd:	c7 05 50 c1 11 10 1c 	mov    DWORD PTR ds:0x1011c150,0x1011d51c
100534e4:	d5 11 10 
100534e7:	a3 54 c1 11 10       	mov    ds:0x1011c154,eax
100534ec:	c7 05 58 c1 11 10 ac 	mov    DWORD PTR ds:0x1011c158,0x1011d4ac
100534f3:	d4 11 10 
100534f6:	c7 05 5c c1 11 10 38 	mov    DWORD PTR ds:0x1011c15c,0x1011d538
100534fd:	d5 11 10 
10053500:	a3 60 c1 11 10       	mov    ds:0x1011c160,eax
10053505:	c7 05 64 c1 11 10 c8 	mov    DWORD PTR ds:0x1011c164,0x1011d4c8
1005350c:	d4 11 10 
1005350f:	c7 05 68 c1 11 10 54 	mov    DWORD PTR ds:0x1011c168,0x1011d554
10053516:	d5 11 10 
10053519:	c3                   	ret
1005351a:	90                   	nop
1005351b:	90                   	nop
1005351c:	90                   	nop
1005351d:	90                   	nop
1005351e:	90                   	nop
1005351f:	90                   	nop
10053520:	6a ff                	push   0xffffffff
10053522:	68 24 50 0b 10       	push   0x100b5024
10053527:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1005352d:	50                   	push   eax
1005352e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10053535:	51                   	push   ecx
10053536:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1005353a:	53                   	push   ebx
1005353b:	55                   	push   ebp
1005353c:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
10053540:	56                   	push   esi
10053541:	8b f1                	mov    esi,ecx
10053543:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10053547:	55                   	push   ebp
10053548:	50                   	push   eax
10053549:	51                   	push   ecx
1005354a:	8b ce                	mov    ecx,esi
1005354c:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
10053550:	e8 2b ae 01 00       	call   0x1006e380
10053555:	8d 4e 2c             	lea    ecx,[esi+0x2c]
10053558:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1005355f:	00 
10053560:	e8 2b d6 02 00       	call   0x10080b90
10053565:	c7 46 70 00 00 00 00 	mov    DWORD PTR [esi+0x70],0x0
1005356c:	bb 01 00 00 00       	mov    ebx,0x1
10053571:	6a 44                	push   0x44
10053573:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
10053577:	c7 06 f8 9b 0b 10    	mov    DWORD PTR [esi],0x100b9bf8
1005357d:	c7 46 3c c0 d6 11 10 	mov    DWORD PTR [esi+0x3c],0x1011d6c0
10053584:	c7 46 40 dc d6 11 10 	mov    DWORD PTR [esi+0x40],0x1011d6dc
1005358b:	e8 99 03 05 00       	call   0x100a3929
10053590:	83 c4 04             	add    esp,0x4
10053593:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10053597:	85 c0                	test   eax,eax
10053599:	c6 44 24 18 02       	mov    BYTE PTR [esp+0x18],0x2
1005359e:	74 16                	je     0x100535b6
100535a0:	6a 00                	push   0x0
100535a2:	68 28 c1 11 10       	push   0x1011c128
100535a7:	6a 00                	push   0x0
100535a9:	6a 03                	push   0x3
100535ab:	53                   	push   ebx
100535ac:	56                   	push   esi
100535ad:	8b c8                	mov    ecx,eax
100535af:	e8 dc d2 01 00       	call   0x10070890
100535b4:	eb 02                	jmp    0x100535b8
100535b6:	33 c0                	xor    eax,eax
100535b8:	68 cf 09 00 00       	push   0x9cf
100535bd:	8b c8                	mov    ecx,eax
100535bf:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
100535c3:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
100535c6:	e8 55 d1 01 00       	call   0x10070720
100535cb:	6a 44                	push   0x44
100535cd:	e8 57 03 05 00       	call   0x100a3929
100535d2:	83 c4 04             	add    esp,0x4
100535d5:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
100535d9:	85 c0                	test   eax,eax
100535db:	c6 44 24 18 03       	mov    BYTE PTR [esp+0x18],0x3
100535e0:	74 17                	je     0x100535f9
100535e2:	6a 00                	push   0x0
100535e4:	68 28 c1 11 10       	push   0x1011c128
100535e9:	6a 00                	push   0x0
100535eb:	6a 03                	push   0x3
100535ed:	6a 07                	push   0x7
100535ef:	56                   	push   esi
100535f0:	8b c8                	mov    ecx,eax
100535f2:	e8 99 d2 01 00       	call   0x10070890
100535f7:	eb 02                	jmp    0x100535fb
100535f9:	33 c0                	xor    eax,eax
100535fb:	6a 44                	push   0x44
100535fd:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
10053601:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
10053604:	e8 20 03 05 00       	call   0x100a3929
10053609:	83 c4 04             	add    esp,0x4
1005360c:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10053610:	85 c0                	test   eax,eax
10053612:	c6 44 24 18 04       	mov    BYTE PTR [esp+0x18],0x4
10053617:	74 17                	je     0x10053630
10053619:	6a 00                	push   0x0
1005361b:	68 28 c1 11 10       	push   0x1011c128
10053620:	6a 00                	push   0x0
10053622:	6a 03                	push   0x3
10053624:	6a 06                	push   0x6
10053626:	56                   	push   esi
10053627:	8b c8                	mov    ecx,eax
10053629:	e8 62 d2 01 00       	call   0x10070890
1005362e:	eb 02                	jmp    0x10053632
10053630:	33 c0                	xor    eax,eax
10053632:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
10053635:	6a 10                	push   0x10
10053637:	68 88 d6 11 10       	push   0x1011d688
1005363c:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10053640:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
10053643:	e8 b8 d3 01 00       	call   0x10070a00
10053648:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
1005364b:	6a 10                	push   0x10
1005364d:	68 a4 d6 11 10       	push   0x1011d6a4
10053652:	e8 a9 d3 01 00       	call   0x10070a00
10053657:	85 ed                	test   ebp,ebp
10053659:	74 08                	je     0x10053663
1005365b:	55                   	push   ebp
1005365c:	8b ce                	mov    ecx,esi
1005365e:	e8 ad 01 00 00       	call   0x10053810
10053663:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10053667:	8b c6                	mov    eax,esi
10053669:	5e                   	pop    esi
1005366a:	5d                   	pop    ebp
1005366b:	5b                   	pop    ebx
1005366c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10053673:	83 c4 10             	add    esp,0x10
10053676:	c2 0c 00             	ret    0xc
10053679:	90                   	nop
1005367a:	90                   	nop
1005367b:	90                   	nop
1005367c:	90                   	nop
1005367d:	90                   	nop
1005367e:	90                   	nop
1005367f:	90                   	nop
10053680:	56                   	push   esi
10053681:	8b f1                	mov    esi,ecx
10053683:	e8 18 00 00 00       	call   0x100536a0
10053688:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1005368d:	74 09                	je     0x10053698
1005368f:	56                   	push   esi
10053690:	e8 89 02 05 00       	call   0x100a391e
10053695:	83 c4 04             	add    esp,0x4
10053698:	8b c6                	mov    eax,esi
1005369a:	5e                   	pop    esi
1005369b:	c2 04 00             	ret    0x4
1005369e:	90                   	nop
1005369f:	90                   	nop
100536a0:	6a ff                	push   0xffffffff
100536a2:	68 38 50 0b 10       	push   0x100b5038
100536a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100536ad:	50                   	push   eax
100536ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100536b5:	51                   	push   ecx
100536b6:	56                   	push   esi
100536b7:	8b f1                	mov    esi,ecx
100536b9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
100536bd:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
100536c0:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
100536c7:	00 
100536c8:	85 c0                	test   eax,eax
100536ca:	74 16                	je     0x100536e2
100536cc:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100536d2:	50                   	push   eax
100536d3:	8b 11                	mov    edx,DWORD PTR [ecx]
100536d5:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100536db:	c7 46 70 00 00 00 00 	mov    DWORD PTR [esi+0x70],0x0
100536e2:	8b ce                	mov    ecx,esi
100536e4:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
100536eb:	ff 
100536ec:	e8 2f ae 01 00       	call   0x1006e520
100536f1:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100536f5:	5e                   	pop    esi
100536f6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100536fd:	83 c4 10             	add    esp,0x10
10053700:	c3                   	ret
10053701:	90                   	nop
10053702:	90                   	nop
10053703:	90                   	nop
10053704:	90                   	nop
10053705:	90                   	nop
10053706:	90                   	nop
10053707:	90                   	nop
10053708:	90                   	nop
10053709:	90                   	nop
1005370a:	90                   	nop
1005370b:	90                   	nop
1005370c:	90                   	nop
1005370d:	90                   	nop
1005370e:	90                   	nop
1005370f:	90                   	nop
10053710:	6a ff                	push   0xffffffff
10053712:	68 60 50 0b 10       	push   0x100b5060
10053717:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1005371d:	50                   	push   eax
1005371e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10053725:	51                   	push   ecx
10053726:	a0 24 c1 11 10       	mov    al,ds:0x1011c124
1005372b:	56                   	push   esi
1005372c:	a8 01                	test   al,0x1
1005372e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10053733:	8b f1                	mov    esi,ecx
10053735:	57                   	push   edi
10053736:	8b 08                	mov    ecx,DWORD PTR [eax]
10053738:	74 5a                	je     0x10053794
1005373a:	68 ce 09 00 00       	push   0x9ce
1005373f:	50                   	push   eax
10053740:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10053746:	8b f8                	mov    edi,eax
10053748:	83 c4 08             	add    esp,0x8
1005374b:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
1005374f:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
10053752:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
10053759:	00 
1005375a:	85 c0                	test   eax,eax
1005375c:	74 16                	je     0x10053774
1005375e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10053764:	50                   	push   eax
10053765:	8b 11                	mov    edx,DWORD PTR [ecx]
10053767:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1005376d:	c7 46 70 00 00 00 00 	mov    DWORD PTR [esi+0x70],0x0
10053774:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1005377a:	57                   	push   edi
1005377b:	8b 01                	mov    eax,DWORD PTR [ecx]
1005377d:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
10053783:	85 ff                	test   edi,edi
10053785:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
10053788:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
1005378f:	ff 
10053790:	74 69                	je     0x100537fb
10053792:	eb 58                	jmp    0x100537ec
10053794:	68 cd 09 00 00       	push   0x9cd
10053799:	50                   	push   eax
1005379a:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
100537a0:	8b f8                	mov    edi,eax
100537a2:	83 c4 08             	add    esp,0x8
100537a5:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
100537a9:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
100537ac:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
100537b3:	00 
100537b4:	85 c0                	test   eax,eax
100537b6:	74 16                	je     0x100537ce
100537b8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100537be:	50                   	push   eax
100537bf:	8b 11                	mov    edx,DWORD PTR [ecx]
100537c1:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100537c7:	c7 46 70 00 00 00 00 	mov    DWORD PTR [esi+0x70],0x0
100537ce:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100537d4:	57                   	push   edi
100537d5:	8b 01                	mov    eax,DWORD PTR [ecx]
100537d7:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
100537dd:	85 ff                	test   edi,edi
100537df:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
100537e2:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
100537e9:	ff 
100537ea:	74 0f                	je     0x100537fb
100537ec:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100537f2:	57                   	push   edi
100537f3:	8b 11                	mov    edx,DWORD PTR [ecx]
100537f5:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100537fb:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100537ff:	5f                   	pop    edi
10053800:	5e                   	pop    esi
10053801:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10053808:	83 c4 10             	add    esp,0x10
1005380b:	c3                   	ret
1005380c:	90                   	nop
1005380d:	90                   	nop
1005380e:	90                   	nop
1005380f:	90                   	nop
10053810:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
10053815:	83 ec 40             	sub    esp,0x40
10053818:	53                   	push   ebx
10053819:	55                   	push   ebp
1005381a:	56                   	push   esi
1005381b:	8b f1                	mov    esi,ecx
1005381d:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
10053821:	57                   	push   edi
10053822:	8d 3c c5 00 00 00 00 	lea    edi,[eax*8+0x0]
10053829:	51                   	push   ecx
1005382a:	8b ce                	mov    ecx,esi
1005382c:	c1 ef 0a             	shr    edi,0xa
1005382f:	e8 8c ae 01 00       	call   0x1006e6c0
10053834:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10053839:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
1005383d:	3d 00 04 00 00       	cmp    eax,0x400
10053842:	73 26                	jae    0x1005386a
10053844:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10053848:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1005384c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10053850:	83 c3 0a             	add    ebx,0xa
10053853:	83 c2 09             	add    edx,0x9
10053856:	83 e9 14             	sub    ecx,0x14
10053859:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
1005385d:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10053861:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10053865:	83 e8 12             	sub    eax,0x12
10053868:	eb 24                	jmp    0x1005388e
1005386a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1005386e:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10053872:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10053876:	83 c3 0b             	add    ebx,0xb
10053879:	83 c2 0a             	add    edx,0xa
1005387c:	83 e9 16             	sub    ecx,0x16
1005387f:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
10053883:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10053887:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1005388b:	83 e8 14             	sub    eax,0x14
1005388e:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
10053891:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10053895:	8b 11                	mov    edx,DWORD PTR [ecx]
10053897:	ff 52 70             	call   DWORD PTR [edx+0x70]
1005389a:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
1005389d:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
100538a1:	8b 01                	mov    eax,DWORD PTR [ecx]
100538a3:	ff 50 74             	call   DWORD PTR [eax+0x74]
100538a6:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100538aa:	8b c8                	mov    ecx,eax
100538ac:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100538b0:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
100538b4:	99                   	cdq
100538b5:	2b c2                	sub    eax,edx
100538b7:	8b 6c 24 14          	mov    ebp,DWORD PTR [esp+0x14]
100538bb:	8b d8                	mov    ebx,eax
100538bd:	8b c1                	mov    eax,ecx
100538bf:	99                   	cdq
100538c0:	2b c2                	sub    eax,edx
100538c2:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
100538c6:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
100538c9:	d1 fb                	sar    ebx,1
100538cb:	d1 f8                	sar    eax,1
100538cd:	2b d8                	sub    ebx,eax
100538cf:	03 dd                	add    ebx,ebp
100538d1:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
100538d5:	8b 01                	mov    eax,DWORD PTR [ecx]
100538d7:	ff 50 70             	call   DWORD PTR [eax+0x70]
100538da:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
100538dd:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
100538e1:	8b 11                	mov    edx,DWORD PTR [ecx]
100538e3:	ff 52 74             	call   DWORD PTR [edx+0x74]
100538e6:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
100538ea:	8b 5c 24 38          	mov    ebx,DWORD PTR [esp+0x38]
100538ee:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100538f2:	2b cb                	sub    ecx,ebx
100538f4:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
100538f8:	03 ca                	add    ecx,edx
100538fa:	99                   	cdq
100538fb:	2b c2                	sub    eax,edx
100538fd:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
10053901:	8b c8                	mov    ecx,eax
10053903:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10053907:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
1005390b:	99                   	cdq
1005390c:	2b c2                	sub    eax,edx
1005390e:	d1 f9                	sar    ecx,1
10053910:	d1 f8                	sar    eax,1
10053912:	2b c1                	sub    eax,ecx
10053914:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10053917:	03 c3                	add    eax,ebx
10053919:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1005391d:	8b 11                	mov    edx,DWORD PTR [ecx]
1005391f:	ff 52 70             	call   DWORD PTR [edx+0x70]
10053922:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10053925:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
10053929:	8b 01                	mov    eax,DWORD PTR [ecx]
1005392b:	ff 50 74             	call   DWORD PTR [eax+0x74]
1005392e:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10053932:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
10053936:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1005393a:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1005393e:	2b ca                	sub    ecx,edx
10053940:	99                   	cdq
10053941:	2b c2                	sub    eax,edx
10053943:	2b cf                	sub    ecx,edi
10053945:	8b e8                	mov    ebp,eax
10053947:	8b c3                	mov    eax,ebx
10053949:	99                   	cdq
1005394a:	2b c2                	sub    eax,edx
1005394c:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
10053950:	8b d0                	mov    edx,eax
10053952:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10053956:	d1 fd                	sar    ebp,1
10053958:	d1 fa                	sar    edx,1
1005395a:	2b d5                	sub    edx,ebp
1005395c:	03 d0                	add    edx,eax
1005395e:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
10053962:	8b 15 18 a0 0d 10    	mov    edx,DWORD PTR ds:0x100da018
10053968:	c1 e2 07             	shl    edx,0x7
1005396b:	c1 ea 0a             	shr    edx,0xa
1005396e:	89 56 68             	mov    DWORD PTR [esi+0x68],edx
10053971:	8d 14 3f             	lea    edx,[edi+edi*1]
10053974:	8b 6c 24 28          	mov    ebp,DWORD PTR [esp+0x28]
10053978:	2b ca                	sub    ecx,edx
1005397a:	8b 56 68             	mov    edx,DWORD PTR [esi+0x68]
1005397d:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
10053980:	2b ca                	sub    ecx,edx
10053982:	8d 14 3f             	lea    edx,[edi+edi*1]
10053985:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
10053989:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
1005398c:	03 fa                	add    edi,edx
1005398e:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
10053991:	03 fd                	add    edi,ebp
10053993:	8d 44 24 20          	lea    eax,[esp+0x20]
10053997:	2b cf                	sub    ecx,edi
10053999:	50                   	push   eax
1005399a:	2b ca                	sub    ecx,edx
1005399c:	89 5e 6c             	mov    DWORD PTR [esi+0x6c],ebx
1005399f:	89 4e 58             	mov    DWORD PTR [esi+0x58],ecx
100539a2:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
100539a5:	89 7e 50             	mov    DWORD PTR [esi+0x50],edi
100539a8:	89 5e 5c             	mov    DWORD PTR [esi+0x5c],ebx
100539ab:	e8 a0 ac 01 00       	call   0x1006e650
100539b0:	8d 4c 24 30          	lea    ecx,[esp+0x30]
100539b4:	51                   	push   ecx
100539b5:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
100539b8:	e8 93 ac 01 00       	call   0x1006e650
100539bd:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
100539c0:	8d 54 24 40          	lea    edx,[esp+0x40]
100539c4:	52                   	push   edx
100539c5:	e8 86 ac 01 00       	call   0x1006e650
100539ca:	5f                   	pop    edi
100539cb:	5e                   	pop    esi
100539cc:	5d                   	pop    ebp
100539cd:	5b                   	pop    ebx
100539ce:	83 c4 40             	add    esp,0x40
100539d1:	c2 04 00             	ret    0x4
100539d4:	90                   	nop
100539d5:	90                   	nop
100539d6:	90                   	nop
100539d7:	90                   	nop
100539d8:	90                   	nop
100539d9:	90                   	nop
100539da:	90                   	nop
100539db:	90                   	nop
100539dc:	90                   	nop
100539dd:	90                   	nop
100539de:	90                   	nop
100539df:	90                   	nop
100539e0:	53                   	push   ebx
100539e1:	56                   	push   esi
100539e2:	57                   	push   edi
100539e3:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
100539e7:	8b f1                	mov    esi,ecx
100539e9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100539ec:	8b 0f                	mov    ecx,DWORD PTR [edi]
100539ee:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
100539f1:	50                   	push   eax
100539f2:	51                   	push   ecx
100539f3:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100539f9:	6a ff                	push   0xffffffff
100539fb:	6a 00                	push   0x0
100539fd:	52                   	push   edx
100539fe:	e8 ed 7a ff ff       	call   0x1004b4f0
10053a03:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
10053a06:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
10053a09:	8b 5f 08             	mov    ebx,DWORD PTR [edi+0x8]
10053a0c:	8b 49 14             	mov    ecx,DWORD PTR [ecx+0x14]
10053a0f:	8b 50 18             	mov    edx,DWORD PTR [eax+0x18]
10053a12:	52                   	push   edx
10053a13:	8d 14 09             	lea    edx,[ecx+ecx*1]
10053a16:	2b da                	sub    ebx,edx
10053a18:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10053a1b:	53                   	push   ebx
10053a1c:	52                   	push   edx
10053a1d:	8b 17                	mov    edx,DWORD PTR [edi]
10053a1f:	03 d1                	add    edx,ecx
10053a21:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10053a27:	52                   	push   edx
10053a28:	6a ff                	push   0xffffffff
10053a2a:	6a 00                	push   0x0
10053a2c:	50                   	push   eax
10053a2d:	e8 ee 7a ff ff       	call   0x1004b520
10053a32:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10053a35:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10053a38:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
10053a3b:	8b 1f                	mov    ebx,DWORD PTR [edi]
10053a3d:	51                   	push   ecx
10053a3e:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
10053a41:	2b d1                	sub    edx,ecx
10053a43:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10053a49:	03 d3                	add    edx,ebx
10053a4b:	52                   	push   edx
10053a4c:	6a ff                	push   0xffffffff
10053a4e:	6a 02                	push   0x2
10053a50:	50                   	push   eax
10053a51:	e8 9a 7a ff ff       	call   0x1004b4f0
10053a56:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10053a5c:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
10053a5f:	52                   	push   edx
10053a60:	8b 01                	mov    eax,DWORD PTR [ecx]
10053a62:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10053a68:	8b 4e 5c             	mov    ecx,DWORD PTR [esi+0x5c]
10053a6b:	8b 56 58             	mov    edx,DWORD PTR [esi+0x58]
10053a6e:	6a 05                	push   0x5
10053a70:	6a ff                	push   0xffffffff
10053a72:	51                   	push   ecx
10053a73:	8b 4e 54             	mov    ecx,DWORD PTR [esi+0x54]
10053a76:	52                   	push   edx
10053a77:	8b 56 50             	mov    edx,DWORD PTR [esi+0x50]
10053a7a:	51                   	push   ecx
10053a7b:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10053a81:	52                   	push   edx
10053a82:	50                   	push   eax
10053a83:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
10053a88:	50                   	push   eax
10053a89:	e8 72 66 ff ff       	call   0x1004a100
10053a8e:	8d 7e 2c             	lea    edi,[esi+0x2c]
10053a91:	8b cf                	mov    ecx,edi
10053a93:	e8 38 d1 02 00       	call   0x10080bd0
10053a98:	83 c6 60             	add    esi,0x60
10053a9b:	68 ff 00 00 00       	push   0xff
10053aa0:	56                   	push   esi
10053aa1:	8b cf                	mov    ecx,edi
10053aa3:	e8 48 d2 02 00       	call   0x10080cf0
10053aa8:	5f                   	pop    edi
10053aa9:	5e                   	pop    esi
10053aaa:	5b                   	pop    ebx
10053aab:	c2 08 00             	ret    0x8
10053aae:	90                   	nop
10053aaf:	90                   	nop
10053ab0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10053ab4:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10053ab8:	50                   	push   eax
10053ab9:	52                   	push   edx
10053aba:	e8 61 ae 01 00       	call   0x1006e920
10053abf:	b8 01 00 00 00       	mov    eax,0x1
10053ac4:	c2 08 00             	ret    0x8
10053ac7:	90                   	nop
10053ac8:	90                   	nop
10053ac9:	90                   	nop
10053aca:	90                   	nop
10053acb:	90                   	nop
10053acc:	90                   	nop
10053acd:	90                   	nop
10053ace:	90                   	nop
10053acf:	90                   	nop
10053ad0:	6a ff                	push   0xffffffff
10053ad2:	68 c2 50 0b 10       	push   0x100b50c2
10053ad7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10053add:	50                   	push   eax
10053ade:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10053ae5:	83 ec 08             	sub    esp,0x8
10053ae8:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10053aec:	53                   	push   ebx
10053aed:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
10053af1:	55                   	push   ebp
10053af2:	56                   	push   esi
10053af3:	57                   	push   edi
10053af4:	33 ed                	xor    ebp,ebp
10053af6:	53                   	push   ebx
10053af7:	8b f1                	mov    esi,ecx
10053af9:	55                   	push   ebp
10053afa:	50                   	push   eax
10053afb:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10053aff:	e8 cc cb ff ff       	call   0x100506d0
10053b04:	6a 40                	push   0x40
10053b06:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
10053b0a:	c7 06 68 9c 0b 10    	mov    DWORD PTR [esi],0x100b9c68
10053b10:	e8 14 fe 04 00       	call   0x100a3929
10053b15:	8b f8                	mov    edi,eax
10053b17:	83 c4 04             	add    esp,0x4
10053b1a:	89 7c 24 28          	mov    DWORD PTR [esp+0x28],edi
10053b1e:	3b fd                	cmp    edi,ebp
10053b20:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
10053b25:	74 5c                	je     0x10053b83
10053b27:	55                   	push   ebp
10053b28:	6a 01                	push   0x1
10053b2a:	56                   	push   esi
10053b2b:	8b cf                	mov    ecx,edi
10053b2d:	e8 4e a8 01 00       	call   0x1006e380
10053b32:	c6 44 24 20 02       	mov    BYTE PTR [esp+0x20],0x2
10053b37:	c7 07 88 9b 0b 10    	mov    DWORD PTR [edi],0x100b9b88
10053b3d:	8d 5f 2c             	lea    ebx,[edi+0x2c]
10053b40:	6a 78                	push   0x78
10053b42:	e8 e2 fd 04 00       	call   0x100a3929
10053b47:	83 c4 04             	add    esp,0x4
10053b4a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10053b4e:	85 c0                	test   eax,eax
10053b50:	c6 44 24 20 03       	mov    BYTE PTR [esp+0x20],0x3
10053b55:	74 0b                	je     0x10053b62
10053b57:	55                   	push   ebp
10053b58:	57                   	push   edi
10053b59:	8b c8                	mov    ecx,eax
10053b5b:	e8 c0 ef ff ff       	call   0x10052b20
10053b60:	eb 02                	jmp    0x10053b64
10053b62:	33 c0                	xor    eax,eax
10053b64:	89 03                	mov    DWORD PTR [ebx],eax
10053b66:	45                   	inc    ebp
10053b67:	83 c3 04             	add    ebx,0x4
10053b6a:	83 fd 04             	cmp    ebp,0x4
10053b6d:	c6 44 24 20 02       	mov    BYTE PTR [esp+0x20],0x2
10053b72:	7c cc                	jl     0x10053b40
10053b74:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
10053b78:	c7 47 3c 00 00 00 00 	mov    DWORD PTR [edi+0x3c],0x0
10053b7f:	33 ed                	xor    ebp,ebp
10053b81:	eb 02                	jmp    0x10053b85
10053b83:	33 ff                	xor    edi,edi
10053b85:	6a 54                	push   0x54
10053b87:	c6 44 24 24 00       	mov    BYTE PTR [esp+0x24],0x0
10053b8c:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
10053b8f:	e8 95 fd 04 00       	call   0x100a3929
10053b94:	83 c4 04             	add    esp,0x4
10053b97:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10053b9b:	3b c5                	cmp    eax,ebp
10053b9d:	c6 44 24 20 04       	mov    BYTE PTR [esp+0x20],0x4
10053ba2:	74 0a                	je     0x10053bae
10053ba4:	56                   	push   esi
10053ba5:	8b c8                	mov    ecx,eax
10053ba7:	e8 04 87 01 00       	call   0x1006c2b0
10053bac:	eb 02                	jmp    0x10053bb0
10053bae:	33 c0                	xor    eax,eax
10053bb0:	55                   	push   ebp
10053bb1:	6a 01                	push   0x1
10053bb3:	8b c8                	mov    ecx,eax
10053bb5:	c6 44 24 28 00       	mov    BYTE PTR [esp+0x28],0x0
10053bba:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10053bbd:	e8 be ab 01 00       	call   0x1006e780
10053bc2:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10053bc5:	6a 74                	push   0x74
10053bc7:	89 69 44             	mov    DWORD PTR [ecx+0x44],ebp
10053bca:	e8 5a fd 04 00       	call   0x100a3929
10053bcf:	83 c4 04             	add    esp,0x4
10053bd2:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10053bd6:	3b c5                	cmp    eax,ebp
10053bd8:	c6 44 24 20 05       	mov    BYTE PTR [esp+0x20],0x5
10053bdd:	74 0d                	je     0x10053bec
10053bdf:	55                   	push   ebp
10053be0:	6a 01                	push   0x1
10053be2:	56                   	push   esi
10053be3:	8b c8                	mov    ecx,eax
10053be5:	e8 36 f9 ff ff       	call   0x10053520
10053bea:	eb 02                	jmp    0x10053bee
10053bec:	33 c0                	xor    eax,eax
10053bee:	68 fc 08 00 00       	push   0x8fc
10053bf3:	c6 44 24 24 00       	mov    BYTE PTR [esp+0x24],0x0
10053bf8:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
10053bfb:	e8 29 fd 04 00       	call   0x100a3929
10053c00:	83 c4 04             	add    esp,0x4
10053c03:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10053c07:	3b c5                	cmp    eax,ebp
10053c09:	c6 44 24 20 06       	mov    BYTE PTR [esp+0x20],0x6
10053c0e:	74 0c                	je     0x10053c1c
10053c10:	55                   	push   ebp
10053c11:	55                   	push   ebp
10053c12:	56                   	push   esi
10053c13:	8b c8                	mov    ecx,eax
10053c15:	e8 e6 c2 01 00       	call   0x1006ff00
10053c1a:	eb 02                	jmp    0x10053c1e
10053c1c:	33 c0                	xor    eax,eax
10053c1e:	6a 2c                	push   0x2c
10053c20:	c6 44 24 24 00       	mov    BYTE PTR [esp+0x24],0x0
10053c25:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10053c28:	e8 fc fc 04 00       	call   0x100a3929
10053c2d:	83 c4 04             	add    esp,0x4
10053c30:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10053c34:	3b c5                	cmp    eax,ebp
10053c36:	c6 44 24 20 07       	mov    BYTE PTR [esp+0x20],0x7
10053c3b:	74 0d                	je     0x10053c4a
10053c3d:	55                   	push   ebp
10053c3e:	6a 21                	push   0x21
10053c40:	56                   	push   esi
10053c41:	8b c8                	mov    ecx,eax
10053c43:	e8 f8 c1 01 00       	call   0x1006fe40
10053c48:	eb 02                	jmp    0x10053c4c
10053c4a:	33 c0                	xor    eax,eax
10053c4c:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10053c4f:	3b dd                	cmp    ebx,ebp
10053c51:	c6 44 24 20 00       	mov    BYTE PTR [esp+0x20],0x0
10053c56:	89 2d 24 c1 11 10    	mov    DWORD PTR ds:0x1011c124,ebp
10053c5c:	89 35 6c c1 11 10    	mov    DWORD PTR ds:0x1011c16c,esi
10053c62:	74 08                	je     0x10053c6c
10053c64:	53                   	push   ebx
10053c65:	8b ce                	mov    ecx,esi
10053c67:	e8 54 09 00 00       	call   0x100545c0
10053c6c:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10053c70:	8b c6                	mov    eax,esi
10053c72:	5f                   	pop    edi
10053c73:	5e                   	pop    esi
10053c74:	5d                   	pop    ebp
10053c75:	5b                   	pop    ebx
10053c76:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10053c7d:	83 c4 14             	add    esp,0x14
10053c80:	c2 08 00             	ret    0x8
10053c83:	90                   	nop
10053c84:	90                   	nop
10053c85:	90                   	nop
10053c86:	90                   	nop
10053c87:	90                   	nop
10053c88:	90                   	nop
10053c89:	90                   	nop
10053c8a:	90                   	nop
10053c8b:	90                   	nop
10053c8c:	90                   	nop
10053c8d:	90                   	nop
10053c8e:	90                   	nop
10053c8f:	90                   	nop
10053c90:	56                   	push   esi
10053c91:	8b f1                	mov    esi,ecx
10053c93:	e8 18 00 00 00       	call   0x10053cb0
10053c98:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10053c9d:	74 09                	je     0x10053ca8
10053c9f:	56                   	push   esi
10053ca0:	e8 79 fc 04 00       	call   0x100a391e
10053ca5:	83 c4 04             	add    esp,0x4
10053ca8:	8b c6                	mov    eax,esi
10053caa:	5e                   	pop    esi
10053cab:	c2 04 00             	ret    0x4
10053cae:	90                   	nop
10053caf:	90                   	nop
10053cb0:	33 c0                	xor    eax,eax
10053cb2:	c7 01 68 9c 0b 10    	mov    DWORD PTR [ecx],0x100b9c68
10053cb8:	a3 24 c1 11 10       	mov    ds:0x1011c124,eax
10053cbd:	a3 6c c1 11 10       	mov    ds:0x1011c16c,eax
10053cc2:	e9 59 a8 01 00       	jmp    0x1006e520
10053cc7:	90                   	nop
10053cc8:	90                   	nop
10053cc9:	90                   	nop
10053cca:	90                   	nop
10053ccb:	90                   	nop
10053ccc:	90                   	nop
10053ccd:	90                   	nop
10053cce:	90                   	nop
10053ccf:	90                   	nop
10053cd0:	51                   	push   ecx
10053cd1:	53                   	push   ebx
10053cd2:	55                   	push   ebp
10053cd3:	8b e9                	mov    ebp,ecx
10053cd5:	b0 01                	mov    al,0x1
10053cd7:	8a 0d f4 be 11 10    	mov    cl,BYTE PTR ds:0x1011bef4
10053cdd:	56                   	push   esi
10053cde:	84 c8                	test   al,cl
10053ce0:	57                   	push   edi
10053ce1:	75 2f                	jne    0x10053d12
10053ce3:	8a d9                	mov    bl,cl
10053ce5:	68 a1 05 00 00       	push   0x5a1
10053cea:	0a d8                	or     bl,al
10053cec:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10053cf1:	88 1d f4 be 11 10    	mov    BYTE PTR ds:0x1011bef4,bl
10053cf7:	50                   	push   eax
10053cf8:	8b 08                	mov    ecx,DWORD PTR [eax]
10053cfa:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10053d00:	68 00 3e 05 10       	push   0x10053e00
10053d05:	a3 1c c0 11 10       	mov    ds:0x1011c01c,eax
10053d0a:	e8 76 11 05 00       	call   0x100a4e85
10053d0f:	83 c4 0c             	add    esp,0xc
10053d12:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10053d18:	a1 1c c0 11 10       	mov    eax,ds:0x1011c01c
10053d1d:	50                   	push   eax
10053d1e:	8b 11                	mov    edx,DWORD PTR [ecx]
10053d20:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10053d26:	8b 4d 34             	mov    ecx,DWORD PTR [ebp+0x34]
10053d29:	50                   	push   eax
10053d2a:	e8 61 c3 01 00       	call   0x10070090
10053d2f:	8b 4d 34             	mov    ecx,DWORD PTR [ebp+0x34]
10053d32:	6a 04                	push   0x4
10053d34:	e8 b7 58 02 00       	call   0x100795f0
10053d39:	8b 1d 00 bf 11 10    	mov    ebx,DWORD PTR ds:0x1011bf00
10053d3f:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10053d46:	00 
10053d47:	85 db                	test   ebx,ebx
10053d49:	7e 5d                	jle    0x10053da8
10053d4b:	be 04 bf 11 10       	mov    esi,0x1011bf04
10053d50:	8d 7d 40             	lea    edi,[ebp+0x40]
10053d53:	81 fe 44 bf 11 10    	cmp    esi,0x1011bf44
10053d59:	7d 4d                	jge    0x10053da8
10053d5b:	c7 07 00 d0 10 10    	mov    DWORD PTR [edi],0x1010d000
10053d61:	8b 0e                	mov    ecx,DWORD PTR [esi]
10053d63:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
10053d69:	51                   	push   ecx
10053d6a:	ff 92 30 03 00 00    	call   DWORD PTR [edx+0x330]
10053d70:	83 c4 04             	add    esp,0x4
10053d73:	85 c0                	test   eax,eax
10053d75:	74 18                	je     0x10053d8f
10053d77:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10053d7d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10053d80:	50                   	push   eax
10053d81:	8b 11                	mov    edx,DWORD PTR [ecx]
10053d83:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10053d89:	85 c0                	test   eax,eax
10053d8b:	74 02                	je     0x10053d8f
10053d8d:	89 07                	mov    DWORD PTR [edi],eax
10053d8f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10053d93:	8b 1d 00 bf 11 10    	mov    ebx,DWORD PTR ds:0x1011bf00
10053d99:	40                   	inc    eax
10053d9a:	83 c6 04             	add    esi,0x4
10053d9d:	83 c7 04             	add    edi,0x4
10053da0:	3b c3                	cmp    eax,ebx
10053da2:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10053da6:	7c ab                	jl     0x10053d53
10053da8:	83 fb 10             	cmp    ebx,0x10
10053dab:	7c 05                	jl     0x10053db2
10053dad:	bb 10 00 00 00       	mov    ebx,0x10
10053db2:	8b 4d 34             	mov    ecx,DWORD PTR [ebp+0x34]
10053db5:	e8 26 c2 01 00       	call   0x1006ffe0
10053dba:	33 f6                	xor    esi,esi
10053dbc:	85 db                	test   ebx,ebx
10053dbe:	7e 17                	jle    0x10053dd7
10053dc0:	8d 7d 40             	lea    edi,[ebp+0x40]
10053dc3:	8b 0f                	mov    ecx,DWORD PTR [edi]
10053dc5:	56                   	push   esi
10053dc6:	51                   	push   ecx
10053dc7:	8b 4d 34             	mov    ecx,DWORD PTR [ebp+0x34]
10053dca:	e8 21 c2 01 00       	call   0x1006fff0
10053dcf:	46                   	inc    esi
10053dd0:	83 c7 04             	add    edi,0x4
10053dd3:	3b f3                	cmp    esi,ebx
10053dd5:	7c ec                	jl     0x10053dc3
10053dd7:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
10053ddb:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10053ddf:	8b 4d 34             	mov    ecx,DWORD PTR [ebp+0x34]
10053de2:	52                   	push   edx
10053de3:	50                   	push   eax
10053de4:	e8 d7 c2 01 00       	call   0x100700c0
10053de9:	5f                   	pop    edi
10053dea:	5e                   	pop    esi
10053deb:	5d                   	pop    ebp
10053dec:	5b                   	pop    ebx
10053ded:	59                   	pop    ecx
10053dee:	c2 0c 00             	ret    0xc
10053df1:	90                   	nop
10053df2:	90                   	nop
10053df3:	90                   	nop
10053df4:	90                   	nop
10053df5:	90                   	nop
10053df6:	90                   	nop
10053df7:	90                   	nop
10053df8:	90                   	nop
10053df9:	90                   	nop
10053dfa:	90                   	nop
10053dfb:	90                   	nop
10053dfc:	90                   	nop
10053dfd:	90                   	nop
10053dfe:	90                   	nop
10053dff:	90                   	nop
10053e00:	a1 1c c0 11 10       	mov    eax,ds:0x1011c01c
10053e05:	85 c0                	test   eax,eax
10053e07:	74 19                	je     0x10053e22
10053e09:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10053e0f:	50                   	push   eax
10053e10:	8b 11                	mov    edx,DWORD PTR [ecx]
10053e12:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10053e18:	c7 05 1c c0 11 10 00 	mov    DWORD PTR ds:0x1011c01c,0x0
10053e1f:	00 00 00 
10053e22:	c3                   	ret
10053e23:	90                   	nop
10053e24:	90                   	nop
10053e25:	90                   	nop
10053e26:	90                   	nop
10053e27:	90                   	nop
10053e28:	90                   	nop
10053e29:	90                   	nop
10053e2a:	90                   	nop
10053e2b:	90                   	nop
10053e2c:	90                   	nop
10053e2d:	90                   	nop
10053e2e:	90                   	nop
10053e2f:	90                   	nop

*/
View::View() {
    // Basic initialization
    m_pClientDE = g_pLTClient;
    m_hCamera = nullptr;
    m_hPitchNode = nullptr;
    m_hYawNode = nullptr;
}

