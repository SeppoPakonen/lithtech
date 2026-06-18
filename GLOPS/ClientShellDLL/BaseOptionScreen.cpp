#include "BaseOptionScreen.h"

// 0x10057740: BaseOptionScreen::AddOption
/*
10057740:	c7 01 58 9f 0b 10    	mov    DWORD PTR [ecx],0x100b9f58
10057746:	e9 d5 6d 01 00       	jmp    0x1006e520
1005774b:	90                   	nop
1005774c:	90                   	nop
1005774d:	90                   	nop
1005774e:	90                   	nop
1005774f:	90                   	nop
10057750:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10057756:	6a ff                	push   0xffffffff
10057758:	68 78 54 0b 10       	push   0x100b5478
1005775d:	50                   	push   eax
1005775e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10057765:	53                   	push   ebx
10057766:	56                   	push   esi
10057767:	8b f1                	mov    esi,ecx
10057769:	57                   	push   edi
1005776a:	8b 86 90 03 00 00    	mov    eax,DWORD PTR [esi+0x390]
10057770:	83 f8 64             	cmp    eax,0x64
10057773:	8d b8 00 04 00 00    	lea    edi,[eax+0x400]
10057779:	7c 46                	jl     0x100577c1
1005777b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10057781:	6a 5c                	push   0x5c
10057783:	68 58 b0 0d 10       	push   0x100db058
10057788:	8b 01                	mov    eax,DWORD PTR [ecx]
1005778a:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10057790:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10057795:	6a 64                	push   0x64
10057797:	68 18 b0 0d 10       	push   0x100db018
1005779c:	68 7c 5d 0c 10       	push   0x100c5d7c
100577a1:	8b 08                	mov    ecx,DWORD PTR [eax]
100577a3:	50                   	push   eax
100577a4:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100577aa:	83 c4 10             	add    esp,0x10
100577ad:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100577b1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100577b8:	5f                   	pop    edi
100577b9:	5e                   	pop    esi
100577ba:	5b                   	pop    ebx
100577bb:	83 c4 0c             	add    esp,0xc
100577be:	c2 04 00             	ret    0x4
100577c1:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
100577c5:	89 9c 86 c4 01 00 00 	mov    DWORD PTR [esi+eax*4+0x1c4],ebx
100577cc:	8b 03                	mov    eax,DWORD PTR [ebx]
100577ce:	83 f8 07             	cmp    eax,0x7
100577d1:	0f 87 0d 02 00 00    	ja     0x100579e4
100577d7:	ff 24 85 08 7a 05 10 	jmp    DWORD PTR [eax*4+0x10057a08]
100577de:	6a 44                	push   0x44
100577e0:	e8 44 c1 04 00       	call   0x100a3929
100577e5:	83 c4 04             	add    esp,0x4
100577e8:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
100577ec:	85 c0                	test   eax,eax
100577ee:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
100577f5:	00 
100577f6:	0f 84 dc 01 00 00    	je     0x100579d8
100577fc:	6a 00                	push   0x0
100577fe:	6a 00                	push   0x0
10057800:	6a 03                	push   0x3
10057802:	57                   	push   edi
10057803:	56                   	push   esi
10057804:	8b c8                	mov    ecx,eax
10057806:	e8 35 96 01 00       	call   0x10070e40
1005780b:	e9 ca 01 00 00       	jmp    0x100579da
10057810:	68 84 00 00 00       	push   0x84
10057815:	e8 0f c1 04 00       	call   0x100a3929
1005781a:	83 c4 04             	add    esp,0x4
1005781d:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10057821:	85 c0                	test   eax,eax
10057823:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
1005782a:	00 
1005782b:	0f 84 71 01 00 00    	je     0x100579a2
10057831:	57                   	push   edi
10057832:	6a 00                	push   0x0
10057834:	68 00 00 00 c0       	push   0xc0000000
10057839:	6a 01                	push   0x1
1005783b:	56                   	push   esi
1005783c:	8b c8                	mov    ecx,eax
1005783e:	e8 dd ef 01 00       	call   0x10076820
10057843:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
10057849:	89 44 8e 34          	mov    DWORD PTR [esi+ecx*4+0x34],eax
1005784d:	e9 92 01 00 00       	jmp    0x100579e4
10057852:	6a 44                	push   0x44
10057854:	e8 d0 c0 04 00       	call   0x100a3929
10057859:	83 c4 04             	add    esp,0x4
1005785c:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10057860:	85 c0                	test   eax,eax
10057862:	c7 44 24 14 02 00 00 	mov    DWORD PTR [esp+0x14],0x2
10057869:	00 
1005786a:	0f 84 68 01 00 00    	je     0x100579d8
10057870:	6a 01                	push   0x1
10057872:	57                   	push   edi
10057873:	6a 00                	push   0x0
10057875:	6a 01                	push   0x1
10057877:	56                   	push   esi
10057878:	8b c8                	mov    ecx,eax
1005787a:	e8 41 02 02 00       	call   0x10077ac0
1005787f:	e9 56 01 00 00       	jmp    0x100579da
10057884:	6a 44                	push   0x44
10057886:	e8 9e c0 04 00       	call   0x100a3929
1005788b:	83 c4 04             	add    esp,0x4
1005788e:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10057892:	85 c0                	test   eax,eax
10057894:	c7 44 24 14 03 00 00 	mov    DWORD PTR [esp+0x14],0x3
1005789b:	00 
1005789c:	0f 84 00 01 00 00    	je     0x100579a2
100578a2:	6a 00                	push   0x0
100578a4:	57                   	push   edi
100578a5:	6a 00                	push   0x0
100578a7:	6a 01                	push   0x1
100578a9:	56                   	push   esi
100578aa:	8b c8                	mov    ecx,eax
100578ac:	e8 0f 02 02 00       	call   0x10077ac0
100578b1:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
100578b7:	89 44 8e 34          	mov    DWORD PTR [esi+ecx*4+0x34],eax
100578bb:	e9 24 01 00 00       	jmp    0x100579e4
100578c0:	68 2c 07 00 00       	push   0x72c
100578c5:	e8 5f c0 04 00       	call   0x100a3929
100578ca:	83 c4 04             	add    esp,0x4
100578cd:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
100578d1:	85 c0                	test   eax,eax
100578d3:	c7 44 24 14 04 00 00 	mov    DWORD PTR [esp+0x14],0x4
100578da:	00 
100578db:	74 16                	je     0x100578f3
100578dd:	8b 53 0c             	mov    edx,DWORD PTR [ebx+0xc]
100578e0:	8b c8                	mov    ecx,eax
100578e2:	52                   	push   edx
100578e3:	6a ff                	push   0xffffffff
100578e5:	6a 00                	push   0x0
100578e7:	6a 01                	push   0x1
100578e9:	56                   	push   esi
100578ea:	e8 a1 09 02 00       	call   0x10078290
100578ef:	8b f8                	mov    edi,eax
100578f1:	eb 02                	jmp    0x100578f5
100578f3:	33 ff                	xor    edi,edi
100578f5:	8b 86 90 03 00 00    	mov    eax,DWORD PTR [esi+0x390]
100578fb:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
10057902:	ff 
10057903:	89 7c 86 34          	mov    DWORD PTR [esi+eax*4+0x34],edi
10057907:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
1005790a:	51                   	push   ecx
1005790b:	8b cf                	mov    ecx,edi
1005790d:	e8 1e 1a 02 00       	call   0x10079330
10057912:	a1 08 c3 11 10       	mov    eax,ds:0x1011c308
10057917:	89 3c 85 78 c1 11 10 	mov    DWORD PTR [eax*4+0x1011c178],edi
1005791e:	40                   	inc    eax
1005791f:	a3 08 c3 11 10       	mov    ds:0x1011c308,eax
10057924:	e9 bb 00 00 00       	jmp    0x100579e4
10057929:	68 48 01 00 00       	push   0x148
1005792e:	e8 f6 bf 04 00       	call   0x100a3929
10057933:	83 c4 04             	add    esp,0x4
10057936:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1005793a:	85 c0                	test   eax,eax
1005793c:	c7 44 24 14 05 00 00 	mov    DWORD PTR [esp+0x14],0x5
10057943:	00 
10057944:	74 11                	je     0x10057957
10057946:	6a ff                	push   0xffffffff
10057948:	57                   	push   edi
10057949:	6a 00                	push   0x0
1005794b:	6a 03                	push   0x3
1005794d:	56                   	push   esi
1005794e:	8b c8                	mov    ecx,eax
10057950:	e8 db e9 01 00       	call   0x10076330
10057955:	eb 02                	jmp    0x10057959
10057957:	33 c0                	xor    eax,eax
10057959:	8b 96 90 03 00 00    	mov    edx,DWORD PTR [esi+0x390]
1005795f:	89 44 96 34          	mov    DWORD PTR [esi+edx*4+0x34],eax
10057963:	83 c0 3c             	add    eax,0x3c
10057966:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
10057969:	eb 79                	jmp    0x100579e4
1005796b:	6a 44                	push   0x44
1005796d:	e8 b7 bf 04 00       	call   0x100a3929
10057972:	83 c4 04             	add    esp,0x4
10057975:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10057979:	85 c0                	test   eax,eax
1005797b:	c7 44 24 14 06 00 00 	mov    DWORD PTR [esp+0x14],0x6
10057982:	00 
10057983:	74 1d                	je     0x100579a2
10057985:	6a 00                	push   0x0
10057987:	6a 00                	push   0x0
10057989:	6a 00                	push   0x0
1005798b:	6a 03                	push   0x3
1005798d:	57                   	push   edi
1005798e:	56                   	push   esi
1005798f:	8b c8                	mov    ecx,eax
10057991:	e8 fa 8e 01 00       	call   0x10070890
10057996:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
1005799c:	89 44 8e 34          	mov    DWORD PTR [esi+ecx*4+0x34],eax
100579a0:	eb 42                	jmp    0x100579e4
100579a2:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
100579a8:	33 c0                	xor    eax,eax
100579aa:	89 44 8e 34          	mov    DWORD PTR [esi+ecx*4+0x34],eax
100579ae:	eb 34                	jmp    0x100579e4
100579b0:	6a 2c                	push   0x2c
100579b2:	e8 72 bf 04 00       	call   0x100a3929
100579b7:	83 c4 04             	add    esp,0x4
100579ba:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
100579be:	85 c0                	test   eax,eax
100579c0:	c7 44 24 14 07 00 00 	mov    DWORD PTR [esp+0x14],0x7
100579c7:	00 
100579c8:	74 0e                	je     0x100579d8
100579ca:	6a 00                	push   0x0
100579cc:	6a 00                	push   0x0
100579ce:	56                   	push   esi
100579cf:	8b c8                	mov    ecx,eax
100579d1:	e8 aa 69 01 00       	call   0x1006e380
100579d6:	eb 02                	jmp    0x100579da
100579d8:	33 c0                	xor    eax,eax
100579da:	8b 96 90 03 00 00    	mov    edx,DWORD PTR [esi+0x390]
100579e0:	89 44 96 34          	mov    DWORD PTR [esi+edx*4+0x34],eax
100579e4:	8b 86 90 03 00 00    	mov    eax,DWORD PTR [esi+0x390]
100579ea:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100579ee:	40                   	inc    eax
100579ef:	5f                   	pop    edi
100579f0:	89 86 90 03 00 00    	mov    DWORD PTR [esi+0x390],eax
100579f6:	5e                   	pop    esi
100579f7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100579fe:	5b                   	pop    ebx
100579ff:	83 c4 0c             	add    esp,0xc
10057a02:	c2 04 00             	ret    0x4
10057a05:	8d 49 00             	lea    ecx,[ecx+0x0]
10057a08:	de 77 05             	fidiv  WORD PTR [edi+0x5]
10057a0b:	10 10                	adc    BYTE PTR [eax],dl
10057a0d:	78 05                	js     0x10057a14
10057a0f:	10 52 78             	adc    BYTE PTR [edx+0x78],dl
10057a12:	05 10 84 78 05       	add    eax,0x5788410
10057a17:	10 b0 79 05 10 c0    	adc    BYTE PTR [eax-0x3feffa87],dh
10057a1d:	78 05                	js     0x10057a24
10057a1f:	10 29                	adc    BYTE PTR [ecx],ch
10057a21:	79 05                	jns    0x10057a28
10057a23:	10 6b 79             	adc    BYTE PTR [ebx+0x79],ch
10057a26:	05 10 90 90 90       	add    eax,0x90909010
10057a2b:	90                   	nop
10057a2c:	90                   	nop
10057a2d:	90                   	nop
10057a2e:	90                   	nop
10057a2f:	90                   	nop
10057a30:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10057a34:	8b 44 81 34          	mov    eax,DWORD PTR [ecx+eax*4+0x34]
10057a38:	c2 04 00             	ret    0x4
10057a3b:	90                   	nop
10057a3c:	90                   	nop
10057a3d:	90                   	nop
10057a3e:	90                   	nop
10057a3f:	90                   	nop
10057a40:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
10057a45:	8d 88 d0 81 01 00    	lea    ecx,[eax+0x181d0]
10057a4b:	85 c9                	test   ecx,ecx
10057a4d:	74 05                	je     0x10057a54
10057a4f:	e9 ac 3b fe ff       	jmp    0x1003b600
10057a54:	c3                   	ret
10057a55:	90                   	nop
10057a56:	90                   	nop
10057a57:	90                   	nop
10057a58:	90                   	nop
10057a59:	90                   	nop
10057a5a:	90                   	nop
10057a5b:	90                   	nop
10057a5c:	90                   	nop
10057a5d:	90                   	nop
10057a5e:	90                   	nop
10057a5f:	90                   	nop
10057a60:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10057a64:	56                   	push   esi
10057a65:	8b 74 81 34          	mov    esi,DWORD PTR [ecx+eax*4+0x34]
10057a69:	8b ce                	mov    ecx,esi
10057a6b:	e8 30 6e 01 00       	call   0x1006e8a0
10057a70:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10057a74:	85 c9                	test   ecx,ecx
10057a76:	74 13                	je     0x10057a8b
10057a78:	a8 02                	test   al,0x2
10057a7a:	75 1e                	jne    0x10057a9a
10057a7c:	6a 00                	push   0x0
10057a7e:	6a 02                	push   0x2
10057a80:	8b ce                	mov    ecx,esi
10057a82:	e8 f9 6c 01 00       	call   0x1006e780
10057a87:	5e                   	pop    esi
10057a88:	c2 08 00             	ret    0x8
10057a8b:	a8 02                	test   al,0x2
10057a8d:	74 0b                	je     0x10057a9a
10057a8f:	6a 02                	push   0x2
10057a91:	6a 00                	push   0x0
10057a93:	8b ce                	mov    ecx,esi
10057a95:	e8 e6 6c 01 00       	call   0x1006e780
10057a9a:	5e                   	pop    esi
10057a9b:	c2 08 00             	ret    0x8
10057a9e:	90                   	nop
10057a9f:	90                   	nop
10057aa0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10057aa4:	56                   	push   esi
10057aa5:	8b 74 81 34          	mov    esi,DWORD PTR [ecx+eax*4+0x34]
10057aa9:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10057aad:	51                   	push   ecx
10057aae:	8b ce                	mov    ecx,esi
10057ab0:	e8 0b f0 01 00       	call   0x10076ac0
10057ab5:	8b ce                	mov    ecx,esi
10057ab7:	e8 d4 f0 01 00       	call   0x10076b90
10057abc:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10057ac0:	8b ce                	mov    ecx,esi
10057ac2:	03 c2                	add    eax,edx
10057ac4:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10057ac8:	50                   	push   eax
10057ac9:	52                   	push   edx
10057aca:	e8 71 ef 01 00       	call   0x10076a40
10057acf:	5e                   	pop    esi
10057ad0:	c2 10 00             	ret    0x10
10057ad3:	90                   	nop
10057ad4:	90                   	nop
10057ad5:	90                   	nop
10057ad6:	90                   	nop
10057ad7:	90                   	nop
10057ad8:	90                   	nop
10057ad9:	90                   	nop
10057ada:	90                   	nop
10057adb:	90                   	nop
10057adc:	90                   	nop
10057add:	90                   	nop
10057ade:	90                   	nop
10057adf:	90                   	nop
10057ae0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10057ae4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10057ae8:	50                   	push   eax
10057ae9:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10057aed:	52                   	push   edx
10057aee:	8b 4c 81 34          	mov    ecx,DWORD PTR [ecx+eax*4+0x34]
10057af2:	e8 89 05 02 00       	call   0x10078080
10057af7:	c2 0c 00             	ret    0xc
10057afa:	90                   	nop
10057afb:	90                   	nop
10057afc:	90                   	nop
10057afd:	90                   	nop
10057afe:	90                   	nop
10057aff:	90                   	nop
10057b00:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10057b04:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10057b08:	50                   	push   eax
10057b09:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10057b0d:	52                   	push   edx
10057b0e:	8b 4c 81 34          	mov    ecx,DWORD PTR [ecx+eax*4+0x34]
10057b12:	e8 c9 05 02 00       	call   0x100780e0
10057b17:	c2 0c 00             	ret    0xc
10057b1a:	90                   	nop
10057b1b:	90                   	nop
10057b1c:	90                   	nop
10057b1d:	90                   	nop
10057b1e:	90                   	nop
10057b1f:	90                   	nop
10057b20:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10057b24:	8b 4c 81 34          	mov    ecx,DWORD PTR [ecx+eax*4+0x34]
10057b28:	e8 f3 05 02 00       	call   0x10078120
10057b2d:	c2 04 00             	ret    0x4
10057b30:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10057b34:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10057b38:	50                   	push   eax
10057b39:	8b 4c 91 34          	mov    ecx,DWORD PTR [ecx+edx*4+0x34]
10057b3d:	e8 1e 07 02 00       	call   0x10078260
10057b42:	c2 08 00             	ret    0x8
10057b45:	90                   	nop
10057b46:	90                   	nop
10057b47:	90                   	nop
10057b48:	90                   	nop
10057b49:	90                   	nop
10057b4a:	90                   	nop
10057b4b:	90                   	nop
10057b4c:	90                   	nop
10057b4d:	90                   	nop
10057b4e:	90                   	nop
10057b4f:	90                   	nop
10057b50:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10057b54:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10057b58:	50                   	push   eax
10057b59:	8b 4c 91 34          	mov    ecx,DWORD PTR [ecx+edx*4+0x34]
10057b5d:	e8 5e 06 02 00       	call   0x100781c0
10057b62:	c2 08 00             	ret    0x8
10057b65:	90                   	nop
10057b66:	90                   	nop
10057b67:	90                   	nop
10057b68:	90                   	nop
10057b69:	90                   	nop
10057b6a:	90                   	nop
10057b6b:	90                   	nop
10057b6c:	90                   	nop
10057b6d:	90                   	nop
10057b6e:	90                   	nop
10057b6f:	90                   	nop
10057b70:	56                   	push   esi
10057b71:	8b f1                	mov    esi,ecx
10057b73:	8d 46 1c             	lea    eax,[esi+0x1c]
10057b76:	50                   	push   eax
10057b77:	e8 d4 6a 01 00       	call   0x1006e650
10057b7c:	6a 00                	push   0x0
10057b7e:	6a 02                	push   0x2
10057b80:	8b ce                	mov    ecx,esi
10057b82:	e8 f9 6b 01 00       	call   0x1006e780
10057b87:	8b 16                	mov    edx,DWORD PTR [esi]
10057b89:	8b ce                	mov    ecx,esi
10057b8b:	ff 52 74             	call   DWORD PTR [edx+0x74]
10057b8e:	5e                   	pop    esi
10057b8f:	c3                   	ret
10057b90:	56                   	push   esi
10057b91:	6a 02                	push   0x2
10057b93:	8b f1                	mov    esi,ecx
10057b95:	6a 00                	push   0x0
10057b97:	e8 e4 6b 01 00       	call   0x1006e780
10057b9c:	8b 06                	mov    eax,DWORD PTR [esi]
10057b9e:	8b ce                	mov    ecx,esi
10057ba0:	ff 50 70             	call   DWORD PTR [eax+0x70]
10057ba3:	5e                   	pop    esi
10057ba4:	c3                   	ret
10057ba5:	90                   	nop
10057ba6:	90                   	nop
10057ba7:	90                   	nop
10057ba8:	90                   	nop
10057ba9:	90                   	nop
10057baa:	90                   	nop
10057bab:	90                   	nop
10057bac:	90                   	nop
10057bad:	90                   	nop
10057bae:	90                   	nop
10057baf:	90                   	nop
10057bb0:	83 ec 24             	sub    esp,0x24
10057bb3:	53                   	push   ebx
10057bb4:	55                   	push   ebp
10057bb5:	56                   	push   esi
10057bb6:	8b f1                	mov    esi,ecx
10057bb8:	57                   	push   edi
10057bb9:	c7 86 88 03 00 00 ff 	mov    DWORD PTR [esi+0x388],0xffffffff
10057bc0:	ff ff ff 
10057bc3:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10057bc9:	e8 42 78 01 00       	call   0x1006f410
10057bce:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
10057bd4:	8b 7c 24 38          	mov    edi,DWORD PTR [esp+0x38]
10057bd8:	81 fa 00 04 00 00    	cmp    edx,0x400
10057bde:	1b c0                	sbb    eax,eax
10057be0:	24 fe                	and    al,0xfe
10057be2:	83 c0 05             	add    eax,0x5
10057be5:	89 86 8c 03 00 00    	mov    DWORD PTR [esi+0x38c],eax
10057beb:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
10057bee:	89 8e 60 03 00 00    	mov    DWORD PTR [esi+0x360],ecx
10057bf4:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10057bf7:	8b 11                	mov    edx,DWORD PTR [ecx]
10057bf9:	ff 52 74             	call   DWORD PTR [edx+0x74]
10057bfc:	89 86 5c 03 00 00    	mov    DWORD PTR [esi+0x35c],eax
10057c02:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057c04:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
10057c07:	2b c8                	sub    ecx,eax
10057c09:	8b ae 8c 03 00 00    	mov    ebp,DWORD PTR [esi+0x38c]
10057c0f:	03 ca                	add    ecx,edx
10057c11:	89 8e 54 03 00 00    	mov    DWORD PTR [esi+0x354],ecx
10057c17:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10057c1a:	89 96 58 03 00 00    	mov    DWORD PTR [esi+0x358],edx
10057c20:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
10057c23:	2b cd                	sub    ecx,ebp
10057c25:	33 db                	xor    ebx,ebx
10057c27:	2b c8                	sub    ecx,eax
10057c29:	89 8e 6c 03 00 00    	mov    DWORD PTR [esi+0x36c],ecx
10057c2f:	8b 57 0c             	mov    edx,DWORD PTR [edi+0xc]
10057c32:	89 96 70 03 00 00    	mov    DWORD PTR [esi+0x370],edx
10057c38:	8b 07                	mov    eax,DWORD PTR [edi]
10057c3a:	89 86 64 03 00 00    	mov    DWORD PTR [esi+0x364],eax
10057c40:	8b 86 6c 03 00 00    	mov    eax,DWORD PTR [esi+0x36c]
10057c46:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10057c49:	89 9e 98 03 00 00    	mov    DWORD PTR [esi+0x398],ebx
10057c4f:	99                   	cdq
10057c50:	2b c2                	sub    eax,edx
10057c52:	8b 96 64 03 00 00    	mov    edx,DWORD PTR [esi+0x364]
10057c58:	d1 f8                	sar    eax,1
10057c5a:	03 c2                	add    eax,edx
10057c5c:	8b 96 70 03 00 00    	mov    edx,DWORD PTR [esi+0x370]
10057c62:	89 86 84 03 00 00    	mov    DWORD PTR [esi+0x384],eax
10057c68:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10057c6c:	8b 86 94 03 00 00    	mov    eax,DWORD PTR [esi+0x394]
10057c72:	8d 54 11 ff          	lea    edx,[ecx+edx*1-0x1]
10057c76:	3b c3                	cmp    eax,ebx
10057c78:	89 8e 68 03 00 00    	mov    DWORD PTR [esi+0x368],ecx
10057c7e:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
10057c82:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10057c86:	7e 18                	jle    0x10057ca0
10057c88:	8d 7e 34             	lea    edi,[esi+0x34]
10057c8b:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057c8d:	e8 ee 6c 01 00       	call   0x1006e980
10057c92:	8b 86 94 03 00 00    	mov    eax,DWORD PTR [esi+0x394]
10057c98:	43                   	inc    ebx
10057c99:	83 c7 04             	add    edi,0x4
10057c9c:	3b d8                	cmp    ebx,eax
10057c9e:	7c eb                	jl     0x10057c8b
10057ca0:	3b 9e 90 03 00 00    	cmp    ebx,DWORD PTR [esi+0x390]
10057ca6:	0f 8d 45 01 00 00    	jge    0x10057df1
10057cac:	8d 7c 9e 34          	lea    edi,[esi+ebx*4+0x34]
10057cb0:	8b 87 90 01 00 00    	mov    eax,DWORD PTR [edi+0x190]
10057cb6:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057cb8:	8b 00                	mov    eax,DWORD PTR [eax]
10057cba:	83 f8 07             	cmp    eax,0x7
10057cbd:	77 32                	ja     0x10057cf1
10057cbf:	ff 24 85 c0 7e 05 10 	jmp    DWORD PTR [eax*4+0x10057ec0]
10057cc6:	8b 11                	mov    edx,DWORD PTR [ecx]
10057cc8:	ff 52 74             	call   DWORD PTR [edx+0x74]
10057ccb:	eb 32                	jmp    0x10057cff
10057ccd:	e8 4e ed 01 00       	call   0x10076a20
10057cd2:	eb 2b                	jmp    0x10057cff
10057cd4:	e8 a7 00 02 00       	call   0x10077d80
10057cd9:	eb 24                	jmp    0x10057cff
10057cdb:	e8 b0 e6 01 00       	call   0x10076390
10057ce0:	eb 1d                	jmp    0x10057cff
10057ce2:	e8 a9 e6 01 00       	call   0x10076390
10057ce7:	eb 16                	jmp    0x10057cff
10057ce9:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10057cef:	eb 06                	jmp    0x10057cf7
10057cf1:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10057cf7:	e8 74 55 ff ff       	call   0x1004d270
10057cfc:	83 c0 04             	add    eax,0x4
10057cff:	8b 8e 8c 03 00 00    	mov    ecx,DWORD PTR [esi+0x38c]
10057d05:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10057d09:	8d 2c 48             	lea    ebp,[eax+ecx*2]
10057d0c:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
10057d10:	8d 04 2a             	lea    eax,[edx+ebp*1]
10057d13:	3b c1                	cmp    eax,ecx
10057d15:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10057d19:	0f 8f d2 00 00 00    	jg     0x10057df1
10057d1f:	8b 87 90 01 00 00    	mov    eax,DWORD PTR [edi+0x190]
10057d25:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057d27:	83 38 00             	cmp    DWORD PTR [eax],0x0
10057d2a:	74 15                	je     0x10057d41
10057d2c:	81 3d 58 be 11 10 00 	cmp    DWORD PTR ds:0x1011be58,0x400
10057d33:	04 00 00 
10057d36:	1b c0                	sbb    eax,eax
10057d38:	24 bc                	and    al,0xbc
10057d3a:	05 c4 00 00 00       	add    eax,0xc4
10057d3f:	eb 05                	jmp    0x10057d46
10057d41:	8b 11                	mov    edx,DWORD PTR [ecx]
10057d43:	ff 52 74             	call   DWORD PTR [edx+0x74]
10057d46:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057d48:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10057d4c:	8b 87 90 01 00 00    	mov    eax,DWORD PTR [edi+0x190]
10057d52:	8b 00                	mov    eax,DWORD PTR [eax]
10057d54:	83 f8 07             	cmp    eax,0x7
10057d57:	77 32                	ja     0x10057d8b
10057d59:	ff 24 85 e0 7e 05 10 	jmp    DWORD PTR [eax*4+0x10057ee0]
10057d60:	8b 11                	mov    edx,DWORD PTR [ecx]
10057d62:	ff 52 74             	call   DWORD PTR [edx+0x74]
10057d65:	eb 32                	jmp    0x10057d99
10057d67:	e8 b4 ec 01 00       	call   0x10076a20
10057d6c:	eb 2b                	jmp    0x10057d99
10057d6e:	e8 0d 00 02 00       	call   0x10077d80
10057d73:	eb 24                	jmp    0x10057d99
10057d75:	e8 16 e6 01 00       	call   0x10076390
10057d7a:	eb 1d                	jmp    0x10057d99
10057d7c:	e8 0f e6 01 00       	call   0x10076390
10057d81:	eb 16                	jmp    0x10057d99
10057d83:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10057d89:	eb 06                	jmp    0x10057d91
10057d8b:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10057d91:	e8 da 54 ff ff       	call   0x1004d270
10057d96:	83 c0 04             	add    eax,0x4
10057d99:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10057d9d:	99                   	cdq
10057d9e:	2b c2                	sub    eax,edx
10057da0:	8b c8                	mov    ecx,eax
10057da2:	8b c5                	mov    eax,ebp
10057da4:	99                   	cdq
10057da5:	2b c2                	sub    eax,edx
10057da7:	8d 54 24 24          	lea    edx,[esp+0x24]
10057dab:	d1 f9                	sar    ecx,1
10057dad:	d1 f8                	sar    eax,1
10057daf:	2b c1                	sub    eax,ecx
10057db1:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10057db5:	03 c1                	add    eax,ecx
10057db7:	52                   	push   edx
10057db8:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10057dbc:	8b 86 98 03 00 00    	mov    eax,DWORD PTR [esi+0x398]
10057dc2:	40                   	inc    eax
10057dc3:	89 86 98 03 00 00    	mov    DWORD PTR [esi+0x398],eax
10057dc9:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057dcb:	e8 80 68 01 00       	call   0x1006e650
10057dd0:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057dd2:	e8 49 6c 01 00       	call   0x1006ea20
10057dd7:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10057ddb:	43                   	inc    ebx
10057ddc:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10057de0:	8b 86 90 03 00 00    	mov    eax,DWORD PTR [esi+0x390]
10057de6:	83 c7 04             	add    edi,0x4
10057de9:	3b d8                	cmp    ebx,eax
10057deb:	0f 8c bf fe ff ff    	jl     0x10057cb0
10057df1:	8b 86 90 03 00 00    	mov    eax,DWORD PTR [esi+0x390]
10057df7:	33 c9                	xor    ecx,ecx
10057df9:	3b d8                	cmp    ebx,eax
10057dfb:	0f 94 c1             	sete   cl
10057dfe:	3b d8                	cmp    ebx,eax
10057e00:	8b e9                	mov    ebp,ecx
10057e02:	7d 19                	jge    0x10057e1d
10057e04:	8d 7c 9e 34          	lea    edi,[esi+ebx*4+0x34]
10057e08:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057e0a:	e8 71 6b 01 00       	call   0x1006e980
10057e0f:	8b 86 90 03 00 00    	mov    eax,DWORD PTR [esi+0x390]
10057e15:	43                   	inc    ebx
10057e16:	83 c7 04             	add    edi,0x4
10057e19:	3b d8                	cmp    ebx,eax
10057e1b:	7c eb                	jl     0x10057e08
10057e1d:	8b 86 5c 03 00 00    	mov    eax,DWORD PTR [esi+0x35c]
10057e23:	8b 96 54 03 00 00    	mov    edx,DWORD PTR [esi+0x354]
10057e29:	8d 4c 24 14          	lea    ecx,[esp+0x14]
10057e2d:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10057e31:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10057e35:	8b 86 58 03 00 00    	mov    eax,DWORD PTR [esi+0x358]
10057e3b:	51                   	push   ecx
10057e3c:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10057e3f:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10057e43:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10057e47:	e8 04 68 01 00       	call   0x1006e650
10057e4c:	8b 96 58 03 00 00    	mov    edx,DWORD PTR [esi+0x358]
10057e52:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
10057e56:	8b be 60 03 00 00    	mov    edi,DWORD PTR [esi+0x360]
10057e5c:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10057e5f:	2b d3                	sub    edx,ebx
10057e61:	8d 44 24 14          	lea    eax,[esp+0x14]
10057e65:	03 d7                	add    edx,edi
10057e67:	50                   	push   eax
10057e68:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10057e6c:	e8 df 67 01 00       	call   0x1006e650
10057e71:	85 ed                	test   ebp,ebp
10057e73:	74 06                	je     0x10057e7b
10057e75:	6a 02                	push   0x2
10057e77:	6a 00                	push   0x0
10057e79:	eb 04                	jmp    0x10057e7f
10057e7b:	6a 00                	push   0x0
10057e7d:	6a 02                	push   0x2
10057e7f:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10057e82:	e8 f9 68 01 00       	call   0x1006e780
10057e87:	8b 86 94 03 00 00    	mov    eax,DWORD PTR [esi+0x394]
10057e8d:	85 c0                	test   eax,eax
10057e8f:	75 16                	jne    0x10057ea7
10057e91:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10057e94:	6a 02                	push   0x2
10057e96:	6a 00                	push   0x0
10057e98:	e8 e3 68 01 00       	call   0x1006e780
10057e9d:	5f                   	pop    edi
10057e9e:	5e                   	pop    esi
10057e9f:	5d                   	pop    ebp
10057ea0:	5b                   	pop    ebx
10057ea1:	83 c4 24             	add    esp,0x24
10057ea4:	c2 04 00             	ret    0x4
10057ea7:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10057eaa:	6a 00                	push   0x0
10057eac:	6a 02                	push   0x2
10057eae:	e8 cd 68 01 00       	call   0x1006e780
10057eb3:	5f                   	pop    edi
10057eb4:	5e                   	pop    esi
10057eb5:	5d                   	pop    ebp
10057eb6:	5b                   	pop    ebx
10057eb7:	83 c4 24             	add    esp,0x24
10057eba:	c2 04 00             	ret    0x4
10057ebd:	8d 49 00             	lea    ecx,[ecx+0x0]
10057ec0:	c6                   	(bad)
10057ec1:	7c 05                	jl     0x10057ec8
10057ec3:	10 cd                	adc    ch,cl
10057ec5:	7c 05                	jl     0x10057ecc
10057ec7:	10 d4                	adc    ah,dl
10057ec9:	7c 05                	jl     0x10057ed0
10057ecb:	10 d4                	adc    ah,dl
10057ecd:	7c 05                	jl     0x10057ed4
10057ecf:	10 e9                	adc    cl,ch
10057ed1:	7c 05                	jl     0x10057ed8
10057ed3:	10 db                	adc    bl,bl
10057ed5:	7c 05                	jl     0x10057edc
10057ed7:	10 e2                	adc    dl,ah
10057ed9:	7c 05                	jl     0x10057ee0
10057edb:	10 c6                	adc    dh,al
10057edd:	7c 05                	jl     0x10057ee4
10057edf:	10 60 7d             	adc    BYTE PTR [eax+0x7d],ah
10057ee2:	05 10 67 7d 05       	add    eax,0x57d6710
10057ee7:	10 6e 7d             	adc    BYTE PTR [esi+0x7d],ch
10057eea:	05 10 6e 7d 05       	add    eax,0x57d6e10
10057eef:	10 83 7d 05 10 75    	adc    BYTE PTR [ebx+0x7510057d],al
10057ef5:	7d 05                	jge    0x10057efc
10057ef7:	10 7c 7d 05          	adc    BYTE PTR [ebp+edi*2+0x5],bh
10057efb:	10 60 7d             	adc    BYTE PTR [eax+0x7d],ah
10057efe:	05 10 83 ec 18       	add    eax,0x18ec8310
10057f03:	8d 44 24 08          	lea    eax,[esp+0x8]
10057f07:	56                   	push   esi
10057f08:	8b f1                	mov    esi,ecx
10057f0a:	50                   	push   eax
10057f0b:	e8 b0 67 01 00       	call   0x1006e6c0
10057f10:	8b 8e 88 03 00 00    	mov    ecx,DWORD PTR [esi+0x388]
10057f16:	8b 86 64 03 00 00    	mov    eax,DWORD PTR [esi+0x364]
10057f1c:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
10057f20:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10057f24:	3b c8                	cmp    ecx,eax
10057f26:	c7 86 88 03 00 00 ff 	mov    DWORD PTR [esi+0x388],0xffffffff
10057f2d:	ff ff ff 
10057f30:	0f 8c 0a 01 00 00    	jl     0x10058040
10057f36:	8b 96 6c 03 00 00    	mov    edx,DWORD PTR [esi+0x36c]
10057f3c:	8d 44 02 ff          	lea    eax,[edx+eax*1-0x1]
10057f40:	3b c8                	cmp    ecx,eax
10057f42:	0f 8f f8 00 00 00    	jg     0x10058040
10057f48:	8b 8e 98 03 00 00    	mov    ecx,DWORD PTR [esi+0x398]
10057f4e:	8b 86 94 03 00 00    	mov    eax,DWORD PTR [esi+0x394]
10057f54:	53                   	push   ebx
10057f55:	55                   	push   ebp
10057f56:	8b ae 68 03 00 00    	mov    ebp,DWORD PTR [esi+0x368]
10057f5c:	57                   	push   edi
10057f5d:	85 c9                	test   ecx,ecx
10057f5f:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10057f63:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10057f6a:	00 
10057f6b:	0f 8e b3 00 00 00    	jle    0x10058024
10057f71:	8d 9c 86 c4 01 00 00 	lea    ebx,[esi+eax*4+0x1c4]
10057f78:	8b 3b                	mov    edi,DWORD PTR [ebx]
10057f7a:	8b 8b 70 fe ff ff    	mov    ecx,DWORD PTR [ebx-0x190]
10057f80:	8b 07                	mov    eax,DWORD PTR [edi]
10057f82:	83 f8 07             	cmp    eax,0x7
10057f85:	77 32                	ja     0x10057fb9
10057f87:	ff 24 85 48 80 05 10 	jmp    DWORD PTR [eax*4+0x10058048]
10057f8e:	8b 11                	mov    edx,DWORD PTR [ecx]
10057f90:	ff 52 74             	call   DWORD PTR [edx+0x74]
10057f93:	eb 32                	jmp    0x10057fc7
10057f95:	e8 86 ea 01 00       	call   0x10076a20
10057f9a:	eb 2b                	jmp    0x10057fc7
10057f9c:	e8 df fd 01 00       	call   0x10077d80
10057fa1:	eb 24                	jmp    0x10057fc7
10057fa3:	e8 e8 e3 01 00       	call   0x10076390
10057fa8:	eb 1d                	jmp    0x10057fc7
10057faa:	e8 e1 e3 01 00       	call   0x10076390
10057faf:	eb 16                	jmp    0x10057fc7
10057fb1:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10057fb7:	eb 06                	jmp    0x10057fbf
10057fb9:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10057fbf:	e8 ac 52 ff ff       	call   0x1004d270
10057fc4:	83 c0 04             	add    eax,0x4
10057fc7:	8b 8e 8c 03 00 00    	mov    ecx,DWORD PTR [esi+0x38c]
10057fcd:	8d 04 48             	lea    eax,[eax+ecx*2]
10057fd0:	8b 0f                	mov    ecx,DWORD PTR [edi]
10057fd2:	83 f9 04             	cmp    ecx,0x4
10057fd5:	74 10                	je     0x10057fe7
10057fd7:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
10057fdb:	3b cd                	cmp    ecx,ebp
10057fdd:	7c 08                	jl     0x10057fe7
10057fdf:	8d 54 28 ff          	lea    edx,[eax+ebp*1-0x1]
10057fe3:	3b ca                	cmp    ecx,edx
10057fe5:	7e 27                	jle    0x1005800e
10057fe7:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10057feb:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
10057fef:	03 e8                	add    ebp,eax
10057ff1:	8b 86 98 03 00 00    	mov    eax,DWORD PTR [esi+0x398]
10057ff7:	41                   	inc    ecx
10057ff8:	42                   	inc    edx
10057ff9:	83 c3 04             	add    ebx,0x4
10057ffc:	3b c8                	cmp    ecx,eax
10057ffe:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10058002:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
10058006:	0f 8c 6c ff ff ff    	jl     0x10057f78
1005800c:	eb 16                	jmp    0x10058024
1005800e:	89 86 80 03 00 00    	mov    DWORD PTR [esi+0x380],eax
10058014:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10058018:	89 ae 78 03 00 00    	mov    DWORD PTR [esi+0x378],ebp
1005801e:	89 86 88 03 00 00    	mov    DWORD PTR [esi+0x388],eax
10058024:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10058028:	8b 86 88 03 00 00    	mov    eax,DWORD PTR [esi+0x388]
1005802e:	5f                   	pop    edi
1005802f:	5d                   	pop    ebp
10058030:	3b c1                	cmp    eax,ecx
10058032:	5b                   	pop    ebx
10058033:	74 0b                	je     0x10058040
10058035:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1005803b:	e8 d0 73 01 00       	call   0x1006f410
10058040:	5e                   	pop    esi
10058041:	83 c4 18             	add    esp,0x18
10058044:	c2 0c 00             	ret    0xc
10058047:	90                   	nop
10058048:	8e 7f 05             	mov    ?,WORD PTR [edi+0x5]
1005804b:	10 95 7f 05 10 9c    	adc    BYTE PTR [ebp-0x63effa81],dl
10058051:	7f 05                	jg     0x10058058
10058053:	10 9c 7f 05 10 b1 7f 	adc    BYTE PTR [edi+edi*2+0x7fb11005],bl
1005805a:	05 10 a3 7f 05       	add    eax,0x57fa310
1005805f:	10 aa 7f 05 10 8e    	adc    BYTE PTR [edx-0x71effa81],ch
10058065:	7f 05                	jg     0x1005806c
10058067:	10 90 90 90 90 90    	adc    BYTE PTR [eax-0x6f6f6f70],dl
1005806d:	90                   	nop
1005806e:	90                   	nop
1005806f:	90                   	nop
10058070:	c7 81 88 03 00 00 ff 	mov    DWORD PTR [ecx+0x388],0xffffffff
10058077:	ff ff ff 
1005807a:	c3                   	ret
1005807b:	90                   	nop
1005807c:	90                   	nop
1005807d:	90                   	nop
1005807e:	90                   	nop
1005807f:	90                   	nop

*/
void BaseOptionScreen::AddOption() {
    // TODO: Implement AddOption
}

