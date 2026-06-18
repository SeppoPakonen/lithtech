#include "Log.h"

// 0x1000c760: Log::Log
/*
1000c760:	53                   	push   ebx
1000c761:	56                   	push   esi
1000c762:	8b f1                	mov    esi,ecx
1000c764:	57                   	push   edi
1000c765:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1000c769:	68 ff 01 00 00       	push   0x1ff
1000c76e:	8d 5e 0c             	lea    ebx,[esi+0xc]
1000c771:	33 c0                	xor    eax,eax
1000c773:	57                   	push   edi
1000c774:	53                   	push   ebx
1000c775:	c7 06 7c 85 0b 10    	mov    DWORD PTR [esi],0x100b857c
1000c77b:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1000c77e:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000c781:	e8 9a 70 09 00       	call   0x100a3820
1000c786:	83 c9 ff             	or     ecx,0xffffffff
1000c789:	33 c0                	xor    eax,eax
1000c78b:	83 c4 0c             	add    esp,0xc
1000c78e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1000c790:	f7 d1                	not    ecx
1000c792:	49                   	dec    ecx
1000c793:	81 f9 00 02 00 00    	cmp    ecx,0x200
1000c799:	72 31                	jb     0x1000c7cc
1000c79b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000c7a1:	6a 24                	push   0x24
1000c7a3:	68 2c 3d 0d 10       	push   0x100d3d2c
1000c7a8:	8b 01                	mov    eax,DWORD PTR [ecx]
1000c7aa:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1000c7b0:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000c7b5:	53                   	push   ebx
1000c7b6:	68 04 3d 0d 10       	push   0x100d3d04
1000c7bb:	68 fc 3c 0d 10       	push   0x100d3cfc
1000c7c0:	8b 08                	mov    ecx,DWORD PTR [eax]
1000c7c2:	50                   	push   eax
1000c7c3:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1000c7c9:	83 c4 10             	add    esp,0x10
1000c7cc:	8b c6                	mov    eax,esi
1000c7ce:	5f                   	pop    edi
1000c7cf:	5e                   	pop    esi
1000c7d0:	5b                   	pop    ebx
1000c7d1:	c2 04 00             	ret    0x4
1000c7d4:	90                   	nop
1000c7d5:	90                   	nop
1000c7d6:	90                   	nop
1000c7d7:	90                   	nop
1000c7d8:	90                   	nop
1000c7d9:	90                   	nop
1000c7da:	90                   	nop
1000c7db:	90                   	nop
1000c7dc:	90                   	nop
1000c7dd:	90                   	nop
1000c7de:	90                   	nop
1000c7df:	90                   	nop

*/
void Log::Log() {
    // TODO: Implement Log
}

// 0x1000c820: Log::Open
/*
1000c820:	51                   	push   ecx
1000c821:	55                   	push   ebp
1000c822:	8b e9                	mov    ebp,ecx
1000c824:	56                   	push   esi
1000c825:	f6 45 04 01          	test   BYTE PTR [ebp+0x4],0x1
1000c829:	74 43                	je     0x1000c86e
1000c82b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000c831:	6a 32                	push   0x32
1000c833:	68 2c 3d 0d 10       	push   0x100d3d2c
1000c838:	8b 01                	mov    eax,DWORD PTR [ecx]
1000c83a:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1000c840:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000c845:	68 40 3e 0d 10       	push   0x100d3e40
1000c84a:	68 fc 3c 0d 10       	push   0x100d3cfc
1000c84f:	50                   	push   eax
1000c850:	8b 08                	mov    ecx,DWORD PTR [eax]
1000c852:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1000c858:	68 54 3d 0d 10       	push   0x100d3d54
1000c85d:	55                   	push   ebp
1000c85e:	e8 ad 01 00 00       	call   0x1000ca10
1000c863:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
1000c866:	83 c4 14             	add    esp,0x14
1000c869:	24 fe                	and    al,0xfe
1000c86b:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
1000c86e:	53                   	push   ebx
1000c86f:	8d 54 24 0c          	lea    edx,[esp+0xc]
1000c873:	57                   	push   edi
1000c874:	52                   	push   edx
1000c875:	e8 a6 78 09 00       	call   0x100a4120
1000c87a:	8d 44 24 14          	lea    eax,[esp+0x14]
1000c87e:	50                   	push   eax
1000c87f:	e8 05 81 09 00       	call   0x100a4989
1000c884:	83 c4 08             	add    esp,0x8
1000c887:	85 c0                	test   eax,eax
1000c889:	74 28                	je     0x1000c8b3
1000c88b:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1000c88e:	8b 50 10             	mov    edx,DWORD PTR [eax+0x10]
1000c891:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
1000c894:	42                   	inc    edx
1000c895:	51                   	push   ecx
1000c896:	05 6c 07 00 00       	add    eax,0x76c
1000c89b:	52                   	push   edx
1000c89c:	8d 9d 0c 02 00 00    	lea    ebx,[ebp+0x20c]
1000c8a2:	50                   	push   eax
1000c8a3:	68 30 3e 0d 10       	push   0x100d3e30
1000c8a8:	53                   	push   ebx
1000c8a9:	e8 ad 75 09 00       	call   0x100a3e5b
1000c8ae:	83 c4 14             	add    esp,0x14
1000c8b1:	eb 5b                	jmp    0x1000c90e
1000c8b3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000c8b9:	68 34 03 00 00       	push   0x334
1000c8be:	68 2c 3d 0d 10       	push   0x100d3d2c
1000c8c3:	8b 11                	mov    edx,DWORD PTR [ecx]
1000c8c5:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1000c8cb:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000c8d0:	68 fc 3d 0d 10       	push   0x100d3dfc
1000c8d5:	68 fc 3c 0d 10       	push   0x100d3cfc
1000c8da:	50                   	push   eax
1000c8db:	8b 08                	mov    ecx,DWORD PTR [eax]
1000c8dd:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1000c8e3:	bf f0 3d 0d 10       	mov    edi,0x100d3df0
1000c8e8:	83 c9 ff             	or     ecx,0xffffffff
1000c8eb:	33 c0                	xor    eax,eax
1000c8ed:	83 c4 0c             	add    esp,0xc
1000c8f0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1000c8f2:	f7 d1                	not    ecx
1000c8f4:	2b f9                	sub    edi,ecx
1000c8f6:	8d 9d 0c 02 00 00    	lea    ebx,[ebp+0x20c]
1000c8fc:	8b d1                	mov    edx,ecx
1000c8fe:	8b f7                	mov    esi,edi
1000c900:	8b fb                	mov    edi,ebx
1000c902:	c1 e9 02             	shr    ecx,0x2
1000c905:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000c907:	8b ca                	mov    ecx,edx
1000c909:	83 e1 03             	and    ecx,0x3
1000c90c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1000c90e:	8b cd                	mov    ecx,ebp
1000c910:	e8 ab 0e 00 00       	call   0x1000d7c0
1000c915:	8d 85 15 02 00 00    	lea    eax,[ebp+0x215]
1000c91b:	8d 7d 0c             	lea    edi,[ebp+0xc]
1000c91e:	50                   	push   eax
1000c91f:	53                   	push   ebx
1000c920:	57                   	push   edi
1000c921:	8d b5 1a 02 00 00    	lea    esi,[ebp+0x21a]
1000c927:	68 e0 3d 0d 10       	push   0x100d3de0
1000c92c:	68 ff 01 00 00       	push   0x1ff
1000c931:	56                   	push   esi
1000c932:	e8 16 77 09 00       	call   0x100a404d
1000c937:	83 c9 ff             	or     ecx,0xffffffff
1000c93a:	33 c0                	xor    eax,eax
1000c93c:	83 c4 18             	add    esp,0x18
1000c93f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1000c941:	f7 d1                	not    ecx
1000c943:	49                   	dec    ecx
1000c944:	5f                   	pop    edi
1000c945:	81 f9 ee 01 00 00    	cmp    ecx,0x1ee
1000c94b:	5b                   	pop    ebx
1000c94c:	72 34                	jb     0x1000c982
1000c94e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000c954:	68 96 03 00 00       	push   0x396
1000c959:	68 2c 3d 0d 10       	push   0x100d3d2c
1000c95e:	8b 11                	mov    edx,DWORD PTR [ecx]
1000c960:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1000c966:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000c96b:	56                   	push   esi
1000c96c:	68 ac 3d 0d 10       	push   0x100d3dac
1000c971:	68 fc 3c 0d 10       	push   0x100d3cfc
1000c976:	8b 08                	mov    ecx,DWORD PTR [eax]
1000c978:	50                   	push   eax
1000c979:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1000c97f:	83 c4 10             	add    esp,0x10
1000c982:	68 a8 3d 0d 10       	push   0x100d3da8
1000c987:	56                   	push   esi
1000c988:	e8 23 7d 09 00       	call   0x100a46b0
1000c98d:	83 c4 08             	add    esp,0x8
1000c990:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000c993:	85 c0                	test   eax,eax
1000c995:	74 0b                	je     0x1000c9a2
1000c997:	50                   	push   eax
1000c998:	e8 4e 7b 09 00       	call   0x100a44eb
1000c99d:	83 c4 04             	add    esp,0x4
1000c9a0:	eb 31                	jmp    0x1000c9d3
1000c9a2:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000c9a8:	6a 3d                	push   0x3d
1000c9aa:	68 2c 3d 0d 10       	push   0x100d3d2c
1000c9af:	8b 11                	mov    edx,DWORD PTR [ecx]
1000c9b1:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1000c9b7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000c9bc:	56                   	push   esi
1000c9bd:	68 7c 3d 0d 10       	push   0x100d3d7c
1000c9c2:	68 fc 3c 0d 10       	push   0x100d3cfc
1000c9c7:	8b 08                	mov    ecx,DWORD PTR [eax]
1000c9c9:	50                   	push   eax
1000c9ca:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1000c9d0:	83 c4 10             	add    esp,0x10
1000c9d3:	8b 75 04             	mov    esi,DWORD PTR [ebp+0x4]
1000c9d6:	68 68 3d 0d 10       	push   0x100d3d68
1000c9db:	83 ce 01             	or     esi,0x1
1000c9de:	55                   	push   ebp
1000c9df:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
1000c9e2:	e8 29 00 00 00       	call   0x1000ca10
1000c9e7:	83 c4 08             	add    esp,0x8
1000c9ea:	5e                   	pop    esi
1000c9eb:	5d                   	pop    ebp
1000c9ec:	59                   	pop    ecx
1000c9ed:	c3                   	ret
1000c9ee:	90                   	nop
1000c9ef:	90                   	nop

*/
void Log::Open() {
    // TODO: Implement Open
}

// 0x1000ca10: Log::Print
/*
1000ca10:	56                   	push   esi
1000ca11:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1000ca15:	33 c0                	xor    eax,eax
1000ca17:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000ca1a:	85 d2                	test   edx,edx
1000ca1c:	0f 94 c0             	sete   al
1000ca1f:	a8 01                	test   al,0x1
1000ca21:	0f 85 09 01 00 00    	jne    0x1000cb30
1000ca27:	8d 4c 24 08          	lea    ecx,[esp+0x8]
1000ca2b:	51                   	push   ecx
1000ca2c:	e8 ef 76 09 00       	call   0x100a4120
1000ca31:	8d 54 24 0c          	lea    edx,[esp+0xc]
1000ca35:	52                   	push   edx
1000ca36:	e8 4e 7f 09 00       	call   0x100a4989
1000ca3b:	83 c4 08             	add    esp,0x8
1000ca3e:	85 c0                	test   eax,eax
1000ca40:	74 32                	je     0x1000ca74
1000ca42:	8b 08                	mov    ecx,DWORD PTR [eax]
1000ca44:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000ca47:	51                   	push   ecx
1000ca48:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1000ca4b:	52                   	push   edx
1000ca4c:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
1000ca4f:	81 c2 6c 07 00 00    	add    edx,0x76c
1000ca55:	51                   	push   ecx
1000ca56:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1000ca59:	52                   	push   edx
1000ca5a:	8b 50 10             	mov    edx,DWORD PTR [eax+0x10]
1000ca5d:	51                   	push   ecx
1000ca5e:	42                   	inc    edx
1000ca5f:	52                   	push   edx
1000ca60:	68 c8 3e 0d 10       	push   0x100d3ec8
1000ca65:	68 04 d4 10 10       	push   0x1010d404
1000ca6a:	e8 ec 73 09 00       	call   0x100a3e5b
1000ca6f:	83 c4 20             	add    esp,0x20
1000ca72:	eb 12                	jmp    0x1000ca86
1000ca74:	68 ac 3e 0d 10       	push   0x100d3eac
1000ca79:	68 04 d4 10 10       	push   0x1010d404
1000ca7e:	e8 d8 73 09 00       	call   0x100a3e5b
1000ca83:	83 c4 08             	add    esp,0x8
1000ca86:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1000ca8a:	8d 44 24 10          	lea    eax,[esp+0x10]
1000ca8e:	57                   	push   edi
1000ca8f:	50                   	push   eax
1000ca90:	51                   	push   ecx
1000ca91:	68 ff 01 00 00       	push   0x1ff
1000ca96:	68 04 d2 10 10       	push   0x1010d204
1000ca9b:	e8 5d 75 09 00       	call   0x100a3ffd
1000caa0:	8d be 1a 02 00 00    	lea    edi,[esi+0x21a]
1000caa6:	68 a8 3e 0d 10       	push   0x100d3ea8
1000caab:	57                   	push   edi
1000caac:	e8 ff 7b 09 00       	call   0x100a46b0
1000cab1:	83 c4 18             	add    esp,0x18
1000cab4:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000cab7:	85 c0                	test   eax,eax
1000cab9:	74 23                	je     0x1000cade
1000cabb:	68 04 d2 10 10       	push   0x1010d204
1000cac0:	68 04 d4 10 10       	push   0x1010d404
1000cac5:	68 a0 3e 0d 10       	push   0x100d3ea0
1000caca:	50                   	push   eax
1000cacb:	e8 19 80 09 00       	call   0x100a4ae9
1000cad0:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1000cad3:	52                   	push   edx
1000cad4:	e8 12 7a 09 00       	call   0x100a44eb
1000cad9:	83 c4 14             	add    esp,0x14
1000cadc:	eb 31                	jmp    0x1000cb0f
1000cade:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000cae4:	6a 7b                	push   0x7b
1000cae6:	68 2c 3d 0d 10       	push   0x100d3d2c
1000caeb:	8b 01                	mov    eax,DWORD PTR [ecx]
1000caed:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1000caf3:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000caf8:	57                   	push   edi
1000caf9:	68 70 3e 0d 10       	push   0x100d3e70
1000cafe:	68 fc 3c 0d 10       	push   0x100d3cfc
1000cb03:	8b 08                	mov    ecx,DWORD PTR [eax]
1000cb05:	50                   	push   eax
1000cb06:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1000cb0c:	83 c4 10             	add    esp,0x10
1000cb0f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000cb14:	68 04 d2 10 10       	push   0x1010d204
1000cb19:	68 04 d4 10 10       	push   0x1010d404
1000cb1e:	68 a0 3e 0d 10       	push   0x100d3ea0
1000cb23:	8b 10                	mov    edx,DWORD PTR [eax]
1000cb25:	50                   	push   eax
1000cb26:	ff 92 9c 00 00 00    	call   DWORD PTR [edx+0x9c]
1000cb2c:	83 c4 10             	add    esp,0x10
1000cb2f:	5f                   	pop    edi
1000cb30:	5e                   	pop    esi
1000cb31:	c3                   	ret
1000cb32:	90                   	nop
1000cb33:	90                   	nop
1000cb34:	90                   	nop
1000cb35:	90                   	nop
1000cb36:	90                   	nop
1000cb37:	90                   	nop
1000cb38:	90                   	nop
1000cb39:	90                   	nop
1000cb3a:	90                   	nop
1000cb3b:	90                   	nop
1000cb3c:	90                   	nop
1000cb3d:	90                   	nop
1000cb3e:	90                   	nop
1000cb3f:	90                   	nop

*/
void Log::Print() {
    // TODO: Implement Print
}

// 0x1000d7c0: Log::GenerateFileSuffix
/*
1000d7c0:	81 ec 18 03 00 00    	sub    esp,0x318
1000d7c6:	53                   	push   ebx
1000d7c7:	8b d9                	mov    ebx,ecx
1000d7c9:	56                   	push   esi
1000d7ca:	57                   	push   edi
1000d7cb:	8d 83 0c 02 00 00    	lea    eax,[ebx+0x20c]
1000d7d1:	8d 7b 0c             	lea    edi,[ebx+0xc]
1000d7d4:	50                   	push   eax
1000d7d5:	57                   	push   edi
1000d7d6:	68 08 45 0d 10       	push   0x100d4508
1000d7db:	8d 8c 24 30 01 00 00 	lea    ecx,[esp+0x130]
1000d7e2:	68 ff 01 00 00       	push   0x1ff
1000d7e7:	51                   	push   ecx
1000d7e8:	e8 60 68 09 00       	call   0x100a404d
1000d7ed:	83 c9 ff             	or     ecx,0xffffffff
1000d7f0:	33 c0                	xor    eax,eax
1000d7f2:	83 c4 14             	add    esp,0x14
1000d7f5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1000d7f7:	f7 d1                	not    ecx
1000d7f9:	49                   	dec    ecx
1000d7fa:	81 f9 f1 01 00 00    	cmp    ecx,0x1f1
1000d800:	72 3b                	jb     0x1000d83d
1000d802:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000d808:	68 69 03 00 00       	push   0x369
1000d80d:	68 2c 3d 0d 10       	push   0x100d3d2c
1000d812:	8b 11                	mov    edx,DWORD PTR [ecx]
1000d814:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1000d81a:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000d81f:	8d 94 24 24 01 00 00 	lea    edx,[esp+0x124]
1000d826:	52                   	push   edx
1000d827:	68 cc 44 0d 10       	push   0x100d44cc
1000d82c:	8b 08                	mov    ecx,DWORD PTR [eax]
1000d82e:	68 fc 3c 0d 10       	push   0x100d3cfc
1000d833:	50                   	push   eax
1000d834:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1000d83a:	83 c4 10             	add    esp,0x10
1000d83d:	8d 44 24 0c          	lea    eax,[esp+0xc]
1000d841:	8d 8c 24 24 01 00 00 	lea    ecx,[esp+0x124]
1000d848:	50                   	push   eax
1000d849:	51                   	push   ecx
1000d84a:	e8 d6 72 09 00       	call   0x100a4b25
1000d84f:	8b f8                	mov    edi,eax
1000d851:	83 c4 08             	add    esp,0x8
1000d854:	33 f6                	xor    esi,esi
1000d856:	83 ff ff             	cmp    edi,0xffffffff
1000d859:	74 58                	je     0x1000d8b3
1000d85b:	8d 54 24 20          	lea    edx,[esp+0x20]
1000d85f:	6a 2e                	push   0x2e
1000d861:	52                   	push   edx
1000d862:	e8 79 75 09 00       	call   0x100a4de0
1000d867:	83 c4 08             	add    esp,0x8
1000d86a:	85 c0                	test   eax,eax
1000d86c:	74 03                	je     0x1000d871
1000d86e:	c6 00 00             	mov    BYTE PTR [eax],0x0
1000d871:	8d 44 24 20          	lea    eax,[esp+0x20]
1000d875:	6a 2d                	push   0x2d
1000d877:	50                   	push   eax
1000d878:	e8 63 75 09 00       	call   0x100a4de0
1000d87d:	83 c4 08             	add    esp,0x8
1000d880:	85 c0                	test   eax,eax
1000d882:	74 0c                	je     0x1000d890
1000d884:	40                   	inc    eax
1000d885:	50                   	push   eax
1000d886:	e8 3e 75 09 00       	call   0x100a4dc9
1000d88b:	83 c4 04             	add    esp,0x4
1000d88e:	eb 02                	jmp    0x1000d892
1000d890:	33 c0                	xor    eax,eax
1000d892:	3b c6                	cmp    eax,esi
1000d894:	7e 02                	jle    0x1000d898
1000d896:	8b f0                	mov    esi,eax
1000d898:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
1000d89c:	51                   	push   ecx
1000d89d:	57                   	push   edi
1000d89e:	e8 4f 73 09 00       	call   0x100a4bf2
1000d8a3:	83 c4 08             	add    esp,0x8
1000d8a6:	85 c0                	test   eax,eax
1000d8a8:	74 b1                	je     0x1000d85b
1000d8aa:	57                   	push   edi
1000d8ab:	e8 0a 74 09 00       	call   0x100a4cba
1000d8b0:	83 c4 04             	add    esp,0x4
1000d8b3:	8d 46 01             	lea    eax,[esi+0x1]
1000d8b6:	b9 10 27 00 00       	mov    ecx,0x2710
1000d8bb:	99                   	cdq
1000d8bc:	f7 f9                	idiv   ecx
1000d8be:	81 c3 15 02 00 00    	add    ebx,0x215
1000d8c4:	52                   	push   edx
1000d8c5:	68 c4 44 0d 10       	push   0x100d44c4
1000d8ca:	53                   	push   ebx
1000d8cb:	e8 8b 65 09 00       	call   0x100a3e5b
1000d8d0:	83 c4 0c             	add    esp,0xc
1000d8d3:	5f                   	pop    edi
1000d8d4:	5e                   	pop    esi
1000d8d5:	5b                   	pop    ebx
1000d8d6:	81 c4 18 03 00 00    	add    esp,0x318
1000d8dc:	c3                   	ret
1000d8dd:	90                   	nop
1000d8de:	90                   	nop
1000d8df:	90                   	nop
1000d8e0:	8b c1                	mov    eax,ecx
1000d8e2:	33 c9                	xor    ecx,ecx
1000d8e4:	89 08                	mov    DWORD PTR [eax],ecx
1000d8e6:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
1000d8e9:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000d8ec:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1000d8ef:	89 48 18             	mov    DWORD PTR [eax+0x18],ecx
1000d8f2:	c3                   	ret
1000d8f3:	90                   	nop
1000d8f4:	90                   	nop
1000d8f5:	90                   	nop
1000d8f6:	90                   	nop
1000d8f7:	90                   	nop
1000d8f8:	90                   	nop
1000d8f9:	90                   	nop
1000d8fa:	90                   	nop
1000d8fb:	90                   	nop
1000d8fc:	90                   	nop
1000d8fd:	90                   	nop
1000d8fe:	90                   	nop
1000d8ff:	90                   	nop
1000d900:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000d904:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000d907:	33 c0                	xor    eax,eax
1000d909:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000d90c:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
1000d90f:	c2 04 00             	ret    0x4
1000d912:	90                   	nop
1000d913:	90                   	nop
1000d914:	90                   	nop
1000d915:	90                   	nop
1000d916:	90                   	nop
1000d917:	90                   	nop
1000d918:	90                   	nop
1000d919:	90                   	nop
1000d91a:	90                   	nop
1000d91b:	90                   	nop
1000d91c:	90                   	nop
1000d91d:	90                   	nop
1000d91e:	90                   	nop
1000d91f:	90                   	nop
1000d920:	a0 68 d4 10 10       	mov    al,ds:0x1010d468
1000d925:	83 ec 68             	sub    esp,0x68
1000d928:	a8 01                	test   al,0x1
1000d92a:	56                   	push   esi
1000d92b:	8b f1                	mov    esi,ecx
1000d92d:	75 18                	jne    0x1000d947
1000d92f:	8a d0                	mov    dl,al
1000d931:	68 10 e0 00 10       	push   0x1000e010
1000d936:	80 ca 01             	or     dl,0x1
1000d939:	88 15 68 d4 10 10    	mov    BYTE PTR ds:0x1010d468,dl
1000d93f:	e8 41 75 09 00       	call   0x100a4e85
1000d944:	83 c4 04             	add    esp,0x4
1000d947:	a0 68 d4 10 10       	mov    al,ds:0x1010d468
1000d94c:	a8 02                	test   al,0x2
1000d94e:	75 18                	jne    0x1000d968
1000d950:	8a d0                	mov    dl,al
1000d952:	68 00 e0 00 10       	push   0x1000e000
1000d957:	80 ca 02             	or     dl,0x2
1000d95a:	88 15 68 d4 10 10    	mov    BYTE PTR ds:0x1010d468,dl
1000d960:	e8 20 75 09 00       	call   0x100a4e85
1000d965:	83 c4 04             	add    esp,0x4
1000d968:	a0 68 d4 10 10       	mov    al,ds:0x1010d468
1000d96d:	a8 04                	test   al,0x4
1000d96f:	75 18                	jne    0x1000d989
1000d971:	8a d0                	mov    dl,al
1000d973:	68 f0 df 00 10       	push   0x1000dff0
1000d978:	80 ca 04             	or     dl,0x4
1000d97b:	88 15 68 d4 10 10    	mov    BYTE PTR ds:0x1010d468,dl
1000d981:	e8 ff 74 09 00       	call   0x100a4e85
1000d986:	83 c4 04             	add    esp,0x4
1000d989:	8a 0d 68 d4 10 10    	mov    cl,BYTE PTR ds:0x1010d468
1000d98f:	b0 08                	mov    al,0x8
1000d991:	84 c8                	test   al,cl
1000d993:	75 17                	jne    0x1000d9ac
1000d995:	8a d1                	mov    dl,cl
1000d997:	68 e0 df 00 10       	push   0x1000dfe0
1000d99c:	0a d0                	or     dl,al
1000d99e:	88 15 68 d4 10 10    	mov    BYTE PTR ds:0x1010d468,dl
1000d9a4:	e8 dc 74 09 00       	call   0x100a4e85
1000d9a9:	83 c4 04             	add    esp,0x4
1000d9ac:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
1000d9b0:	53                   	push   ebx
1000d9b1:	57                   	push   edi
1000d9b2:	8d 7e 10             	lea    edi,[esi+0x10]
1000d9b5:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
1000d9b8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000d9bb:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1000d9c1:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1000d9c7:	8d 5c 24 50          	lea    ebx,[esp+0x50]
1000d9cb:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1000d9d2:	00 
1000d9d3:	8b 11                	mov    edx,DWORD PTR [ecx]
1000d9d5:	53                   	push   ebx
1000d9d6:	50                   	push   eax
1000d9d7:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1000d9da:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
1000d9de:	85 c0                	test   eax,eax
1000d9e0:	74 38                	je     0x1000da1a
1000d9e2:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
1000d9e6:	83 f8 ff             	cmp    eax,0xffffffff
1000d9e9:	74 10                	je     0x1000d9fb
1000d9eb:	57                   	push   edi
1000d9ec:	50                   	push   eax
1000d9ed:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000d9f2:	ff 90 d8 03 00 00    	call   DWORD PTR [eax+0x3d8]
1000d9f8:	83 c4 08             	add    esp,0x8
1000d9fb:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
1000d9ff:	dc 1d 98 85 0b 10    	fcomp  QWORD PTR ds:0x100b8598
1000da05:	df e0                	fnstsw ax
1000da07:	f6 c4 01             	test   ah,0x1
1000da0a:	75 07                	jne    0x1000da13
1000da0c:	b8 01 00 00 00       	mov    eax,0x1
1000da11:	eb 09                	jmp    0x1000da1c
1000da13:	b8 02 00 00 00       	mov    eax,0x2
1000da18:	eb 02                	jmp    0x1000da1c
1000da1a:	33 c0                	xor    eax,eax
1000da1c:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000da1f:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1000da25:	8d 44 24 10          	lea    eax,[esp+0x10]
1000da29:	8b 11                	mov    edx,DWORD PTR [ecx]
1000da2b:	50                   	push   eax
1000da2c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000da2f:	6a 00                	push   0x0
1000da31:	50                   	push   eax
1000da32:	ff 52 0c             	call   DWORD PTR [edx+0xc]
1000da35:	8b bc 24 84 00 00 00 	mov    edi,DWORD PTR [esp+0x84]
1000da3c:	8b 4c 24 7c          	mov    ecx,DWORD PTR [esp+0x7c]
1000da40:	85 ff                	test   edi,edi
1000da42:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
1000da45:	75 18                	jne    0x1000da5f
1000da47:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000da4a:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000da4f:	bf 58 d4 10 10       	mov    edi,0x1010d458
1000da54:	57                   	push   edi
1000da55:	52                   	push   edx
1000da56:	ff 90 f4 02 00 00    	call   DWORD PTR [eax+0x2f4]
1000da5c:	83 c4 08             	add    esp,0x8
1000da5f:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1000da65:	55                   	push   ebp
1000da66:	68 38 d4 10 10       	push   0x1010d438
1000da6b:	68 48 d4 10 10       	push   0x1010d448
1000da70:	8b 11                	mov    edx,DWORD PTR [ecx]
1000da72:	68 28 d4 10 10       	push   0x1010d428
1000da77:	57                   	push   edi
1000da78:	ff 52 10             	call   DWORD PTR [edx+0x10]
1000da7b:	8b 5c 24 7c          	mov    ebx,DWORD PTR [esp+0x7c]
1000da7f:	8b eb                	mov    ebp,ebx
1000da81:	83 e5 01             	and    ebp,0x1
1000da84:	74 08                	je     0x1000da8e
1000da86:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1000da8c:	eb 06                	jmp    0x1000da94
1000da8e:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1000da94:	8b fb                	mov    edi,ebx
1000da96:	83 e7 02             	and    edi,0x2
1000da99:	74 08                	je     0x1000daa3
1000da9b:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1000daa1:	eb 06                	jmp    0x1000daa9
1000daa3:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1000daa9:	d9 c9                	fxch   st(1)
1000daab:	d8 e1                	fsub   st,st(1)
1000daad:	f6 c3 40             	test   bl,0x40
1000dab0:	d9 9c 24 84 00 00 00 	fstp   DWORD PTR [esp+0x84]
1000dab7:	dd d8                	fstp   st(0)
1000dab9:	74 08                	je     0x1000dac3
1000dabb:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1000dac1:	eb 06                	jmp    0x1000dac9
1000dac3:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1000dac9:	f6 c3 20             	test   bl,0x20
1000dacc:	74 08                	je     0x1000dad6
1000dace:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1000dad4:	eb 06                	jmp    0x1000dadc
1000dad6:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1000dadc:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
1000dae3:	d9 c9                	fxch   st(1)
1000dae5:	d8 e1                	fsub   st,st(1)
1000dae7:	d9 c9                	fxch   st(1)
1000dae9:	dd d8                	fstp   st(0)
1000daeb:	83 e0 02             	and    eax,0x2
1000daee:	89 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],eax
1000daf5:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1000daf9:	74 5a                	je     0x1000db55
1000dafb:	d9 05 3c d4 10 10    	fld    DWORD PTR ds:0x1010d43c
1000db01:	dc 1d 90 85 0b 10    	fcomp  QWORD PTR ds:0x100b8590
1000db07:	25 ff ff fd ff       	and    eax,0xfffdffff
1000db0c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1000db10:	df e0                	fnstsw ax
1000db12:	f6 c4 41             	test   ah,0x41
1000db15:	75 0f                	jne    0x1000db26
1000db17:	c7 05 3c d4 10 10 00 	mov    DWORD PTR ds:0x1010d43c,0x3f800000
1000db1e:	00 80 3f 
1000db21:	e9 fa 00 00 00       	jmp    0x1000dc20
1000db26:	c7 05 3c d4 10 10 00 	mov    DWORD PTR ds:0x1010d43c,0xbf800000
1000db2d:	00 80 bf 
1000db30:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1000db33:	83 f8 01             	cmp    eax,0x1
1000db36:	0f 84 e4 00 00 00    	je     0x1000dc20
1000db3c:	c7 05 40 d4 10 10 00 	mov    DWORD PTR ds:0x1010d440,0x0
1000db43:	00 00 00 
1000db46:	c7 05 38 d4 10 10 00 	mov    DWORD PTR ds:0x1010d438,0x0
1000db4d:	00 00 00 
1000db50:	e9 cb 00 00 00       	jmp    0x1000dc20
1000db55:	d9 05 38 d4 10 10    	fld    DWORD PTR ds:0x1010d438
1000db5b:	d8 0d 38 d4 10 10    	fmul   DWORD PTR ds:0x1010d438
1000db61:	d9 05 40 d4 10 10    	fld    DWORD PTR ds:0x1010d440
1000db67:	d8 0d 40 d4 10 10    	fmul   DWORD PTR ds:0x1010d440
1000db6d:	0d 00 00 02 00       	or     eax,0x20000
1000db72:	c7 05 3c d4 10 10 00 	mov    DWORD PTR ds:0x1010d43c,0x0
1000db79:	00 00 00 
1000db7c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1000db80:	c7 05 2c d4 10 10 00 	mov    DWORD PTR ds:0x1010d42c,0x0
1000db87:	00 00 00 
1000db8a:	de c1                	faddp  st(1),st
1000db8c:	d9 fa                	fsqrt
1000db8e:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000db94:	df e0                	fnstsw ax
1000db96:	f6 c4 40             	test   ah,0x40
1000db99:	75 2c                	jne    0x1000dbc7
1000db9b:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
1000dba1:	c7 05 3c d4 10 10 00 	mov    DWORD PTR ds:0x1010d43c,0x0
1000dba8:	00 00 00 
1000dbab:	d9 05 38 d4 10 10    	fld    DWORD PTR ds:0x1010d438
1000dbb1:	d8 c9                	fmul   st,st(1)
1000dbb3:	d9 1d 38 d4 10 10    	fstp   DWORD PTR ds:0x1010d438
1000dbb9:	d9 05 40 d4 10 10    	fld    DWORD PTR ds:0x1010d440
1000dbbf:	d8 c9                	fmul   st,st(1)
1000dbc1:	d9 1d 40 d4 10 10    	fstp   DWORD PTR ds:0x1010d440
1000dbc7:	dd d8                	fstp   st(0)
1000dbc9:	d9 05 30 d4 10 10    	fld    DWORD PTR ds:0x1010d430
1000dbcf:	d8 0d 30 d4 10 10    	fmul   DWORD PTR ds:0x1010d430
1000dbd5:	d9 05 28 d4 10 10    	fld    DWORD PTR ds:0x1010d428
1000dbdb:	d8 0d 28 d4 10 10    	fmul   DWORD PTR ds:0x1010d428
1000dbe1:	de c1                	faddp  st(1),st
1000dbe3:	d9 fa                	fsqrt
1000dbe5:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000dbeb:	df e0                	fnstsw ax
1000dbed:	f6 c4 40             	test   ah,0x40
1000dbf0:	75 2c                	jne    0x1000dc1e
1000dbf2:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
1000dbf8:	c7 05 2c d4 10 10 00 	mov    DWORD PTR ds:0x1010d42c,0x0
1000dbff:	00 00 00 
1000dc02:	d9 c0                	fld    st(0)
1000dc04:	d8 0d 28 d4 10 10    	fmul   DWORD PTR ds:0x1010d428
1000dc0a:	d9 1d 28 d4 10 10    	fstp   DWORD PTR ds:0x1010d428
1000dc10:	d8 0d 30 d4 10 10    	fmul   DWORD PTR ds:0x1010d430
1000dc16:	d9 1d 30 d4 10 10    	fstp   DWORD PTR ds:0x1010d430
1000dc1c:	eb 02                	jmp    0x1000dc20
1000dc1e:	dd d8                	fstp   st(0)
1000dc20:	d9 05 38 d4 10 10    	fld    DWORD PTR ds:0x1010d438
1000dc26:	d8 8c 24 84 00 00 00 	fmul   DWORD PTR [esp+0x84]
1000dc2d:	d9 05 3c d4 10 10    	fld    DWORD PTR ds:0x1010d43c
1000dc33:	d8 8c 24 84 00 00 00 	fmul   DWORD PTR [esp+0x84]
1000dc3a:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1000dc3e:	d9 05 40 d4 10 10    	fld    DWORD PTR ds:0x1010d440
1000dc44:	d8 8c 24 84 00 00 00 	fmul   DWORD PTR [esp+0x84]
1000dc4b:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1000dc4f:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
1000dc53:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1000dc57:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1000dc5b:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
1000dc5f:	d9 05 28 d4 10 10    	fld    DWORD PTR ds:0x1010d428
1000dc65:	d8 ca                	fmul   st,st(2)
1000dc67:	d9 05 2c d4 10 10    	fld    DWORD PTR ds:0x1010d42c
1000dc6d:	d8 cb                	fmul   st,st(3)
1000dc6f:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1000dc73:	d9 05 30 d4 10 10    	fld    DWORD PTR ds:0x1010d430
1000dc79:	d8 cb                	fmul   st,st(3)
1000dc7b:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1000dc7f:	d8 c1                	fadd   st,st(1)
1000dc81:	dd da                	fstp   st(2)
1000dc83:	dd d8                	fstp   st(0)
1000dc85:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
1000dc89:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
1000dc8d:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
1000dc91:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1000dc95:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
1000dc99:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
1000dc9d:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1000dca1:	8b c3                	mov    eax,ebx
1000dca3:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
1000dca7:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
1000dcab:	83 e0 10             	and    eax,0x10
1000dcae:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000dcb2:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
1000dcb6:	89 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],eax
1000dcbd:	75 08                	jne    0x1000dcc7
1000dcbf:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1000dcc2:	24 fe                	and    al,0xfe
1000dcc4:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
1000dcc7:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1000dccd:	8d 44 24 18          	lea    eax,[esp+0x18]
1000dcd1:	50                   	push   eax
1000dcd2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000dcd5:	8b 11                	mov    edx,DWORD PTR [ecx]
1000dcd7:	50                   	push   eax
1000dcd8:	ff 52 10             	call   DWORD PTR [edx+0x10]
1000dcdb:	f6 c3 60             	test   bl,0x60
1000dcde:	74 28                	je     0x1000dd08
1000dce0:	85 ed                	test   ebp,ebp
1000dce2:	74 18                	je     0x1000dcfc
1000dce4:	bf 04 00 00 00       	mov    edi,0x4
1000dce9:	f6 c3 80             	test   bl,0x80
1000dcec:	74 66                	je     0x1000dd54
1000dcee:	81 e3 00 02 00 00    	and    ebx,0x200
1000dcf4:	80 cf 04             	or     bh,0x4
1000dcf7:	c1 eb 09             	shr    ebx,0x9
1000dcfa:	eb 5e                	jmp    0x1000dd5a
1000dcfc:	f7 df                	neg    edi
1000dcfe:	1b ff                	sbb    edi,edi
1000dd00:	83 e7 02             	and    edi,0x2
1000dd03:	83 c7 03             	add    edi,0x3
1000dd06:	eb e1                	jmp    0x1000dce9
1000dd08:	85 ed                	test   ebp,ebp
1000dd0a:	74 07                	je     0x1000dd13
1000dd0c:	bf 01 00 00 00       	mov    edi,0x1
1000dd11:	eb d6                	jmp    0x1000dce9
1000dd13:	85 ff                	test   edi,edi
1000dd15:	74 07                	je     0x1000dd1e
1000dd17:	bf 02 00 00 00       	mov    edi,0x2
1000dd1c:	eb cb                	jmp    0x1000dce9
1000dd1e:	8a 46 08             	mov    al,BYTE PTR [esi+0x8]
1000dd21:	33 ff                	xor    edi,edi
1000dd23:	a8 03                	test   al,0x3
1000dd25:	75 0b                	jne    0x1000dd32
1000dd27:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
1000dd2e:	85 c0                	test   eax,eax
1000dd30:	74 38                	je     0x1000dd6a
1000dd32:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1000dd39:	00 
1000dd3a:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1000dd41:	00 
1000dd42:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1000dd49:	00 
1000dd4a:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
1000dd51:	00 
1000dd52:	eb 16                	jmp    0x1000dd6a
1000dd54:	c1 eb 09             	shr    ebx,0x9
1000dd57:	83 e3 01             	and    ebx,0x1
1000dd5a:	8b 06                	mov    eax,DWORD PTR [esi]
1000dd5c:	8d 0c bb             	lea    ecx,[ebx+edi*4]
1000dd5f:	8b d7                	mov    edx,edi
1000dd61:	03 d1                	add    edx,ecx
1000dd63:	d9 04 90             	fld    DWORD PTR [eax+edx*4]
1000dd66:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000dd6a:	8b 9c 24 80 00 00 00 	mov    ebx,DWORD PTR [esp+0x80]
1000dd71:	5d                   	pop    ebp
1000dd72:	85 db                	test   ebx,ebx
1000dd74:	0f 84 a2 00 00 00    	je     0x1000de1c
1000dd7a:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000dd7e:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1000dd82:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000dd86:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1000dd8a:	de c1                	faddp  st(1),st
1000dd8c:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000dd90:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1000dd94:	de c1                	faddp  st(1),st
1000dd96:	d9 fa                	fsqrt
1000dd98:	d9 c0                	fld    st(0)
1000dd9a:	d9 c0                	fld    st(0)
1000dd9c:	d8 c9                	fmul   st,st(1)
1000dd9e:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000dda2:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000dda6:	de d9                	fcompp
1000dda8:	df e0                	fnstsw ax
1000ddaa:	f6 c4 01             	test   ah,0x1
1000ddad:	dd d8                	fstp   st(0)
1000ddaf:	74 69                	je     0x1000de1a
1000ddb1:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000ddb7:	df e0                	fnstsw ax
1000ddb9:	f6 c4 40             	test   ah,0x40
1000ddbc:	75 24                	jne    0x1000dde2
1000ddbe:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
1000ddc4:	d9 c0                	fld    st(0)
1000ddc6:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1000ddca:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1000ddce:	d9 c0                	fld    st(0)
1000ddd0:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1000ddd4:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1000ddd8:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000dddc:	d8 c9                	fmul   st,st(1)
1000ddde:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1000dde2:	dd d8                	fstp   st(0)
1000dde4:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000dde8:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000ddec:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000ddf0:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000ddf4:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
1000ddf8:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000ddfc:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000de00:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
1000de04:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1000de08:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
1000de0c:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
1000de10:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1000de14:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1000de18:	eb 02                	jmp    0x1000de1c
1000de1a:	dd d8                	fstp   st(0)
1000de1c:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
1000de23:	85 c0                	test   eax,eax
1000de25:	74 38                	je     0x1000de5f
1000de27:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1000de2a:	f6 c1 01             	test   cl,0x1
1000de2d:	75 30                	jne    0x1000de5f
1000de2f:	f6 46 08 01          	test   BYTE PTR [esi+0x8],0x1
1000de33:	74 2a                	je     0x1000de5f
1000de35:	8b 16                	mov    edx,DWORD PTR [esi]
1000de37:	8d 04 bf             	lea    eax,[edi+edi*4]
1000de3a:	d9 44 82 10          	fld    DWORD PTR [edx+eax*4+0x10]
1000de3e:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1000de42:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000de46:	d8 5c 24 0c          	fcomp  DWORD PTR [esp+0xc]
1000de4a:	df e0                	fnstsw ax
1000de4c:	f6 c4 01             	test   ah,0x1
1000de4f:	74 08                	je     0x1000de59
1000de51:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1000de55:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1000de59:	83 c9 01             	or     ecx,0x1
1000de5c:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
1000de5f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
1000de63:	e8 78 d5 ff ff       	call   0x1000b3e0
1000de68:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000de6e:	df e0                	fnstsw ax
1000de70:	f6 c4 40             	test   ah,0x40
1000de73:	75 24                	jne    0x1000de99
1000de75:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
1000de7b:	d9 c0                	fld    st(0)
1000de7d:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
1000de81:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1000de85:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1000de89:	d8 c9                	fmul   st,st(1)
1000de8b:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000de8f:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000de93:	d8 c9                	fmul   st,st(1)
1000de95:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000de99:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1000de9c:	85 c0                	test   eax,eax
1000de9e:	dd d8                	fstp   st(0)
1000dea0:	75 59                	jne    0x1000defb
1000dea2:	85 db                	test   ebx,ebx
1000dea4:	75 55                	jne    0x1000defb
1000dea6:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000deaa:	d8 0d 8c 85 0b 10    	fmul   DWORD PTR ds:0x100b858c
1000deb0:	51                   	push   ecx
1000deb1:	d9 1c 24             	fstp   DWORD PTR [esp]
1000deb4:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000deb8:	d8 0d 8c 85 0b 10    	fmul   DWORD PTR ds:0x100b858c
1000debe:	51                   	push   ecx
1000debf:	d9 1c 24             	fstp   DWORD PTR [esp]
1000dec2:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000dec6:	d8 0d 8c 85 0b 10    	fmul   DWORD PTR ds:0x100b858c
1000decc:	51                   	push   ecx
1000decd:	8d 4c 24 50          	lea    ecx,[esp+0x50]
1000ded1:	d9 1c 24             	fstp   DWORD PTR [esp]
1000ded4:	e8 77 01 00 00       	call   0x1000e050
1000ded9:	8b 08                	mov    ecx,DWORD PTR [eax]
1000dedb:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
1000dedf:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000dee2:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1000dee6:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000dee9:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1000deed:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1000def1:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
1000def5:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1000def9:	eb 55                	jmp    0x1000df50
1000defb:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000deff:	d8 0d 88 85 0b 10    	fmul   DWORD PTR ds:0x100b8588
1000df05:	51                   	push   ecx
1000df06:	d9 1c 24             	fstp   DWORD PTR [esp]
1000df09:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000df0d:	d8 0d 88 85 0b 10    	fmul   DWORD PTR ds:0x100b8588
1000df13:	51                   	push   ecx
1000df14:	d9 1c 24             	fstp   DWORD PTR [esp]
1000df17:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000df1b:	d8 0d 88 85 0b 10    	fmul   DWORD PTR ds:0x100b8588
1000df21:	51                   	push   ecx
1000df22:	8d 4c 24 44          	lea    ecx,[esp+0x44]
1000df26:	d9 1c 24             	fstp   DWORD PTR [esp]
1000df29:	e8 22 01 00 00       	call   0x1000e050
1000df2e:	8b 08                	mov    ecx,DWORD PTR [eax]
1000df30:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
1000df34:	8d 4c 24 44          	lea    ecx,[esp+0x44]
1000df38:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000df3b:	51                   	push   ecx
1000df3c:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
1000df40:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1000df44:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000df47:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
1000df4b:	e8 20 01 00 00       	call   0x1000e070
1000df50:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000df54:	d8 1d 84 85 0b 10    	fcomp  DWORD PTR ds:0x100b8584
1000df5a:	5f                   	pop    edi
1000df5b:	5b                   	pop    ebx
1000df5c:	df e0                	fnstsw ax
1000df5e:	f6 c4 01             	test   ah,0x1
1000df61:	74 0a                	je     0x1000df6d
1000df63:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0xc5000000
1000df6a:	c5 
1000df6b:	eb 19                	jmp    0x1000df86
1000df6d:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000df71:	d8 1d 80 85 0b 10    	fcomp  DWORD PTR ds:0x100b8580
1000df77:	df e0                	fnstsw ax
1000df79:	f6 c4 41             	test   ah,0x41
1000df7c:	75 08                	jne    0x1000df86
1000df7e:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x45000000
1000df85:	45 
1000df86:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1000df8c:	8d 44 24 0c          	lea    eax,[esp+0xc]
1000df90:	50                   	push   eax
1000df91:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000df94:	8b 11                	mov    edx,DWORD PTR [ecx]
1000df96:	50                   	push   eax
1000df97:	ff 52 14             	call   DWORD PTR [edx+0x14]
1000df9a:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1000dfa0:	8d 44 24 18          	lea    eax,[esp+0x18]
1000dfa4:	50                   	push   eax
1000dfa5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000dfa8:	8b 11                	mov    edx,DWORD PTR [ecx]
1000dfaa:	50                   	push   eax
1000dfab:	ff 52 24             	call   DWORD PTR [edx+0x24]
1000dfae:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1000dfb4:	8d 44 24 04          	lea    eax,[esp+0x4]
1000dfb8:	50                   	push   eax
1000dfb9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000dfbc:	8b 11                	mov    edx,DWORD PTR [ecx]
1000dfbe:	50                   	push   eax
1000dfbf:	ff 52 1c             	call   DWORD PTR [edx+0x1c]
1000dfc2:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000dfc6:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1000dfcc:	50                   	push   eax
1000dfcd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000dfd0:	8b 11                	mov    edx,DWORD PTR [ecx]
1000dfd2:	6a 00                	push   0x0
1000dfd4:	50                   	push   eax
1000dfd5:	ff 52 10             	call   DWORD PTR [edx+0x10]
1000dfd8:	5e                   	pop    esi
1000dfd9:	83 c4 68             	add    esp,0x68
1000dfdc:	c2 14 00             	ret    0x14
1000dfdf:	90                   	nop
1000dfe0:	c3                   	ret
1000dfe1:	90                   	nop
1000dfe2:	90                   	nop
1000dfe3:	90                   	nop
1000dfe4:	90                   	nop
1000dfe5:	90                   	nop
1000dfe6:	90                   	nop
1000dfe7:	90                   	nop
1000dfe8:	90                   	nop
1000dfe9:	90                   	nop
1000dfea:	90                   	nop
1000dfeb:	90                   	nop
1000dfec:	90                   	nop
1000dfed:	90                   	nop
1000dfee:	90                   	nop
1000dfef:	90                   	nop
1000dff0:	c3                   	ret
1000dff1:	90                   	nop
1000dff2:	90                   	nop
1000dff3:	90                   	nop
1000dff4:	90                   	nop
1000dff5:	90                   	nop
1000dff6:	90                   	nop
1000dff7:	90                   	nop
1000dff8:	90                   	nop
1000dff9:	90                   	nop
1000dffa:	90                   	nop
1000dffb:	90                   	nop
1000dffc:	90                   	nop
1000dffd:	90                   	nop
1000dffe:	90                   	nop
1000dfff:	90                   	nop
1000e000:	c3                   	ret
1000e001:	90                   	nop
1000e002:	90                   	nop
1000e003:	90                   	nop
1000e004:	90                   	nop
1000e005:	90                   	nop
1000e006:	90                   	nop
1000e007:	90                   	nop
1000e008:	90                   	nop
1000e009:	90                   	nop
1000e00a:	90                   	nop
1000e00b:	90                   	nop
1000e00c:	90                   	nop
1000e00d:	90                   	nop
1000e00e:	90                   	nop
1000e00f:	90                   	nop
1000e010:	c3                   	ret
1000e011:	90                   	nop
1000e012:	90                   	nop
1000e013:	90                   	nop
1000e014:	90                   	nop
1000e015:	90                   	nop
1000e016:	90                   	nop
1000e017:	90                   	nop
1000e018:	90                   	nop
1000e019:	90                   	nop
1000e01a:	90                   	nop
1000e01b:	90                   	nop
1000e01c:	90                   	nop
1000e01d:	90                   	nop
1000e01e:	90                   	nop
1000e01f:	90                   	nop
1000e020:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000e024:	85 c0                	test   eax,eax
1000e026:	74 05                	je     0x1000e02d
1000e028:	8b 51 10             	mov    edx,DWORD PTR [ecx+0x10]
1000e02b:	89 10                	mov    DWORD PTR [eax],edx
1000e02d:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
1000e030:	33 c0                	xor    eax,eax
1000e032:	85 d2                	test   edx,edx
1000e034:	0f 95 c0             	setne  al
1000e037:	c2 04 00             	ret    0x4
1000e03a:	90                   	nop
1000e03b:	90                   	nop
1000e03c:	90                   	nop
1000e03d:	90                   	nop
1000e03e:	90                   	nop
1000e03f:	90                   	nop
1000e040:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
1000e043:	25 ff 00 00 00       	and    eax,0xff
1000e048:	d1 e8                	shr    eax,1
1000e04a:	83 e0 01             	and    eax,0x1
1000e04d:	c3                   	ret
1000e04e:	90                   	nop
1000e04f:	90                   	nop
1000e050:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000e054:	8b c1                	mov    eax,ecx
1000e056:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1000e05a:	89 08                	mov    DWORD PTR [eax],ecx
1000e05c:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1000e060:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e063:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e066:	c2 0c 00             	ret    0xc
1000e069:	90                   	nop
1000e06a:	90                   	nop
1000e06b:	90                   	nop
1000e06c:	90                   	nop
1000e06d:	90                   	nop
1000e06e:	90                   	nop
1000e06f:	90                   	nop
1000e070:	8b c1                	mov    eax,ecx
1000e072:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1000e076:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e078:	89 10                	mov    DWORD PTR [eax],edx
1000e07a:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1000e07d:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e080:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
1000e083:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e086:	c2 04 00             	ret    0x4
1000e089:	90                   	nop
1000e08a:	90                   	nop
1000e08b:	90                   	nop
1000e08c:	90                   	nop
1000e08d:	90                   	nop
1000e08e:	90                   	nop
1000e08f:	90                   	nop
1000e090:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000e094:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e09a:	50                   	push   eax
1000e09b:	ff 91 20 03 00 00    	call   DWORD PTR [ecx+0x320]
1000e0a1:	83 c4 04             	add    esp,0x4
1000e0a4:	a8 10                	test   al,0x10
1000e0a6:	74 07                	je     0x1000e0af
1000e0a8:	a8 04                	test   al,0x4
1000e0aa:	74 03                	je     0x1000e0af
1000e0ac:	33 c0                	xor    eax,eax
1000e0ae:	c3                   	ret
1000e0af:	b8 01 00 00 00       	mov    eax,0x1
1000e0b4:	c3                   	ret
1000e0b5:	90                   	nop
1000e0b6:	90                   	nop
1000e0b7:	90                   	nop
1000e0b8:	90                   	nop
1000e0b9:	90                   	nop
1000e0ba:	90                   	nop
1000e0bb:	90                   	nop
1000e0bc:	90                   	nop
1000e0bd:	90                   	nop
1000e0be:	90                   	nop
1000e0bf:	90                   	nop
1000e0c0:	8b c1                	mov    eax,ecx
1000e0c2:	33 c9                	xor    ecx,ecx
1000e0c4:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e0c7:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1000e0ca:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1000e0cd:	89 48 24             	mov    DWORD PTR [eax+0x24],ecx
1000e0d0:	89 48 28             	mov    DWORD PTR [eax+0x28],ecx
1000e0d3:	89 48 2c             	mov    DWORD PTR [eax+0x2c],ecx
1000e0d6:	89 48 30             	mov    DWORD PTR [eax+0x30],ecx
1000e0d9:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
1000e0dc:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
1000e0df:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
1000e0e2:	89 48 18             	mov    DWORD PTR [eax+0x18],ecx
1000e0e5:	89 48 1c             	mov    DWORD PTR [eax+0x1c],ecx
1000e0e8:	89 48 20             	mov    DWORD PTR [eax+0x20],ecx
1000e0eb:	c7 40 28 00 00 20 41 	mov    DWORD PTR [eax+0x28],0x41200000
1000e0f2:	89 08                	mov    DWORD PTR [eax],ecx
1000e0f4:	89 48 4c             	mov    DWORD PTR [eax+0x4c],ecx
1000e0f7:	89 48 50             	mov    DWORD PTR [eax+0x50],ecx
1000e0fa:	89 48 54             	mov    DWORD PTR [eax+0x54],ecx
1000e0fd:	89 48 58             	mov    DWORD PTR [eax+0x58],ecx
1000e100:	89 48 5c             	mov    DWORD PTR [eax+0x5c],ecx
1000e103:	89 48 6c             	mov    DWORD PTR [eax+0x6c],ecx
1000e106:	89 48 70             	mov    DWORD PTR [eax+0x70],ecx
1000e109:	89 48 74             	mov    DWORD PTR [eax+0x74],ecx
1000e10c:	89 88 84 00 00 00    	mov    DWORD PTR [eax+0x84],ecx
1000e112:	89 88 94 00 00 00    	mov    DWORD PTR [eax+0x94],ecx
1000e118:	c7 40 64 00 00 5c 42 	mov    DWORD PTR [eax+0x64],0x425c0000
1000e11f:	89 48 60             	mov    DWORD PTR [eax+0x60],ecx
1000e122:	89 88 dc 00 00 00    	mov    DWORD PTR [eax+0xdc],ecx
1000e128:	89 88 c4 00 00 00    	mov    DWORD PTR [eax+0xc4],ecx
1000e12e:	89 88 c8 00 00 00    	mov    DWORD PTR [eax+0xc8],ecx
1000e134:	89 88 cc 00 00 00    	mov    DWORD PTR [eax+0xcc],ecx
1000e13a:	89 88 d0 00 00 00    	mov    DWORD PTR [eax+0xd0],ecx
1000e140:	89 88 d4 00 00 00    	mov    DWORD PTR [eax+0xd4],ecx
1000e146:	c7 80 d8 00 00 00 00 	mov    DWORD PTR [eax+0xd8],0xc3160000
1000e14d:	00 16 c3 
1000e150:	89 88 9c 00 00 00    	mov    DWORD PTR [eax+0x9c],ecx
1000e156:	89 88 a0 00 00 00    	mov    DWORD PTR [eax+0xa0],ecx
1000e15c:	89 88 a4 00 00 00    	mov    DWORD PTR [eax+0xa4],ecx
1000e162:	89 88 a8 00 00 00    	mov    DWORD PTR [eax+0xa8],ecx
1000e168:	89 88 ac 00 00 00    	mov    DWORD PTR [eax+0xac],ecx
1000e16e:	89 88 b0 00 00 00    	mov    DWORD PTR [eax+0xb0],ecx
1000e174:	89 88 b4 00 00 00    	mov    DWORD PTR [eax+0xb4],ecx
1000e17a:	89 88 b8 00 00 00    	mov    DWORD PTR [eax+0xb8],ecx
1000e180:	89 88 bc 00 00 00    	mov    DWORD PTR [eax+0xbc],ecx
1000e186:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
1000e18c:	c3                   	ret
1000e18d:	90                   	nop
1000e18e:	90                   	nop
1000e18f:	90                   	nop
1000e190:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000e194:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000e198:	89 01                	mov    DWORD PTR [ecx],eax
1000e19a:	33 c0                	xor    eax,eax
1000e19c:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
1000e19f:	89 41 48             	mov    DWORD PTR [ecx+0x48],eax
1000e1a2:	c6 81 98 00 00 00 01 	mov    BYTE PTR [ecx+0x98],0x1
1000e1a9:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
1000e1ac:	c2 08 00             	ret    0x8
1000e1af:	90                   	nop
1000e1b0:	83 ec 58             	sub    esp,0x58
1000e1b3:	53                   	push   ebx
1000e1b4:	55                   	push   ebp
1000e1b5:	56                   	push   esi
1000e1b6:	8b f1                	mov    esi,ecx
1000e1b8:	33 db                	xor    ebx,ebx
1000e1ba:	57                   	push   edi
1000e1bb:	39 1e                	cmp    DWORD PTR [esi],ebx
1000e1bd:	75 0a                	jne    0x1000e1c9
1000e1bf:	33 c0                	xor    eax,eax
1000e1c1:	5f                   	pop    edi
1000e1c2:	5e                   	pop    esi
1000e1c3:	5d                   	pop    ebp
1000e1c4:	5b                   	pop    ebx
1000e1c5:	83 c4 58             	add    esp,0x58
1000e1c8:	c3                   	ret
1000e1c9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e1cc:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e1ce:	ff 10                	call   DWORD PTR [eax]
1000e1d0:	83 f8 04             	cmp    eax,0x4
1000e1d3:	74 4b                	je     0x1000e220
1000e1d5:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e1d8:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e1da:	ff 12                	call   DWORD PTR [edx]
1000e1dc:	83 f8 0a             	cmp    eax,0xa
1000e1df:	74 3f                	je     0x1000e220
1000e1e1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e1e4:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e1e6:	ff 10                	call   DWORD PTR [eax]
1000e1e8:	83 f8 0b             	cmp    eax,0xb
1000e1eb:	74 33                	je     0x1000e220
1000e1ed:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e1f0:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e1f2:	ff 12                	call   DWORD PTR [edx]
1000e1f4:	83 f8 07             	cmp    eax,0x7
1000e1f7:	74 27                	je     0x1000e220
1000e1f9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e1fc:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e1fe:	ff 50 5c             	call   DWORD PTR [eax+0x5c]
1000e201:	a8 80                	test   al,0x80
1000e203:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
1000e206:	74 0c                	je     0x1000e214
1000e208:	c7 46 64 00 00 f0 41 	mov    DWORD PTR [esi+0x64],0x41f00000
1000e20f:	89 5e 60             	mov    DWORD PTR [esi+0x60],ebx
1000e212:	eb 0f                	jmp    0x1000e223
1000e214:	c7 46 64 00 00 5c 42 	mov    DWORD PTR [esi+0x64],0x425c0000
1000e21b:	89 5e 60             	mov    DWORD PTR [esi+0x60],ebx
1000e21e:	eb 03                	jmp    0x1000e223
1000e220:	89 5e 4c             	mov    DWORD PTR [esi+0x4c],ebx
1000e223:	8b 86 dc 00 00 00    	mov    eax,DWORD PTR [esi+0xdc]
1000e229:	2b c3                	sub    eax,ebx
1000e22b:	0f 84 63 02 00 00    	je     0x1000e494
1000e231:	48                   	dec    eax
1000e232:	0f 84 0d 01 00 00    	je     0x1000e345
1000e238:	83 e8 02             	sub    eax,0x2
1000e23b:	0f 85 5a 02 00 00    	jne    0x1000e49b
1000e241:	8b 16                	mov    edx,DWORD PTR [esi]
1000e243:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000e248:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000e24c:	51                   	push   ecx
1000e24d:	52                   	push   edx
1000e24e:	ff 90 f0 02 00 00    	call   DWORD PTR [eax+0x2f0]
1000e254:	8b 16                	mov    edx,DWORD PTR [esi]
1000e256:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000e25b:	8d 4c 24 60          	lea    ecx,[esp+0x60]
1000e25f:	51                   	push   ecx
1000e260:	52                   	push   edx
1000e261:	ff 90 f4 02 00 00    	call   DWORD PTR [eax+0x2f4]
1000e267:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
1000e26b:	8b c4                	mov    eax,esp
1000e26d:	83 ec 0c             	sub    esp,0xc
1000e270:	89 08                	mov    DWORD PTR [eax],ecx
1000e272:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
1000e276:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e279:	8b 4c 24 7c          	mov    ecx,DWORD PTR [esp+0x7c]
1000e27d:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e280:	8b 94 24 80 00 00 00 	mov    edx,DWORD PTR [esp+0x80]
1000e287:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1000e28a:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
1000e28e:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
1000e292:	8b c4                	mov    eax,esp
1000e294:	89 08                	mov    DWORD PTR [eax],ecx
1000e296:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1000e29a:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e29d:	8d 54 24 5c          	lea    edx,[esp+0x5c]
1000e2a1:	52                   	push   edx
1000e2a2:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e2a5:	8b ce                	mov    ecx,esi
1000e2a7:	e8 64 0a 00 00       	call   0x1000ed10
1000e2ac:	8b c8                	mov    ecx,eax
1000e2ae:	6a 00                	push   0x0
1000e2b0:	83 ec 0c             	sub    esp,0xc
1000e2b3:	8b 39                	mov    edi,DWORD PTR [ecx]
1000e2b5:	8b d4                	mov    edx,esp
1000e2b7:	8b 59 04             	mov    ebx,DWORD PTR [ecx+0x4]
1000e2ba:	8b 69 08             	mov    ebp,DWORD PTR [ecx+0x8]
1000e2bd:	8b 08                	mov    ecx,DWORD PTR [eax]
1000e2bf:	89 0a                	mov    DWORD PTR [edx],ecx
1000e2c1:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1000e2c4:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000e2c7:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
1000e2ca:	8b ce                	mov    ecx,esi
1000e2cc:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
1000e2cf:	e8 fc 13 00 00       	call   0x1000f6d0
1000e2d4:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000e2d8:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000e2dc:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1000e2e0:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1000e2e4:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
1000e2e8:	83 ec 0c             	sub    esp,0xc
1000e2eb:	8b c4                	mov    eax,esp
1000e2ed:	83 ec 10             	sub    esp,0x10
1000e2f0:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
1000e2f4:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
1000e2f8:	89 38                	mov    DWORD PTR [eax],edi
1000e2fa:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
1000e2fe:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
1000e302:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
1000e306:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
1000e309:	8d 54 24 74          	lea    edx,[esp+0x74]
1000e30d:	8b cc                	mov    ecx,esp
1000e30f:	52                   	push   edx
1000e310:	89 68 08             	mov    DWORD PTR [eax+0x8],ebp
1000e313:	e8 98 01 00 00       	call   0x1000e4b0
1000e318:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
1000e31c:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
1000e320:	83 ec 0c             	sub    esp,0xc
1000e323:	8b c4                	mov    eax,esp
1000e325:	89 08                	mov    DWORD PTR [eax],ecx
1000e327:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
1000e32b:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e32e:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e331:	8b ce                	mov    ecx,esi
1000e333:	e8 88 08 00 00       	call   0x1000ebc0
1000e338:	b8 01 00 00 00       	mov    eax,0x1
1000e33d:	5f                   	pop    edi
1000e33e:	5e                   	pop    esi
1000e33f:	5d                   	pop    ebp
1000e340:	5b                   	pop    ebx
1000e341:	83 c4 58             	add    esp,0x58
1000e344:	c3                   	ret
1000e345:	8b 06                	mov    eax,DWORD PTR [esi]
1000e347:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e34d:	8d 54 24 34          	lea    edx,[esp+0x34]
1000e351:	52                   	push   edx
1000e352:	50                   	push   eax
1000e353:	ff 91 f0 02 00 00    	call   DWORD PTR [ecx+0x2f0]
1000e359:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000e35e:	83 c4 08             	add    esp,0x8
1000e361:	8d 54 24 18          	lea    edx,[esp+0x18]
1000e365:	52                   	push   edx
1000e366:	8d b8 f4 02 00 00    	lea    edi,[eax+0x2f4]
1000e36c:	ff 90 d8 02 00 00    	call   DWORD PTR [eax+0x2d8]
1000e372:	50                   	push   eax
1000e373:	ff 17                	call   DWORD PTR [edi]
1000e375:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1000e37a:	83 c4 08             	add    esp,0x8
1000e37d:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
1000e383:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e385:	ff 52 2c             	call   DWORD PTR [edx+0x2c]
1000e388:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1000e38d:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000e391:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
1000e397:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e399:	ff 52 28             	call   DWORD PTR [edx+0x28]
1000e39c:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1000e3a0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e3a6:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1000e3aa:	53                   	push   ebx
1000e3ab:	52                   	push   edx
1000e3ac:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1000e3b0:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
1000e3b7:	00 
1000e3b8:	52                   	push   edx
1000e3b9:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
1000e3c0:	00 
1000e3c1:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
1000e3c8:	00 
1000e3c9:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
1000e3d0:	00 
1000e3d1:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e3d3:	8d 54 24 24          	lea    edx,[esp+0x24]
1000e3d7:	52                   	push   edx
1000e3d8:	ff 90 00 01 00 00    	call   DWORD PTR [eax+0x100]
1000e3de:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1000e3e2:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1000e3e6:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1000e3ea:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
1000e3ed:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1000e3f1:	83 ec 10             	sub    esp,0x10
1000e3f4:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
1000e3f7:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
1000e3fa:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1000e3fe:	8b c4                	mov    eax,esp
1000e400:	89 56 1c             	mov    DWORD PTR [esi+0x1c],edx
1000e403:	83 ec 0c             	sub    esp,0xc
1000e406:	89 08                	mov    DWORD PTR [eax],ecx
1000e408:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
1000e40c:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e40f:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1000e413:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e416:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
1000e41a:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1000e41d:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
1000e421:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
1000e425:	8b c4                	mov    eax,esp
1000e427:	89 08                	mov    DWORD PTR [eax],ecx
1000e429:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
1000e42d:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e430:	8d 54 24 68          	lea    edx,[esp+0x68]
1000e434:	52                   	push   edx
1000e435:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e438:	8b ce                	mov    ecx,esi
1000e43a:	e8 d1 08 00 00       	call   0x1000ed10
1000e43f:	8b c8                	mov    ecx,eax
1000e441:	53                   	push   ebx
1000e442:	83 ec 0c             	sub    esp,0xc
1000e445:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e447:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
1000e44b:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1000e44e:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1000e452:	8b d4                	mov    edx,esp
1000e454:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
1000e457:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
1000e45b:	8b 08                	mov    ecx,DWORD PTR [eax]
1000e45d:	89 0a                	mov    DWORD PTR [edx],ecx
1000e45f:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1000e462:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000e465:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
1000e468:	8b ce                	mov    ecx,esi
1000e46a:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
1000e46d:	e8 5e 12 00 00       	call   0x1000f6d0
1000e472:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1000e476:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1000e47a:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1000e47e:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
1000e481:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1000e484:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1000e487:	b8 01 00 00 00       	mov    eax,0x1
1000e48c:	5f                   	pop    edi
1000e48d:	5e                   	pop    esi
1000e48e:	5d                   	pop    ebp
1000e48f:	5b                   	pop    ebx
1000e490:	83 c4 58             	add    esp,0x58
1000e493:	c3                   	ret
1000e494:	8b ce                	mov    ecx,esi
1000e496:	e8 35 00 00 00       	call   0x1000e4d0
1000e49b:	5f                   	pop    edi
1000e49c:	5e                   	pop    esi
1000e49d:	5d                   	pop    ebp
1000e49e:	b8 01 00 00 00       	mov    eax,0x1
1000e4a3:	5b                   	pop    ebx
1000e4a4:	83 c4 58             	add    esp,0x58
1000e4a7:	c3                   	ret
1000e4a8:	90                   	nop
1000e4a9:	90                   	nop
1000e4aa:	90                   	nop
1000e4ab:	90                   	nop
1000e4ac:	90                   	nop
1000e4ad:	90                   	nop
1000e4ae:	90                   	nop
1000e4af:	90                   	nop
1000e4b0:	8b c1                	mov    eax,ecx
1000e4b2:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1000e4b6:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e4b8:	89 10                	mov    DWORD PTR [eax],edx
1000e4ba:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1000e4bd:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e4c0:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
1000e4c3:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1000e4c6:	8b 49 0c             	mov    ecx,DWORD PTR [ecx+0xc]
1000e4c9:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1000e4cc:	c2 04 00             	ret    0x4
1000e4cf:	90                   	nop
1000e4d0:	83 ec 58             	sub    esp,0x58
1000e4d3:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1000e4d9:	8d 44 24 18          	lea    eax,[esp+0x18]
1000e4dd:	56                   	push   esi
1000e4de:	8b f1                	mov    esi,ecx
1000e4e0:	50                   	push   eax
1000e4e1:	8b 0e                	mov    ecx,DWORD PTR [esi]
1000e4e3:	51                   	push   ecx
1000e4e4:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
1000e4ea:	8b 0e                	mov    ecx,DWORD PTR [esi]
1000e4ec:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1000e4f2:	8d 44 24 54          	lea    eax,[esp+0x54]
1000e4f6:	50                   	push   eax
1000e4f7:	51                   	push   ecx
1000e4f8:	ff 92 f4 02 00 00    	call   DWORD PTR [edx+0x2f4]
1000e4fe:	83 c4 10             	add    esp,0x10
1000e501:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e507:	8d 54 24 10          	lea    edx,[esp+0x10]
1000e50b:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e50d:	52                   	push   edx
1000e50e:	8d 54 24 38          	lea    edx,[esp+0x38]
1000e512:	52                   	push   edx
1000e513:	8d 54 24 48          	lea    edx,[esp+0x48]
1000e517:	52                   	push   edx
1000e518:	8d 54 24 58          	lea    edx,[esp+0x58]
1000e51c:	52                   	push   edx
1000e51d:	ff 90 e4 00 00 00    	call   DWORD PTR [eax+0xe4]
1000e523:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1000e527:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1000e52b:	83 ec 0c             	sub    esp,0xc
1000e52e:	8b c4                	mov    eax,esp
1000e530:	83 ec 0c             	sub    esp,0xc
1000e533:	89 08                	mov    DWORD PTR [eax],ecx
1000e535:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1000e539:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000e53c:	8b d4                	mov    edx,esp
1000e53e:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000e541:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1000e545:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1000e549:	89 02                	mov    DWORD PTR [edx],eax
1000e54b:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1000e54f:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
1000e552:	8b ce                	mov    ecx,esi
1000e554:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
1000e557:	e8 94 02 00 00       	call   0x1000e7f0
1000e55c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e55f:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e561:	ff 52 28             	call   DWORD PTR [edx+0x28]
1000e564:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e567:	d9 5e 50             	fstp   DWORD PTR [esi+0x50]
1000e56a:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e56c:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
1000e56f:	d9 5e 54             	fstp   DWORD PTR [esi+0x54]
1000e572:	d9 46 6c             	fld    DWORD PTR [esi+0x6c]
1000e575:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000e57b:	df e0                	fnstsw ax
1000e57d:	f6 c4 40             	test   ah,0x40
1000e580:	0f 85 c8 01 00 00    	jne    0x1000e74e
1000e586:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e58c:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e58e:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1000e594:	d8 56 70             	fcom   DWORD PTR [esi+0x70]
1000e597:	df e0                	fnstsw ax
1000e599:	f6 c4 01             	test   ah,0x1
1000e59c:	0f 84 6a 01 00 00    	je     0x1000e70c
1000e5a2:	d8 6e 70             	fsubr  DWORD PTR [esi+0x70]
1000e5a5:	8a 86 98 00 00 00    	mov    al,BYTE PTR [esi+0x98]
1000e5ab:	84 c0                	test   al,al
1000e5ad:	d8 6e 6c             	fsubr  DWORD PTR [esi+0x6c]
1000e5b0:	0f 84 98 00 00 00    	je     0x1000e64e
1000e5b6:	d8 56 74             	fcom   DWORD PTR [esi+0x74]
1000e5b9:	df e0                	fnstsw ax
1000e5bb:	f6 c4 01             	test   ah,0x1
1000e5be:	74 4e                	je     0x1000e60e
1000e5c0:	d8 76 74             	fdiv   DWORD PTR [esi+0x74]
1000e5c3:	d9 46 78             	fld    DWORD PTR [esi+0x78]
1000e5c6:	d8 a6 88 00 00 00    	fsub   DWORD PTR [esi+0x88]
1000e5cc:	d8 c9                	fmul   st,st(1)
1000e5ce:	d8 46 50             	fadd   DWORD PTR [esi+0x50]
1000e5d1:	d9 5e 50             	fstp   DWORD PTR [esi+0x50]
1000e5d4:	d9 46 7c             	fld    DWORD PTR [esi+0x7c]
1000e5d7:	d8 a6 8c 00 00 00    	fsub   DWORD PTR [esi+0x8c]
1000e5dd:	d8 c9                	fmul   st,st(1)
1000e5df:	d8 46 54             	fadd   DWORD PTR [esi+0x54]
1000e5e2:	d9 5e 54             	fstp   DWORD PTR [esi+0x54]
1000e5e5:	d9 86 80 00 00 00    	fld    DWORD PTR [esi+0x80]
1000e5eb:	d8 a6 90 00 00 00    	fsub   DWORD PTR [esi+0x90]
1000e5f1:	d8 c9                	fmul   st,st(1)
1000e5f3:	d9 5e 58             	fstp   DWORD PTR [esi+0x58]
1000e5f6:	d9 86 84 00 00 00    	fld    DWORD PTR [esi+0x84]
1000e5fc:	d8 a6 94 00 00 00    	fsub   DWORD PTR [esi+0x94]
1000e602:	d8 c9                	fmul   st,st(1)
1000e604:	d9 5e 5c             	fstp   DWORD PTR [esi+0x5c]
1000e607:	dd d8                	fstp   st(0)
1000e609:	e9 12 01 00 00       	jmp    0x1000e720
1000e60e:	d8 66 74             	fsub   DWORD PTR [esi+0x74]
1000e611:	d9 46 6c             	fld    DWORD PTR [esi+0x6c]
1000e614:	d8 66 74             	fsub   DWORD PTR [esi+0x74]
1000e617:	de f9                	fdivp  st(1),st
1000e619:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1000e61f:	d9 c0                	fld    st(0)
1000e621:	d8 4e 78             	fmul   DWORD PTR [esi+0x78]
1000e624:	d8 46 50             	fadd   DWORD PTR [esi+0x50]
1000e627:	d9 5e 50             	fstp   DWORD PTR [esi+0x50]
1000e62a:	d9 c0                	fld    st(0)
1000e62c:	d8 4e 7c             	fmul   DWORD PTR [esi+0x7c]
1000e62f:	d8 46 54             	fadd   DWORD PTR [esi+0x54]
1000e632:	d9 5e 54             	fstp   DWORD PTR [esi+0x54]
1000e635:	d9 c0                	fld    st(0)
1000e637:	d8 8e 80 00 00 00    	fmul   DWORD PTR [esi+0x80]
1000e63d:	d9 5e 58             	fstp   DWORD PTR [esi+0x58]
1000e640:	d8 8e 84 00 00 00    	fmul   DWORD PTR [esi+0x84]
1000e646:	d9 5e 5c             	fstp   DWORD PTR [esi+0x5c]
1000e649:	e9 d2 00 00 00       	jmp    0x1000e720
1000e64e:	d8 76 6c             	fdiv   DWORD PTR [esi+0x6c]
1000e651:	d9 c0                	fld    st(0)
1000e653:	d8 4e 78             	fmul   DWORD PTR [esi+0x78]
1000e656:	d9 c1                	fld    st(1)
1000e658:	d8 4e 7c             	fmul   DWORD PTR [esi+0x7c]
1000e65b:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
1000e65f:	d9 c1                	fld    st(1)
1000e661:	d8 8e 80 00 00 00    	fmul   DWORD PTR [esi+0x80]
1000e667:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1000e66b:	d8 a6 88 00 00 00    	fsub   DWORD PTR [esi+0x88]
1000e671:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000e675:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1000e679:	d8 a6 8c 00 00 00    	fsub   DWORD PTR [esi+0x8c]
1000e67f:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
1000e683:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
1000e687:	d8 a6 90 00 00 00    	fsub   DWORD PTR [esi+0x90]
1000e68d:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1000e691:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1000e695:	d8 46 50             	fadd   DWORD PTR [esi+0x50]
1000e698:	d9 5e 50             	fstp   DWORD PTR [esi+0x50]
1000e69b:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000e69f:	d8 46 54             	fadd   DWORD PTR [esi+0x54]
1000e6a2:	d9 5e 54             	fstp   DWORD PTR [esi+0x54]
1000e6a5:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000e6a9:	d8 46 58             	fadd   DWORD PTR [esi+0x58]
1000e6ac:	d9 5e 58             	fstp   DWORD PTR [esi+0x58]
1000e6af:	d9 86 84 00 00 00    	fld    DWORD PTR [esi+0x84]
1000e6b5:	d8 a6 94 00 00 00    	fsub   DWORD PTR [esi+0x94]
1000e6bb:	d8 c9                	fmul   st,st(1)
1000e6bd:	d9 5e 5c             	fstp   DWORD PTR [esi+0x5c]
1000e6c0:	dd d8                	fstp   st(0)
1000e6c2:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1000e6c6:	d8 86 88 00 00 00    	fadd   DWORD PTR [esi+0x88]
1000e6cc:	d9 9e 88 00 00 00    	fstp   DWORD PTR [esi+0x88]
1000e6d2:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000e6d6:	d8 86 8c 00 00 00    	fadd   DWORD PTR [esi+0x8c]
1000e6dc:	d9 9e 8c 00 00 00    	fstp   DWORD PTR [esi+0x8c]
1000e6e2:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000e6e6:	d8 86 90 00 00 00    	fadd   DWORD PTR [esi+0x90]
1000e6ec:	d9 9e 90 00 00 00    	fstp   DWORD PTR [esi+0x90]
1000e6f2:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e6f5:	8b 56 50             	mov    edx,DWORD PTR [esi+0x50]
1000e6f8:	52                   	push   edx
1000e6f9:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e6fb:	ff 50 30             	call   DWORD PTR [eax+0x30]
1000e6fe:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e701:	8b 56 54             	mov    edx,DWORD PTR [esi+0x54]
1000e704:	52                   	push   edx
1000e705:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e707:	ff 50 34             	call   DWORD PTR [eax+0x34]
1000e70a:	eb 14                	jmp    0x1000e720
1000e70c:	33 c0                	xor    eax,eax
1000e70e:	c6 86 98 00 00 00 01 	mov    BYTE PTR [esi+0x98],0x1
1000e715:	dd d8                	fstp   st(0)
1000e717:	89 46 6c             	mov    DWORD PTR [esi+0x6c],eax
1000e71a:	89 46 5c             	mov    DWORD PTR [esi+0x5c],eax
1000e71d:	89 46 58             	mov    DWORD PTR [esi+0x58],eax
1000e720:	d9 46 50             	fld    DWORD PTR [esi+0x50]
1000e723:	d8 1d a4 85 0b 10    	fcomp  DWORD PTR ds:0x100b85a4
1000e729:	df e0                	fnstsw ax
1000e72b:	f6 c4 41             	test   ah,0x41
1000e72e:	75 07                	jne    0x1000e737
1000e730:	c7 46 50 d8 d3 c6 3f 	mov    DWORD PTR [esi+0x50],0x3fc6d3d8
1000e737:	d9 46 50             	fld    DWORD PTR [esi+0x50]
1000e73a:	d8 1d a0 85 0b 10    	fcomp  DWORD PTR ds:0x100b85a0
1000e740:	df e0                	fnstsw ax
1000e742:	f6 c4 01             	test   ah,0x1
1000e745:	74 07                	je     0x1000e74e
1000e747:	c7 46 50 d8 d3 c6 bf 	mov    DWORD PTR [esi+0x50],0xbfc6d3d8
1000e74e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e751:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e753:	ff 10                	call   DWORD PTR [eax]
1000e755:	83 f8 03             	cmp    eax,0x3
1000e758:	75 07                	jne    0x1000e761
1000e75a:	8b ce                	mov    ecx,esi
1000e75c:	e8 8f 01 00 00       	call   0x1000e8f0
1000e761:	d9 46 5c             	fld    DWORD PTR [esi+0x5c]
1000e764:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000e76a:	df e0                	fnstsw ax
1000e76c:	f6 c4 40             	test   ah,0x40
1000e76f:	75 35                	jne    0x1000e7a6
1000e771:	d9 46 5c             	fld    DWORD PTR [esi+0x5c]
1000e774:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000e778:	d8 c9                	fmul   st,st(1)
1000e77a:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000e77e:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000e782:	d8 c9                	fmul   st,st(1)
1000e784:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
1000e788:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1000e78c:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000e790:	d8 46 08             	fadd   DWORD PTR [esi+0x8]
1000e793:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
1000e796:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1000e79a:	d8 46 0c             	fadd   DWORD PTR [esi+0xc]
1000e79d:	d9 5e 0c             	fstp   DWORD PTR [esi+0xc]
1000e7a0:	d8 46 10             	fadd   DWORD PTR [esi+0x10]
1000e7a3:	d9 5e 10             	fstp   DWORD PTR [esi+0x10]
1000e7a6:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
1000e7a9:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e7af:	50                   	push   eax
1000e7b0:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
1000e7b3:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e7b5:	50                   	push   eax
1000e7b6:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
1000e7b9:	83 c6 14             	add    esi,0x14
1000e7bc:	50                   	push   eax
1000e7bd:	56                   	push   esi
1000e7be:	ff 92 00 01 00 00    	call   DWORD PTR [edx+0x100]
1000e7c4:	5e                   	pop    esi
1000e7c5:	83 c4 58             	add    esp,0x58
1000e7c8:	c3                   	ret
1000e7c9:	90                   	nop
1000e7ca:	90                   	nop
1000e7cb:	90                   	nop
1000e7cc:	90                   	nop
1000e7cd:	90                   	nop
1000e7ce:	90                   	nop
1000e7cf:	90                   	nop
1000e7d0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000e7d4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000e7d8:	89 41 60             	mov    DWORD PTR [ecx+0x60],eax
1000e7db:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1000e7df:	89 51 64             	mov    DWORD PTR [ecx+0x64],edx
1000e7e2:	89 41 68             	mov    DWORD PTR [ecx+0x68],eax
1000e7e5:	c2 0c 00             	ret    0xc
1000e7e8:	90                   	nop
1000e7e9:	90                   	nop
1000e7ea:	90                   	nop
1000e7eb:	90                   	nop
1000e7ec:	90                   	nop
1000e7ed:	90                   	nop
1000e7ee:	90                   	nop
1000e7ef:	90                   	nop
1000e7f0:	83 ec 10             	sub    esp,0x10
1000e7f3:	56                   	push   esi
1000e7f4:	8b f1                	mov    esi,ecx
1000e7f6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e7fc:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e7fe:	ff 90 dc 00 00 00    	call   DWORD PTR [eax+0xdc]
1000e804:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000e808:	d9 46 60             	fld    DWORD PTR [esi+0x60]
1000e80b:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000e80f:	d8 c9                	fmul   st,st(1)
1000e811:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1000e818:	00 
1000e819:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
1000e81d:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
1000e821:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000e825:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
1000e829:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000e82d:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000e831:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
1000e835:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000e839:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
1000e83d:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000e841:	d8 46 64             	fadd   DWORD PTR [esi+0x64]
1000e844:	d9 46 0c             	fld    DWORD PTR [esi+0xc]
1000e847:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1000e84d:	d9 c1                	fld    st(1)
1000e84f:	de d9                	fcompp
1000e851:	df e0                	fnstsw ax
1000e853:	f6 c4 41             	test   ah,0x41
1000e856:	75 75                	jne    0x1000e8cd
1000e858:	d9 46 0c             	fld    DWORD PTR [esi+0xc]
1000e85b:	8b 0d 44 45 0d 10    	mov    ecx,DWORD PTR ds:0x100d4544
1000e861:	d9 c1                	fld    st(1)
1000e863:	d8 e1                	fsub   st,st(1)
1000e865:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1000e869:	d8 54 24 18          	fcom   DWORD PTR [esp+0x18]
1000e86d:	df e0                	fnstsw ax
1000e86f:	f6 c4 41             	test   ah,0x41
1000e872:	75 0a                	jne    0x1000e87e
1000e874:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1000e878:	de c1                	faddp  st(1),st
1000e87a:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000e87e:	d8 35 48 45 0d 10    	fdiv   DWORD PTR ds:0x100d4548
1000e884:	d8 15 4c 45 0d 10    	fcom   DWORD PTR ds:0x100d454c
1000e88a:	df e0                	fnstsw ax
1000e88c:	f6 c4 01             	test   ah,0x1
1000e88f:	74 08                	je     0x1000e899
1000e891:	dd d8                	fstp   st(0)
1000e893:	d9 05 4c 45 0d 10    	fld    DWORD PTR ds:0x100d454c
1000e899:	d8 4c 24 04          	fmul   DWORD PTR [esp+0x4]
1000e89d:	d8 c1                	fadd   st,st(1)
1000e89f:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1000e8a3:	dd d8                	fstp   st(0)
1000e8a5:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000e8a9:	d8 e1                	fsub   st,st(1)
1000e8ab:	d9 e1                	fabs
1000e8ad:	dc 1d b8 84 0b 10    	fcomp  QWORD PTR ds:0x100b84b8
1000e8b3:	df e0                	fnstsw ax
1000e8b5:	f6 c4 41             	test   ah,0x41
1000e8b8:	75 13                	jne    0x1000e8cd
1000e8ba:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000e8be:	d8 d9                	fcomp  st(1)
1000e8c0:	df e0                	fnstsw ax
1000e8c2:	f6 c4 41             	test   ah,0x41
1000e8c5:	74 06                	je     0x1000e8cd
1000e8c7:	dd d8                	fstp   st(0)
1000e8c9:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000e8cd:	d9 5e 0c             	fstp   DWORD PTR [esi+0xc]
1000e8d0:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1000e8d4:	d9 5e 10             	fstp   DWORD PTR [esi+0x10]
1000e8d7:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
1000e8da:	5e                   	pop    esi
1000e8db:	83 c4 10             	add    esp,0x10
1000e8de:	c2 18 00             	ret    0x18
1000e8e1:	90                   	nop
1000e8e2:	90                   	nop
1000e8e3:	90                   	nop
1000e8e4:	90                   	nop
1000e8e5:	90                   	nop
1000e8e6:	90                   	nop
1000e8e7:	90                   	nop
1000e8e8:	90                   	nop
1000e8e9:	90                   	nop
1000e8ea:	90                   	nop
1000e8eb:	90                   	nop
1000e8ec:	90                   	nop
1000e8ed:	90                   	nop
1000e8ee:	90                   	nop
1000e8ef:	90                   	nop
1000e8f0:	83 ec 08             	sub    esp,0x8
1000e8f3:	56                   	push   esi
1000e8f4:	8b f1                	mov    esi,ecx
1000e8f6:	d9 46 6c             	fld    DWORD PTR [esi+0x6c]
1000e8f9:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000e8ff:	df e0                	fnstsw ax
1000e901:	f6 c4 40             	test   ah,0x40
1000e904:	0f 84 2b 01 00 00    	je     0x1000ea35
1000e90a:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
1000e90d:	d9 05 b8 85 0b 10    	fld    DWORD PTR ds:0x100b85b8
1000e913:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1000e917:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1000e91a:	d9 54 24 04          	fst    DWORD PTR [esp+0x4]
1000e91e:	a8 20                	test   al,0x20
1000e920:	74 14                	je     0x1000e936
1000e922:	d9 46 58             	fld    DWORD PTR [esi+0x58]
1000e925:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000e92b:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000e92f:	df e0                	fnstsw ax
1000e931:	f6 c4 01             	test   ah,0x1
1000e934:	eb 1a                	jmp    0x1000e950
1000e936:	a8 40                	test   al,0x40
1000e938:	74 14                	je     0x1000e94e
1000e93a:	d9 46 58             	fld    DWORD PTR [esi+0x58]
1000e93d:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000e943:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000e947:	df e0                	fnstsw ax
1000e949:	f6 c4 41             	test   ah,0x41
1000e94c:	eb 02                	jmp    0x1000e950
1000e94e:	dd d8                	fstp   st(0)
1000e950:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000e954:	d9 e1                	fabs
1000e956:	dc 1d b0 85 0b 10    	fcomp  QWORD PTR ds:0x100b85b0
1000e95c:	df e0                	fnstsw ax
1000e95e:	f6 c4 01             	test   ah,0x1
1000e961:	74 08                	je     0x1000e96b
1000e963:	c7 44 24 04 cd cc cc 	mov    DWORD PTR [esp+0x4],0x3dcccccd
1000e96a:	3d 
1000e96b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000e971:	8b 11                	mov    edx,DWORD PTR [ecx]
1000e973:	ff 92 dc 00 00 00    	call   DWORD PTR [edx+0xdc]
1000e979:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1000e97c:	d8 4c 24 04          	fmul   DWORD PTR [esp+0x4]
1000e980:	a8 40                	test   al,0x40
1000e982:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000e986:	74 29                	je     0x1000e9b1
1000e988:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000e98c:	d8 64 24 04          	fsub   DWORD PTR [esp+0x4]
1000e990:	d8 15 ac 85 0b 10    	fcom   DWORD PTR ds:0x100b85ac
1000e996:	df e0                	fnstsw ax
1000e998:	f6 c4 01             	test   ah,0x1
1000e99b:	0f 84 91 00 00 00    	je     0x1000ea32
1000e9a1:	dd d8                	fstp   st(0)
1000e9a3:	d9 05 ac 85 0b 10    	fld    DWORD PTR ds:0x100b85ac
1000e9a9:	d9 5e 58             	fstp   DWORD PTR [esi+0x58]
1000e9ac:	5e                   	pop    esi
1000e9ad:	83 c4 08             	add    esp,0x8
1000e9b0:	c3                   	ret
1000e9b1:	a8 20                	test   al,0x20
1000e9b3:	74 25                	je     0x1000e9da
1000e9b5:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1000e9b9:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
1000e9bd:	d8 15 a8 85 0b 10    	fcom   DWORD PTR ds:0x100b85a8
1000e9c3:	df e0                	fnstsw ax
1000e9c5:	f6 c4 41             	test   ah,0x41
1000e9c8:	75 68                	jne    0x1000ea32
1000e9ca:	dd d8                	fstp   st(0)
1000e9cc:	d9 05 a8 85 0b 10    	fld    DWORD PTR ds:0x100b85a8
1000e9d2:	d9 5e 58             	fstp   DWORD PTR [esi+0x58]
1000e9d5:	5e                   	pop    esi
1000e9d6:	83 c4 08             	add    esp,0x8
1000e9d9:	c3                   	ret
1000e9da:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000e9de:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000e9e4:	df e0                	fnstsw ax
1000e9e6:	f6 c4 40             	test   ah,0x40
1000e9e9:	75 47                	jne    0x1000ea32
1000e9eb:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000e9f1:	df e0                	fnstsw ax
1000e9f3:	f6 c4 01             	test   ah,0x1
1000e9f6:	74 21                	je     0x1000ea19
1000e9f8:	d8 44 24 04          	fadd   DWORD PTR [esp+0x4]
1000e9fc:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000ea02:	df e0                	fnstsw ax
1000ea04:	f6 c4 41             	test   ah,0x41
1000ea07:	75 29                	jne    0x1000ea32
1000ea09:	dd d8                	fstp   st(0)
1000ea0b:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1000ea11:	d9 5e 58             	fstp   DWORD PTR [esi+0x58]
1000ea14:	5e                   	pop    esi
1000ea15:	83 c4 08             	add    esp,0x8
1000ea18:	c3                   	ret
1000ea19:	d8 64 24 04          	fsub   DWORD PTR [esp+0x4]
1000ea1d:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000ea23:	df e0                	fnstsw ax
1000ea25:	f6 c4 01             	test   ah,0x1
1000ea28:	74 08                	je     0x1000ea32
1000ea2a:	dd d8                	fstp   st(0)
1000ea2c:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1000ea32:	d9 5e 58             	fstp   DWORD PTR [esi+0x58]
1000ea35:	5e                   	pop    esi
1000ea36:	83 c4 08             	add    esp,0x8
1000ea39:	c3                   	ret
1000ea3a:	90                   	nop
1000ea3b:	90                   	nop
1000ea3c:	90                   	nop
1000ea3d:	90                   	nop
1000ea3e:	90                   	nop
1000ea3f:	90                   	nop
1000ea40:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1000ea45:	83 ec 0c             	sub    esp,0xc
1000ea48:	53                   	push   ebx
1000ea49:	56                   	push   esi
1000ea4a:	8b f1                	mov    esi,ecx
1000ea4c:	33 db                	xor    ebx,ebx
1000ea4e:	39 98 14 82 01 00    	cmp    DWORD PTR [eax+0x18214],ebx
1000ea54:	75 04                	jne    0x1000ea5a
1000ea56:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
1000ea5a:	d9 46 6c             	fld    DWORD PTR [esi+0x6c]
1000ea5d:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000ea63:	df e0                	fnstsw ax
1000ea65:	f6 c4 40             	test   ah,0x40
1000ea68:	75 12                	jne    0x1000ea7c
1000ea6a:	38 9e 98 00 00 00    	cmp    BYTE PTR [esi+0x98],bl
1000ea70:	74 0a                	je     0x1000ea7c
1000ea72:	38 5c 24 28          	cmp    BYTE PTR [esp+0x28],bl
1000ea76:	0f 84 30 01 00 00    	je     0x1000ebac
1000ea7c:	d9 46 6c             	fld    DWORD PTR [esi+0x6c]
1000ea7f:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000ea85:	df e0                	fnstsw ax
1000ea87:	f6 c4 40             	test   ah,0x40
1000ea8a:	75 50                	jne    0x1000eadc
1000ea8c:	38 5c 24 24          	cmp    BYTE PTR [esp+0x24],bl
1000ea90:	74 4a                	je     0x1000eadc
1000ea92:	38 5c 24 28          	cmp    BYTE PTR [esp+0x28],bl
1000ea96:	74 24                	je     0x1000eabc
1000ea98:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000ea9b:	8b 11                	mov    edx,DWORD PTR [ecx]
1000ea9d:	ff 52 28             	call   DWORD PTR [edx+0x28]
1000eaa0:	d8 6e 50             	fsubr  DWORD PTR [esi+0x50]
1000eaa3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000eaa6:	d9 9e 88 00 00 00    	fstp   DWORD PTR [esi+0x88]
1000eaac:	8b 01                	mov    eax,DWORD PTR [ecx]
1000eaae:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
1000eab1:	d8 6e 54             	fsubr  DWORD PTR [esi+0x54]
1000eab4:	d9 9e 8c 00 00 00    	fstp   DWORD PTR [esi+0x8c]
1000eaba:	eb 0c                	jmp    0x1000eac8
1000eabc:	89 9e 88 00 00 00    	mov    DWORD PTR [esi+0x88],ebx
1000eac2:	89 9e 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],ebx
1000eac8:	8b 4e 58             	mov    ecx,DWORD PTR [esi+0x58]
1000eacb:	8b 56 5c             	mov    edx,DWORD PTR [esi+0x5c]
1000eace:	89 8e 90 00 00 00    	mov    DWORD PTR [esi+0x90],ecx
1000ead4:	89 96 94 00 00 00    	mov    DWORD PTR [esi+0x94],edx
1000eada:	eb 18                	jmp    0x1000eaf4
1000eadc:	89 9e 88 00 00 00    	mov    DWORD PTR [esi+0x88],ebx
1000eae2:	89 9e 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],ebx
1000eae8:	89 9e 90 00 00 00    	mov    DWORD PTR [esi+0x90],ebx
1000eaee:	89 9e 94 00 00 00    	mov    DWORD PTR [esi+0x94],ebx
1000eaf4:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1000eaf8:	89 46 6c             	mov    DWORD PTR [esi+0x6c],eax
1000eafb:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000eb01:	8b 11                	mov    edx,DWORD PTR [ecx]
1000eb03:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1000eb09:	d8 46 6c             	fadd   DWORD PTR [esi+0x6c]
1000eb0c:	8a 4c 24 28          	mov    cl,BYTE PTR [esp+0x28]
1000eb10:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1000eb14:	3a cb                	cmp    cl,bl
1000eb16:	d9 5e 70             	fstp   DWORD PTR [esi+0x70]
1000eb19:	74 38                	je     0x1000eb53
1000eb1b:	d9 00                	fld    DWORD PTR [eax]
1000eb1d:	d8 86 88 00 00 00    	fadd   DWORD PTR [esi+0x88]
1000eb23:	d9 86 8c 00 00 00    	fld    DWORD PTR [esi+0x8c]
1000eb29:	d8 40 04             	fadd   DWORD PTR [eax+0x4]
1000eb2c:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1000eb30:	d9 86 90 00 00 00    	fld    DWORD PTR [esi+0x90]
1000eb36:	d8 40 08             	fadd   DWORD PTR [eax+0x8]
1000eb39:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1000eb3d:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
1000eb40:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000eb44:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1000eb48:	d9 5e 78             	fstp   DWORD PTR [esi+0x78]
1000eb4b:	89 96 80 00 00 00    	mov    DWORD PTR [esi+0x80],edx
1000eb51:	eb 23                	jmp    0x1000eb76
1000eb53:	8b 10                	mov    edx,DWORD PTR [eax]
1000eb55:	89 56 78             	mov    DWORD PTR [esi+0x78],edx
1000eb58:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000eb5b:	89 56 7c             	mov    DWORD PTR [esi+0x7c],edx
1000eb5e:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
1000eb61:	89 96 80 00 00 00    	mov    DWORD PTR [esi+0x80],edx
1000eb67:	d9 86 90 00 00 00    	fld    DWORD PTR [esi+0x90]
1000eb6d:	d8 40 08             	fadd   DWORD PTR [eax+0x8]
1000eb70:	d9 9e 80 00 00 00    	fstp   DWORD PTR [esi+0x80]
1000eb76:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1000eb7a:	d8 86 94 00 00 00    	fadd   DWORD PTR [esi+0x94]
1000eb80:	d9 9e 84 00 00 00    	fstp   DWORD PTR [esi+0x84]
1000eb86:	d9 46 6c             	fld    DWORD PTR [esi+0x6c]
1000eb89:	d8 0d c8 83 0b 10    	fmul   DWORD PTR ds:0x100b83c8
1000eb8f:	d9 56 74             	fst    DWORD PTR [esi+0x74]
1000eb92:	d8 1d f8 84 0b 10    	fcomp  DWORD PTR ds:0x100b84f8
1000eb98:	df e0                	fnstsw ax
1000eb9a:	f6 c4 41             	test   ah,0x41
1000eb9d:	75 07                	jne    0x1000eba6
1000eb9f:	c7 46 74 cd cc cc 3e 	mov    DWORD PTR [esi+0x74],0x3ecccccd
1000eba6:	88 8e 98 00 00 00    	mov    BYTE PTR [esi+0x98],cl
1000ebac:	5e                   	pop    esi
1000ebad:	5b                   	pop    ebx
1000ebae:	83 c4 0c             	add    esp,0xc
1000ebb1:	c2 14 00             	ret    0x14
1000ebb4:	90                   	nop
1000ebb5:	90                   	nop
1000ebb6:	90                   	nop
1000ebb7:	90                   	nop
1000ebb8:	90                   	nop
1000ebb9:	90                   	nop
1000ebba:	90                   	nop
1000ebbb:	90                   	nop
1000ebbc:	90                   	nop
1000ebbd:	90                   	nop
1000ebbe:	90                   	nop
1000ebbf:	90                   	nop
1000ebc0:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000ebc5:	83 ec 34             	sub    esp,0x34
1000ebc8:	85 c0                	test   eax,eax
1000ebca:	56                   	push   esi
1000ebcb:	0f 84 2c 01 00 00    	je     0x1000ecfd
1000ebd1:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
1000ebd5:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
1000ebd9:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1000ebdd:	8d 71 14             	lea    esi,[ecx+0x14]
1000ebe0:	89 06                	mov    DWORD PTR [esi],eax
1000ebe2:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
1000ebe6:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
1000ebe9:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
1000ebed:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000ebf0:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1000ebf3:	d8 61 08             	fsub   DWORD PTR [ecx+0x8]
1000ebf6:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
1000ebfa:	d8 61 10             	fsub   DWORD PTR [ecx+0x10]
1000ebfd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000ec03:	8d 54 24 04          	lea    edx,[esp+0x4]
1000ec07:	d9 f3                	fpatan
1000ec09:	8b 01                	mov    eax,DWORD PTR [ecx]
1000ec0b:	52                   	push   edx
1000ec0c:	8d 54 24 20          	lea    edx,[esp+0x20]
1000ec10:	52                   	push   edx
1000ec11:	8d 54 24 50          	lea    edx,[esp+0x50]
1000ec15:	52                   	push   edx
1000ec16:	56                   	push   esi
1000ec17:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000ec1b:	ff 90 e4 00 00 00    	call   DWORD PTR [eax+0xe4]
1000ec21:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1000ec25:	d8 64 24 58          	fsub   DWORD PTR [esp+0x58]
1000ec29:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
1000ec2d:	d8 64 24 5c          	fsub   DWORD PTR [esp+0x5c]
1000ec31:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
1000ec35:	d8 64 24 60          	fsub   DWORD PTR [esp+0x60]
1000ec39:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
1000ec3d:	8b 06                	mov    eax,DWORD PTR [esi]
1000ec3f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000ec42:	d8 c9                	fmul   st,st(1)
1000ec44:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
1000ec48:	d8 cc                	fmul   st,st(4)
1000ec4a:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1000ec4d:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1000ec51:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1000ec54:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
1000ec58:	de c1                	faddp  st(1),st
1000ec5a:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
1000ec5e:	d8 cb                	fmul   st,st(3)
1000ec60:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000ec66:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1000ec6a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1000ec6e:	6a 00                	push   0x0
1000ec70:	de c1                	faddp  st(1),st
1000ec72:	50                   	push   eax
1000ec73:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
1000ec77:	8b 11                	mov    edx,DWORD PTR [ecx]
1000ec79:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
1000ec7d:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000ec81:	d8 c9                	fmul   st,st(1)
1000ec83:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000ec87:	d8 cb                	fmul   st,st(3)
1000ec89:	de c1                	faddp  st(1),st
1000ec8b:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000ec8f:	d8 cc                	fmul   st,st(4)
1000ec91:	de c1                	faddp  st(1),st
1000ec93:	dd db                	fstp   st(3)
1000ec95:	dd d8                	fstp   st(0)
1000ec97:	dd d8                	fstp   st(0)
1000ec99:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
1000ec9d:	d9 c9                	fxch   st(1)
1000ec9f:	d9 f3                	fpatan
1000eca1:	d9 e0                	fchs
1000eca3:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1000eca7:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1000ecab:	50                   	push   eax
1000ecac:	56                   	push   esi
1000ecad:	ff 92 00 01 00 00    	call   DWORD PTR [edx+0x100]
1000ecb3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000ecb9:	8d 44 24 04          	lea    eax,[esp+0x4]
1000ecbd:	50                   	push   eax
1000ecbe:	8b 11                	mov    edx,DWORD PTR [ecx]
1000ecc0:	8d 44 24 20          	lea    eax,[esp+0x20]
1000ecc4:	50                   	push   eax
1000ecc5:	8d 44 24 50          	lea    eax,[esp+0x50]
1000ecc9:	50                   	push   eax
1000ecca:	56                   	push   esi
1000eccb:	ff 92 e4 00 00 00    	call   DWORD PTR [edx+0xe4]
1000ecd1:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
1000ecd5:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000ecdb:	df e0                	fnstsw ax
1000ecdd:	f6 c4 01             	test   ah,0x1
1000ece0:	74 1b                	je     0x1000ecfd
1000ece2:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1000ece6:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1000ecea:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1000ecee:	89 0e                	mov    DWORD PTR [esi],ecx
1000ecf0:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
1000ecf4:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
1000ecf7:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000ecfa:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
1000ecfd:	5e                   	pop    esi
1000ecfe:	83 c4 34             	add    esp,0x34
1000ed01:	c2 28 00             	ret    0x28
1000ed04:	90                   	nop
1000ed05:	90                   	nop
1000ed06:	90                   	nop
1000ed07:	90                   	nop
1000ed08:	90                   	nop
1000ed09:	90                   	nop
1000ed0a:	90                   	nop
1000ed0b:	90                   	nop
1000ed0c:	90                   	nop
1000ed0d:	90                   	nop
1000ed0e:	90                   	nop
1000ed0f:	90                   	nop
1000ed10:	81 ec c4 00 00 00    	sub    esp,0xc4
1000ed16:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000ed1b:	56                   	push   esi
1000ed1c:	57                   	push   edi
1000ed1d:	33 ff                	xor    edi,edi
1000ed1f:	3b c7                	cmp    eax,edi
1000ed21:	8b f1                	mov    esi,ecx
1000ed23:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1000ed2a:	00 
1000ed2b:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1000ed32:	00 
1000ed33:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1000ed3a:	00 
1000ed3b:	0f 84 4b 04 00 00    	je     0x1000f18c
1000ed41:	39 3e                	cmp    DWORD PTR [esi],edi
1000ed43:	0f 84 43 04 00 00    	je     0x1000f18c
1000ed49:	d9 86 9c 00 00 00    	fld    DWORD PTR [esi+0x9c]
1000ed4f:	d8 9c 24 d4 00 00 00 	fcomp  DWORD PTR [esp+0xd4]
1000ed56:	df e0                	fnstsw ax
1000ed58:	f6 c4 40             	test   ah,0x40
1000ed5b:	0f 84 a6 00 00 00    	je     0x1000ee07
1000ed61:	d9 86 a0 00 00 00    	fld    DWORD PTR [esi+0xa0]
1000ed67:	d8 9c 24 d8 00 00 00 	fcomp  DWORD PTR [esp+0xd8]
1000ed6e:	df e0                	fnstsw ax
1000ed70:	f6 c4 40             	test   ah,0x40
1000ed73:	0f 84 8e 00 00 00    	je     0x1000ee07
1000ed79:	d9 86 a4 00 00 00    	fld    DWORD PTR [esi+0xa4]
1000ed7f:	d8 9c 24 dc 00 00 00 	fcomp  DWORD PTR [esp+0xdc]
1000ed86:	df e0                	fnstsw ax
1000ed88:	f6 c4 40             	test   ah,0x40
1000ed8b:	74 7a                	je     0x1000ee07
1000ed8d:	d9 84 24 e0 00 00 00 	fld    DWORD PTR [esp+0xe0]
1000ed94:	d8 9e a8 00 00 00    	fcomp  DWORD PTR [esi+0xa8]
1000ed9a:	df e0                	fnstsw ax
1000ed9c:	f6 c4 40             	test   ah,0x40
1000ed9f:	74 66                	je     0x1000ee07
1000eda1:	d9 84 24 e4 00 00 00 	fld    DWORD PTR [esp+0xe4]
1000eda8:	d8 9e ac 00 00 00    	fcomp  DWORD PTR [esi+0xac]
1000edae:	df e0                	fnstsw ax
1000edb0:	f6 c4 40             	test   ah,0x40
1000edb3:	74 52                	je     0x1000ee07
1000edb5:	d9 84 24 e8 00 00 00 	fld    DWORD PTR [esp+0xe8]
1000edbc:	d8 9e b0 00 00 00    	fcomp  DWORD PTR [esi+0xb0]
1000edc2:	df e0                	fnstsw ax
1000edc4:	f6 c4 40             	test   ah,0x40
1000edc7:	74 3e                	je     0x1000ee07
1000edc9:	d9 84 24 ec 00 00 00 	fld    DWORD PTR [esp+0xec]
1000edd0:	d8 9e b4 00 00 00    	fcomp  DWORD PTR [esi+0xb4]
1000edd6:	df e0                	fnstsw ax
1000edd8:	f6 c4 40             	test   ah,0x40
1000eddb:	74 2a                	je     0x1000ee07
1000eddd:	8b 84 24 d0 00 00 00 	mov    eax,DWORD PTR [esp+0xd0]
1000ede4:	81 c6 b8 00 00 00    	add    esi,0xb8
1000edea:	8b c8                	mov    ecx,eax
1000edec:	5f                   	pop    edi
1000eded:	8b 16                	mov    edx,DWORD PTR [esi]
1000edef:	89 11                	mov    DWORD PTR [ecx],edx
1000edf1:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000edf4:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
1000edf7:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1000edfa:	5e                   	pop    esi
1000edfb:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
1000edfe:	81 c4 c4 00 00 00    	add    esp,0xc4
1000ee04:	c2 20 00             	ret    0x20
1000ee07:	8b 84 24 d4 00 00 00 	mov    eax,DWORD PTR [esp+0xd4]
1000ee0e:	8b 8c 24 d8 00 00 00 	mov    ecx,DWORD PTR [esp+0xd8]
1000ee15:	8b 94 24 dc 00 00 00 	mov    edx,DWORD PTR [esp+0xdc]
1000ee1c:	89 86 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],eax
1000ee22:	8b 84 24 e0 00 00 00 	mov    eax,DWORD PTR [esp+0xe0]
1000ee29:	89 8e a0 00 00 00    	mov    DWORD PTR [esi+0xa0],ecx
1000ee2f:	8b 8c 24 e4 00 00 00 	mov    ecx,DWORD PTR [esp+0xe4]
1000ee36:	89 96 a4 00 00 00    	mov    DWORD PTR [esi+0xa4],edx
1000ee3c:	8b 94 24 e8 00 00 00 	mov    edx,DWORD PTR [esp+0xe8]
1000ee43:	89 86 a8 00 00 00    	mov    DWORD PTR [esi+0xa8],eax
1000ee49:	8b 84 24 ec 00 00 00 	mov    eax,DWORD PTR [esp+0xec]
1000ee50:	89 8e ac 00 00 00    	mov    DWORD PTR [esi+0xac],ecx
1000ee56:	d9 84 24 d4 00 00 00 	fld    DWORD PTR [esp+0xd4]
1000ee5d:	89 96 b0 00 00 00    	mov    DWORD PTR [esi+0xb0],edx
1000ee63:	89 86 b4 00 00 00    	mov    DWORD PTR [esi+0xb4],eax
1000ee69:	d8 86 c4 00 00 00    	fadd   DWORD PTR [esi+0xc4]
1000ee6f:	d9 84 24 d8 00 00 00 	fld    DWORD PTR [esp+0xd8]
1000ee76:	d8 86 c8 00 00 00    	fadd   DWORD PTR [esi+0xc8]
1000ee7c:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000ee80:	d9 84 24 dc 00 00 00 	fld    DWORD PTR [esp+0xdc]
1000ee87:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
1000ee8d:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1000ee91:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1000ee95:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000ee9b:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000ee9f:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1000eea3:	8b 01                	mov    eax,DWORD PTR [ecx]
1000eea5:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1000eea9:	8d 54 24 7c          	lea    edx,[esp+0x7c]
1000eead:	52                   	push   edx
1000eeae:	8d 94 24 8c 00 00 00 	lea    edx,[esp+0x8c]
1000eeb5:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1000eeb9:	52                   	push   edx
1000eeba:	8d 54 24 6c          	lea    edx,[esp+0x6c]
1000eebe:	52                   	push   edx
1000eebf:	8d 94 24 ec 00 00 00 	lea    edx,[esp+0xec]
1000eec6:	52                   	push   edx
1000eec7:	ff 90 e4 00 00 00    	call   DWORD PTR [eax+0xe4]
1000eecd:	d9 86 d0 00 00 00    	fld    DWORD PTR [esi+0xd0]
1000eed3:	d8 8c 24 88 00 00 00 	fmul   DWORD PTR [esp+0x88]
1000eeda:	d9 86 d0 00 00 00    	fld    DWORD PTR [esi+0xd0]
1000eee0:	d8 8c 24 8c 00 00 00 	fmul   DWORD PTR [esp+0x8c]
1000eee7:	89 bc 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],edi
1000eeee:	89 bc 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],edi
1000eef5:	c7 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],0x0
1000eefc:	00 00 00 00 
1000ef00:	c7 84 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],0x0
1000ef07:	00 00 00 00 
1000ef0b:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0x0
1000ef12:	00 00 00 00 
1000ef16:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
1000ef1d:	00 
1000ef1e:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000ef22:	d9 86 d0 00 00 00    	fld    DWORD PTR [esi+0xd0]
1000ef28:	d8 8c 24 90 00 00 00 	fmul   DWORD PTR [esp+0x90]
1000ef2f:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
1000ef36:	00 
1000ef37:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
1000ef3e:	00 
1000ef3f:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
1000ef46:	00 
1000ef47:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000ef4b:	d9 86 d4 00 00 00    	fld    DWORD PTR [esi+0xd4]
1000ef51:	d8 4c 24 64          	fmul   DWORD PTR [esp+0x64]
1000ef55:	d9 86 d4 00 00 00    	fld    DWORD PTR [esi+0xd4]
1000ef5b:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1000ef5f:	d9 5c 24 74          	fstp   DWORD PTR [esp+0x74]
1000ef63:	d9 86 d4 00 00 00    	fld    DWORD PTR [esi+0xd4]
1000ef69:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
1000ef6d:	d9 5c 24 78          	fstp   DWORD PTR [esp+0x78]
1000ef71:	d9 86 d8 00 00 00    	fld    DWORD PTR [esi+0xd8]
1000ef77:	d8 4c 24 7c          	fmul   DWORD PTR [esp+0x7c]
1000ef7b:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
1000ef7f:	d9 86 d8 00 00 00    	fld    DWORD PTR [esi+0xd8]
1000ef85:	d8 8c 24 80 00 00 00 	fmul   DWORD PTR [esp+0x80]
1000ef8c:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1000ef90:	d9 86 d8 00 00 00    	fld    DWORD PTR [esi+0xd8]
1000ef96:	d8 8c 24 84 00 00 00 	fmul   DWORD PTR [esp+0x84]
1000ef9d:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1000efa1:	de c1                	faddp  st(1),st
1000efa3:	d9 44 24 74          	fld    DWORD PTR [esp+0x74]
1000efa7:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
1000efab:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1000efaf:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1000efb3:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1000efb7:	89 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],eax
1000efbe:	89 8c 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],ecx
1000efc5:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
1000efcc:	00 
1000efcd:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000efd1:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
1000efd5:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
1000efd9:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
1000efe0:	00 
1000efe1:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
1000efe8:	00 
1000efe9:	89 7c 24 54          	mov    DWORD PTR [esp+0x54],edi
1000efed:	c7 44 24 58 ff ff ff 	mov    DWORD PTR [esp+0x58],0xffffffff
1000eff4:	ff 
1000eff5:	89 7c 24 5c          	mov    DWORD PTR [esp+0x5c],edi
1000eff9:	89 94 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],edx
1000f000:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000f004:	c7 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],0x7
1000f00b:	07 00 00 00 
1000f00f:	c7 84 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],0x1000e090
1000f016:	90 e0 00 10 
1000f01a:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
1000f01e:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
1000f022:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
1000f026:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000f02a:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
1000f02e:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
1000f032:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000f036:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
1000f03a:	d9 54 24 08          	fst    DWORD PTR [esp+0x8]
1000f03e:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000f042:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
1000f046:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1000f04a:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000f04e:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
1000f052:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1000f056:	89 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],eax
1000f05d:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000f061:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000f065:	d8 e1                	fsub   st,st(1)
1000f067:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000f06b:	d8 64 24 0c          	fsub   DWORD PTR [esp+0xc]
1000f06f:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000f073:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
1000f077:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1000f07b:	89 8c 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],ecx
1000f082:	d9 c0                	fld    st(0)
1000f084:	d8 c9                	fmul   st,st(1)
1000f086:	d9 c2                	fld    st(2)
1000f088:	d8 cb                	fmul   st,st(3)
1000f08a:	de c1                	faddp  st(1),st
1000f08c:	d9 c3                	fld    st(3)
1000f08e:	d8 cc                	fmul   st,st(4)
1000f090:	de c1                	faddp  st(1),st
1000f092:	d9 fa                	fsqrt
1000f094:	dd db                	fstp   st(3)
1000f096:	dd d8                	fstp   st(0)
1000f098:	dd d8                	fstp   st(0)
1000f09a:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
1000f09e:	d9 c0                	fld    st(0)
1000f0a0:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
1000f0a4:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000f0a8:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1000f0ac:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f0b0:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
1000f0b4:	d9 c0                	fld    st(0)
1000f0b6:	d8 c9                	fmul   st,st(1)
1000f0b8:	d9 c2                	fld    st(2)
1000f0ba:	d8 cb                	fmul   st,st(3)
1000f0bc:	de c1                	faddp  st(1),st
1000f0be:	d9 c3                	fld    st(3)
1000f0c0:	d8 cc                	fmul   st,st(4)
1000f0c2:	de c1                	faddp  st(1),st
1000f0c4:	d9 fa                	fsqrt
1000f0c6:	d9 9c 24 c8 00 00 00 	fstp   DWORD PTR [esp+0xc8]
1000f0cd:	dd d8                	fstp   st(0)
1000f0cf:	dd d8                	fstp   st(0)
1000f0d1:	dd d8                	fstp   st(0)
1000f0d3:	d9 9c 24 a0 00 00 00 	fstp   DWORD PTR [esp+0xa0]
1000f0da:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000f0e0:	8d 54 24 38          	lea    edx,[esp+0x38]
1000f0e4:	8d 84 24 94 00 00 00 	lea    eax,[esp+0x94]
1000f0eb:	52                   	push   edx
1000f0ec:	50                   	push   eax
1000f0ed:	ff 91 30 01 00 00    	call   DWORD PTR [ecx+0x130]
1000f0f3:	83 c4 08             	add    esp,0x8
1000f0f6:	85 c0                	test   eax,eax
1000f0f8:	74 5f                	je     0x1000f159
1000f0fa:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1000f0fe:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
1000f102:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1000f106:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1000f10a:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
1000f10e:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
1000f112:	d9 c0                	fld    st(0)
1000f114:	d8 c9                	fmul   st,st(1)
1000f116:	d9 c2                	fld    st(2)
1000f118:	d8 cb                	fmul   st,st(3)
1000f11a:	de c1                	faddp  st(1),st
1000f11c:	d9 c3                	fld    st(3)
1000f11e:	d8 cc                	fmul   st,st(4)
1000f120:	de c1                	faddp  st(1),st
1000f122:	d9 fa                	fsqrt
1000f124:	dd db                	fstp   st(3)
1000f126:	dd d8                	fstp   st(0)
1000f128:	dd d8                	fstp   st(0)
1000f12a:	d8 5c 24 60          	fcomp  DWORD PTR [esp+0x60]
1000f12e:	df e0                	fnstsw ax
1000f130:	f6 c4 01             	test   ah,0x1
1000f133:	74 24                	je     0x1000f159
1000f135:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
1000f139:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
1000f13d:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
1000f141:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
1000f145:	d8 44 24 3c          	fadd   DWORD PTR [esp+0x3c]
1000f149:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1000f14d:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
1000f151:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
1000f155:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000f159:	8d 94 24 e0 00 00 00 	lea    edx,[esp+0xe0]
1000f160:	8d 44 24 08          	lea    eax,[esp+0x8]
1000f164:	52                   	push   edx
1000f165:	50                   	push   eax
1000f166:	e8 55 00 00 00       	call   0x1000f1c0
1000f16b:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1000f16f:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1000f173:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1000f177:	83 c4 08             	add    esp,0x8
1000f17a:	89 8e b8 00 00 00    	mov    DWORD PTR [esi+0xb8],ecx
1000f180:	89 96 bc 00 00 00    	mov    DWORD PTR [esi+0xbc],edx
1000f186:	89 86 c0 00 00 00    	mov    DWORD PTR [esi+0xc0],eax
1000f18c:	8b 84 24 d0 00 00 00 	mov    eax,DWORD PTR [esp+0xd0]
1000f193:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000f197:	8b c8                	mov    ecx,eax
1000f199:	5f                   	pop    edi
1000f19a:	5e                   	pop    esi
1000f19b:	89 11                	mov    DWORD PTR [ecx],edx
1000f19d:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1000f1a1:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
1000f1a4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000f1a8:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
1000f1ab:	81 c4 c4 00 00 00    	add    esp,0xc4
1000f1b1:	c2 20 00             	ret    0x20
1000f1b4:	90                   	nop
1000f1b5:	90                   	nop
1000f1b6:	90                   	nop
1000f1b7:	90                   	nop
1000f1b8:	90                   	nop
1000f1b9:	90                   	nop
1000f1ba:	90                   	nop
1000f1bb:	90                   	nop
1000f1bc:	90                   	nop
1000f1bd:	90                   	nop
1000f1be:	90                   	nop
1000f1bf:	90                   	nop
1000f1c0:	81 ec a8 00 00 00    	sub    esp,0xa8
1000f1c6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000f1cc:	56                   	push   esi
1000f1cd:	8d 94 24 a0 00 00 00 	lea    edx,[esp+0xa0]
1000f1d4:	57                   	push   edi
1000f1d5:	8b 01                	mov    eax,DWORD PTR [ecx]
1000f1d7:	52                   	push   edx
1000f1d8:	8d 54 24 24          	lea    edx,[esp+0x24]
1000f1dc:	52                   	push   edx
1000f1dd:	8d 94 24 a0 00 00 00 	lea    edx,[esp+0xa0]
1000f1e4:	52                   	push   edx
1000f1e5:	8b 94 24 c4 00 00 00 	mov    edx,DWORD PTR [esp+0xc4]
1000f1ec:	52                   	push   edx
1000f1ed:	ff 90 e4 00 00 00    	call   DWORD PTR [eax+0xe4]
1000f1f3:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f1f7:	d8 0d c0 85 0b 10    	fmul   DWORD PTR ds:0x100b85c0
1000f1fd:	51                   	push   ecx
1000f1fe:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f201:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f205:	d8 0d c0 85 0b 10    	fmul   DWORD PTR ds:0x100b85c0
1000f20b:	51                   	push   ecx
1000f20c:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f20f:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f213:	d8 0d c0 85 0b 10    	fmul   DWORD PTR ds:0x100b85c0
1000f219:	51                   	push   ecx
1000f21a:	8d 4c 24 38          	lea    ecx,[esp+0x38]
1000f21e:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f221:	e8 2a ee ff ff       	call   0x1000e050
1000f226:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f228:	8b b4 24 b4 00 00 00 	mov    esi,DWORD PTR [esp+0xb4]
1000f22f:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1000f233:	33 ff                	xor    edi,edi
1000f235:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000f239:	d8 06                	fadd   DWORD PTR [esi]
1000f23b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f23e:	57                   	push   edi
1000f23f:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1000f243:	57                   	push   edi
1000f244:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f247:	57                   	push   edi
1000f248:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1000f24c:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1000f250:	d8 46 04             	fadd   DWORD PTR [esi+0x4]
1000f253:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1000f257:	8d 4c 24 44          	lea    ecx,[esp+0x44]
1000f25b:	89 7c 24 68          	mov    DWORD PTR [esp+0x68],edi
1000f25f:	89 7c 24 6c          	mov    DWORD PTR [esp+0x6c],edi
1000f263:	89 7c 24 70          	mov    DWORD PTR [esp+0x70],edi
1000f267:	89 7c 24 74          	mov    DWORD PTR [esp+0x74],edi
1000f26b:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000f26f:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000f273:	d8 46 08             	fadd   DWORD PTR [esi+0x8]
1000f276:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000f27a:	e8 41 c1 ff ff       	call   0x1000b3c0
1000f27f:	57                   	push   edi
1000f280:	57                   	push   edi
1000f281:	57                   	push   edi
1000f282:	8d 4c 24 50          	lea    ecx,[esp+0x50]
1000f286:	e8 35 c1 ff ff       	call   0x1000b3c0
1000f28b:	57                   	push   edi
1000f28c:	57                   	push   edi
1000f28d:	57                   	push   edi
1000f28e:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
1000f292:	e8 29 c1 ff ff       	call   0x1000b3c0
1000f297:	57                   	push   edi
1000f298:	57                   	push   edi
1000f299:	57                   	push   edi
1000f29a:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
1000f29e:	e8 1d c1 ff ff       	call   0x1000b3c0
1000f2a3:	57                   	push   edi
1000f2a4:	57                   	push   edi
1000f2a5:	57                   	push   edi
1000f2a6:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
1000f2ad:	e8 0e c1 ff ff       	call   0x1000b3c0
1000f2b2:	8b 0e                	mov    ecx,DWORD PTR [esi]
1000f2b4:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000f2b7:	89 bc 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edi
1000f2be:	89 bc 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],edi
1000f2c5:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0xffffffff
1000f2cc:	ff ff ff ff 
1000f2d0:	89 bc 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],edi
1000f2d7:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1000f2db:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1000f2df:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1000f2e2:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1000f2e6:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1000f2ea:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
1000f2ee:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1000f2f2:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
1000f2f6:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
1000f2fa:	8d 4c 24 70          	lea    ecx,[esp+0x70]
1000f2fe:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1000f302:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000f307:	8d 54 24 38          	lea    edx,[esp+0x38]
1000f30b:	51                   	push   ecx
1000f30c:	52                   	push   edx
1000f30d:	c7 44 24 64 07 00 00 	mov    DWORD PTR [esp+0x64],0x7
1000f314:	00 
1000f315:	c7 44 24 68 90 e0 00 	mov    DWORD PTR [esp+0x68],0x1000e090
1000f31c:	10 
1000f31d:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
1000f323:	83 c4 08             	add    esp,0x8
1000f326:	85 c0                	test   eax,eax
1000f328:	0f 84 d5 00 00 00    	je     0x1000f403
1000f32e:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
1000f332:	d8 66 08             	fsub   DWORD PTR [esi+0x8]
1000f335:	51                   	push   ecx
1000f336:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f339:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
1000f33d:	d8 66 04             	fsub   DWORD PTR [esi+0x4]
1000f340:	51                   	push   ecx
1000f341:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f344:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
1000f348:	d8 26                	fsub   DWORD PTR [esi]
1000f34a:	51                   	push   ecx
1000f34b:	8d 4c 24 38          	lea    ecx,[esp+0x38]
1000f34f:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f352:	e8 f9 ec ff ff       	call   0x1000e050
1000f357:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f359:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1000f35d:	51                   	push   ecx
1000f35e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f361:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1000f365:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f368:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1000f36c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1000f370:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1000f374:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000f378:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1000f37c:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f380:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
1000f384:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1000f388:	de c1                	faddp  st(1),st
1000f38a:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000f38e:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000f392:	de c1                	faddp  st(1),st
1000f394:	d9 fa                	fsqrt
1000f396:	d8 2d c0 85 0b 10    	fsubr  DWORD PTR ds:0x100b85c0
1000f39c:	d9 e0                	fchs
1000f39e:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1000f3a2:	d8 c9                	fmul   st,st(1)
1000f3a4:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f3a7:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f3ab:	d8 c9                	fmul   st,st(1)
1000f3ad:	51                   	push   ecx
1000f3ae:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f3b1:	51                   	push   ecx
1000f3b2:	8d 4c 24 38          	lea    ecx,[esp+0x38]
1000f3b6:	d8 4c 24 2c          	fmul   DWORD PTR [esp+0x2c]
1000f3ba:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f3bd:	e8 8e ec ff ff       	call   0x1000e050
1000f3c2:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f3c4:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1000f3c8:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000f3cc:	d8 06                	fadd   DWORD PTR [esi]
1000f3ce:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f3d1:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
1000f3d5:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f3d8:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1000f3dc:	d9 1e                	fstp   DWORD PTR [esi]
1000f3de:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000f3e2:	d8 46 04             	fadd   DWORD PTR [esi+0x4]
1000f3e5:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1000f3e9:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1000f3ed:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1000f3f1:	d9 5e 04             	fstp   DWORD PTR [esi+0x4]
1000f3f4:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f3f8:	d8 46 08             	fadd   DWORD PTR [esi+0x8]
1000f3fb:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
1000f3fe:	e9 74 01 00 00       	jmp    0x1000f577
1000f403:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f407:	d8 0d bc 85 0b 10    	fmul   DWORD PTR ds:0x100b85bc
1000f40d:	51                   	push   ecx
1000f40e:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f411:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f415:	d8 0d bc 85 0b 10    	fmul   DWORD PTR ds:0x100b85bc
1000f41b:	51                   	push   ecx
1000f41c:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f41f:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f423:	d8 0d bc 85 0b 10    	fmul   DWORD PTR ds:0x100b85bc
1000f429:	51                   	push   ecx
1000f42a:	8d 4c 24 38          	lea    ecx,[esp+0x38]
1000f42e:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f431:	e8 1a ec ff ff       	call   0x1000e050
1000f436:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f438:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1000f43c:	8b 0e                	mov    ecx,DWORD PTR [esi]
1000f43e:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000f442:	d8 06                	fadd   DWORD PTR [esi]
1000f444:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f447:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
1000f44b:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000f44e:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f451:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1000f455:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
1000f459:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000f45d:	d8 46 04             	fadd   DWORD PTR [esi+0x4]
1000f460:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1000f464:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1000f467:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1000f46b:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
1000f46f:	8d 44 24 70          	lea    eax,[esp+0x70]
1000f473:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1000f477:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f47b:	d8 46 08             	fadd   DWORD PTR [esi+0x8]
1000f47e:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1000f482:	50                   	push   eax
1000f483:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
1000f487:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
1000f48b:	51                   	push   ecx
1000f48c:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000f490:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1000f494:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
1000f498:	89 54 24 54          	mov    DWORD PTR [esp+0x54],edx
1000f49c:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1000f4a2:	ff 92 30 01 00 00    	call   DWORD PTR [edx+0x130]
1000f4a8:	83 c4 08             	add    esp,0x8
1000f4ab:	85 c0                	test   eax,eax
1000f4ad:	0f 84 c4 00 00 00    	je     0x1000f577
1000f4b3:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
1000f4b7:	d8 66 08             	fsub   DWORD PTR [esi+0x8]
1000f4ba:	51                   	push   ecx
1000f4bb:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f4be:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
1000f4c2:	d8 66 04             	fsub   DWORD PTR [esi+0x4]
1000f4c5:	51                   	push   ecx
1000f4c6:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f4c9:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
1000f4cd:	d8 26                	fsub   DWORD PTR [esi]
1000f4cf:	51                   	push   ecx
1000f4d0:	8d 4c 24 38          	lea    ecx,[esp+0x38]
1000f4d4:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f4d7:	e8 74 eb ff ff       	call   0x1000e050
1000f4dc:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f4de:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1000f4e2:	51                   	push   ecx
1000f4e3:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f4e6:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1000f4ea:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f4ed:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1000f4f1:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1000f4f5:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1000f4f9:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000f4fd:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1000f501:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f505:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
1000f509:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1000f50d:	de c1                	faddp  st(1),st
1000f50f:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000f513:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000f517:	de c1                	faddp  st(1),st
1000f519:	d9 fa                	fsqrt
1000f51b:	d8 2d c0 85 0b 10    	fsubr  DWORD PTR ds:0x100b85c0
1000f521:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1000f525:	d8 c9                	fmul   st,st(1)
1000f527:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f52a:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f52e:	d8 c9                	fmul   st,st(1)
1000f530:	51                   	push   ecx
1000f531:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f534:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f538:	d8 c9                	fmul   st,st(1)
1000f53a:	51                   	push   ecx
1000f53b:	8d 4c 24 38          	lea    ecx,[esp+0x38]
1000f53f:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f542:	dd d8                	fstp   st(0)
1000f544:	e8 07 eb ff ff       	call   0x1000e050
1000f549:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f54b:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1000f54f:	8d 4c 24 08          	lea    ecx,[esp+0x8]
1000f553:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f556:	51                   	push   ecx
1000f557:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1000f55b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f55f:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f562:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1000f566:	e8 05 eb ff ff       	call   0x1000e070
1000f56b:	8d 54 24 14          	lea    edx,[esp+0x14]
1000f56f:	8b ce                	mov    ecx,esi
1000f571:	52                   	push   edx
1000f572:	e8 e9 03 00 00       	call   0x1000f960
1000f577:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1000f57b:	68 00 00 f0 41       	push   0x41f00000
1000f580:	50                   	push   eax
1000f581:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
1000f588:	e8 53 04 00 00       	call   0x1000f9e0
1000f58d:	50                   	push   eax
1000f58e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f592:	e8 d9 ea ff ff       	call   0x1000e070
1000f597:	56                   	push   esi
1000f598:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f59c:	e8 bf 03 00 00       	call   0x1000f960
1000f5a1:	56                   	push   esi
1000f5a2:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
1000f5a6:	e8 c5 ea ff ff       	call   0x1000e070
1000f5ab:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1000f5af:	51                   	push   ecx
1000f5b0:	8d 4c 24 48          	lea    ecx,[esp+0x48]
1000f5b4:	e8 b7 ea ff ff       	call   0x1000e070
1000f5b9:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000f5bf:	8d 54 24 70          	lea    edx,[esp+0x70]
1000f5c3:	8d 44 24 38          	lea    eax,[esp+0x38]
1000f5c7:	52                   	push   edx
1000f5c8:	50                   	push   eax
1000f5c9:	ff 91 30 01 00 00    	call   DWORD PTR [ecx+0x130]
1000f5cf:	83 c4 08             	add    esp,0x8
1000f5d2:	85 c0                	test   eax,eax
1000f5d4:	74 37                	je     0x1000f60d
1000f5d6:	8d 54 24 2c          	lea    edx,[esp+0x2c]
1000f5da:	56                   	push   esi
1000f5db:	52                   	push   edx
1000f5dc:	8d 4c 24 78          	lea    ecx,[esp+0x78]
1000f5e0:	e8 ab 03 00 00       	call   0x1000f990
1000f5e5:	50                   	push   eax
1000f5e6:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f5ea:	e8 81 ea ff ff       	call   0x1000e070
1000f5ef:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1000f5f3:	e8 e8 bd ff ff       	call   0x1000b3e0
1000f5f8:	d8 2d c0 85 0b 10    	fsubr  DWORD PTR ds:0x100b85c0
1000f5fe:	51                   	push   ecx
1000f5ff:	8d 44 24 30          	lea    eax,[esp+0x30]
1000f603:	d9 e0                	fchs
1000f605:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f608:	e9 93 00 00 00       	jmp    0x1000f6a0
1000f60d:	8d 54 24 2c          	lea    edx,[esp+0x2c]
1000f611:	68 00 00 f0 c1       	push   0xc1f00000
1000f616:	52                   	push   edx
1000f617:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
1000f61e:	e8 bd 03 00 00       	call   0x1000f9e0
1000f623:	50                   	push   eax
1000f624:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f628:	e8 43 ea ff ff       	call   0x1000e070
1000f62d:	56                   	push   esi
1000f62e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f632:	e8 29 03 00 00       	call   0x1000f960
1000f637:	56                   	push   esi
1000f638:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
1000f63c:	e8 2f ea ff ff       	call   0x1000e070
1000f641:	8d 44 24 14          	lea    eax,[esp+0x14]
1000f645:	8d 4c 24 44          	lea    ecx,[esp+0x44]
1000f649:	50                   	push   eax
1000f64a:	e8 21 ea ff ff       	call   0x1000e070
1000f64f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000f654:	8d 4c 24 70          	lea    ecx,[esp+0x70]
1000f658:	8d 54 24 38          	lea    edx,[esp+0x38]
1000f65c:	51                   	push   ecx
1000f65d:	52                   	push   edx
1000f65e:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
1000f664:	83 c4 08             	add    esp,0x8
1000f667:	85 c0                	test   eax,eax
1000f669:	74 58                	je     0x1000f6c3
1000f66b:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
1000f66f:	56                   	push   esi
1000f670:	51                   	push   ecx
1000f671:	8d 4c 24 78          	lea    ecx,[esp+0x78]
1000f675:	e8 16 03 00 00       	call   0x1000f990
1000f67a:	50                   	push   eax
1000f67b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f67f:	e8 ec e9 ff ff       	call   0x1000e070
1000f684:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1000f688:	e8 53 bd ff ff       	call   0x1000b3e0
1000f68d:	d8 2d c0 85 0b 10    	fsubr  DWORD PTR ds:0x100b85c0
1000f693:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1000f697:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
1000f69b:	8b 54 24 6c          	mov    edx,DWORD PTR [esp+0x6c]
1000f69f:	52                   	push   edx
1000f6a0:	50                   	push   eax
1000f6a1:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
1000f6a8:	e8 33 03 00 00       	call   0x1000f9e0
1000f6ad:	50                   	push   eax
1000f6ae:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000f6b2:	e8 b9 e9 ff ff       	call   0x1000e070
1000f6b7:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1000f6bb:	51                   	push   ecx
1000f6bc:	8b ce                	mov    ecx,esi
1000f6be:	e8 9d 02 00 00       	call   0x1000f960
1000f6c3:	5f                   	pop    edi
1000f6c4:	5e                   	pop    esi
1000f6c5:	81 c4 a8 00 00 00    	add    esp,0xa8
1000f6cb:	c3                   	ret
1000f6cc:	90                   	nop
1000f6cd:	90                   	nop
1000f6ce:	90                   	nop
1000f6cf:	90                   	nop
1000f6d0:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1000f6d5:	83 ec 50             	sub    esp,0x50
1000f6d8:	85 c0                	test   eax,eax
1000f6da:	56                   	push   esi
1000f6db:	8b f1                	mov    esi,ecx
1000f6dd:	0f 84 72 02 00 00    	je     0x1000f955
1000f6e3:	8b 06                	mov    eax,DWORD PTR [esi]
1000f6e5:	85 c0                	test   eax,eax
1000f6e7:	0f 84 68 02 00 00    	je     0x1000f955
1000f6ed:	83 be dc 00 00 00 02 	cmp    DWORD PTR [esi+0xdc],0x2
1000f6f4:	0f 85 c8 00 00 00    	jne    0x1000f7c2
1000f6fa:	8d 4c 24 44          	lea    ecx,[esp+0x44]
1000f6fe:	c7 86 dc 00 00 00 00 	mov    DWORD PTR [esi+0xdc],0x0
1000f705:	00 00 00 
1000f708:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1000f70e:	51                   	push   ecx
1000f70f:	50                   	push   eax
1000f710:	ff 92 f4 02 00 00    	call   DWORD PTR [edx+0x2f4]
1000f716:	83 c4 08             	add    esp,0x8
1000f719:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000f71f:	8d 54 24 08          	lea    edx,[esp+0x8]
1000f723:	8b 01                	mov    eax,DWORD PTR [ecx]
1000f725:	52                   	push   edx
1000f726:	8d 54 24 30          	lea    edx,[esp+0x30]
1000f72a:	52                   	push   edx
1000f72b:	8d 54 24 40          	lea    edx,[esp+0x40]
1000f72f:	52                   	push   edx
1000f730:	8d 54 24 50          	lea    edx,[esp+0x50]
1000f734:	52                   	push   edx
1000f735:	ff 90 e4 00 00 00    	call   DWORD PTR [eax+0xe4]
1000f73b:	8b 0e                	mov    ecx,DWORD PTR [esi]
1000f73d:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1000f743:	8d 44 24 20          	lea    eax,[esp+0x20]
1000f747:	50                   	push   eax
1000f748:	51                   	push   ecx
1000f749:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
1000f74f:	d9 46 60             	fld    DWORD PTR [esi+0x60]
1000f752:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f756:	d8 c9                	fmul   st,st(1)
1000f758:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
1000f75f:	00 
1000f760:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
1000f764:	83 c4 08             	add    esp,0x8
1000f767:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
1000f76b:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
1000f76f:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
1000f773:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
1000f777:	d9 44 24 5c          	fld    DWORD PTR [esp+0x5c]
1000f77b:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
1000f77f:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f783:	d8 c3                	fadd   st,st(3)
1000f785:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000f789:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1000f78d:	d8 46 64             	fadd   DWORD PTR [esi+0x64]
1000f790:	89 4e 10             	mov    DWORD PTR [esi+0x10],ecx
1000f793:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
1000f797:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000f79b:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1000f79f:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
1000f7a2:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
1000f7a5:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
1000f7a9:	89 56 14             	mov    DWORD PTR [esi+0x14],edx
1000f7ac:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
1000f7b0:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1000f7b3:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
1000f7b6:	89 56 20             	mov    DWORD PTR [esi+0x20],edx
1000f7b9:	5e                   	pop    esi
1000f7ba:	dd d8                	fstp   st(0)
1000f7bc:	83 c4 50             	add    esp,0x50
1000f7bf:	c2 10 00             	ret    0x10
1000f7c2:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
1000f7c6:	d8 66 08             	fsub   DWORD PTR [esi+0x8]
1000f7c9:	51                   	push   ecx
1000f7ca:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1000f7ce:	d9 44 24 60          	fld    DWORD PTR [esp+0x60]
1000f7d2:	d8 66 0c             	fsub   DWORD PTR [esi+0xc]
1000f7d5:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000f7d9:	d9 44 24 64          	fld    DWORD PTR [esp+0x64]
1000f7dd:	d8 66 10             	fsub   DWORD PTR [esi+0x10]
1000f7e0:	d9 54 24 2c          	fst    DWORD PTR [esp+0x2c]
1000f7e4:	d8 0d cc 83 0b 10    	fmul   DWORD PTR ds:0x100b83cc
1000f7ea:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f7ed:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f7f1:	d8 0d cc 83 0b 10    	fmul   DWORD PTR ds:0x100b83cc
1000f7f7:	51                   	push   ecx
1000f7f8:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f7fb:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f7ff:	d8 0d cc 83 0b 10    	fmul   DWORD PTR ds:0x100b83cc
1000f805:	51                   	push   ecx
1000f806:	8d 4c 24 44          	lea    ecx,[esp+0x44]
1000f80a:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f80d:	e8 3e e8 ff ff       	call   0x1000e050
1000f812:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f814:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1000f818:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f81b:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
1000f81f:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f822:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1000f826:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1000f82a:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1000f82e:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f832:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
1000f836:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000f83a:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000f83e:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1000f842:	de c1                	faddp  st(1),st
1000f844:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000f848:	d8 4c 24 08          	fmul   DWORD PTR [esp+0x8]
1000f84c:	de c1                	faddp  st(1),st
1000f84e:	d9 fa                	fsqrt
1000f850:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000f854:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f858:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
1000f85c:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1000f860:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
1000f864:	de c1                	faddp  st(1),st
1000f866:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1000f86a:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
1000f86e:	de c1                	faddp  st(1),st
1000f870:	d9 fa                	fsqrt
1000f872:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1000f876:	d8 d9                	fcomp  st(1)
1000f878:	df e0                	fnstsw ax
1000f87a:	f6 c4 41             	test   ah,0x41
1000f87d:	75 06                	jne    0x1000f885
1000f87f:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000f883:	eb 02                	jmp    0x1000f887
1000f885:	dd d8                	fstp   st(0)
1000f887:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1000f88b:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000f891:	df e0                	fnstsw ax
1000f893:	f6 c4 40             	test   ah,0x40
1000f896:	74 22                	je     0x1000f8ba
1000f898:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1000f89c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000f8a2:	df e0                	fnstsw ax
1000f8a4:	f6 c4 40             	test   ah,0x40
1000f8a7:	74 11                	je     0x1000f8ba
1000f8a9:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1000f8ad:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1000f8b3:	df e0                	fnstsw ax
1000f8b5:	f6 c4 40             	test   ah,0x40
1000f8b8:	75 3c                	jne    0x1000f8f6
1000f8ba:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1000f8be:	e8 1d bb ff ff       	call   0x1000b3e0
1000f8c3:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1000f8c9:	df e0                	fnstsw ax
1000f8cb:	f6 c4 40             	test   ah,0x40
1000f8ce:	75 24                	jne    0x1000f8f4
1000f8d0:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
1000f8d6:	d9 c0                	fld    st(0)
1000f8d8:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1000f8dc:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1000f8e0:	d9 c0                	fld    st(0)
1000f8e2:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1000f8e6:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1000f8ea:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1000f8ee:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1000f8f2:	eb 02                	jmp    0x1000f8f6
1000f8f4:	dd d8                	fstp   st(0)
1000f8f6:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000f8fa:	d8 4c 24 04          	fmul   DWORD PTR [esp+0x4]
1000f8fe:	51                   	push   ecx
1000f8ff:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f902:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000f906:	d8 4c 24 08          	fmul   DWORD PTR [esp+0x8]
1000f90a:	51                   	push   ecx
1000f90b:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f90e:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1000f912:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
1000f916:	51                   	push   ecx
1000f917:	8d 4c 24 44          	lea    ecx,[esp+0x44]
1000f91b:	d9 1c 24             	fstp   DWORD PTR [esp]
1000f91e:	e8 2d e7 ff ff       	call   0x1000e050
1000f923:	8b 08                	mov    ecx,DWORD PTR [eax]
1000f925:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1000f929:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1000f92d:	d8 46 08             	fadd   DWORD PTR [esi+0x8]
1000f930:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000f933:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
1000f937:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000f93a:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
1000f93d:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1000f941:	d8 46 0c             	fadd   DWORD PTR [esi+0xc]
1000f944:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1000f948:	d9 5e 0c             	fstp   DWORD PTR [esi+0xc]
1000f94b:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1000f94f:	d8 46 10             	fadd   DWORD PTR [esi+0x10]
1000f952:	d9 5e 10             	fstp   DWORD PTR [esi+0x10]
1000f955:	5e                   	pop    esi
1000f956:	83 c4 50             	add    esp,0x50
1000f959:	c2 10 00             	ret    0x10
1000f95c:	90                   	nop
1000f95d:	90                   	nop
1000f95e:	90                   	nop
1000f95f:	90                   	nop
1000f960:	8b c1                	mov    eax,ecx
1000f962:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1000f966:	d9 01                	fld    DWORD PTR [ecx]
1000f968:	d8 00                	fadd   DWORD PTR [eax]
1000f96a:	d9 18                	fstp   DWORD PTR [eax]
1000f96c:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
1000f96f:	d8 40 04             	fadd   DWORD PTR [eax+0x4]
1000f972:	d9 58 04             	fstp   DWORD PTR [eax+0x4]
1000f975:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
1000f978:	d8 40 08             	fadd   DWORD PTR [eax+0x8]
1000f97b:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
1000f97e:	c2 04 00             	ret    0x4
1000f981:	90                   	nop
1000f982:	90                   	nop
1000f983:	90                   	nop
1000f984:	90                   	nop
1000f985:	90                   	nop
1000f986:	90                   	nop
1000f987:	90                   	nop
1000f988:	90                   	nop
1000f989:	90                   	nop
1000f98a:	90                   	nop
1000f98b:	90                   	nop
1000f98c:	90                   	nop
1000f98d:	90                   	nop
1000f98e:	90                   	nop
1000f98f:	90                   	nop
1000f990:	83 ec 0c             	sub    esp,0xc
1000f993:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1000f997:	d9 01                	fld    DWORD PTR [ecx]
1000f999:	d8 20                	fsub   DWORD PTR [eax]
1000f99b:	d9 5c 24 00          	fstp   DWORD PTR [esp+0x0]
1000f99f:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
1000f9a2:	d8 60 04             	fsub   DWORD PTR [eax+0x4]
1000f9a5:	8b 54 24 00          	mov    edx,DWORD PTR [esp+0x0]
1000f9a9:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000f9ad:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
1000f9b0:	d8 60 08             	fsub   DWORD PTR [eax+0x8]
1000f9b3:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1000f9b7:	8b c8                	mov    ecx,eax
1000f9b9:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
1000f9bd:	89 11                	mov    DWORD PTR [ecx],edx
1000f9bf:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1000f9c3:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
1000f9c6:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000f9ca:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
1000f9cd:	83 c4 0c             	add    esp,0xc
1000f9d0:	c2 08 00             	ret    0x8
1000f9d3:	90                   	nop
1000f9d4:	90                   	nop
1000f9d5:	90                   	nop
1000f9d6:	90                   	nop
1000f9d7:	90                   	nop
1000f9d8:	90                   	nop
1000f9d9:	90                   	nop
1000f9da:	90                   	nop
1000f9db:	90                   	nop
1000f9dc:	90                   	nop
1000f9dd:	90                   	nop
1000f9de:	90                   	nop
1000f9df:	90                   	nop
1000f9e0:	83 ec 0c             	sub    esp,0xc
1000f9e3:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000f9e7:	d8 09                	fmul   DWORD PTR [ecx]
1000f9e9:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1000f9ed:	d9 5c 24 00          	fstp   DWORD PTR [esp+0x0]
1000f9f1:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000f9f5:	d8 49 04             	fmul   DWORD PTR [ecx+0x4]
1000f9f8:	8b 54 24 00          	mov    edx,DWORD PTR [esp+0x0]
1000f9fc:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1000fa00:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1000fa04:	d8 49 08             	fmul   DWORD PTR [ecx+0x8]
1000fa07:	8b c8                	mov    ecx,eax
1000fa09:	89 11                	mov    DWORD PTR [ecx],edx
1000fa0b:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1000fa0f:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
1000fa13:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
1000fa16:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000fa1a:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
1000fa1d:	83 c4 0c             	add    esp,0xc
1000fa20:	c2 08 00             	ret    0x8
1000fa23:	90                   	nop
1000fa24:	90                   	nop
1000fa25:	90                   	nop
1000fa26:	90                   	nop
1000fa27:	90                   	nop
1000fa28:	90                   	nop
1000fa29:	90                   	nop
1000fa2a:	90                   	nop
1000fa2b:	90                   	nop
1000fa2c:	90                   	nop
1000fa2d:	90                   	nop
1000fa2e:	90                   	nop
1000fa2f:	90                   	nop
1000fa30:	56                   	push   esi
1000fa31:	8b f1                	mov    esi,ecx
1000fa33:	c7 06 c4 85 0b 10    	mov    DWORD PTR [esi],0x100b85c4
1000fa39:	c7 46 24 03 00 00 00 	mov    DWORD PTR [esi+0x24],0x3
1000fa40:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1000fa47:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1000fa4d:	8b 01                	mov    eax,DWORD PTR [ecx]
1000fa4f:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1000fa55:	d9 56 30             	fst    DWORD PTR [esi+0x30]
1000fa58:	d9 5e 28             	fstp   DWORD PTR [esi+0x28]
1000fa5b:	c6 46 34 01          	mov    BYTE PTR [esi+0x34],0x1
1000fa5f:	8b c6                	mov    eax,esi
1000fa61:	5e                   	pop    esi
1000fa62:	c3                   	ret
1000fa63:	90                   	nop
1000fa64:	90                   	nop
1000fa65:	90                   	nop
1000fa66:	90                   	nop
1000fa67:	90                   	nop
1000fa68:	90                   	nop
1000fa69:	90                   	nop
1000fa6a:	90                   	nop
1000fa6b:	90                   	nop
1000fa6c:	90                   	nop
1000fa6d:	90                   	nop
1000fa6e:	90                   	nop
1000fa6f:	90                   	nop
1000fa70:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
1000fa74:	56                   	push   esi
1000fa75:	8b f1                	mov    esi,ecx
1000fa77:	a8 01                	test   al,0x1
1000fa79:	c7 06 c4 85 0b 10    	mov    DWORD PTR [esi],0x100b85c4
1000fa7f:	74 09                	je     0x1000fa8a
1000fa81:	56                   	push   esi
1000fa82:	e8 97 3e 09 00       	call   0x100a391e
1000fa87:	83 c4 04             	add    esp,0x4
1000fa8a:	8b c6                	mov    eax,esi
1000fa8c:	5e                   	pop    esi
1000fa8d:	c2 04 00             	ret    0x4
1000fa90:	56                   	push   esi
1000fa91:	8b f1                	mov    esi,ecx
1000fa93:	68 50 45 0d 10       	push   0x100d4550
1000fa98:	ff 15 64 80 0b 10    	call   DWORD PTR ds:0x100b8064
1000fa9e:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1000faa1:	c7 46 24 01 00 00 00 	mov    DWORD PTR [esi+0x24],0x1
1000faa8:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1000faab:	5e                   	pop    esi
1000faac:	c3                   	ret
1000faad:	90                   	nop
1000faae:	90                   	nop
1000faaf:	90                   	nop

*/
void Log::GenerateFileSuffix() {
    // TODO: Implement GenerateFileSuffix
}

