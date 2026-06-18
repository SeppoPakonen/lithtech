#include "PBTabHeader.h"

// 0x100729f0: PBTabHeader::AddTab
/*
100729f0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100729f6:	6a ff                	push   0xffffffff
100729f8:	68 8b 62 0b 10       	push   0x100b628b
100729fd:	50                   	push   eax
100729fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10072a05:	83 ec 10             	sub    esp,0x10
10072a08:	57                   	push   edi
10072a09:	8b f9                	mov    edi,ecx
10072a0b:	83 7f 58 08          	cmp    DWORD PTR [edi+0x58],0x8
10072a0f:	7c 49                	jl     0x10072a5a
10072a11:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10072a17:	68 a3 08 00 00       	push   0x8a3
10072a1c:	68 f8 d6 0d 10       	push   0x100dd6f8
10072a21:	8b 01                	mov    eax,DWORD PTR [ecx]
10072a23:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10072a29:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10072a2e:	6a 08                	push   0x8
10072a30:	68 5c d7 0d 10       	push   0x100dd75c
10072a35:	68 7c 5d 0c 10       	push   0x100c5d7c
10072a3a:	8b 08                	mov    ecx,DWORD PTR [eax]
10072a3c:	50                   	push   eax
10072a3d:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10072a43:	83 c4 10             	add    esp,0x10
10072a46:	33 c0                	xor    eax,eax
10072a48:	5f                   	pop    edi
10072a49:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10072a4d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10072a54:	83 c4 1c             	add    esp,0x1c
10072a57:	c2 08 00             	ret    0x8
10072a5a:	53                   	push   ebx
10072a5b:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
10072a5f:	85 db                	test   ebx,ebx
10072a61:	56                   	push   esi
10072a62:	75 05                	jne    0x10072a69
10072a64:	bb 00 d0 10 10       	mov    ebx,0x1010d000
10072a69:	6a 44                	push   0x44
10072a6b:	e8 b9 0e 03 00       	call   0x100a3929
10072a70:	8b f0                	mov    esi,eax
10072a72:	83 c4 04             	add    esp,0x4
10072a75:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
10072a79:	85 f6                	test   esi,esi
10072a7b:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
10072a82:	00 
10072a83:	74 71                	je     0x10072af6
10072a85:	6a 00                	push   0x0
10072a87:	6a 03                	push   0x3
10072a89:	57                   	push   edi
10072a8a:	8b ce                	mov    ecx,esi
10072a8c:	e8 ef b8 ff ff       	call   0x1006e380
10072a91:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
10072a95:	8b ce                	mov    ecx,esi
10072a97:	c6 44 24 24 01       	mov    BYTE PTR [esp+0x24],0x1
10072a9c:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
10072aa2:	89 56 2c             	mov    DWORD PTR [esi+0x2c],edx
10072aa5:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
10072aac:	e8 0f dd ff ff       	call   0x100707c0
10072ab1:	85 db                	test   ebx,ebx
10072ab3:	74 12                	je     0x10072ac7
10072ab5:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10072abb:	53                   	push   ebx
10072abc:	8b 01                	mov    eax,DWORD PTR [ecx]
10072abe:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10072ac4:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10072ac7:	6a 00                	push   0x0
10072ac9:	8b ce                	mov    ecx,esi
10072acb:	c6 44 24 28 02       	mov    BYTE PTR [esp+0x28],0x2
10072ad0:	c7 06 88 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb88
10072ad6:	c7 46 38 48 41 12 10 	mov    DWORD PTR [esi+0x38],0x10124148
10072add:	c7 46 3c 00 00 00 00 	mov    DWORD PTR [esi+0x3c],0x0
10072ae4:	ff 15 04 bc 0b 10    	call   DWORD PTR ds:0x100bbc04
10072aea:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10072aed:	c7 46 34 00 41 12 10 	mov    DWORD PTR [esi+0x34],0x10124100
10072af4:	eb 02                	jmp    0x10072af8
10072af6:	33 f6                	xor    esi,esi
10072af8:	8b 4f 58             	mov    ecx,DWORD PTR [edi+0x58]
10072afb:	c7 44 24 24 ff ff ff 	mov    DWORD PTR [esp+0x24],0xffffffff
10072b02:	ff 
10072b03:	89 74 8f 34          	mov    DWORD PTR [edi+ecx*4+0x34],esi
10072b07:	8b 4f 58             	mov    ecx,DWORD PTR [edi+0x58]
10072b0a:	41                   	inc    ecx
10072b0b:	5e                   	pop    esi
10072b0c:	8b c1                	mov    eax,ecx
10072b0e:	89 4f 58             	mov    DWORD PTR [edi+0x58],ecx
10072b11:	83 f8 01             	cmp    eax,0x1
10072b14:	5b                   	pop    ebx
10072b15:	75 0f                	jne    0x10072b26
10072b17:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10072b1b:	8b 17                	mov    edx,DWORD PTR [edi]
10072b1d:	50                   	push   eax
10072b1e:	8b cf                	mov    ecx,edi
10072b20:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
10072b26:	8d 4c 24 04          	lea    ecx,[esp+0x4]
10072b2a:	51                   	push   ecx
10072b2b:	8b cf                	mov    ecx,edi
10072b2d:	e8 8e bb ff ff       	call   0x1006e6c0
10072b32:	8b 17                	mov    edx,DWORD PTR [edi]
10072b34:	8d 44 24 04          	lea    eax,[esp+0x4]
10072b38:	50                   	push   eax
10072b39:	8b cf                	mov    ecx,edi
10072b3b:	ff 52 54             	call   DWORD PTR [edx+0x54]
10072b3e:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10072b42:	b8 01 00 00 00       	mov    eax,0x1
10072b47:	5f                   	pop    edi
10072b48:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10072b4f:	83 c4 1c             	add    esp,0x1c
10072b52:	c2 08 00             	ret    0x8
10072b55:	90                   	nop
10072b56:	90                   	nop
10072b57:	90                   	nop
10072b58:	90                   	nop
10072b59:	90                   	nop
10072b5a:	90                   	nop
10072b5b:	90                   	nop
10072b5c:	90                   	nop
10072b5d:	90                   	nop
10072b5e:	90                   	nop
10072b5f:	90                   	nop
10072b60:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
10072b63:	85 c0                	test   eax,eax
10072b65:	74 04                	je     0x10072b6b
10072b67:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
10072b6a:	c3                   	ret
10072b6b:	83 c8 ff             	or     eax,0xffffffff
10072b6e:	c3                   	ret
10072b6f:	90                   	nop
10072b70:	53                   	push   ebx
10072b71:	56                   	push   esi
10072b72:	8b 71 58             	mov    esi,DWORD PTR [ecx+0x58]
10072b75:	33 c0                	xor    eax,eax
10072b77:	57                   	push   edi
10072b78:	85 f6                	test   esi,esi
10072b7a:	7e 16                	jle    0x10072b92
10072b7c:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10072b80:	8d 51 34             	lea    edx,[ecx+0x34]
10072b83:	8b 1a                	mov    ebx,DWORD PTR [edx]
10072b85:	39 7b 2c             	cmp    DWORD PTR [ebx+0x2c],edi
10072b88:	74 10                	je     0x10072b9a
10072b8a:	40                   	inc    eax
10072b8b:	83 c2 04             	add    edx,0x4
10072b8e:	3b c6                	cmp    eax,esi
10072b90:	7c f1                	jl     0x10072b83
10072b92:	5f                   	pop    edi
10072b93:	5e                   	pop    esi
10072b94:	33 c0                	xor    eax,eax
10072b96:	5b                   	pop    ebx
10072b97:	c2 04 00             	ret    0x4
10072b9a:	8b 44 81 34          	mov    eax,DWORD PTR [ecx+eax*4+0x34]
10072b9e:	85 c0                	test   eax,eax
10072ba0:	74 f0                	je     0x10072b92
10072ba2:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10072ba8:	8b 40 30             	mov    eax,DWORD PTR [eax+0x30]
10072bab:	50                   	push   eax
10072bac:	8b 11                	mov    edx,DWORD PTR [ecx]
10072bae:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10072bb4:	5f                   	pop    edi
10072bb5:	5e                   	pop    esi
10072bb6:	5b                   	pop    ebx
10072bb7:	c2 04 00             	ret    0x4
10072bba:	90                   	nop
10072bbb:	90                   	nop
10072bbc:	90                   	nop
10072bbd:	90                   	nop
10072bbe:	90                   	nop
10072bbf:	90                   	nop
10072bc0:	53                   	push   ebx
10072bc1:	8b d9                	mov    ebx,ecx
10072bc3:	55                   	push   ebp
10072bc4:	33 c0                	xor    eax,eax
10072bc6:	8b 53 58             	mov    edx,DWORD PTR [ebx+0x58]
10072bc9:	56                   	push   esi
10072bca:	85 d2                	test   edx,edx
10072bcc:	57                   	push   edi
10072bcd:	7e 27                	jle    0x10072bf6
10072bcf:	8b 6c 24 14          	mov    ebp,DWORD PTR [esp+0x14]
10072bd3:	8d 4b 34             	lea    ecx,[ebx+0x34]
10072bd6:	8b 31                	mov    esi,DWORD PTR [ecx]
10072bd8:	39 6e 2c             	cmp    DWORD PTR [esi+0x2c],ebp
10072bdb:	74 11                	je     0x10072bee
10072bdd:	40                   	inc    eax
10072bde:	83 c1 04             	add    ecx,0x4
10072be1:	3b c2                	cmp    eax,edx
10072be3:	7c f1                	jl     0x10072bd6
10072be5:	5f                   	pop    edi
10072be6:	5e                   	pop    esi
10072be7:	5d                   	pop    ebp
10072be8:	33 c0                	xor    eax,eax
10072bea:	5b                   	pop    ebx
10072beb:	c2 04 00             	ret    0x4
10072bee:	8b 74 83 34          	mov    esi,DWORD PTR [ebx+eax*4+0x34]
10072bf2:	85 f6                	test   esi,esi
10072bf4:	75 09                	jne    0x10072bff
10072bf6:	5f                   	pop    edi
10072bf7:	5e                   	pop    esi
10072bf8:	5d                   	pop    ebp
10072bf9:	33 c0                	xor    eax,eax
10072bfb:	5b                   	pop    ebx
10072bfc:	c2 04 00             	ret    0x4
10072bff:	8b 7b 54             	mov    edi,DWORD PTR [ebx+0x54]
10072c02:	85 ff                	test   edi,edi
10072c04:	74 16                	je     0x10072c1c
10072c06:	8b 57 3c             	mov    edx,DWORD PTR [edi+0x3c]
10072c09:	8b cf                	mov    ecx,edi
10072c0b:	83 e2 f7             	and    edx,0xfffffff7
10072c0e:	89 57 3c             	mov    DWORD PTR [edi+0x3c],edx
10072c11:	8b c2                	mov    eax,edx
10072c13:	8b 17                	mov    edx,DWORD PTR [edi]
10072c15:	50                   	push   eax
10072c16:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10072c19:	89 47 40             	mov    DWORD PTR [edi+0x40],eax
10072c1c:	8b 7e 3c             	mov    edi,DWORD PTR [esi+0x3c]
10072c1f:	83 cf 08             	or     edi,0x8
10072c22:	8b cf                	mov    ecx,edi
10072c24:	89 7e 3c             	mov    DWORD PTR [esi+0x3c],edi
10072c27:	8b 06                	mov    eax,DWORD PTR [esi]
10072c29:	51                   	push   ecx
10072c2a:	8b ce                	mov    ecx,esi
10072c2c:	ff 50 7c             	call   DWORD PTR [eax+0x7c]
10072c2f:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10072c32:	8b 53 2c             	mov    edx,DWORD PTR [ebx+0x2c]
10072c35:	55                   	push   ebp
10072c36:	52                   	push   edx
10072c37:	8b cb                	mov    ecx,ebx
10072c39:	89 73 54             	mov    DWORD PTR [ebx+0x54],esi
10072c3c:	e8 df bc ff ff       	call   0x1006e920
10072c41:	5f                   	pop    edi
10072c42:	5e                   	pop    esi
10072c43:	5d                   	pop    ebp
10072c44:	b8 01 00 00 00       	mov    eax,0x1
10072c49:	5b                   	pop    ebx
10072c4a:	c2 04 00             	ret    0x4
10072c4d:	90                   	nop
10072c4e:	90                   	nop
10072c4f:	90                   	nop
10072c50:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10072c56:	e8 15 a6 fd ff       	call   0x1004d270
10072c5b:	83 c0 0a             	add    eax,0xa
10072c5e:	c3                   	ret
10072c5f:	90                   	nop
10072c60:	8b 51 58             	mov    edx,DWORD PTR [ecx+0x58]
10072c63:	33 c0                	xor    eax,eax
10072c65:	56                   	push   esi
10072c66:	85 d2                	test   edx,edx
10072c68:	57                   	push   edi
10072c69:	7e 16                	jle    0x10072c81
10072c6b:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10072c6f:	83 c1 34             	add    ecx,0x34
10072c72:	8b 39                	mov    edi,DWORD PTR [ecx]
10072c74:	39 77 2c             	cmp    DWORD PTR [edi+0x2c],esi
10072c77:	74 0b                	je     0x10072c84
10072c79:	40                   	inc    eax
10072c7a:	83 c1 04             	add    ecx,0x4
10072c7d:	3b c2                	cmp    eax,edx
10072c7f:	7c f1                	jl     0x10072c72
10072c81:	83 c8 ff             	or     eax,0xffffffff
10072c84:	5f                   	pop    edi
10072c85:	5e                   	pop    esi
10072c86:	c2 04 00             	ret    0x4
10072c89:	90                   	nop
10072c8a:	90                   	nop
10072c8b:	90                   	nop
10072c8c:	90                   	nop
10072c8d:	90                   	nop
10072c8e:	90                   	nop
10072c8f:	90                   	nop
10072c90:	83 ec 2c             	sub    esp,0x2c
10072c93:	89 4c 24 00          	mov    DWORD PTR [esp+0x0],ecx
10072c97:	8b 49 58             	mov    ecx,DWORD PTR [ecx+0x58]
10072c9a:	85 c9                	test   ecx,ecx
10072c9c:	0f 84 ef 00 00 00    	je     0x10072d91
10072ca2:	53                   	push   ebx
10072ca3:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
10072ca7:	55                   	push   ebp
10072ca8:	56                   	push   esi
10072ca9:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
10072cac:	57                   	push   edi
10072cad:	99                   	cdq
10072cae:	f7 f9                	idiv   ecx
10072cb0:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10072cb6:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
10072cba:	e8 b1 a5 fd ff       	call   0x1004d270
10072cbf:	8b e8                	mov    ebp,eax
10072cc1:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
10072cc4:	99                   	cdq
10072cc5:	2b c2                	sub    eax,edx
10072cc7:	83 c5 02             	add    ebp,0x2
10072cca:	8b f8                	mov    edi,eax
10072ccc:	8b c5                	mov    eax,ebp
10072cce:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10072cd1:	8b 33                	mov    esi,DWORD PTR [ebx]
10072cd3:	99                   	cdq
10072cd4:	2b c2                	sub    eax,edx
10072cd6:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
10072cdd:	00 
10072cde:	d1 ff                	sar    edi,1
10072ce0:	d1 f8                	sar    eax,1
10072ce2:	2b f8                	sub    edi,eax
10072ce4:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10072ce8:	03 f9                	add    edi,ecx
10072cea:	8b c8                	mov    ecx,eax
10072cec:	8b 58 30             	mov    ebx,DWORD PTR [eax+0x30]
10072cef:	8b 51 58             	mov    edx,DWORD PTR [ecx+0x58]
10072cf2:	4a                   	dec    edx
10072cf3:	85 d2                	test   edx,edx
10072cf5:	7e 5d                	jle    0x10072d54
10072cf7:	83 c1 34             	add    ecx,0x34
10072cfa:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10072cfe:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10072d02:	8d 0c 33             	lea    ecx,[ebx+esi*1]
10072d05:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10072d09:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
10072d0d:	8d 0c 1b             	lea    ecx,[ebx+ebx*1]
10072d10:	8d 54 24 1c          	lea    edx,[esp+0x1c]
10072d14:	2b c1                	sub    eax,ecx
10072d16:	52                   	push   edx
10072d17:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10072d1b:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10072d1f:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
10072d23:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
10072d27:	8b 08                	mov    ecx,DWORD PTR [eax]
10072d29:	e8 22 b9 ff ff       	call   0x1006e650
10072d2e:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10072d32:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
10072d36:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10072d3a:	83 c1 04             	add    ecx,0x4
10072d3d:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10072d41:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10072d45:	03 f2                	add    esi,edx
10072d47:	40                   	inc    eax
10072d48:	8b 51 58             	mov    edx,DWORD PTR [ecx+0x58]
10072d4b:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10072d4f:	4a                   	dec    edx
10072d50:	3b c2                	cmp    eax,edx
10072d52:	7c aa                	jl     0x10072cfe
10072d54:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
10072d58:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10072d5c:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
10072d60:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
10072d64:	8b 02                	mov    eax,DWORD PTR [edx]
10072d66:	2b c6                	sub    eax,esi
10072d68:	03 42 08             	add    eax,DWORD PTR [edx+0x8]
10072d6b:	8d 14 33             	lea    edx,[ebx+esi*1]
10072d6e:	f7 db                	neg    ebx
10072d70:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10072d74:	8d 54 24 1c          	lea    edx,[esp+0x1c]
10072d78:	8d 04 58             	lea    eax,[eax+ebx*2]
10072d7b:	52                   	push   edx
10072d7c:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10072d80:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10072d84:	8b 4c 81 34          	mov    ecx,DWORD PTR [ecx+eax*4+0x34]
10072d88:	e8 c3 b8 ff ff       	call   0x1006e650
10072d8d:	5f                   	pop    edi
10072d8e:	5e                   	pop    esi
10072d8f:	5d                   	pop    ebp
10072d90:	5b                   	pop    ebx
10072d91:	83 c4 2c             	add    esp,0x2c
10072d94:	c2 04 00             	ret    0x4
10072d97:	90                   	nop
10072d98:	90                   	nop
10072d99:	90                   	nop
10072d9a:	90                   	nop
10072d9b:	90                   	nop
10072d9c:	90                   	nop
10072d9d:	90                   	nop
10072d9e:	90                   	nop
10072d9f:	90                   	nop
10072da0:	6a ff                	push   0xffffffff
10072da2:	68 ce 62 0b 10       	push   0x100b62ce
10072da7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10072dad:	50                   	push   eax
10072dae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10072db5:	51                   	push   ecx
10072db6:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10072dba:	53                   	push   ebx
10072dbb:	55                   	push   ebp
10072dbc:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
10072dc0:	56                   	push   esi
10072dc1:	8b f1                	mov    esi,ecx
10072dc3:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10072dc7:	57                   	push   edi
10072dc8:	55                   	push   ebp
10072dc9:	50                   	push   eax
10072dca:	51                   	push   ecx
10072dcb:	8b ce                	mov    ecx,esi
10072dcd:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10072dd1:	e8 aa b5 ff ff       	call   0x1006e380
10072dd6:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10072dda:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10072dde:	33 db                	xor    ebx,ebx
10072de0:	c7 06 50 c0 0b 10    	mov    DWORD PTR [esi],0x100bc050
10072de6:	a8 02                	test   al,0x2
10072de8:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
10072dec:	89 56 2c             	mov    DWORD PTR [esi+0x2c],edx
10072def:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10072df2:	c7 46 34 ac 7d 39 ff 	mov    DWORD PTR [esi+0x34],0xff397dac
10072df9:	6a 5c                	push   0x5c
10072dfb:	74 39                	je     0x10072e36
10072dfd:	e8 27 0b 03 00       	call   0x100a3929
10072e02:	8b f8                	mov    edi,eax
10072e04:	83 c4 04             	add    esp,0x4
10072e07:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
10072e0b:	3b fb                	cmp    edi,ebx
10072e0d:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
10072e12:	74 5b                	je     0x10072e6f
10072e14:	53                   	push   ebx
10072e15:	53                   	push   ebx
10072e16:	56                   	push   esi
10072e17:	8b cf                	mov    ecx,edi
10072e19:	e8 62 b5 ff ff       	call   0x1006e380
10072e1e:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10072e22:	89 5f 2c             	mov    DWORD PTR [edi+0x2c],ebx
10072e25:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
10072e28:	c7 07 c0 bf 0b 10    	mov    DWORD PTR [edi],0x100bbfc0
10072e2e:	89 5f 58             	mov    DWORD PTR [edi+0x58],ebx
10072e31:	89 5f 54             	mov    DWORD PTR [edi+0x54],ebx
10072e34:	eb 3b                	jmp    0x10072e71
10072e36:	e8 ee 0a 03 00       	call   0x100a3929
10072e3b:	8b f8                	mov    edi,eax
10072e3d:	83 c4 04             	add    esp,0x4
10072e40:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
10072e44:	3b fb                	cmp    edi,ebx
10072e46:	c6 44 24 1c 03       	mov    BYTE PTR [esp+0x1c],0x3
10072e4b:	74 22                	je     0x10072e6f
10072e4d:	53                   	push   ebx
10072e4e:	53                   	push   ebx
10072e4f:	56                   	push   esi
10072e50:	8b cf                	mov    ecx,edi
10072e52:	e8 29 b5 ff ff       	call   0x1006e380
10072e57:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
10072e5b:	89 5f 2c             	mov    DWORD PTR [edi+0x2c],ebx
10072e5e:	89 4f 30             	mov    DWORD PTR [edi+0x30],ecx
10072e61:	c7 07 30 bf 0b 10    	mov    DWORD PTR [edi],0x100bbf30
10072e67:	89 5f 58             	mov    DWORD PTR [edi+0x58],ebx
10072e6a:	89 5f 54             	mov    DWORD PTR [edi+0x54],ebx
10072e6d:	eb 02                	jmp    0x10072e71
10072e6f:	33 ff                	xor    edi,edi
10072e71:	8b ce                	mov    ecx,esi
10072e73:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
10072e77:	89 7e 38             	mov    DWORD PTR [esi+0x38],edi
10072e7a:	e8 a1 02 00 00       	call   0x10073120
10072e7f:	3b eb                	cmp    ebp,ebx
10072e81:	74 08                	je     0x10072e8b
10072e83:	55                   	push   ebp
10072e84:	8b ce                	mov    ecx,esi
10072e86:	e8 85 00 00 00       	call   0x10072f10
10072e8b:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10072e8f:	8b c6                	mov    eax,esi
10072e91:	5f                   	pop    edi
10072e92:	5e                   	pop    esi
10072e93:	5d                   	pop    ebp
10072e94:	5b                   	pop    ebx
10072e95:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10072e9c:	83 c4 10             	add    esp,0x10
10072e9f:	c2 18 00             	ret    0x18
10072ea2:	90                   	nop
10072ea3:	90                   	nop
10072ea4:	90                   	nop
10072ea5:	90                   	nop
10072ea6:	90                   	nop
10072ea7:	90                   	nop
10072ea8:	90                   	nop
10072ea9:	90                   	nop
10072eaa:	90                   	nop
10072eab:	90                   	nop
10072eac:	90                   	nop
10072ead:	90                   	nop
10072eae:	90                   	nop
10072eaf:	90                   	nop
10072eb0:	56                   	push   esi
10072eb1:	8b f1                	mov    esi,ecx
10072eb3:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10072eb6:	8b 01                	mov    eax,DWORD PTR [ecx]
10072eb8:	ff 50 70             	call   DWORD PTR [eax+0x70]
10072ebb:	8b ce                	mov    ecx,esi
10072ebd:	e8 5e 02 00 00       	call   0x10073120
10072ec2:	5e                   	pop    esi
10072ec3:	c3                   	ret
10072ec4:	90                   	nop
10072ec5:	90                   	nop
10072ec6:	90                   	nop
10072ec7:	90                   	nop
10072ec8:	90                   	nop
10072ec9:	90                   	nop
10072eca:	90                   	nop
10072ecb:	90                   	nop
10072ecc:	90                   	nop
10072ecd:	90                   	nop
10072ece:	90                   	nop
10072ecf:	90                   	nop
10072ed0:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10072ed4:	56                   	push   esi
10072ed5:	8b f1                	mov    esi,ecx
10072ed7:	52                   	push   edx
10072ed8:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10072edc:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10072edf:	52                   	push   edx
10072ee0:	8b 01                	mov    eax,DWORD PTR [ecx]
10072ee2:	ff 50 74             	call   DWORD PTR [eax+0x74]
10072ee5:	85 c0                	test   eax,eax
10072ee7:	75 04                	jne    0x10072eed
10072ee9:	5e                   	pop    esi
10072eea:	c2 08 00             	ret    0x8
10072eed:	8b ce                	mov    ecx,esi
10072eef:	e8 2c 02 00 00       	call   0x10073120
10072ef4:	b8 01 00 00 00       	mov    eax,0x1
10072ef9:	5e                   	pop    esi
10072efa:	c2 08 00             	ret    0x8
10072efd:	90                   	nop
10072efe:	90                   	nop
10072eff:	90                   	nop
10072f00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10072f04:	89 41 34             	mov    DWORD PTR [ecx+0x34],eax
10072f07:	c2 04 00             	ret    0x4
10072f0a:	90                   	nop
10072f0b:	90                   	nop
10072f0c:	90                   	nop
10072f0d:	90                   	nop
10072f0e:	90                   	nop
10072f0f:	90                   	nop
10072f10:	83 ec 10             	sub    esp,0x10
10072f13:	56                   	push   esi
10072f14:	57                   	push   edi
10072f15:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
10072f19:	8b f1                	mov    esi,ecx
10072f1b:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10072f1e:	8b 07                	mov    eax,DWORD PTR [edi]
10072f20:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
10072f23:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
10072f27:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10072f2a:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10072f2e:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10072f32:	e8 69 b9 ff ff       	call   0x1006e8a0
10072f37:	a8 01                	test   al,0x1
10072f39:	74 0d                	je     0x10072f48
10072f3b:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10072f3e:	8b 01                	mov    eax,DWORD PTR [ecx]
10072f40:	ff 90 84 00 00 00    	call   DWORD PTR [eax+0x84]
10072f46:	eb 02                	jmp    0x10072f4a
10072f48:	33 c0                	xor    eax,eax
10072f4a:	8b 0f                	mov    ecx,DWORD PTR [edi]
10072f4c:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10072f50:	89 4e 4c             	mov    DWORD PTR [esi+0x4c],ecx
10072f53:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10072f57:	8d 0c 10             	lea    ecx,[eax+edx*1]
10072f5a:	89 4e 50             	mov    DWORD PTR [esi+0x50],ecx
10072f5d:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
10072f60:	89 56 54             	mov    DWORD PTR [esi+0x54],edx
10072f63:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
10072f66:	2b c8                	sub    ecx,eax
10072f68:	8d 46 3c             	lea    eax,[esi+0x3c]
10072f6b:	89 4e 58             	mov    DWORD PTR [esi+0x58],ecx
10072f6e:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10072f71:	8b d0                	mov    edx,eax
10072f73:	89 0a                	mov    DWORD PTR [edx],ecx
10072f75:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10072f78:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
10072f7b:	8b 4e 54             	mov    ecx,DWORD PTR [esi+0x54]
10072f7e:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
10072f81:	8b 4e 58             	mov    ecx,DWORD PTR [esi+0x58]
10072f84:	89 4a 0c             	mov    DWORD PTR [edx+0xc],ecx
10072f87:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
10072f8d:	b9 00 04 00 00       	mov    ecx,0x400
10072f92:	8b 38                	mov    edi,DWORD PTR [eax]
10072f94:	3b d1                	cmp    edx,ecx
10072f96:	1b d2                	sbb    edx,edx
10072f98:	83 e2 fc             	and    edx,0xfffffffc
10072f9b:	83 c2 0a             	add    edx,0xa
10072f9e:	03 fa                	add    edi,edx
10072fa0:	89 38                	mov    DWORD PTR [eax],edi
10072fa2:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
10072fa8:	8b 7e 40             	mov    edi,DWORD PTR [esi+0x40]
10072fab:	3b d1                	cmp    edx,ecx
10072fad:	1b d2                	sbb    edx,edx
10072faf:	83 e2 fc             	and    edx,0xfffffffc
10072fb2:	83 c2 0a             	add    edx,0xa
10072fb5:	03 fa                	add    edi,edx
10072fb7:	89 7e 40             	mov    DWORD PTR [esi+0x40],edi
10072fba:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
10072fc0:	8b 7e 44             	mov    edi,DWORD PTR [esi+0x44]
10072fc3:	3b d1                	cmp    edx,ecx
10072fc5:	1b d2                	sbb    edx,edx
10072fc7:	83 e2 f8             	and    edx,0xfffffff8
10072fca:	83 c2 14             	add    edx,0x14
10072fcd:	2b fa                	sub    edi,edx
10072fcf:	8b 56 48             	mov    edx,DWORD PTR [esi+0x48]
10072fd2:	89 7e 44             	mov    DWORD PTR [esi+0x44],edi
10072fd5:	8b 3d 58 be 11 10    	mov    edi,DWORD PTR ds:0x1011be58
10072fdb:	3b f9                	cmp    edi,ecx
10072fdd:	1b c9                	sbb    ecx,ecx
10072fdf:	83 e1 f8             	and    ecx,0xfffffff8
10072fe2:	83 c1 14             	add    ecx,0x14
10072fe5:	2b d1                	sub    edx,ecx
10072fe7:	8a 4e 30             	mov    cl,BYTE PTR [esi+0x30]
10072fea:	f6 c1 01             	test   cl,0x1
10072fed:	89 56 48             	mov    DWORD PTR [esi+0x48],edx
10072ff0:	74 21                	je     0x10073013
10072ff2:	8b 08                	mov    ecx,DWORD PTR [eax]
10072ff4:	8b 7e 40             	mov    edi,DWORD PTR [esi+0x40]
10072ff7:	8b 56 44             	mov    edx,DWORD PTR [esi+0x44]
10072ffa:	41                   	inc    ecx
10072ffb:	89 08                	mov    DWORD PTR [eax],ecx
10072ffd:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
10073000:	b8 fe ff ff ff       	mov    eax,0xfffffffe
10073005:	47                   	inc    edi
10073006:	03 d0                	add    edx,eax
10073008:	03 c8                	add    ecx,eax
1007300a:	89 7e 40             	mov    DWORD PTR [esi+0x40],edi
1007300d:	89 56 44             	mov    DWORD PTR [esi+0x44],edx
10073010:	89 4e 48             	mov    DWORD PTR [esi+0x48],ecx
10073013:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10073016:	8d 54 24 08          	lea    edx,[esp+0x8]
1007301a:	52                   	push   edx
1007301b:	e8 30 b6 ff ff       	call   0x1006e650
10073020:	5f                   	pop    edi
10073021:	5e                   	pop    esi
10073022:	83 c4 10             	add    esp,0x10
10073025:	c2 04 00             	ret    0x4
10073028:	90                   	nop
10073029:	90                   	nop
1007302a:	90                   	nop
1007302b:	90                   	nop
1007302c:	90                   	nop
1007302d:	90                   	nop
1007302e:	90                   	nop
1007302f:	90                   	nop
10073030:	51                   	push   ecx
10073031:	53                   	push   ebx
10073032:	55                   	push   ebp
10073033:	8b 2d 58 be 11 10    	mov    ebp,DWORD PTR ds:0x1011be58
10073039:	56                   	push   esi
1007303a:	81 fd 00 04 00 00    	cmp    ebp,0x400
10073040:	8b f1                	mov    esi,ecx
10073042:	1b c0                	sbb    eax,eax
10073044:	57                   	push   edi
10073045:	8b 7e 50             	mov    edi,DWORD PTR [esi+0x50]
10073048:	8b 56 58             	mov    edx,DWORD PTR [esi+0x58]
1007304b:	8b 5e 4c             	mov    ebx,DWORD PTR [esi+0x4c]
1007304e:	8b 4e 54             	mov    ecx,DWORD PTR [esi+0x54]
10073051:	24 fe                	and    al,0xfe
10073053:	83 c0 05             	add    eax,0x5
10073056:	8d 6c 19 ff          	lea    ebp,[ecx+ebx*1-0x1]
1007305a:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1007305d:	2b f8                	sub    edi,eax
1007305f:	03 d7                	add    edx,edi
10073061:	51                   	push   ecx
10073062:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10073065:	6a 00                	push   0x0
10073067:	8d 44 02 ff          	lea    eax,[edx+eax*1-0x1]
1007306b:	8b 56 58             	mov    edx,DWORD PTR [esi+0x58]
1007306e:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10073072:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
10073075:	52                   	push   edx
10073076:	50                   	push   eax
10073077:	8b d3                	mov    edx,ebx
10073079:	51                   	push   ecx
1007307a:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10073080:	52                   	push   edx
10073081:	e8 ea 64 fd ff       	call   0x10049570
10073086:	f6 46 30 01          	test   BYTE PTR [esi+0x30],0x1
1007308a:	74 63                	je     0x100730ef
1007308c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10073092:	57                   	push   edi
10073093:	53                   	push   ebx
10073094:	e8 57 63 fd ff       	call   0x100493f0
10073099:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1007309d:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100730a3:	68 29 2c 29 ff       	push   0xff292c29
100730a8:	68 29 2c 29 ff       	push   0xff292c29
100730ad:	56                   	push   esi
100730ae:	53                   	push   ebx
100730af:	e8 fc 63 fd ff       	call   0x100494b0
100730b4:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100730ba:	68 29 2c 29 ff       	push   0xff292c29
100730bf:	68 29 2c 29 ff       	push   0xff292c29
100730c4:	56                   	push   esi
100730c5:	55                   	push   ebp
100730c6:	e8 e5 63 fd ff       	call   0x100494b0
100730cb:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100730d1:	57                   	push   edi
100730d2:	55                   	push   ebp
100730d3:	e8 18 63 fd ff       	call   0x100493f0
100730d8:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100730de:	68 29 2c 29 ff       	push   0xff292c29
100730e3:	68 29 2c 29 ff       	push   0xff292c29
100730e8:	56                   	push   esi
100730e9:	55                   	push   ebp
100730ea:	e8 c1 63 fd ff       	call   0x100494b0
100730ef:	5f                   	pop    edi
100730f0:	5e                   	pop    esi
100730f1:	5d                   	pop    ebp
100730f2:	5b                   	pop    ebx
100730f3:	59                   	pop    ecx
100730f4:	c2 08 00             	ret    0x8
100730f7:	90                   	nop
100730f8:	90                   	nop
100730f9:	90                   	nop
100730fa:	90                   	nop
100730fb:	90                   	nop
100730fc:	90                   	nop
100730fd:	90                   	nop
100730fe:	90                   	nop
100730ff:	90                   	nop
10073100:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10073104:	85 c0                	test   eax,eax
10073106:	75 0a                	jne    0x10073112
10073108:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1007310c:	8b 01                	mov    eax,DWORD PTR [ecx]
1007310e:	52                   	push   edx
1007310f:	ff 50 78             	call   DWORD PTR [eax+0x78]
10073112:	b8 01 00 00 00       	mov    eax,0x1
10073117:	c2 08 00             	ret    0x8
1007311a:	90                   	nop
1007311b:	90                   	nop
1007311c:	90                   	nop
1007311d:	90                   	nop
1007311e:	90                   	nop
1007311f:	90                   	nop
10073120:	56                   	push   esi
10073121:	8b f1                	mov    esi,ecx
10073123:	8a 46 30             	mov    al,BYTE PTR [esi+0x30]
10073126:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10073129:	a8 04                	test   al,0x4
1007312b:	75 13                	jne    0x10073140
1007312d:	e8 6e b7 ff ff       	call   0x1006e8a0
10073132:	a8 01                	test   al,0x1
10073134:	75 54                	jne    0x1007318a
10073136:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10073139:	e8 e2 b8 ff ff       	call   0x1006ea20
1007313e:	5e                   	pop    esi
1007313f:	c3                   	ret
10073140:	8b 01                	mov    eax,DWORD PTR [ecx]
10073142:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
10073148:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1007314b:	83 f8 01             	cmp    eax,0x1
1007314e:	7f 1e                	jg     0x1007316e
10073150:	e8 4b b7 ff ff       	call   0x1006e8a0
10073155:	a8 01                	test   al,0x1
10073157:	74 31                	je     0x1007318a
10073159:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1007315c:	e8 1f b8 ff ff       	call   0x1006e980
10073161:	8d 4e 1c             	lea    ecx,[esi+0x1c]
10073164:	51                   	push   ecx
10073165:	8b ce                	mov    ecx,esi
10073167:	e8 e4 b4 ff ff       	call   0x1006e650
1007316c:	5e                   	pop    esi
1007316d:	c3                   	ret
1007316e:	e8 2d b7 ff ff       	call   0x1006e8a0
10073173:	a8 01                	test   al,0x1
10073175:	75 13                	jne    0x1007318a
10073177:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1007317a:	e8 a1 b8 ff ff       	call   0x1006ea20
1007317f:	8d 56 1c             	lea    edx,[esi+0x1c]
10073182:	8b ce                	mov    ecx,esi
10073184:	52                   	push   edx
10073185:	e8 c6 b4 ff ff       	call   0x1006e650
1007318a:	5e                   	pop    esi
1007318b:	c3                   	ret
1007318c:	90                   	nop
1007318d:	90                   	nop
1007318e:	90                   	nop
1007318f:	90                   	nop
10073190:	6a ff                	push   0xffffffff
10073192:	68 e8 62 0b 10       	push   0x100b62e8
10073197:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007319d:	50                   	push   eax
1007319e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100731a5:	51                   	push   ecx
100731a6:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100731aa:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
100731ae:	56                   	push   esi
100731af:	8b f1                	mov    esi,ecx
100731b1:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
100731b5:	50                   	push   eax
100731b6:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
100731ba:	51                   	push   ecx
100731bb:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
100731bf:	52                   	push   edx
100731c0:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
100731c4:	50                   	push   eax
100731c5:	51                   	push   ecx
100731c6:	52                   	push   edx
100731c7:	8b ce                	mov    ecx,esi
100731c9:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
100731cd:	e8 ce fb ff ff       	call   0x10072da0
100731d2:	6a 20                	push   0x20
100731d4:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
100731db:	00 
100731dc:	c7 06 cc c0 0b 10    	mov    DWORD PTR [esi],0x100bc0cc
100731e2:	c7 46 5c ff ff ff ff 	mov    DWORD PTR [esi+0x5c],0xffffffff
100731e9:	e8 3b 07 03 00       	call   0x100a3929
100731ee:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100731f2:	83 c4 04             	add    esp,0x4
100731f5:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
100731f8:	8b c6                	mov    eax,esi
100731fa:	5e                   	pop    esi
100731fb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10073202:	83 c4 10             	add    esp,0x10
10073205:	c2 18 00             	ret    0x18
10073208:	90                   	nop
10073209:	90                   	nop
1007320a:	90                   	nop
1007320b:	90                   	nop
1007320c:	90                   	nop
1007320d:	90                   	nop
1007320e:	90                   	nop
1007320f:	90                   	nop
10073210:	56                   	push   esi
10073211:	8b f1                	mov    esi,ecx
10073213:	e8 18 00 00 00       	call   0x10073230
10073218:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1007321d:	74 09                	je     0x10073228
1007321f:	56                   	push   esi
10073220:	e8 f9 06 03 00       	call   0x100a391e
10073225:	83 c4 04             	add    esp,0x4
10073228:	8b c6                	mov    eax,esi
1007322a:	5e                   	pop    esi
1007322b:	c2 04 00             	ret    0x4
1007322e:	90                   	nop
1007322f:	90                   	nop
10073230:	6a ff                	push   0xffffffff
10073232:	68 08 63 0b 10       	push   0x100b6308
10073237:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007323d:	50                   	push   eax
1007323e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10073245:	51                   	push   ecx
10073246:	56                   	push   esi
10073247:	8b f1                	mov    esi,ecx
10073249:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1007324d:	c7 06 cc c0 0b 10    	mov    DWORD PTR [esi],0x100bc0cc
10073253:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
10073256:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1007325d:	00 
1007325e:	50                   	push   eax
1007325f:	e8 ba 06 03 00       	call   0x100a391e
10073264:	83 c4 04             	add    esp,0x4
10073267:	8b ce                	mov    ecx,esi
10073269:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10073270:	ff 
10073271:	e8 aa b2 ff ff       	call   0x1006e520
10073276:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007327a:	5e                   	pop    esi
1007327b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10073282:	83 c4 10             	add    esp,0x10
10073285:	c3                   	ret
10073286:	90                   	nop
10073287:	90                   	nop
10073288:	90                   	nop
10073289:	90                   	nop
1007328a:	90                   	nop
1007328b:	90                   	nop
1007328c:	90                   	nop
1007328d:	90                   	nop
1007328e:	90                   	nop
1007328f:	90                   	nop
10073290:	53                   	push   ebx
10073291:	56                   	push   esi
10073292:	8b f1                	mov    esi,ecx
10073294:	57                   	push   edi
10073295:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10073298:	8b 01                	mov    eax,DWORD PTR [ecx]
1007329a:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
100732a0:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
100732a3:	8b d8                	mov    ebx,eax
100732a5:	8b 11                	mov    edx,DWORD PTR [ecx]
100732a7:	ff 52 70             	call   DWORD PTR [edx+0x70]
100732aa:	8b ce                	mov    ecx,esi
100732ac:	e8 6f fe ff ff       	call   0x10073120
100732b1:	33 ff                	xor    edi,edi
100732b3:	85 db                	test   ebx,ebx
100732b5:	7e 15                	jle    0x100732cc
100732b7:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100732ba:	8b 0c b8             	mov    ecx,DWORD PTR [eax+edi*4]
100732bd:	85 c9                	test   ecx,ecx
100732bf:	74 06                	je     0x100732c7
100732c1:	8b 11                	mov    edx,DWORD PTR [ecx]
100732c3:	6a 01                	push   0x1
100732c5:	ff 12                	call   DWORD PTR [edx]
100732c7:	47                   	inc    edi
100732c8:	3b fb                	cmp    edi,ebx
100732ca:	7c eb                	jl     0x100732b7
100732cc:	c7 46 5c ff ff ff ff 	mov    DWORD PTR [esi+0x5c],0xffffffff
100732d3:	5f                   	pop    edi
100732d4:	5e                   	pop    esi
100732d5:	5b                   	pop    ebx
100732d6:	c3                   	ret
100732d7:	90                   	nop
100732d8:	90                   	nop
100732d9:	90                   	nop
100732da:	90                   	nop
100732db:	90                   	nop
100732dc:	90                   	nop
100732dd:	90                   	nop
100732de:	90                   	nop
100732df:	90                   	nop

*/
void PBTabHeader::AddTab() {
    // TODO: Implement AddTab
}

