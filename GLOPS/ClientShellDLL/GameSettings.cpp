#include "GameSettings.h"

// 0x1003aca0: GameSettings::Init
/*
1003aca0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1003aca4:	81 ec 24 03 00 00    	sub    esp,0x324
1003acaa:	53                   	push   ebx
1003acab:	55                   	push   ebp
1003acac:	56                   	push   esi
1003acad:	8b f1                	mov    esi,ecx
1003acaf:	57                   	push   edi
1003acb0:	68 bc 88 0d 10       	push   0x100d88bc
1003acb5:	89 86 04 01 00 00    	mov    DWORD PTR [esi+0x104],eax
1003acbb:	8b 84 24 40 03 00 00 	mov    eax,DWORD PTR [esp+0x340]
1003acc2:	89 86 08 01 00 00    	mov    DWORD PTR [esi+0x108],eax
1003acc8:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003acce:	33 db                	xor    ebx,ebx
1003acd0:	83 c4 04             	add    esp,0x4
1003acd3:	3b c3                	cmp    eax,ebx
1003acd5:	74 13                	je     0x1003acea
1003acd7:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003acdd:	50                   	push   eax
1003acde:	8b 11                	mov    edx,DWORD PTR [ecx]
1003ace0:	ff 92 d4 00 00 00    	call   DWORD PTR [edx+0xd4]
1003ace6:	8b f8                	mov    edi,eax
1003ace8:	eb 05                	jmp    0x1003acef
1003acea:	bf 28 80 0d 10       	mov    edi,0x100d8028
1003acef:	57                   	push   edi
1003acf0:	8d 84 24 38 01 00 00 	lea    eax,[esp+0x138]
1003acf7:	68 ac 88 0d 10       	push   0x100d88ac
1003acfc:	50                   	push   eax
1003acfd:	e8 59 91 06 00       	call   0x100a3e5b
1003ad02:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003ad08:	8d 8c 24 40 01 00 00 	lea    ecx,[esp+0x140]
1003ad0f:	51                   	push   ecx
1003ad10:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003ad16:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003ad1b:	68 8c 88 0d 10       	push   0x100d888c
1003ad20:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
1003ad26:	8d ae 83 00 00 00    	lea    ebp,[esi+0x83]
1003ad2c:	57                   	push   edi
1003ad2d:	68 70 88 0d 10       	push   0x100d8870
1003ad32:	55                   	push   ebp
1003ad33:	e8 23 91 06 00       	call   0x100a3e5b
1003ad38:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003ad3e:	55                   	push   ebp
1003ad3f:	ff 91 8c 00 00 00    	call   DWORD PTR [ecx+0x8c]
1003ad45:	83 c4 24             	add    esp,0x24
1003ad48:	83 f8 01             	cmp    eax,0x1
1003ad4b:	0f 85 9c 00 00 00    	jne    0x1003aded
1003ad51:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003ad57:	68 58 88 0d 10       	push   0x100d8858
1003ad5c:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
1003ad62:	83 c4 04             	add    esp,0x4
1003ad65:	83 f8 01             	cmp    eax,0x1
1003ad68:	75 16                	jne    0x1003ad80
1003ad6a:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003ad6f:	68 3c 88 0d 10       	push   0x100d883c
1003ad74:	50                   	push   eax
1003ad75:	8b 08                	mov    ecx,DWORD PTR [eax]
1003ad77:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1003ad7d:	83 c4 08             	add    esp,0x8
1003ad80:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003ad86:	68 1c 88 0d 10       	push   0x100d881c
1003ad8b:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
1003ad91:	83 c4 04             	add    esp,0x4
1003ad94:	83 f8 01             	cmp    eax,0x1
1003ad97:	75 16                	jne    0x1003adaf
1003ad99:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003ad9e:	68 f8 87 0d 10       	push   0x100d87f8
1003ada3:	50                   	push   eax
1003ada4:	8b 08                	mov    ecx,DWORD PTR [eax]
1003ada6:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1003adac:	83 c4 08             	add    esp,0x8
1003adaf:	6a 1e                	push   0x1e
1003adb1:	8d 54 24 18          	lea    edx,[esp+0x18]
1003adb5:	57                   	push   edi
1003adb6:	52                   	push   edx
1003adb7:	e8 64 8a 06 00       	call   0x100a3820
1003adbc:	8d 44 24 20          	lea    eax,[esp+0x20]
1003adc0:	8d 8c 24 40 01 00 00 	lea    ecx,[esp+0x140]
1003adc7:	50                   	push   eax
1003adc8:	68 f0 87 0d 10       	push   0x100d87f0
1003adcd:	51                   	push   ecx
1003adce:	88 5c 24 4a          	mov    BYTE PTR [esp+0x4a],bl
1003add2:	e8 84 90 06 00       	call   0x100a3e5b
1003add7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003addc:	8d 94 24 4c 01 00 00 	lea    edx,[esp+0x14c]
1003ade3:	52                   	push   edx
1003ade4:	ff 90 d4 02 00 00    	call   DWORD PTR [eax+0x2d4]
1003adea:	83 c4 1c             	add    esp,0x1c
1003aded:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
1003adf1:	bf 30 80 0d 10       	mov    edi,0x100d8030
1003adf6:	8b 17                	mov    edx,DWORD PTR [edi]
1003adf8:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1003adfd:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1003ae01:	51                   	push   ecx
1003ae02:	52                   	push   edx
1003ae03:	ff 90 60 02 00 00    	call   DWORD PTR [eax+0x260]
1003ae09:	83 c4 08             	add    esp,0x8
1003ae0c:	85 c0                	test   eax,eax
1003ae0e:	75 1b                	jne    0x1003ae2b
1003ae10:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1003ae14:	8b 17                	mov    edx,DWORD PTR [edi]
1003ae16:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1003ae1b:	83 c9 0a             	or     ecx,0xa
1003ae1e:	51                   	push   ecx
1003ae1f:	52                   	push   edx
1003ae20:	ff 90 64 02 00 00    	call   DWORD PTR [eax+0x264]
1003ae26:	e9 8c 00 00 00       	jmp    0x1003aeb7
1003ae2b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003ae31:	68 1d 01 00 00       	push   0x11d
1003ae36:	68 b8 87 0d 10       	push   0x100d87b8
1003ae3b:	8b 11                	mov    edx,DWORD PTR [ecx]
1003ae3d:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1003ae43:	8b 17                	mov    edx,DWORD PTR [edi]
1003ae45:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003ae4a:	52                   	push   edx
1003ae4b:	68 64 87 0d 10       	push   0x100d8764
1003ae50:	8b 08                	mov    ecx,DWORD PTR [eax]
1003ae52:	68 5c 87 0d 10       	push   0x100d875c
1003ae57:	50                   	push   eax
1003ae58:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1003ae5e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1003ae61:	8b 0f                	mov    ecx,DWORD PTR [edi]
1003ae63:	50                   	push   eax
1003ae64:	51                   	push   ecx
1003ae65:	8d 54 24 4c          	lea    edx,[esp+0x4c]
1003ae69:	68 08 55 0d 10       	push   0x100d5508
1003ae6e:	52                   	push   edx
1003ae6f:	e8 e7 8f 06 00       	call   0x100a3e5b
1003ae74:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003ae7a:	8d 44 24 54          	lea    eax,[esp+0x54]
1003ae7e:	50                   	push   eax
1003ae7f:	ff 91 d4 02 00 00    	call   DWORD PTR [ecx+0x2d4]
1003ae85:	8b 07                	mov    eax,DWORD PTR [edi]
1003ae87:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1003ae8d:	8d 54 24 34          	lea    edx,[esp+0x34]
1003ae91:	52                   	push   edx
1003ae92:	50                   	push   eax
1003ae93:	ff 91 60 02 00 00    	call   DWORD PTR [ecx+0x260]
1003ae99:	83 c4 2c             	add    esp,0x2c
1003ae9c:	85 c0                	test   eax,eax
1003ae9e:	75 1a                	jne    0x1003aeba
1003aea0:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1003aea4:	8b 07                	mov    eax,DWORD PTR [edi]
1003aea6:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1003aeac:	83 ca 0a             	or     edx,0xa
1003aeaf:	52                   	push   edx
1003aeb0:	50                   	push   eax
1003aeb1:	ff 91 64 02 00 00    	call   DWORD PTR [ecx+0x264]
1003aeb7:	83 c4 08             	add    esp,0x8
1003aeba:	83 c7 08             	add    edi,0x8
1003aebd:	81 ff 60 82 0d 10    	cmp    edi,0x100d8260
1003aec3:	0f 8c 2d ff ff ff    	jl     0x1003adf6
1003aec9:	8b 96 08 01 00 00    	mov    edx,DWORD PTR [esi+0x108]
1003aecf:	68 50 87 0d 10       	push   0x100d8750
1003aed4:	ff 92 5c 02 00 00    	call   DWORD PTR [edx+0x25c]
1003aeda:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003aee0:	83 c4 04             	add    esp,0x4
1003aee3:	8b 11                	mov    edx,DWORD PTR [ecx]
1003aee5:	50                   	push   eax
1003aee6:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003aeec:	e8 43 8f 06 00       	call   0x100a3e34
1003aef1:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
1003aef4:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003aefa:	68 40 87 0d 10       	push   0x100d8740
1003aeff:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003af05:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003af0b:	83 c4 04             	add    esp,0x4
1003af0e:	8b 11                	mov    edx,DWORD PTR [ecx]
1003af10:	50                   	push   eax
1003af11:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003af17:	e8 18 8f 06 00       	call   0x100a3e34
1003af1c:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1003af1f:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003af25:	68 34 87 0d 10       	push   0x100d8734
1003af2a:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003af30:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003af36:	83 c4 04             	add    esp,0x4
1003af39:	8b 11                	mov    edx,DWORD PTR [ecx]
1003af3b:	50                   	push   eax
1003af3c:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003af42:	e8 ed 8e 06 00       	call   0x100a3e34
1003af47:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
1003af4a:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003af50:	68 f8 85 0d 10       	push   0x100d85f8
1003af55:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003af5b:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003af61:	83 c4 04             	add    esp,0x4
1003af64:	8b 11                	mov    edx,DWORD PTR [ecx]
1003af66:	50                   	push   eax
1003af67:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003af6d:	e8 c2 8e 06 00       	call   0x100a3e34
1003af72:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
1003af75:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003af7b:	68 80 74 0d 10       	push   0x100d7480
1003af80:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003af86:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003af8c:	83 c4 04             	add    esp,0x4
1003af8f:	8b 11                	mov    edx,DWORD PTR [ecx]
1003af91:	50                   	push   eax
1003af92:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003af98:	e8 97 8e 06 00       	call   0x100a3e34
1003af9d:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
1003afa0:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003afa6:	68 08 68 0d 10       	push   0x100d6808
1003afab:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003afb1:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003afb7:	83 c4 04             	add    esp,0x4
1003afba:	8b 11                	mov    edx,DWORD PTR [ecx]
1003afbc:	50                   	push   eax
1003afbd:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003afc3:	e8 6c 8e 06 00       	call   0x100a3e34
1003afc8:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
1003afcb:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003afd1:	68 28 87 0d 10       	push   0x100d8728
1003afd6:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003afdc:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003afe2:	83 c4 04             	add    esp,0x4
1003afe5:	8b 11                	mov    edx,DWORD PTR [ecx]
1003afe7:	50                   	push   eax
1003afe8:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003afee:	e8 41 8e 06 00       	call   0x100a3e34
1003aff3:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
1003aff6:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003affc:	68 1c 87 0d 10       	push   0x100d871c
1003b001:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b007:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b00d:	83 c4 04             	add    esp,0x4
1003b010:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b012:	50                   	push   eax
1003b013:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b019:	e8 16 8e 06 00       	call   0x100a3e34
1003b01e:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
1003b021:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b027:	68 ec 85 0d 10       	push   0x100d85ec
1003b02c:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b032:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b038:	83 c4 04             	add    esp,0x4
1003b03b:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b03d:	50                   	push   eax
1003b03e:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b044:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b04a:	68 dc 85 0d 10       	push   0x100d85dc
1003b04f:	d9 5e 38             	fstp   DWORD PTR [esi+0x38]
1003b052:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b058:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b05e:	83 c4 04             	add    esp,0x4
1003b061:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b063:	50                   	push   eax
1003b064:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b06a:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b070:	68 34 84 0d 10       	push   0x100d8434
1003b075:	d9 5e 3c             	fstp   DWORD PTR [esi+0x3c]
1003b078:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b07e:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b084:	83 c4 04             	add    esp,0x4
1003b087:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b089:	50                   	push   eax
1003b08a:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b090:	e8 9f 8d 06 00       	call   0x100a3e34
1003b095:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
1003b098:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b09e:	68 8c 84 0d 10       	push   0x100d848c
1003b0a3:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b0a9:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b0af:	83 c4 04             	add    esp,0x4
1003b0b2:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b0b4:	50                   	push   eax
1003b0b5:	ff 92 d4 00 00 00    	call   DWORD PTR [edx+0xd4]
1003b0bb:	8d 7e 64             	lea    edi,[esi+0x64]
1003b0be:	6a 1e                	push   0x1e
1003b0c0:	50                   	push   eax
1003b0c1:	57                   	push   edi
1003b0c2:	e8 59 87 06 00       	call   0x100a3820
1003b0c7:	88 5f 1e             	mov    BYTE PTR [edi+0x1e],bl
1003b0ca:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b0d0:	68 10 87 0d 10       	push   0x100d8710
1003b0d5:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b0db:	83 c4 10             	add    esp,0x10
1003b0de:	3b c3                	cmp    eax,ebx
1003b0e0:	74 19                	je     0x1003b0fb
1003b0e2:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b0e8:	50                   	push   eax
1003b0e9:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b0eb:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b0f1:	e8 3e 8d 06 00       	call   0x100a3e34
1003b0f6:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
1003b0f9:	eb 2c                	jmp    0x1003b127
1003b0fb:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
1003b0fe:	8d 8c 24 34 02 00 00 	lea    ecx,[esp+0x234]
1003b105:	50                   	push   eax
1003b106:	68 00 87 0d 10       	push   0x100d8700
1003b10b:	51                   	push   ecx
1003b10c:	e8 4a 8d 06 00       	call   0x100a3e5b
1003b111:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003b116:	8d 94 24 40 02 00 00 	lea    edx,[esp+0x240]
1003b11d:	52                   	push   edx
1003b11e:	ff 90 d4 02 00 00    	call   DWORD PTR [eax+0x2d4]
1003b124:	83 c4 10             	add    esp,0x10
1003b127:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b12d:	68 98 82 0d 10       	push   0x100d8298
1003b132:	ff 91 5c 02 00 00    	call   DWORD PTR [ecx+0x25c]
1003b138:	83 c4 04             	add    esp,0x4
1003b13b:	85 c0                	test   eax,eax
1003b13d:	75 14                	jne    0x1003b153
1003b13f:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b145:	68 ec 86 0d 10       	push   0x100d86ec
1003b14a:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b150:	83 c4 04             	add    esp,0x4
1003b153:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b159:	68 74 82 0d 10       	push   0x100d8274
1003b15e:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b164:	83 c4 04             	add    esp,0x4
1003b167:	3b c3                	cmp    eax,ebx
1003b169:	bd 02 00 00 00       	mov    ebp,0x2
1003b16e:	75 3f                	jne    0x1003b1af
1003b170:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003b176:	68 dc 86 0d 10       	push   0x100d86dc
1003b17b:	ff 91 d4 02 00 00    	call   DWORD PTR [ecx+0x2d4]
1003b181:	6a 01                	push   0x1
1003b183:	8d 54 24 3c          	lea    edx,[esp+0x3c]
1003b187:	68 cc 86 0d 10       	push   0x100d86cc
1003b18c:	52                   	push   edx
1003b18d:	c7 46 20 01 00 00 00 	mov    DWORD PTR [esi+0x20],0x1
1003b194:	e8 c2 8c 06 00       	call   0x100a3e5b
1003b199:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003b19f:	8d 44 24 44          	lea    eax,[esp+0x44]
1003b1a3:	50                   	push   eax
1003b1a4:	ff 91 d4 02 00 00    	call   DWORD PTR [ecx+0x2d4]
1003b1aa:	83 c4 14             	add    esp,0x14
1003b1ad:	eb 4c                	jmp    0x1003b1fb
1003b1af:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b1b5:	50                   	push   eax
1003b1b6:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b1b8:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b1be:	e8 71 8c 06 00       	call   0x100a3e34
1003b1c3:	3b c3                	cmp    eax,ebx
1003b1c5:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
1003b1c8:	7d 03                	jge    0x1003b1cd
1003b1ca:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
1003b1cd:	39 6e 20             	cmp    DWORD PTR [esi+0x20],ebp
1003b1d0:	7e 03                	jle    0x1003b1d5
1003b1d2:	89 6e 20             	mov    DWORD PTR [esi+0x20],ebp
1003b1d5:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1003b1d8:	8d 4c 24 34          	lea    ecx,[esp+0x34]
1003b1dc:	50                   	push   eax
1003b1dd:	68 cc 86 0d 10       	push   0x100d86cc
1003b1e2:	51                   	push   ecx
1003b1e3:	e8 73 8c 06 00       	call   0x100a3e5b
1003b1e8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003b1ed:	8d 54 24 40          	lea    edx,[esp+0x40]
1003b1f1:	52                   	push   edx
1003b1f2:	ff 90 d4 02 00 00    	call   DWORD PTR [eax+0x2d4]
1003b1f8:	83 c4 10             	add    esp,0x10
1003b1fb:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b201:	68 bc 00 00 00       	push   0xbc
1003b206:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b208:	ff 92 90 01 00 00    	call   DWORD PTR [edx+0x190]
1003b20e:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b214:	8a 56 20             	mov    dl,BYTE PTR [esi+0x20]
1003b217:	8b f8                	mov    edi,eax
1003b219:	52                   	push   edx
1003b21a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b21c:	57                   	push   edi
1003b21d:	ff 50 08             	call   DWORD PTR [eax+0x8]
1003b220:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b226:	57                   	push   edi
1003b227:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b229:	ff 90 94 01 00 00    	call   DWORD PTR [eax+0x194]
1003b22f:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b235:	68 c0 86 0d 10       	push   0x100d86c0
1003b23a:	ff 91 5c 02 00 00    	call   DWORD PTR [ecx+0x25c]
1003b240:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b246:	83 c4 04             	add    esp,0x4
1003b249:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b24b:	50                   	push   eax
1003b24c:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b252:	e8 dd 8b 06 00       	call   0x100a3e34
1003b257:	8b f8                	mov    edi,eax
1003b259:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b25d:	57                   	push   edi
1003b25e:	68 b0 86 0d 10       	push   0x100d86b0
1003b263:	50                   	push   eax
1003b264:	e8 f2 8b 06 00       	call   0x100a3e5b
1003b269:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
1003b26c:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b272:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b276:	51                   	push   ecx
1003b277:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b27d:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b283:	68 fc 82 0d 10       	push   0x100d82fc
1003b288:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b28e:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b294:	83 c4 14             	add    esp,0x14
1003b297:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b299:	50                   	push   eax
1003b29a:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b2a0:	e8 8f 8b 06 00       	call   0x100a3e34
1003b2a5:	8b f8                	mov    edi,eax
1003b2a7:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b2ab:	57                   	push   edi
1003b2ac:	68 a4 86 0d 10       	push   0x100d86a4
1003b2b1:	50                   	push   eax
1003b2b2:	e8 a4 8b 06 00       	call   0x100a3e5b
1003b2b7:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
1003b2ba:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b2c0:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b2c4:	51                   	push   ecx
1003b2c5:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b2cb:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b2d1:	68 04 83 0d 10       	push   0x100d8304
1003b2d6:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b2dc:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b2e2:	83 c4 14             	add    esp,0x14
1003b2e5:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b2e7:	50                   	push   eax
1003b2e8:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b2ee:	e8 41 8b 06 00       	call   0x100a3e34
1003b2f3:	8b f8                	mov    edi,eax
1003b2f5:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b2f9:	57                   	push   edi
1003b2fa:	68 90 86 0d 10       	push   0x100d8690
1003b2ff:	50                   	push   eax
1003b300:	e8 56 8b 06 00       	call   0x100a3e5b
1003b305:	89 7e 0c             	mov    DWORD PTR [esi+0xc],edi
1003b308:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b30e:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b312:	51                   	push   ecx
1003b313:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b319:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b31f:	68 c4 82 0d 10       	push   0x100d82c4
1003b324:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b32a:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b330:	83 c4 14             	add    esp,0x14
1003b333:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b335:	50                   	push   eax
1003b336:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b33c:	e8 f3 8a 06 00       	call   0x100a3e34
1003b341:	89 46 58             	mov    DWORD PTR [esi+0x58],eax
1003b344:	8b 06                	mov    eax,DWORD PTR [esi]
1003b346:	3b c3                	cmp    eax,ebx
1003b348:	74 27                	je     0x1003b371
1003b34a:	53                   	push   ebx
1003b34b:	8d 44 24 38          	lea    eax,[esp+0x38]
1003b34f:	68 80 86 0d 10       	push   0x100d8680
1003b354:	50                   	push   eax
1003b355:	89 5e 50             	mov    DWORD PTR [esi+0x50],ebx
1003b358:	e8 fe 8a 06 00       	call   0x100a3e5b
1003b35d:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b363:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b367:	51                   	push   ecx
1003b368:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b36e:	83 c4 10             	add    esp,0x10
1003b371:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b377:	68 e4 82 0d 10       	push   0x100d82e4
1003b37c:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b382:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b388:	83 c4 04             	add    esp,0x4
1003b38b:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b38d:	50                   	push   eax
1003b38e:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b394:	e8 9b 8a 06 00       	call   0x100a3e34
1003b399:	89 46 50             	mov    DWORD PTR [esi+0x50],eax
1003b39c:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b3a2:	68 d8 82 0d 10       	push   0x100d82d8
1003b3a7:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b3ad:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b3b3:	83 c4 04             	add    esp,0x4
1003b3b6:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b3b8:	50                   	push   eax
1003b3b9:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b3bf:	e8 70 8a 06 00       	call   0x100a3e34
1003b3c4:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
1003b3c7:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b3cd:	68 18 86 0d 10       	push   0x100d8618
1003b3d2:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b3d8:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b3de:	83 c4 04             	add    esp,0x4
1003b3e1:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b3e3:	50                   	push   eax
1003b3e4:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b3ea:	e8 45 8a 06 00       	call   0x100a3e34
1003b3ef:	89 46 5c             	mov    DWORD PTR [esi+0x5c],eax
1003b3f2:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b3f8:	68 60 82 0d 10       	push   0x100d8260
1003b3fd:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b403:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b409:	83 c4 04             	add    esp,0x4
1003b40c:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b40e:	50                   	push   eax
1003b40f:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b415:	e8 1a 8a 06 00       	call   0x100a3e34
1003b41a:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
1003b41d:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b423:	68 60 82 0d 10       	push   0x100d8260
1003b428:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b42e:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b434:	83 c4 04             	add    esp,0x4
1003b437:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b439:	50                   	push   eax
1003b43a:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b440:	e8 ef 89 06 00       	call   0x100a3e34
1003b445:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
1003b448:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b44e:	68 28 84 0d 10       	push   0x100d8428
1003b453:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b459:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b45f:	83 c4 04             	add    esp,0x4
1003b462:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b464:	50                   	push   eax
1003b465:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b46b:	e8 c4 89 06 00       	call   0x100a3e34
1003b470:	8b f8                	mov    edi,eax
1003b472:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b476:	57                   	push   edi
1003b477:	68 70 86 0d 10       	push   0x100d8670
1003b47c:	50                   	push   eax
1003b47d:	e8 d9 89 06 00       	call   0x100a3e5b
1003b482:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b488:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b48c:	51                   	push   ecx
1003b48d:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b493:	57                   	push   edi
1003b494:	53                   	push   ebx
1003b495:	e8 36 2a 00 00       	call   0x1003ded0
1003b49a:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b4a0:	68 1c 84 0d 10       	push   0x100d841c
1003b4a5:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b4ab:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b4b1:	83 c4 1c             	add    esp,0x1c
1003b4b4:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b4b6:	50                   	push   eax
1003b4b7:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b4bd:	e8 72 89 06 00       	call   0x100a3e34
1003b4c2:	8b f8                	mov    edi,eax
1003b4c4:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b4c8:	57                   	push   edi
1003b4c9:	68 60 86 0d 10       	push   0x100d8660
1003b4ce:	50                   	push   eax
1003b4cf:	e8 87 89 06 00       	call   0x100a3e5b
1003b4d4:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b4da:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b4de:	51                   	push   ecx
1003b4df:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b4e5:	57                   	push   edi
1003b4e6:	6a 01                	push   0x1
1003b4e8:	e8 e3 29 00 00       	call   0x1003ded0
1003b4ed:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b4f3:	68 10 84 0d 10       	push   0x100d8410
1003b4f8:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b4fe:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b504:	83 c4 1c             	add    esp,0x1c
1003b507:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b509:	50                   	push   eax
1003b50a:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b510:	e8 1f 89 06 00       	call   0x100a3e34
1003b515:	8b f8                	mov    edi,eax
1003b517:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b51b:	57                   	push   edi
1003b51c:	68 54 86 0d 10       	push   0x100d8654
1003b521:	50                   	push   eax
1003b522:	e8 34 89 06 00       	call   0x100a3e5b
1003b527:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b52d:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b531:	51                   	push   ecx
1003b532:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b538:	57                   	push   edi
1003b539:	55                   	push   ebp
1003b53a:	e8 91 29 00 00       	call   0x1003ded0
1003b53f:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b545:	68 04 84 0d 10       	push   0x100d8404
1003b54a:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b550:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b556:	83 c4 1c             	add    esp,0x1c
1003b559:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b55b:	50                   	push   eax
1003b55c:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b562:	e8 cd 88 06 00       	call   0x100a3e34
1003b567:	8b f8                	mov    edi,eax
1003b569:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b56d:	57                   	push   edi
1003b56e:	68 48 86 0d 10       	push   0x100d8648
1003b573:	50                   	push   eax
1003b574:	e8 e2 88 06 00       	call   0x100a3e5b
1003b579:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b57f:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b583:	51                   	push   ecx
1003b584:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b58a:	57                   	push   edi
1003b58b:	6a 03                	push   0x3
1003b58d:	e8 3e 29 00 00       	call   0x1003ded0
1003b592:	8b 86 08 01 00 00    	mov    eax,DWORD PTR [esi+0x108]
1003b598:	68 f8 83 0d 10       	push   0x100d83f8
1003b59d:	ff 90 5c 02 00 00    	call   DWORD PTR [eax+0x25c]
1003b5a3:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
1003b5a9:	83 c4 1c             	add    esp,0x1c
1003b5ac:	8b 11                	mov    edx,DWORD PTR [ecx]
1003b5ae:	50                   	push   eax
1003b5af:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1003b5b5:	e8 7a 88 06 00       	call   0x100a3e34
1003b5ba:	8b f0                	mov    esi,eax
1003b5bc:	8d 44 24 34          	lea    eax,[esp+0x34]
1003b5c0:	56                   	push   esi
1003b5c1:	68 38 86 0d 10       	push   0x100d8638
1003b5c6:	50                   	push   eax
1003b5c7:	e8 8f 88 06 00       	call   0x100a3e5b
1003b5cc:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003b5d2:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1003b5d6:	51                   	push   ecx
1003b5d7:	ff 92 d4 02 00 00    	call   DWORD PTR [edx+0x2d4]
1003b5dd:	56                   	push   esi
1003b5de:	6a 04                	push   0x4
1003b5e0:	e8 eb 28 00 00       	call   0x1003ded0
1003b5e5:	83 c4 18             	add    esp,0x18
1003b5e8:	5f                   	pop    edi
1003b5e9:	5e                   	pop    esi
1003b5ea:	5d                   	pop    ebp
1003b5eb:	5b                   	pop    ebx
1003b5ec:	81 c4 24 03 00 00    	add    esp,0x324
1003b5f2:	c2 08 00             	ret    0x8
1003b5f5:	90                   	nop
1003b5f6:	90                   	nop
1003b5f7:	90                   	nop
1003b5f8:	90                   	nop
1003b5f9:	90                   	nop
1003b5fa:	90                   	nop
1003b5fb:	90                   	nop
1003b5fc:	90                   	nop
1003b5fd:	90                   	nop
1003b5fe:	90                   	nop
1003b5ff:	90                   	nop

*/
#include <stdio.h>
#include <string.h>

void GameSettings::Init(HCONSOLEVAR hProfileVar, ILTClient* pClient) {
    m_pClient = pClient;
    m_hProfileVar = hProfileVar;

    char buf[256];
    const char* profileName = nullptr;

    if (hProfileVar) {
        profileName = m_pClient->GetVarValueString(hProfileVar);
    } else {
        profileName = "Mike"; // Fallback as seen in strings
    }

    sprintf(buf, "+profilename %s", profileName);
    m_pClient->RunConsoleString(buf);

    // Load defaults and profile configs
    m_pClient->RunConsoleString("globalops/defaultactions.cfg");
    
    sprintf(m_szProfileFileName, "globalops/profile/%s.cfg", profileName);
    m_pClient->RunConsoleString(m_szProfileFileName);

    // Read variables from engine
    m_nScreenWidth = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("ScreenWidth"));
    m_nScreenHeight = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("ScreenHeight"));
    m_nBitDepth = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("BitDepth"));
    m_nInvertMouse = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("InvertMouse"));
    m_nAlwaysRun = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("AlwaysRun"));
    m_nMouseLook = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("MouseLook"));
    m_nLookSpring = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("LookSpring"));
    m_nLookStrafe = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("LookStrafe"));
    m_fTurnRate = m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("turnrate"));
    m_fLookUpRate = m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("lookuprate"));
    m_nUseEAX = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("UseEAX"));
    
    strncpy(m_szName, m_pClient->GetVarValueString(m_pClient->GetConsoleVar("name")), 30);
    m_szName[30] = '\0';

    m_nWeaponKick = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("weaponkick"));
    
    // Validate SP settings
    int sp_completed = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("sp_completed"));
    if (sp_completed == 0) {
        m_pClient->RunConsoleString("+sp_completed -1");
    }

    int spdiff = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("spdifficulty"));
    if (spdiff == 0) {
        m_nSpDifficulty = 1;
        m_pClient->RunConsoleString("+spdifficulty 1");
    } else {
        m_nSpDifficulty = spdiff;
        if (m_nSpDifficulty < 0) m_nSpDifficulty = 0;
        if (m_nSpDifficulty > 2) m_nSpDifficulty = 2;
        sprintf(buf, "spdifficulty %d", m_nSpDifficulty);
        m_pClient->RunConsoleString(buf);
    }

    // Set engine state strings from variable loads
    m_nPlayerBadge = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("playerBadge"));
    sprintf(buf, "playerBadge %d", m_nPlayerBadge);
    m_pClient->RunConsoleString(buf);

    m_nBadge = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("Badge"));
    sprintf(buf, "Badge %d", m_nBadge);
    m_pClient->RunConsoleString(buf);

    m_nAllowDownloads = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("allowdownloads"));
    sprintf(buf, "allowdownloads %d", m_nAllowDownloads);
    m_pClient->RunConsoleString(buf);

    m_nHitPlayerIndicator = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("hitplayerindicator"));
    m_nBloodSpray = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("bloodspray"));
    m_nEjectShells = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("ejectshells"));
    m_nClientVoip = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("clientvoip"));
    m_nMuzzelFlashDLight = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar("MuzzelFlashDLight"));

    // Audio volumes mapping
    int volumes[5];
    const char* volumeNames[] = { "musicvolume", "soundvolume", "2dvolume", "3dvolume", "voicevolume" };
    
    for(int i = 0; i < 5; ++i) {
        volumes[i] = (int)m_pClient->GetVarValueFloat(m_pClient->GetConsoleVar(volumeNames[i]));
        sprintf(buf, "%s %d", volumeNames[i], volumes[i]);
        m_pClient->RunConsoleString(buf);
    }
}

