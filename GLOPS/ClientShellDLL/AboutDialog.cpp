#include "AboutDialog.h"

// 0x1003f030: AboutDialog::LoadLogos
/*
1003f030:	83 ec 0c             	sub    esp,0xc
1003f033:	a1 78 8c 0d 10       	mov    eax,ds:0x100d8c78
1003f038:	53                   	push   ebx
1003f039:	55                   	push   ebp
1003f03a:	56                   	push   esi
1003f03b:	8b f1                	mov    esi,ecx
1003f03d:	57                   	push   edi
1003f03e:	50                   	push   eax
1003f03f:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003f045:	e8 f6 65 03 00       	call   0x10075640
1003f04a:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
1003f050:	e8 8b fa ff ff       	call   0x1003eae0
1003f055:	c7 44 24 10 a8 9e 0d 	mov    DWORD PTR [esp+0x10],0x100d9ea8
1003f05c:	10 
1003f05d:	c7 44 24 14 84 9e 0d 	mov    DWORD PTR [esp+0x14],0x100d9e84
1003f064:	10 
1003f065:	c7 44 24 18 60 9e 0d 	mov    DWORD PTR [esp+0x18],0x100d9e60
1003f06c:	10 
1003f06d:	8d 5c 24 10          	lea    ebx,[esp+0x10]
1003f071:	8d be 00 01 00 00    	lea    edi,[esi+0x100]
1003f077:	bd 03 00 00 00       	mov    ebp,0x3
1003f07c:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1003f082:	8b 33                	mov    esi,DWORD PTR [ebx]
1003f084:	56                   	push   esi
1003f085:	57                   	push   edi
1003f086:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f088:	ff 52 08             	call   DWORD PTR [edx+0x8]
1003f08b:	85 c0                	test   eax,eax
1003f08d:	74 34                	je     0x1003f0c3
1003f08f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f095:	68 3a 02 00 00       	push   0x23a
1003f09a:	68 bc 9b 0d 10       	push   0x100d9bbc
1003f09f:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f0a1:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003f0a7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003f0ac:	56                   	push   esi
1003f0ad:	68 2c 9e 0d 10       	push   0x100d9e2c
1003f0b2:	68 7c 5d 0c 10       	push   0x100c5d7c
1003f0b7:	8b 08                	mov    ecx,DWORD PTR [eax]
1003f0b9:	50                   	push   eax
1003f0ba:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1003f0c0:	83 c4 10             	add    esp,0x10
1003f0c3:	83 c7 04             	add    edi,0x4
1003f0c6:	83 c3 04             	add    ebx,0x4
1003f0c9:	4d                   	dec    ebp
1003f0ca:	75 b0                	jne    0x1003f07c
1003f0cc:	5f                   	pop    edi
1003f0cd:	5e                   	pop    esi
1003f0ce:	5d                   	pop    ebp
1003f0cf:	5b                   	pop    ebx
1003f0d0:	83 c4 0c             	add    esp,0xc
1003f0d3:	c3                   	ret
1003f0d4:	90                   	nop
1003f0d5:	90                   	nop
1003f0d6:	90                   	nop
1003f0d7:	90                   	nop
1003f0d8:	90                   	nop
1003f0d9:	90                   	nop
1003f0da:	90                   	nop
1003f0db:	90                   	nop
1003f0dc:	90                   	nop
1003f0dd:	90                   	nop
1003f0de:	90                   	nop
1003f0df:	90                   	nop
1003f0e0:	53                   	push   ebx
1003f0e1:	8b d9                	mov    ebx,ecx
1003f0e3:	56                   	push   esi
1003f0e4:	57                   	push   edi
1003f0e5:	8b 8b f0 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf0]
1003f0eb:	6a 00                	push   0x0
1003f0ed:	e8 4e 65 03 00       	call   0x10075640
1003f0f2:	8b b3 fc 00 00 00    	mov    esi,DWORD PTR [ebx+0xfc]
1003f0f8:	33 ff                	xor    edi,edi
1003f0fa:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1003f0fd:	85 c0                	test   eax,eax
1003f0ff:	7e 1e                	jle    0x1003f11f
1003f101:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1003f104:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
1003f107:	85 c0                	test   eax,eax
1003f109:	74 0c                	je     0x1003f117
1003f10b:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1003f111:	50                   	push   eax
1003f112:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f114:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1003f117:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1003f11a:	47                   	inc    edi
1003f11b:	3b f8                	cmp    edi,eax
1003f11d:	7c e2                	jl     0x1003f101
1003f11f:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1003f122:	85 c0                	test   eax,eax
1003f124:	74 09                	je     0x1003f12f
1003f126:	50                   	push   eax
1003f127:	e8 f2 47 06 00       	call   0x100a391e
1003f12c:	83 c4 04             	add    esp,0x4
1003f12f:	c7 46 34 00 00 00 00 	mov    DWORD PTR [esi+0x34],0x0
1003f136:	c7 46 38 00 00 00 00 	mov    DWORD PTR [esi+0x38],0x0
1003f13d:	c7 46 30 ff ff ff ff 	mov    DWORD PTR [esi+0x30],0xffffffff
1003f144:	c7 46 2c 00 00 00 00 	mov    DWORD PTR [esi+0x2c],0x0
1003f14b:	8d b3 00 01 00 00    	lea    esi,[ebx+0x100]
1003f151:	bf 03 00 00 00       	mov    edi,0x3
1003f156:	8b 06                	mov    eax,DWORD PTR [esi]
1003f158:	85 c0                	test   eax,eax
1003f15a:	74 12                	je     0x1003f16e
1003f15c:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1003f162:	50                   	push   eax
1003f163:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f165:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1003f168:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1003f16e:	83 c6 04             	add    esi,0x4
1003f171:	4f                   	dec    edi
1003f172:	75 e2                	jne    0x1003f156
1003f174:	5f                   	pop    edi
1003f175:	5e                   	pop    esi
1003f176:	5b                   	pop    ebx
1003f177:	c3                   	ret
1003f178:	90                   	nop
1003f179:	90                   	nop
1003f17a:	90                   	nop
1003f17b:	90                   	nop
1003f17c:	90                   	nop
1003f17d:	90                   	nop
1003f17e:	90                   	nop
1003f17f:	90                   	nop
1003f180:	83 ec 50             	sub    esp,0x50
1003f183:	53                   	push   ebx
1003f184:	55                   	push   ebp
1003f185:	56                   	push   esi
1003f186:	8b 74 24 60          	mov    esi,DWORD PTR [esp+0x60]
1003f18a:	57                   	push   edi
1003f18b:	8b d9                	mov    ebx,ecx
1003f18d:	56                   	push   esi
1003f18e:	e8 8d 46 03 00       	call   0x10073820
1003f193:	8d 44 24 10          	lea    eax,[esp+0x10]
1003f197:	8b cb                	mov    ecx,ebx
1003f199:	50                   	push   eax
1003f19a:	56                   	push   esi
1003f19b:	e8 50 45 03 00       	call   0x100736f0
1003f1a0:	a1 1c a0 0d 10       	mov    eax,ds:0x100da01c
1003f1a5:	8b 2d 18 a0 0d 10    	mov    ebp,DWORD PTR ds:0x100da018
1003f1ab:	8d 0c 40             	lea    ecx,[eax+eax*2]
1003f1ae:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1003f1b3:	c1 e1 02             	shl    ecx,0x2
1003f1b6:	f7 e1                	mul    ecx
1003f1b8:	8b 8b f8 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf8]
1003f1be:	8d 74 6d 00          	lea    esi,[ebp+ebp*2+0x0]
1003f1c2:	8d 6c ed 00          	lea    ebp,[ebp+ebp*8+0x0]
1003f1c6:	8b fa                	mov    edi,edx
1003f1c8:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f1ca:	c1 e6 02             	shl    esi,0x2
1003f1cd:	c1 e5 04             	shl    ebp,0x4
1003f1d0:	c1 ee 0a             	shr    esi,0xa
1003f1d3:	c1 ef 09             	shr    edi,0x9
1003f1d6:	c1 ed 0a             	shr    ebp,0xa
1003f1d9:	ff 52 70             	call   DWORD PTR [edx+0x70]
1003f1dc:	3b c5                	cmp    eax,ebp
1003f1de:	7e 11                	jle    0x1003f1f1
1003f1e0:	8b 8b f8 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf8]
1003f1e6:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f1e8:	ff 50 70             	call   DWORD PTR [eax+0x70]
1003f1eb:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1003f1ef:	eb 04                	jmp    0x1003f1f5
1003f1f1:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
1003f1f5:	8b 8b f8 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf8]
1003f1fb:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f1fd:	ff 52 74             	call   DWORD PTR [edx+0x74]
1003f200:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1003f204:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1003f208:	8b c1                	mov    eax,ecx
1003f20a:	99                   	cdq
1003f20b:	2b c2                	sub    eax,edx
1003f20d:	8b e8                	mov    ebp,eax
1003f20f:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1003f213:	99                   	cdq
1003f214:	2b c2                	sub    eax,edx
1003f216:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1003f21a:	d1 fd                	sar    ebp,1
1003f21c:	d1 f8                	sar    eax,1
1003f21e:	2b e8                	sub    ebp,eax
1003f220:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1003f224:	03 e8                	add    ebp,eax
1003f226:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1003f22a:	2b c2                	sub    eax,edx
1003f22c:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1003f230:	2b c7                	sub    eax,edi
1003f232:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
1003f236:	03 c2                	add    eax,edx
1003f238:	8b 15 1c a0 0d 10    	mov    edx,DWORD PTR ds:0x100da01c
1003f23e:	8b 2d 18 a0 0d 10    	mov    ebp,DWORD PTR ds:0x100da018
1003f244:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1003f248:	c1 e2 08             	shl    edx,0x8
1003f24b:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1003f250:	f7 e2                	mul    edx
1003f252:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1003f256:	c1 e5 08             	shl    ebp,0x8
1003f259:	c1 ed 0a             	shr    ebp,0xa
1003f25c:	2b cd                	sub    ecx,ebp
1003f25e:	89 6c 24 58          	mov    DWORD PTR [esp+0x58],ebp
1003f262:	2b ce                	sub    ecx,esi
1003f264:	c1 ea 09             	shr    edx,0x9
1003f267:	03 c8                	add    ecx,eax
1003f269:	8b c2                	mov    eax,edx
1003f26b:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
1003f26f:	89 4c 24 50          	mov    DWORD PTR [esp+0x50],ecx
1003f273:	99                   	cdq
1003f274:	2b c2                	sub    eax,edx
1003f276:	8b e8                	mov    ebp,eax
1003f278:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1003f27c:	99                   	cdq
1003f27d:	2b c2                	sub    eax,edx
1003f27f:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1003f283:	d1 fd                	sar    ebp,1
1003f285:	d1 f8                	sar    eax,1
1003f287:	2b c5                	sub    eax,ebp
1003f289:	03 c2                	add    eax,edx
1003f28b:	03 d7                	add    edx,edi
1003f28d:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1003f291:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1003f295:	03 c6                	add    eax,esi
1003f297:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
1003f29b:	2b c8                	sub    ecx,eax
1003f29d:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1003f2a1:	2b ce                	sub    ecx,esi
1003f2a3:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1003f2a7:	51                   	push   ecx
1003f2a8:	8b 8b f4 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf4]
1003f2ae:	e8 5d a3 03 00       	call   0x10079610
1003f2b3:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
1003f2b7:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1003f2bb:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1003f2bf:	03 c2                	add    eax,edx
1003f2c1:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1003f2c5:	03 c7                	add    eax,edi
1003f2c7:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
1003f2cb:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
1003f2cf:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1003f2d3:	2b d0                	sub    edx,eax
1003f2d5:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1003f2d9:	2b d7                	sub    edx,edi
1003f2db:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
1003f2df:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
1003f2e3:	8d 2c 30             	lea    ebp,[eax+esi*1]
1003f2e6:	bf 03 00 00 00       	mov    edi,0x3
1003f2eb:	8d 8b 14 01 00 00    	lea    ecx,[ebx+0x114]
1003f2f1:	8b 15 18 a0 0d 10    	mov    edx,DWORD PTR ds:0x100da018
1003f2f7:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1003f2fc:	c1 e2 06             	shl    edx,0x6
1003f2ff:	c1 ea 0a             	shr    edx,0xa
1003f302:	89 11                	mov    DWORD PTR [ecx],edx
1003f304:	8b 15 1c a0 0d 10    	mov    edx,DWORD PTR ds:0x100da01c
1003f30a:	c1 e2 06             	shl    edx,0x6
1003f30d:	f7 e2                	mul    edx
1003f30f:	c1 ea 09             	shr    edx,0x9
1003f312:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
1003f315:	89 69 fc             	mov    DWORD PTR [ecx-0x4],ebp
1003f318:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f31a:	8b c6                	mov    eax,esi
1003f31c:	03 c2                	add    eax,edx
1003f31e:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1003f322:	0f af c7             	imul   eax,edi
1003f325:	2b d0                	sub    edx,eax
1003f327:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1003f32b:	03 d0                	add    edx,eax
1003f32d:	4f                   	dec    edi
1003f32e:	89 51 f8             	mov    DWORD PTR [ecx-0x8],edx
1003f331:	83 c1 10             	add    ecx,0x10
1003f334:	85 ff                	test   edi,edi
1003f336:	7f b9                	jg     0x1003f2f1
1003f338:	8b 8b f8 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf8]
1003f33e:	8d 44 24 20          	lea    eax,[esp+0x20]
1003f342:	50                   	push   eax
1003f343:	e8 08 f3 02 00       	call   0x1006e650
1003f348:	8d 4c 24 30          	lea    ecx,[esp+0x30]
1003f34c:	51                   	push   ecx
1003f34d:	8b 8b f4 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf4]
1003f353:	e8 f8 f2 02 00       	call   0x1006e650
1003f358:	8b 8b f0 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf0]
1003f35e:	8d 54 24 40          	lea    edx,[esp+0x40]
1003f362:	52                   	push   edx
1003f363:	e8 e8 f2 02 00       	call   0x1006e650
1003f368:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
1003f36e:	8d 44 24 50          	lea    eax,[esp+0x50]
1003f372:	50                   	push   eax
1003f373:	e8 d8 f2 02 00       	call   0x1006e650
1003f378:	5f                   	pop    edi
1003f379:	5e                   	pop    esi
1003f37a:	5d                   	pop    ebp
1003f37b:	5b                   	pop    ebx
1003f37c:	83 c4 50             	add    esp,0x50
1003f37f:	c2 04 00             	ret    0x4
1003f382:	90                   	nop
1003f383:	90                   	nop
1003f384:	90                   	nop
1003f385:	90                   	nop
1003f386:	90                   	nop
1003f387:	90                   	nop
1003f388:	90                   	nop
1003f389:	90                   	nop
1003f38a:	90                   	nop
1003f38b:	90                   	nop
1003f38c:	90                   	nop
1003f38d:	90                   	nop
1003f38e:	90                   	nop
1003f38f:	90                   	nop
1003f390:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1003f394:	53                   	push   ebx
1003f395:	56                   	push   esi
1003f396:	8b f1                	mov    esi,ecx
1003f398:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1003f39c:	57                   	push   edi
1003f39d:	50                   	push   eax
1003f39e:	51                   	push   ecx
1003f39f:	8b ce                	mov    ecx,esi
1003f3a1:	e8 1a 45 03 00       	call   0x100738c0
1003f3a6:	8d be 00 01 00 00    	lea    edi,[esi+0x100]
1003f3ac:	81 c6 14 01 00 00    	add    esi,0x114
1003f3b2:	bb 03 00 00 00       	mov    ebx,0x3
1003f3b7:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1003f3ba:	8b 06                	mov    eax,DWORD PTR [esi]
1003f3bc:	8b 4e fc             	mov    ecx,DWORD PTR [esi-0x4]
1003f3bf:	6a ff                	push   0xffffffff
1003f3c1:	6a 00                	push   0x0
1003f3c3:	52                   	push   edx
1003f3c4:	8b 56 f8             	mov    edx,DWORD PTR [esi-0x8]
1003f3c7:	50                   	push   eax
1003f3c8:	8b 07                	mov    eax,DWORD PTR [edi]
1003f3ca:	51                   	push   ecx
1003f3cb:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1003f3d1:	52                   	push   edx
1003f3d2:	50                   	push   eax
1003f3d3:	e8 b8 b2 00 00       	call   0x1004a690
1003f3d8:	83 c7 04             	add    edi,0x4
1003f3db:	83 c6 10             	add    esi,0x10
1003f3de:	4b                   	dec    ebx
1003f3df:	75 d6                	jne    0x1003f3b7
1003f3e1:	5f                   	pop    edi
1003f3e2:	5e                   	pop    esi
1003f3e3:	5b                   	pop    ebx
1003f3e4:	c2 08 00             	ret    0x8
1003f3e7:	90                   	nop
1003f3e8:	90                   	nop
1003f3e9:	90                   	nop
1003f3ea:	90                   	nop
1003f3eb:	90                   	nop
1003f3ec:	90                   	nop
1003f3ed:	90                   	nop
1003f3ee:	90                   	nop
1003f3ef:	90                   	nop
1003f3f0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1003f3f4:	85 c0                	test   eax,eax
1003f3f6:	75 07                	jne    0x1003f3ff
1003f3f8:	6a 00                	push   0x0
1003f3fa:	e8 a1 43 03 00       	call   0x100737a0
1003f3ff:	b8 01 00 00 00       	mov    eax,0x1
1003f404:	c2 08 00             	ret    0x8
1003f407:	90                   	nop
1003f408:	90                   	nop
1003f409:	90                   	nop
1003f40a:	90                   	nop
1003f40b:	90                   	nop
1003f40c:	90                   	nop
1003f40d:	90                   	nop
1003f40e:	90                   	nop
1003f40f:	90                   	nop
1003f410:	51                   	push   ecx
1003f411:	8b c1                	mov    eax,ecx
1003f413:	8a 4c 24 03          	mov    cl,BYTE PTR [esp+0x3]
1003f417:	88 08                	mov    BYTE PTR [eax],cl
1003f419:	33 c9                	xor    ecx,ecx
1003f41b:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
1003f41e:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1003f421:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1003f424:	59                   	pop    ecx
1003f425:	c3                   	ret
1003f426:	90                   	nop
1003f427:	90                   	nop
1003f428:	90                   	nop
1003f429:	90                   	nop
1003f42a:	90                   	nop
1003f42b:	90                   	nop
1003f42c:	90                   	nop
1003f42d:	90                   	nop
1003f42e:	90                   	nop
1003f42f:	90                   	nop
1003f430:	6a ff                	push   0xffffffff
1003f432:	68 20 40 0b 10       	push   0x100b4020
1003f437:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1003f43d:	50                   	push   eax
1003f43e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1003f445:	83 ec 14             	sub    esp,0x14
1003f448:	53                   	push   ebx
1003f449:	33 db                	xor    ebx,ebx
1003f44b:	56                   	push   esi
1003f44c:	8b f1                	mov    esi,ecx
1003f44e:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
1003f452:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
1003f456:	e8 e5 14 00 00       	call   0x10040940
1003f45b:	8b ce                	mov    ecx,esi
1003f45d:	e8 de 14 00 00       	call   0x10040940
1003f462:	85 c0                	test   eax,eax
1003f464:	76 0f                	jbe    0x1003f475
1003f466:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1003f469:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1003f46c:	50                   	push   eax
1003f46d:	51                   	push   ecx
1003f46e:	8b ce                	mov    ecx,esi
1003f470:	e8 bb 17 00 00       	call   0x10040c30
1003f475:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
1003f479:	c7 44 24 24 ff ff ff 	mov    DWORD PTR [esp+0x24],0xffffffff
1003f480:	ff 
1003f481:	e8 9a 01 00 00       	call   0x1003f620
1003f486:	53                   	push   ebx
1003f487:	8b ce                	mov    ecx,esi
1003f489:	e8 d2 13 00 00       	call   0x10040860
1003f48e:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1003f494:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1003f498:	52                   	push   edx
1003f499:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f49b:	ff 50 44             	call   DWORD PTR [eax+0x44]
1003f49e:	25 ff 00 00 00       	and    eax,0xff
1003f4a3:	0f 8e 59 01 00 00    	jle    0x1003f602
1003f4a9:	55                   	push   ebp
1003f4aa:	57                   	push   edi
1003f4ab:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1003f4af:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1003f4b5:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
1003f4b9:	52                   	push   edx
1003f4ba:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f4bc:	ff 50 64             	call   DWORD PTR [eax+0x64]
1003f4bf:	8b f8                	mov    edi,eax
1003f4c1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1003f4c4:	3b c3                	cmp    eax,ebx
1003f4c6:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
1003f4ca:	75 04                	jne    0x1003f4d0
1003f4cc:	33 c9                	xor    ecx,ecx
1003f4ce:	eb 08                	jmp    0x1003f4d8
1003f4d0:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1003f4d3:	2b c8                	sub    ecx,eax
1003f4d5:	c1 f9 02             	sar    ecx,0x2
1003f4d8:	3b c3                	cmp    eax,ebx
1003f4da:	74 14                	je     0x1003f4f0
1003f4dc:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
1003f4df:	2b d0                	sub    edx,eax
1003f4e1:	c1 fa 02             	sar    edx,0x2
1003f4e4:	3b ca                	cmp    ecx,edx
1003f4e6:	0f 82 a6 00 00 00    	jb     0x1003f592
1003f4ec:	3b c3                	cmp    eax,ebx
1003f4ee:	75 04                	jne    0x1003f4f4
1003f4f0:	33 c9                	xor    ecx,ecx
1003f4f2:	eb 08                	jmp    0x1003f4fc
1003f4f4:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1003f4f7:	2b c8                	sub    ecx,eax
1003f4f9:	c1 f9 02             	sar    ecx,0x2
1003f4fc:	8d 51 10             	lea    edx,[ecx+0x10]
1003f4ff:	3b c3                	cmp    eax,ebx
1003f501:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1003f505:	75 04                	jne    0x1003f50b
1003f507:	33 c9                	xor    ecx,ecx
1003f509:	eb 08                	jmp    0x1003f513
1003f50b:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1003f50e:	2b c8                	sub    ecx,eax
1003f510:	c1 f9 02             	sar    ecx,0x2
1003f513:	3b ca                	cmp    ecx,edx
1003f515:	73 7b                	jae    0x1003f592
1003f517:	3b d3                	cmp    edx,ebx
1003f519:	8b c2                	mov    eax,edx
1003f51b:	7d 02                	jge    0x1003f51f
1003f51d:	33 c0                	xor    eax,eax
1003f51f:	c1 e0 02             	shl    eax,0x2
1003f522:	50                   	push   eax
1003f523:	e8 01 44 06 00       	call   0x100a3929
1003f528:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
1003f52b:	8b e8                	mov    ebp,eax
1003f52d:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1003f530:	83 c4 04             	add    esp,0x4
1003f533:	3b f8                	cmp    edi,eax
1003f535:	8b dd                	mov    ebx,ebp
1003f537:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1003f53b:	74 18                	je     0x1003f555
1003f53d:	57                   	push   edi
1003f53e:	53                   	push   ebx
1003f53f:	e8 cc 17 00 00       	call   0x10040d10
1003f544:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1003f548:	83 c7 04             	add    edi,0x4
1003f54b:	83 c4 08             	add    esp,0x8
1003f54e:	83 c3 04             	add    ebx,0x4
1003f551:	3b f8                	cmp    edi,eax
1003f553:	75 e8                	jne    0x1003f53d
1003f555:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1003f558:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1003f55b:	51                   	push   ecx
1003f55c:	52                   	push   edx
1003f55d:	8b ce                	mov    ecx,esi
1003f55f:	e8 6c 17 00 00       	call   0x10040cd0
1003f564:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1003f567:	50                   	push   eax
1003f568:	e8 b1 43 06 00       	call   0x100a391e
1003f56d:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1003f571:	83 c4 04             	add    esp,0x4
1003f574:	8d 4c 85 00          	lea    ecx,[ebp+eax*4+0x0]
1003f578:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
1003f57b:	8b ce                	mov    ecx,esi
1003f57d:	e8 be 13 00 00       	call   0x10040940
1003f582:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
1003f586:	8d 54 85 00          	lea    edx,[ebp+eax*4+0x0]
1003f58a:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
1003f58d:	89 6e 04             	mov    DWORD PTR [esi+0x4],ebp
1003f590:	33 db                	xor    ebx,ebx
1003f592:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f598:	57                   	push   edi
1003f599:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f59b:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
1003f5a1:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1003f5a5:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1003f5a8:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1003f5ac:	51                   	push   ecx
1003f5ad:	6a 01                	push   0x1
1003f5af:	50                   	push   eax
1003f5b0:	8b ce                	mov    ecx,esi
1003f5b2:	c7 44 24 38 01 00 00 	mov    DWORD PTR [esp+0x38],0x1
1003f5b9:	00 
1003f5ba:	e8 a1 13 00 00       	call   0x10040960
1003f5bf:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1003f5c3:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
1003f5ca:	ff 
1003f5cb:	3b c3                	cmp    eax,ebx
1003f5cd:	74 13                	je     0x1003f5e2
1003f5cf:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f5d5:	50                   	push   eax
1003f5d6:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f5d8:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1003f5de:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
1003f5e2:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1003f5e8:	57                   	push   edi
1003f5e9:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f5eb:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
1003f5f1:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1003f5f5:	48                   	dec    eax
1003f5f6:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1003f5fa:	0f 85 af fe ff ff    	jne    0x1003f4af
1003f600:	5f                   	pop    edi
1003f601:	5d                   	pop    ebp
1003f602:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1003f606:	5e                   	pop    esi
1003f607:	5b                   	pop    ebx
1003f608:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1003f60f:	83 c4 20             	add    esp,0x20
1003f612:	c2 04 00             	ret    0x4
1003f615:	90                   	nop
1003f616:	90                   	nop
1003f617:	90                   	nop
1003f618:	90                   	nop
1003f619:	90                   	nop
1003f61a:	90                   	nop
1003f61b:	90                   	nop
1003f61c:	90                   	nop
1003f61d:	90                   	nop
1003f61e:	90                   	nop
1003f61f:	90                   	nop
1003f620:	56                   	push   esi
1003f621:	8b f1                	mov    esi,ecx
1003f623:	8b 06                	mov    eax,DWORD PTR [esi]
1003f625:	85 c0                	test   eax,eax
1003f627:	74 15                	je     0x1003f63e
1003f629:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f62f:	50                   	push   eax
1003f630:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f632:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1003f638:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1003f63e:	5e                   	pop    esi
1003f63f:	c3                   	ret
1003f640:	56                   	push   esi
1003f641:	8b f1                	mov    esi,ecx
1003f643:	8b 06                	mov    eax,DWORD PTR [esi]
1003f645:	85 c0                	test   eax,eax
1003f647:	74 15                	je     0x1003f65e
1003f649:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f64f:	50                   	push   eax
1003f650:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f652:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1003f658:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1003f65e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1003f662:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f668:	8b 00                	mov    eax,DWORD PTR [eax]
1003f66a:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f66c:	50                   	push   eax
1003f66d:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
1003f673:	89 06                	mov    DWORD PTR [esi],eax
1003f675:	8b c6                	mov    eax,esi
1003f677:	5e                   	pop    esi
1003f678:	c2 04 00             	ret    0x4
1003f67b:	90                   	nop
1003f67c:	90                   	nop
1003f67d:	90                   	nop
1003f67e:	90                   	nop
1003f67f:	90                   	nop
1003f680:	b9 98 bc 11 10       	mov    ecx,0x1011bc98
1003f685:	e8 86 fd ff ff       	call   0x1003f410
1003f68a:	68 a0 f6 03 10       	push   0x1003f6a0
1003f68f:	e8 f1 57 06 00       	call   0x100a4e85
1003f694:	59                   	pop    ecx
1003f695:	c3                   	ret
1003f696:	90                   	nop
1003f697:	90                   	nop
1003f698:	90                   	nop
1003f699:	90                   	nop
1003f69a:	90                   	nop
1003f69b:	90                   	nop
1003f69c:	90                   	nop
1003f69d:	90                   	nop
1003f69e:	90                   	nop
1003f69f:	90                   	nop
1003f6a0:	b9 98 bc 11 10       	mov    ecx,0x1011bc98
1003f6a5:	e9 06 00 00 00       	jmp    0x1003f6b0
1003f6aa:	90                   	nop
1003f6ab:	90                   	nop
1003f6ac:	90                   	nop
1003f6ad:	90                   	nop
1003f6ae:	90                   	nop
1003f6af:	90                   	nop
1003f6b0:	53                   	push   ebx
1003f6b1:	56                   	push   esi
1003f6b2:	57                   	push   edi
1003f6b3:	8b f9                	mov    edi,ecx
1003f6b5:	8b 5f 08             	mov    ebx,DWORD PTR [edi+0x8]
1003f6b8:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1003f6bb:	3b f3                	cmp    esi,ebx
1003f6bd:	74 22                	je     0x1003f6e1
1003f6bf:	8b 06                	mov    eax,DWORD PTR [esi]
1003f6c1:	85 c0                	test   eax,eax
1003f6c3:	74 15                	je     0x1003f6da
1003f6c5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f6cb:	50                   	push   eax
1003f6cc:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f6ce:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1003f6d4:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1003f6da:	83 c6 04             	add    esi,0x4
1003f6dd:	3b f3                	cmp    esi,ebx
1003f6df:	75 de                	jne    0x1003f6bf
1003f6e1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1003f6e4:	50                   	push   eax
1003f6e5:	e8 34 42 06 00       	call   0x100a391e
1003f6ea:	83 c4 04             	add    esp,0x4
1003f6ed:	c7 47 04 00 00 00 00 	mov    DWORD PTR [edi+0x4],0x0
1003f6f4:	c7 47 08 00 00 00 00 	mov    DWORD PTR [edi+0x8],0x0
1003f6fb:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
1003f702:	5f                   	pop    edi
1003f703:	5e                   	pop    esi
1003f704:	5b                   	pop    ebx
1003f705:	c3                   	ret
1003f706:	90                   	nop
1003f707:	90                   	nop
1003f708:	90                   	nop
1003f709:	90                   	nop
1003f70a:	90                   	nop
1003f70b:	90                   	nop
1003f70c:	90                   	nop
1003f70d:	90                   	nop
1003f70e:	90                   	nop
1003f70f:	90                   	nop
1003f710:	6a ff                	push   0xffffffff
1003f712:	68 67 40 0b 10       	push   0x100b4067
1003f717:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1003f71d:	50                   	push   eax
1003f71e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1003f725:	83 ec 14             	sub    esp,0x14
1003f728:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1003f72c:	53                   	push   ebx
1003f72d:	55                   	push   ebp
1003f72e:	56                   	push   esi
1003f72f:	57                   	push   edi
1003f730:	33 ff                	xor    edi,edi
1003f732:	8b f1                	mov    esi,ecx
1003f734:	57                   	push   edi
1003f735:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
1003f739:	57                   	push   edi
1003f73a:	50                   	push   eax
1003f73b:	51                   	push   ecx
1003f73c:	8b ce                	mov    ecx,esi
1003f73e:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
1003f742:	e8 49 3e 03 00       	call   0x10073590
1003f747:	8a 54 24 38          	mov    dl,BYTE PTR [esp+0x38]
1003f74b:	89 7c 24 2c          	mov    DWORD PTR [esp+0x2c],edi
1003f74f:	88 96 00 01 00 00    	mov    BYTE PTR [esi+0x100],dl
1003f755:	89 be 04 01 00 00    	mov    DWORD PTR [esi+0x104],edi
1003f75b:	89 be 08 01 00 00    	mov    DWORD PTR [esi+0x108],edi
1003f761:	89 be 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],edi
1003f767:	c7 06 54 8c 0b 10    	mov    DWORD PTR [esi],0x100b8c54
1003f76d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003f772:	bb 01 00 00 00       	mov    ebx,0x1
1003f777:	68 65 06 00 00       	push   0x665
1003f77c:	8b 08                	mov    ecx,DWORD PTR [eax]
1003f77e:	50                   	push   eax
1003f77f:	88 5c 24 34          	mov    BYTE PTR [esp+0x34],bl
1003f783:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1003f789:	8b e8                	mov    ebp,eax
1003f78b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003f790:	68 90 09 00 00       	push   0x990
1003f795:	50                   	push   eax
1003f796:	8b 10                	mov    edx,DWORD PTR [eax]
1003f798:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1003f79e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f7a4:	83 c4 10             	add    esp,0x10
1003f7a7:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1003f7ab:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f7ad:	55                   	push   ebp
1003f7ae:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1003f7b4:	50                   	push   eax
1003f7b5:	8b ce                	mov    ecx,esi
1003f7b7:	e8 04 3f 03 00       	call   0x100736c0
1003f7bc:	6a 44                	push   0x44
1003f7be:	e8 66 41 06 00       	call   0x100a3929
1003f7c3:	83 c4 04             	add    esp,0x4
1003f7c6:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1003f7ca:	3b c7                	cmp    eax,edi
1003f7cc:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
1003f7d1:	74 0f                	je     0x1003f7e2
1003f7d3:	57                   	push   edi
1003f7d4:	57                   	push   edi
1003f7d5:	57                   	push   edi
1003f7d6:	53                   	push   ebx
1003f7d7:	57                   	push   edi
1003f7d8:	56                   	push   esi
1003f7d9:	8b c8                	mov    ecx,eax
1003f7db:	e8 b0 10 03 00       	call   0x10070890
1003f7e0:	eb 02                	jmp    0x1003f7e4
1003f7e2:	33 c0                	xor    eax,eax
1003f7e4:	6a 44                	push   0x44
1003f7e6:	88 5c 24 30          	mov    BYTE PTR [esp+0x30],bl
1003f7ea:	89 86 f0 00 00 00    	mov    DWORD PTR [esi+0xf0],eax
1003f7f0:	e8 34 41 06 00       	call   0x100a3929
1003f7f5:	83 c4 04             	add    esp,0x4
1003f7f8:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1003f7fc:	3b c7                	cmp    eax,edi
1003f7fe:	c6 44 24 2c 03       	mov    BYTE PTR [esp+0x2c],0x3
1003f803:	74 10                	je     0x1003f815
1003f805:	57                   	push   edi
1003f806:	57                   	push   edi
1003f807:	57                   	push   edi
1003f808:	6a 03                	push   0x3
1003f80a:	53                   	push   ebx
1003f80b:	56                   	push   esi
1003f80c:	8b c8                	mov    ecx,eax
1003f80e:	e8 7d 10 03 00       	call   0x10070890
1003f813:	eb 02                	jmp    0x1003f817
1003f815:	33 c0                	xor    eax,eax
1003f817:	6a 54                	push   0x54
1003f819:	88 5c 24 30          	mov    BYTE PTR [esp+0x30],bl
1003f81d:	89 86 f4 00 00 00    	mov    DWORD PTR [esi+0xf4],eax
1003f823:	e8 01 41 06 00       	call   0x100a3929
1003f828:	83 c4 04             	add    esp,0x4
1003f82b:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1003f82f:	3b c7                	cmp    eax,edi
1003f831:	c6 44 24 2c 04       	mov    BYTE PTR [esp+0x2c],0x4
1003f836:	74 0f                	je     0x1003f847
1003f838:	6a 02                	push   0x2
1003f83a:	57                   	push   edi
1003f83b:	6a 03                	push   0x3
1003f83d:	56                   	push   esi
1003f83e:	8b c8                	mov    ecx,eax
1003f840:	e8 eb 51 03 00       	call   0x10074a30
1003f845:	eb 02                	jmp    0x1003f849
1003f847:	33 c0                	xor    eax,eax
1003f849:	89 86 f8 00 00 00    	mov    DWORD PTR [esi+0xf8],eax
1003f84f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f855:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
1003f859:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1003f85d:	c7 44 24 18 00 04 00 	mov    DWORD PTR [esp+0x18],0x400
1003f864:	00 
1003f865:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f867:	50                   	push   eax
1003f868:	88 5c 24 30          	mov    BYTE PTR [esp+0x30],bl
1003f86c:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1003f872:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1003f876:	53                   	push   ebx
1003f877:	51                   	push   ecx
1003f878:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003f87e:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1003f882:	89 7c 24 28          	mov    DWORD PTR [esp+0x28],edi
1003f886:	e8 25 54 03 00       	call   0x10074cb0
1003f88b:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003f891:	68 0f 06 00 00       	push   0x60f
1003f896:	e8 85 0e 03 00       	call   0x10070720
1003f89b:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1003f8a1:	68 a0 05 00 00       	push   0x5a0
1003f8a6:	e8 75 0e 03 00       	call   0x10070720
1003f8ab:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f8b1:	55                   	push   ebp
1003f8b2:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f8b4:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1003f8ba:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f8c0:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
1003f8c4:	52                   	push   edx
1003f8c5:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f8c7:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
1003f8cd:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1003f8d1:	8b c6                	mov    eax,esi
1003f8d3:	5f                   	pop    edi
1003f8d4:	5e                   	pop    esi
1003f8d5:	5d                   	pop    ebp
1003f8d6:	5b                   	pop    ebx
1003f8d7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1003f8de:	83 c4 20             	add    esp,0x20
1003f8e1:	c2 08 00             	ret    0x8
1003f8e4:	90                   	nop
1003f8e5:	90                   	nop
1003f8e6:	90                   	nop
1003f8e7:	90                   	nop
1003f8e8:	90                   	nop
1003f8e9:	90                   	nop
1003f8ea:	90                   	nop
1003f8eb:	90                   	nop
1003f8ec:	90                   	nop
1003f8ed:	90                   	nop
1003f8ee:	90                   	nop
1003f8ef:	90                   	nop
1003f8f0:	56                   	push   esi
1003f8f1:	8b f1                	mov    esi,ecx
1003f8f3:	e8 18 00 00 00       	call   0x1003f910
1003f8f8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1003f8fd:	74 09                	je     0x1003f908
1003f8ff:	56                   	push   esi
1003f900:	e8 19 40 06 00       	call   0x100a391e
1003f905:	83 c4 04             	add    esp,0x4
1003f908:	8b c6                	mov    eax,esi
1003f90a:	5e                   	pop    esi
1003f90b:	c2 04 00             	ret    0x4
1003f90e:	90                   	nop
1003f90f:	90                   	nop
1003f910:	6a ff                	push   0xffffffff
1003f912:	68 88 40 0b 10       	push   0x100b4088
1003f917:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1003f91d:	50                   	push   eax
1003f91e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1003f925:	51                   	push   ecx
1003f926:	53                   	push   ebx
1003f927:	55                   	push   ebp
1003f928:	56                   	push   esi
1003f929:	57                   	push   edi
1003f92a:	8b f9                	mov    edi,ecx
1003f92c:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1003f930:	8b 9f 08 01 00 00    	mov    ebx,DWORD PTR [edi+0x108]
1003f936:	8b b7 04 01 00 00    	mov    esi,DWORD PTR [edi+0x104]
1003f93c:	33 ed                	xor    ebp,ebp
1003f93e:	3b f3                	cmp    esi,ebx
1003f940:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
1003f944:	74 1e                	je     0x1003f964
1003f946:	8b 06                	mov    eax,DWORD PTR [esi]
1003f948:	3b c5                	cmp    eax,ebp
1003f94a:	74 11                	je     0x1003f95d
1003f94c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003f952:	50                   	push   eax
1003f953:	8b 11                	mov    edx,DWORD PTR [ecx]
1003f955:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1003f95b:	89 2e                	mov    DWORD PTR [esi],ebp
1003f95d:	83 c6 04             	add    esi,0x4
1003f960:	3b f3                	cmp    esi,ebx
1003f962:	75 e2                	jne    0x1003f946
1003f964:	8b 87 04 01 00 00    	mov    eax,DWORD PTR [edi+0x104]
1003f96a:	50                   	push   eax
1003f96b:	e8 ae 3f 06 00       	call   0x100a391e
1003f970:	83 c4 04             	add    esp,0x4
1003f973:	8b cf                	mov    ecx,edi
1003f975:	89 af 04 01 00 00    	mov    DWORD PTR [edi+0x104],ebp
1003f97b:	89 af 08 01 00 00    	mov    DWORD PTR [edi+0x108],ebp
1003f981:	89 af 0c 01 00 00    	mov    DWORD PTR [edi+0x10c],ebp
1003f987:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
1003f98e:	ff 
1003f98f:	e8 8c eb 02 00       	call   0x1006e520
1003f994:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1003f998:	5f                   	pop    edi
1003f999:	5e                   	pop    esi
1003f99a:	5d                   	pop    ebp
1003f99b:	5b                   	pop    ebx
1003f99c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1003f9a3:	83 c4 10             	add    esp,0x10
1003f9a6:	c3                   	ret
1003f9a7:	90                   	nop
1003f9a8:	90                   	nop
1003f9a9:	90                   	nop
1003f9aa:	90                   	nop
1003f9ab:	90                   	nop
1003f9ac:	90                   	nop
1003f9ad:	90                   	nop
1003f9ae:	90                   	nop
1003f9af:	90                   	nop
1003f9b0:	56                   	push   esi
1003f9b1:	8b f1                	mov    esi,ecx
1003f9b3:	6a 02                	push   0x2
1003f9b5:	6a 00                	push   0x0
1003f9b7:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003f9bd:	e8 be ed 02 00       	call   0x1006e780
1003f9c2:	c7 86 fc 00 00 00 ff 	mov    DWORD PTR [esi+0xfc],0xffffffff
1003f9c9:	ff ff ff 
1003f9cc:	8b 0d 9c bc 11 10    	mov    ecx,DWORD PTR ds:0x1011bc9c
1003f9d2:	85 c9                	test   ecx,ecx
1003f9d4:	75 10                	jne    0x1003f9e6
1003f9d6:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003f9dc:	33 c0                	xor    eax,eax
1003f9de:	50                   	push   eax
1003f9df:	e8 7c 53 03 00       	call   0x10074d60
1003f9e4:	5e                   	pop    esi
1003f9e5:	c3                   	ret
1003f9e6:	a1 a0 bc 11 10       	mov    eax,ds:0x1011bca0
1003f9eb:	2b c1                	sub    eax,ecx
1003f9ed:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003f9f3:	c1 f8 02             	sar    eax,0x2
1003f9f6:	50                   	push   eax
1003f9f7:	e8 64 53 03 00       	call   0x10074d60
1003f9fc:	5e                   	pop    esi
1003f9fd:	c3                   	ret
1003f9fe:	90                   	nop
1003f9ff:	90                   	nop
1003fa00:	51                   	push   ecx
1003fa01:	56                   	push   esi
1003fa02:	8b b1 fc 00 00 00    	mov    esi,DWORD PTR [ecx+0xfc]
1003fa08:	83 fe ff             	cmp    esi,0xffffffff
1003fa0b:	74 42                	je     0x1003fa4f
1003fa0d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003fa12:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1003fa15:	8d 44 24 04          	lea    eax,[esp+0x4]
1003fa19:	50                   	push   eax
1003fa1a:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fa1c:	ff 52 40             	call   DWORD PTR [edx+0x40]
1003fa1f:	85 c0                	test   eax,eax
1003fa21:	75 2c                	jne    0x1003fa4f
1003fa23:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1003fa27:	56                   	push   esi
1003fa28:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fa2a:	ff 52 40             	call   DWORD PTR [edx+0x40]
1003fa2d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003fa33:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1003fa37:	6a 02                	push   0x2
1003fa39:	68 f5 00 00 00       	push   0xf5
1003fa3e:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fa40:	52                   	push   edx
1003fa41:	ff 90 9c 01 00 00    	call   DWORD PTR [eax+0x19c]
1003fa47:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1003fa4b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fa4d:	ff 10                	call   DWORD PTR [eax]
1003fa4f:	5e                   	pop    esi
1003fa50:	59                   	pop    ecx
1003fa51:	c3                   	ret
1003fa52:	90                   	nop
1003fa53:	90                   	nop
1003fa54:	90                   	nop
1003fa55:	90                   	nop
1003fa56:	90                   	nop
1003fa57:	90                   	nop
1003fa58:	90                   	nop
1003fa59:	90                   	nop
1003fa5a:	90                   	nop
1003fa5b:	90                   	nop
1003fa5c:	90                   	nop
1003fa5d:	90                   	nop
1003fa5e:	90                   	nop
1003fa5f:	90                   	nop
1003fa60:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1003fa64:	56                   	push   esi
1003fa65:	83 e8 00             	sub    eax,0x0
1003fa68:	57                   	push   edi
1003fa69:	8b f1                	mov    esi,ecx
1003fa6b:	74 3c                	je     0x1003faa9
1003fa6d:	48                   	dec    eax
1003fa6e:	74 5d                	je     0x1003facd
1003fa70:	48                   	dec    eax
1003fa71:	75 3f                	jne    0x1003fab2
1003fa73:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1003fa77:	8b 07                	mov    eax,DWORD PTR [edi]
1003fa79:	85 c0                	test   eax,eax
1003fa7b:	74 3f                	je     0x1003fabc
1003fa7d:	83 f8 01             	cmp    eax,0x1
1003fa80:	76 30                	jbe    0x1003fab2
1003fa82:	83 f8 03             	cmp    eax,0x3
1003fa85:	77 2b                	ja     0x1003fab2
1003fa87:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1003fa8a:	89 86 fc 00 00 00    	mov    DWORD PTR [esi+0xfc],eax
1003fa90:	e8 4b 00 00 00       	call   0x1003fae0
1003fa95:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003fa9b:	6a 00                	push   0x0
1003fa9d:	6a 02                	push   0x2
1003fa9f:	e8 dc ec 02 00       	call   0x1006e780
1003faa4:	83 3f 03             	cmp    DWORD PTR [edi],0x3
1003faa7:	75 09                	jne    0x1003fab2
1003faa9:	6a 00                	push   0x0
1003faab:	8b ce                	mov    ecx,esi
1003faad:	e8 ee 3c 03 00       	call   0x100737a0
1003fab2:	5f                   	pop    edi
1003fab3:	b8 01 00 00 00       	mov    eax,0x1
1003fab8:	5e                   	pop    esi
1003fab9:	c2 08 00             	ret    0x8
1003fabc:	8b ce                	mov    ecx,esi
1003fabe:	e8 1d 00 00 00       	call   0x1003fae0
1003fac3:	5f                   	pop    edi
1003fac4:	b8 01 00 00 00       	mov    eax,0x1
1003fac9:	5e                   	pop    esi
1003faca:	c2 08 00             	ret    0x8
1003facd:	6a 01                	push   0x1
1003facf:	8b ce                	mov    ecx,esi
1003fad1:	e8 ca 3c 03 00       	call   0x100737a0
1003fad6:	5f                   	pop    edi
1003fad7:	b8 01 00 00 00       	mov    eax,0x1
1003fadc:	5e                   	pop    esi
1003fadd:	c2 08 00             	ret    0x8
1003fae0:	83 ec 10             	sub    esp,0x10
1003fae3:	53                   	push   ebx
1003fae4:	55                   	push   ebp
1003fae5:	56                   	push   esi
1003fae6:	57                   	push   edi
1003fae7:	8b f9                	mov    edi,ecx
1003fae9:	33 ed                	xor    ebp,ebp
1003faeb:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
1003faef:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
1003faf6:	ff 
1003faf7:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
1003fafd:	c7 44 24 18 34 74 0d 	mov    DWORD PTR [esp+0x18],0x100d7434
1003fb04:	10 
1003fb05:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
1003fb09:	e8 02 54 03 00       	call   0x10074f10
1003fb0e:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
1003fb14:	8b f0                	mov    esi,eax
1003fb16:	e8 05 54 03 00       	call   0x10074f20
1003fb1b:	8d 5c 30 ff          	lea    ebx,[eax+esi*1-0x1]
1003fb1f:	3b f3                	cmp    esi,ebx
1003fb21:	7f 46                	jg     0x1003fb69
1003fb23:	8b 8f fc 00 00 00    	mov    ecx,DWORD PTR [edi+0xfc]
1003fb29:	33 c0                	xor    eax,eax
1003fb2b:	3b f1                	cmp    esi,ecx
1003fb2d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003fb33:	0f 94 c0             	sete   al
1003fb36:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1003fb3a:	a1 9c bc 11 10       	mov    eax,ds:0x1011bc9c
1003fb3f:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fb41:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
1003fb44:	50                   	push   eax
1003fb45:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1003fb4b:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1003fb4f:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1003fb53:	51                   	push   ecx
1003fb54:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
1003fb5a:	56                   	push   esi
1003fb5b:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1003fb5f:	e8 4c 53 03 00       	call   0x10074eb0
1003fb64:	46                   	inc    esi
1003fb65:	3b f3                	cmp    esi,ebx
1003fb67:	7e ba                	jle    0x1003fb23
1003fb69:	5f                   	pop    edi
1003fb6a:	5e                   	pop    esi
1003fb6b:	5d                   	pop    ebp
1003fb6c:	5b                   	pop    ebx
1003fb6d:	83 c4 10             	add    esp,0x10
1003fb70:	c3                   	ret
1003fb71:	90                   	nop
1003fb72:	90                   	nop
1003fb73:	90                   	nop
1003fb74:	90                   	nop
1003fb75:	90                   	nop
1003fb76:	90                   	nop
1003fb77:	90                   	nop
1003fb78:	90                   	nop
1003fb79:	90                   	nop
1003fb7a:	90                   	nop
1003fb7b:	90                   	nop
1003fb7c:	90                   	nop
1003fb7d:	90                   	nop
1003fb7e:	90                   	nop
1003fb7f:	90                   	nop
1003fb80:	6a ff                	push   0xffffffff
1003fb82:	68 c9 40 0b 10       	push   0x100b40c9
1003fb87:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1003fb8d:	50                   	push   eax
1003fb8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1003fb95:	83 ec 14             	sub    esp,0x14
1003fb98:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1003fb9c:	53                   	push   ebx
1003fb9d:	55                   	push   ebp
1003fb9e:	56                   	push   esi
1003fb9f:	33 db                	xor    ebx,ebx
1003fba1:	57                   	push   edi
1003fba2:	8b f1                	mov    esi,ecx
1003fba4:	53                   	push   ebx
1003fba5:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
1003fba9:	53                   	push   ebx
1003fbaa:	50                   	push   eax
1003fbab:	51                   	push   ecx
1003fbac:	8b ce                	mov    ecx,esi
1003fbae:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
1003fbb2:	e8 d9 39 03 00       	call   0x10073590
1003fbb7:	c7 06 d4 8c 0b 10    	mov    DWORD PTR [esi],0x100b8cd4
1003fbbd:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003fbc2:	68 66 06 00 00       	push   0x666
1003fbc7:	50                   	push   eax
1003fbc8:	8b 10                	mov    edx,DWORD PTR [eax]
1003fbca:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
1003fbce:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1003fbd4:	8b f8                	mov    edi,eax
1003fbd6:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003fbdb:	68 21 06 00 00       	push   0x621
1003fbe0:	50                   	push   eax
1003fbe1:	8b 08                	mov    ecx,DWORD PTR [eax]
1003fbe3:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1003fbe9:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003fbef:	83 c4 10             	add    esp,0x10
1003fbf2:	8b e8                	mov    ebp,eax
1003fbf4:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fbf6:	57                   	push   edi
1003fbf7:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1003fbfd:	50                   	push   eax
1003fbfe:	8b ce                	mov    ecx,esi
1003fc00:	e8 bb 3a 03 00       	call   0x100736c0
1003fc05:	6a 44                	push   0x44
1003fc07:	e8 1d 3d 06 00       	call   0x100a3929
1003fc0c:	83 c4 04             	add    esp,0x4
1003fc0f:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1003fc13:	3b c3                	cmp    eax,ebx
1003fc15:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
1003fc1a:	74 10                	je     0x1003fc2c
1003fc1c:	53                   	push   ebx
1003fc1d:	53                   	push   ebx
1003fc1e:	53                   	push   ebx
1003fc1f:	6a 01                	push   0x1
1003fc21:	53                   	push   ebx
1003fc22:	56                   	push   esi
1003fc23:	8b c8                	mov    ecx,eax
1003fc25:	e8 66 0c 03 00       	call   0x10070890
1003fc2a:	eb 02                	jmp    0x1003fc2e
1003fc2c:	33 c0                	xor    eax,eax
1003fc2e:	6a 44                	push   0x44
1003fc30:	88 5c 24 30          	mov    BYTE PTR [esp+0x30],bl
1003fc34:	89 86 f0 00 00 00    	mov    DWORD PTR [esi+0xf0],eax
1003fc3a:	e8 ea 3c 06 00       	call   0x100a3929
1003fc3f:	83 c4 04             	add    esp,0x4
1003fc42:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1003fc46:	3b c3                	cmp    eax,ebx
1003fc48:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
1003fc4d:	74 11                	je     0x1003fc60
1003fc4f:	53                   	push   ebx
1003fc50:	53                   	push   ebx
1003fc51:	53                   	push   ebx
1003fc52:	6a 03                	push   0x3
1003fc54:	6a 01                	push   0x1
1003fc56:	56                   	push   esi
1003fc57:	8b c8                	mov    ecx,eax
1003fc59:	e8 32 0c 03 00       	call   0x10070890
1003fc5e:	eb 02                	jmp    0x1003fc62
1003fc60:	33 c0                	xor    eax,eax
1003fc62:	6a 54                	push   0x54
1003fc64:	88 5c 24 30          	mov    BYTE PTR [esp+0x30],bl
1003fc68:	89 86 f4 00 00 00    	mov    DWORD PTR [esi+0xf4],eax
1003fc6e:	e8 b6 3c 06 00       	call   0x100a3929
1003fc73:	83 c4 04             	add    esp,0x4
1003fc76:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1003fc7a:	3b c3                	cmp    eax,ebx
1003fc7c:	c6 44 24 2c 03       	mov    BYTE PTR [esp+0x2c],0x3
1003fc81:	74 0f                	je     0x1003fc92
1003fc83:	6a 02                	push   0x2
1003fc85:	53                   	push   ebx
1003fc86:	6a 03                	push   0x3
1003fc88:	56                   	push   esi
1003fc89:	8b c8                	mov    ecx,eax
1003fc8b:	e8 a0 4d 03 00       	call   0x10074a30
1003fc90:	eb 02                	jmp    0x1003fc94
1003fc92:	33 c0                	xor    eax,eax
1003fc94:	89 86 f8 00 00 00    	mov    DWORD PTR [esi+0xf8],eax
1003fc9a:	89 9e 00 01 00 00    	mov    DWORD PTR [esi+0x100],ebx
1003fca0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003fca6:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
1003fcad:	00 
1003fcae:	c7 44 24 18 00 04 00 	mov    DWORD PTR [esp+0x18],0x400
1003fcb5:	00 
1003fcb6:	55                   	push   ebp
1003fcb7:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fcb9:	88 5c 24 30          	mov    BYTE PTR [esp+0x30],bl
1003fcbd:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1003fcc3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1003fcc7:	6a 01                	push   0x1
1003fcc9:	51                   	push   ecx
1003fcca:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003fcd0:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1003fcd4:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
1003fcd8:	e8 d3 4f 03 00       	call   0x10074cb0
1003fcdd:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003fce3:	68 0f 06 00 00       	push   0x60f
1003fce8:	e8 33 0a 03 00       	call   0x10070720
1003fced:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1003fcf3:	68 a0 05 00 00       	push   0x5a0
1003fcf8:	e8 23 0a 03 00       	call   0x10070720
1003fcfd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003fd03:	57                   	push   edi
1003fd04:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fd06:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1003fd0c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003fd12:	55                   	push   ebp
1003fd13:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fd15:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
1003fd1b:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1003fd1f:	8b c6                	mov    eax,esi
1003fd21:	5f                   	pop    edi
1003fd22:	5e                   	pop    esi
1003fd23:	5d                   	pop    ebp
1003fd24:	5b                   	pop    ebx
1003fd25:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1003fd2c:	83 c4 20             	add    esp,0x20
1003fd2f:	c2 08 00             	ret    0x8
1003fd32:	90                   	nop
1003fd33:	90                   	nop
1003fd34:	90                   	nop
1003fd35:	90                   	nop
1003fd36:	90                   	nop
1003fd37:	90                   	nop
1003fd38:	90                   	nop
1003fd39:	90                   	nop
1003fd3a:	90                   	nop
1003fd3b:	90                   	nop
1003fd3c:	90                   	nop
1003fd3d:	90                   	nop
1003fd3e:	90                   	nop
1003fd3f:	90                   	nop
1003fd40:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1003fd46:	6a 00                	push   0x0
1003fd48:	e8 e3 8e ff ff       	call   0x10038c30
1003fd4d:	6a 01                	push   0x1
1003fd4f:	b9 68 4c 12 10       	mov    ecx,0x10124c68
1003fd54:	e8 37 09 05 00       	call   0x10090690
1003fd59:	c3                   	ret
1003fd5a:	90                   	nop
1003fd5b:	90                   	nop
1003fd5c:	90                   	nop
1003fd5d:	90                   	nop
1003fd5e:	90                   	nop
1003fd5f:	90                   	nop
1003fd60:	83 ec 10             	sub    esp,0x10
1003fd63:	56                   	push   esi
1003fd64:	8b 35 58 be 11 10    	mov    esi,DWORD PTR ds:0x1011be58
1003fd6a:	d1 ee                	shr    esi,1
1003fd6c:	8b c6                	mov    eax,esi
1003fd6e:	57                   	push   edi
1003fd6f:	8b 3d 54 be 11 10    	mov    edi,DWORD PTR ds:0x1011be54
1003fd75:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1003fd79:	99                   	cdq
1003fd7a:	2b c2                	sub    eax,edx
1003fd7c:	d1 f8                	sar    eax,1
1003fd7e:	d1 ef                	shr    edi,1
1003fd80:	2b f0                	sub    esi,eax
1003fd82:	8b c7                	mov    eax,edi
1003fd84:	99                   	cdq
1003fd85:	2b c2                	sub    eax,edx
1003fd87:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
1003fd8b:	d1 f8                	sar    eax,1
1003fd8d:	2b f8                	sub    edi,eax
1003fd8f:	8d 44 24 08          	lea    eax,[esp+0x8]
1003fd93:	50                   	push   eax
1003fd94:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
1003fd98:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1003fd9c:	e8 af e8 02 00       	call   0x1006e650
1003fda1:	5f                   	pop    edi
1003fda2:	5e                   	pop    esi
1003fda3:	83 c4 10             	add    esp,0x10
1003fda6:	c3                   	ret
1003fda7:	90                   	nop
1003fda8:	90                   	nop
1003fda9:	90                   	nop
1003fdaa:	90                   	nop
1003fdab:	90                   	nop
1003fdac:	90                   	nop
1003fdad:	90                   	nop
1003fdae:	90                   	nop
1003fdaf:	90                   	nop
1003fdb0:	56                   	push   esi
1003fdb1:	8b f1                	mov    esi,ecx
1003fdb3:	6a 02                	push   0x2
1003fdb5:	6a 00                	push   0x0
1003fdb7:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003fdbd:	e8 be e9 02 00       	call   0x1006e780
1003fdc2:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003fdc8:	6a 18                	push   0x18
1003fdca:	c7 86 fc 00 00 00 ff 	mov    DWORD PTR [esi+0xfc],0xffffffff
1003fdd1:	ff ff ff 
1003fdd4:	e8 87 4f 03 00       	call   0x10074d60
1003fdd9:	5e                   	pop    esi
1003fdda:	c3                   	ret
1003fddb:	90                   	nop
1003fddc:	90                   	nop
1003fddd:	90                   	nop
1003fdde:	90                   	nop
1003fddf:	90                   	nop
1003fde0:	51                   	push   ecx
1003fde1:	56                   	push   esi
1003fde2:	8b b1 fc 00 00 00    	mov    esi,DWORD PTR [ecx+0xfc]
1003fde8:	83 fe ff             	cmp    esi,0xffffffff
1003fdeb:	74 42                	je     0x1003fe2f
1003fded:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003fdf2:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1003fdf5:	8d 44 24 04          	lea    eax,[esp+0x4]
1003fdf9:	50                   	push   eax
1003fdfa:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fdfc:	ff 52 40             	call   DWORD PTR [edx+0x40]
1003fdff:	85 c0                	test   eax,eax
1003fe01:	75 2c                	jne    0x1003fe2f
1003fe03:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1003fe07:	56                   	push   esi
1003fe08:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fe0a:	ff 52 40             	call   DWORD PTR [edx+0x40]
1003fe0d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003fe13:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1003fe17:	6a 02                	push   0x2
1003fe19:	68 f6 00 00 00       	push   0xf6
1003fe1e:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fe20:	52                   	push   edx
1003fe21:	ff 90 9c 01 00 00    	call   DWORD PTR [eax+0x19c]
1003fe27:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1003fe2b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fe2d:	ff 10                	call   DWORD PTR [eax]
1003fe2f:	5e                   	pop    esi
1003fe30:	59                   	pop    ecx
1003fe31:	c3                   	ret
1003fe32:	90                   	nop
1003fe33:	90                   	nop
1003fe34:	90                   	nop
1003fe35:	90                   	nop
1003fe36:	90                   	nop
1003fe37:	90                   	nop
1003fe38:	90                   	nop
1003fe39:	90                   	nop
1003fe3a:	90                   	nop
1003fe3b:	90                   	nop
1003fe3c:	90                   	nop
1003fe3d:	90                   	nop
1003fe3e:	90                   	nop
1003fe3f:	90                   	nop
1003fe40:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
1003fe45:	83 ec 40             	sub    esp,0x40
1003fe48:	53                   	push   ebx
1003fe49:	8b 5c 24 48          	mov    ebx,DWORD PTR [esp+0x48]
1003fe4d:	55                   	push   ebp
1003fe4e:	56                   	push   esi
1003fe4f:	57                   	push   edi
1003fe50:	8d 3c 40             	lea    edi,[eax+eax*2]
1003fe53:	c1 e7 02             	shl    edi,0x2
1003fe56:	8b f1                	mov    esi,ecx
1003fe58:	53                   	push   ebx
1003fe59:	c1 ef 0a             	shr    edi,0xa
1003fe5c:	e8 bf 39 03 00       	call   0x10073820
1003fe61:	8d 44 24 10          	lea    eax,[esp+0x10]
1003fe65:	8b ce                	mov    ecx,esi
1003fe67:	50                   	push   eax
1003fe68:	53                   	push   ebx
1003fe69:	e8 82 38 03 00       	call   0x100736f0
1003fe6e:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1003fe74:	8b 1d 18 a0 0d 10    	mov    ebx,DWORD PTR ds:0x100da018
1003fe7a:	c1 e3 07             	shl    ebx,0x7
1003fe7d:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fe7f:	c1 eb 0a             	shr    ebx,0xa
1003fe82:	ff 52 70             	call   DWORD PTR [edx+0x70]
1003fe85:	3b d8                	cmp    ebx,eax
1003fe87:	7f 0d                	jg     0x1003fe96
1003fe89:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1003fe8f:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fe91:	ff 50 70             	call   DWORD PTR [eax+0x70]
1003fe94:	8b d8                	mov    ebx,eax
1003fe96:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003fe9c:	8b 11                	mov    edx,DWORD PTR [ecx]
1003fe9e:	ff 52 70             	call   DWORD PTR [edx+0x70]
1003fea1:	3b d8                	cmp    ebx,eax
1003fea3:	7f 0d                	jg     0x1003feb2
1003fea5:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003feab:	8b 01                	mov    eax,DWORD PTR [ecx]
1003fead:	ff 50 70             	call   DWORD PTR [eax+0x70]
1003feb0:	8b d8                	mov    ebx,eax
1003feb2:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003feb8:	8b 11                	mov    edx,DWORD PTR [ecx]
1003feba:	ff 52 74             	call   DWORD PTR [edx+0x74]
1003febd:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1003fec1:	8b 6c 24 14          	mov    ebp,DWORD PTR [esp+0x14]
1003fec5:	2b c8                	sub    ecx,eax
1003fec7:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1003fecb:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1003fecf:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1003fed3:	2b cf                	sub    ecx,edi
1003fed5:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
1003fed9:	8d 14 38             	lea    edx,[eax+edi*1]
1003fedc:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1003fee0:	03 cd                	add    ecx,ebp
1003fee2:	8b e8                	mov    ebp,eax
1003fee4:	2b eb                	sub    ebp,ebx
1003fee6:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
1003feea:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
1003feee:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1003fef2:	2b ef                	sub    ebp,edi
1003fef4:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
1003fef8:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1003fefc:	03 eb                	add    ebp,ebx
1003fefe:	03 d7                	add    edx,edi
1003ff00:	8d 1c 3f             	lea    ebx,[edi+edi*1]
1003ff03:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1003ff07:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
1003ff0b:	2b c3                	sub    eax,ebx
1003ff0d:	2b ca                	sub    ecx,edx
1003ff0f:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
1003ff13:	2b cf                	sub    ecx,edi
1003ff15:	8d 44 24 20          	lea    eax,[esp+0x20]
1003ff19:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
1003ff1d:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003ff23:	50                   	push   eax
1003ff24:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1003ff28:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
1003ff2c:	e8 1f e7 02 00       	call   0x1006e650
1003ff31:	8d 4c 24 30          	lea    ecx,[esp+0x30]
1003ff35:	51                   	push   ecx
1003ff36:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
1003ff3c:	e8 0f e7 02 00       	call   0x1006e650
1003ff41:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003ff47:	8d 54 24 40          	lea    edx,[esp+0x40]
1003ff4b:	52                   	push   edx
1003ff4c:	e8 ff e6 02 00       	call   0x1006e650
1003ff51:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003ff57:	e8 04 50 03 00       	call   0x10074f60
1003ff5c:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1003ff62:	50                   	push   eax
1003ff63:	6a 00                	push   0x0
1003ff65:	e8 c6 4d 03 00       	call   0x10074d30
1003ff6a:	5f                   	pop    edi
1003ff6b:	5e                   	pop    esi
1003ff6c:	5d                   	pop    ebp
1003ff6d:	5b                   	pop    ebx
1003ff6e:	83 c4 40             	add    esp,0x40
1003ff71:	c2 04 00             	ret    0x4
1003ff74:	90                   	nop
1003ff75:	90                   	nop
1003ff76:	90                   	nop
1003ff77:	90                   	nop
1003ff78:	90                   	nop
1003ff79:	90                   	nop
1003ff7a:	90                   	nop
1003ff7b:	90                   	nop
1003ff7c:	90                   	nop
1003ff7d:	90                   	nop
1003ff7e:	90                   	nop
1003ff7f:	90                   	nop
1003ff80:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1003ff84:	56                   	push   esi
1003ff85:	83 e8 00             	sub    eax,0x0
1003ff88:	57                   	push   edi
1003ff89:	8b f1                	mov    esi,ecx
1003ff8b:	74 5c                	je     0x1003ffe9
1003ff8d:	48                   	dec    eax
1003ff8e:	74 7d                	je     0x1004000d
1003ff90:	48                   	dec    eax
1003ff91:	75 5f                	jne    0x1003fff2
1003ff93:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1003ff97:	8b 07                	mov    eax,DWORD PTR [edi]
1003ff99:	85 c0                	test   eax,eax
1003ff9b:	74 5f                	je     0x1003fffc
1003ff9d:	83 f8 01             	cmp    eax,0x1
1003ffa0:	76 50                	jbe    0x1003fff2
1003ffa2:	83 f8 03             	cmp    eax,0x3
1003ffa5:	77 4b                	ja     0x1003fff2
1003ffa7:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1003ffad:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1003ffb0:	52                   	push   edx
1003ffb1:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ffb3:	ff 50 68             	call   DWORD PTR [eax+0x68]
1003ffb6:	85 c0                	test   eax,eax
1003ffb8:	74 23                	je     0x1003ffdd
1003ffba:	8b 10                	mov    edx,DWORD PTR [eax]
1003ffbc:	8b c8                	mov    ecx,eax
1003ffbe:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1003ffc1:	85 c0                	test   eax,eax
1003ffc3:	74 18                	je     0x1003ffdd
1003ffc5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1003ffc8:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1003ffce:	6a 00                	push   0x0
1003ffd0:	6a 02                	push   0x2
1003ffd2:	89 86 fc 00 00 00    	mov    DWORD PTR [esi+0xfc],eax
1003ffd8:	e8 a3 e7 02 00       	call   0x1006e780
1003ffdd:	8b ce                	mov    ecx,esi
1003ffdf:	e8 bc 00 00 00       	call   0x100400a0
1003ffe4:	83 3f 03             	cmp    DWORD PTR [edi],0x3
1003ffe7:	75 09                	jne    0x1003fff2
1003ffe9:	6a 00                	push   0x0
1003ffeb:	8b ce                	mov    ecx,esi
1003ffed:	e8 ae 37 03 00       	call   0x100737a0
1003fff2:	5f                   	pop    edi
1003fff3:	b8 01 00 00 00       	mov    eax,0x1
1003fff8:	5e                   	pop    esi
1003fff9:	c2 08 00             	ret    0x8
1003fffc:	8b ce                	mov    ecx,esi
1003fffe:	e8 9d 00 00 00       	call   0x100400a0
10040003:	5f                   	pop    edi
10040004:	b8 01 00 00 00       	mov    eax,0x1
10040009:	5e                   	pop    esi
1004000a:	c2 08 00             	ret    0x8
1004000d:	6a 01                	push   0x1
1004000f:	8b ce                	mov    ecx,esi
10040011:	e8 8a 37 03 00       	call   0x100737a0
10040016:	5f                   	pop    edi
10040017:	b8 01 00 00 00       	mov    eax,0x1
1004001c:	5e                   	pop    esi
1004001d:	c2 08 00             	ret    0x8
10040020:	51                   	push   ecx
10040021:	56                   	push   esi
10040022:	8b f1                	mov    esi,ecx
10040024:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004002a:	8b 01                	mov    eax,DWORD PTR [ecx]
1004002c:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
10040032:	d9 54 24 04          	fst    DWORD PTR [esp+0x4]
10040036:	d8 9e 00 01 00 00    	fcomp  DWORD PTR [esi+0x100]
1004003c:	df e0                	fnstsw ax
1004003e:	f6 c4 01             	test   ah,0x1
10040041:	75 56                	jne    0x10040099
10040043:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
10040049:	83 f8 ff             	cmp    eax,0xffffffff
1004004c:	74 34                	je     0x10040082
1004004e:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10040054:	50                   	push   eax
10040055:	8b 11                	mov    edx,DWORD PTR [ecx]
10040057:	ff 52 68             	call   DWORD PTR [edx+0x68]
1004005a:	85 c0                	test   eax,eax
1004005c:	74 0b                	je     0x10040069
1004005e:	8b 10                	mov    edx,DWORD PTR [eax]
10040060:	8b c8                	mov    ecx,eax
10040062:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
10040065:	85 c0                	test   eax,eax
10040067:	75 19                	jne    0x10040082
10040069:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1004006f:	6a 02                	push   0x2
10040071:	6a 00                	push   0x0
10040073:	c7 86 fc 00 00 00 ff 	mov    DWORD PTR [esi+0xfc],0xffffffff
1004007a:	ff ff ff 
1004007d:	e8 fe e6 02 00       	call   0x1006e780
10040082:	8b ce                	mov    ecx,esi
10040084:	e8 17 00 00 00       	call   0x100400a0
10040089:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1004008d:	d8 05 cc 83 0b 10    	fadd   DWORD PTR ds:0x100b83cc
10040093:	d9 9e 00 01 00 00    	fstp   DWORD PTR [esi+0x100]
10040099:	5e                   	pop    esi
1004009a:	59                   	pop    ecx
1004009b:	c2 04 00             	ret    0x4
1004009e:	90                   	nop
1004009f:	90                   	nop
100400a0:	83 ec 10             	sub    esp,0x10
100400a3:	55                   	push   ebp
100400a4:	56                   	push   esi
100400a5:	57                   	push   edi
100400a6:	8b f9                	mov    edi,ecx
100400a8:	33 c0                	xor    eax,eax
100400aa:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
100400b1:	ff 
100400b2:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
100400b8:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100400bc:	c7 44 24 14 34 74 0d 	mov    DWORD PTR [esp+0x14],0x100d7434
100400c3:	10 
100400c4:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100400c8:	e8 43 4e 03 00       	call   0x10074f10
100400cd:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
100400d3:	8b f0                	mov    esi,eax
100400d5:	e8 46 4e 03 00       	call   0x10074f20
100400da:	8d 6c 30 ff          	lea    ebp,[eax+esi*1-0x1]
100400de:	3b f5                	cmp    esi,ebp
100400e0:	7f 63                	jg     0x10040145
100400e2:	53                   	push   ebx
100400e3:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100400e9:	56                   	push   esi
100400ea:	8b 01                	mov    eax,DWORD PTR [ecx]
100400ec:	ff 50 68             	call   DWORD PTR [eax+0x68]
100400ef:	8b 97 fc 00 00 00    	mov    edx,DWORD PTR [edi+0xfc]
100400f5:	33 c9                	xor    ecx,ecx
100400f7:	3b f2                	cmp    esi,edx
100400f9:	8b d8                	mov    ebx,eax
100400fb:	0f 94 c1             	sete   cl
100400fe:	85 db                	test   ebx,ebx
10040100:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10040104:	74 18                	je     0x1004011e
10040106:	8b 13                	mov    edx,DWORD PTR [ebx]
10040108:	8b cb                	mov    ecx,ebx
1004010a:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1004010d:	85 c0                	test   eax,eax
1004010f:	74 0d                	je     0x1004011e
10040111:	8b 03                	mov    eax,DWORD PTR [ebx]
10040113:	8b cb                	mov    ecx,ebx
10040115:	ff 50 20             	call   DWORD PTR [eax+0x20]
10040118:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1004011c:	eb 08                	jmp    0x10040126
1004011e:	c7 44 24 18 34 74 0d 	mov    DWORD PTR [esp+0x18],0x100d7434
10040125:	10 
10040126:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1004012a:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
10040131:	00 
10040132:	51                   	push   ecx
10040133:	8b 8f f8 00 00 00    	mov    ecx,DWORD PTR [edi+0xf8]
10040139:	56                   	push   esi
1004013a:	e8 71 4d 03 00       	call   0x10074eb0
1004013f:	46                   	inc    esi
10040140:	3b f5                	cmp    esi,ebp
10040142:	7e 9f                	jle    0x100400e3
10040144:	5b                   	pop    ebx
10040145:	5f                   	pop    edi
10040146:	5e                   	pop    esi
10040147:	5d                   	pop    ebp
10040148:	83 c4 10             	add    esp,0x10
1004014b:	c3                   	ret
1004014c:	90                   	nop
1004014d:	90                   	nop
1004014e:	90                   	nop
1004014f:	90                   	nop
10040150:	8b c1                	mov    eax,ecx
10040152:	33 c9                	xor    ecx,ecx
10040154:	89 88 64 01 00 00    	mov    DWORD PTR [eax+0x164],ecx
1004015a:	89 88 68 01 00 00    	mov    DWORD PTR [eax+0x168],ecx
10040160:	89 88 6c 01 00 00    	mov    DWORD PTR [eax+0x16c],ecx
10040166:	89 88 70 01 00 00    	mov    DWORD PTR [eax+0x170],ecx
1004016c:	89 88 74 01 00 00    	mov    DWORD PTR [eax+0x174],ecx
10040172:	89 88 78 01 00 00    	mov    DWORD PTR [eax+0x178],ecx
10040178:	89 88 7c 01 00 00    	mov    DWORD PTR [eax+0x17c],ecx
1004017e:	89 08                	mov    DWORD PTR [eax],ecx
10040180:	c3                   	ret
10040181:	90                   	nop
10040182:	90                   	nop
10040183:	90                   	nop
10040184:	90                   	nop
10040185:	90                   	nop
10040186:	90                   	nop
10040187:	90                   	nop
10040188:	90                   	nop
10040189:	90                   	nop
1004018a:	90                   	nop
1004018b:	90                   	nop
1004018c:	90                   	nop
1004018d:	90                   	nop
1004018e:	90                   	nop
1004018f:	90                   	nop
10040190:	6a ff                	push   0xffffffff
10040192:	68 f6 40 0b 10       	push   0x100b40f6
10040197:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1004019d:	50                   	push   eax
1004019e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100401a5:	51                   	push   ecx
100401a6:	56                   	push   esi
100401a7:	8b f1                	mov    esi,ecx
100401a9:	57                   	push   edi
100401aa:	33 ff                	xor    edi,edi
100401ac:	8b 86 64 01 00 00    	mov    eax,DWORD PTR [esi+0x164]
100401b2:	3b c7                	cmp    eax,edi
100401b4:	74 15                	je     0x100401cb
100401b6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100401bc:	50                   	push   eax
100401bd:	8b 11                	mov    edx,DWORD PTR [ecx]
100401bf:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100401c5:	89 be 64 01 00 00    	mov    DWORD PTR [esi+0x164],edi
100401cb:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100401d0:	68 70 06 00 00       	push   0x670
100401d5:	50                   	push   eax
100401d6:	8b 08                	mov    ecx,DWORD PTR [eax]
100401d8:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
100401de:	89 86 64 01 00 00    	mov    DWORD PTR [esi+0x164],eax
100401e4:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
100401ea:	83 c4 08             	add    esp,0x8
100401ed:	3b c7                	cmp    eax,edi
100401ef:	74 15                	je     0x10040206
100401f1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100401f7:	50                   	push   eax
100401f8:	8b 11                	mov    edx,DWORD PTR [ecx]
100401fa:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040200:	89 be 68 01 00 00    	mov    DWORD PTR [esi+0x168],edi
10040206:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004020b:	68 0c 06 00 00       	push   0x60c
10040210:	50                   	push   eax
10040211:	8b 08                	mov    ecx,DWORD PTR [eax]
10040213:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10040219:	89 86 68 01 00 00    	mov    DWORD PTR [esi+0x168],eax
1004021f:	8b 86 6c 01 00 00    	mov    eax,DWORD PTR [esi+0x16c]
10040225:	83 c4 08             	add    esp,0x8
10040228:	3b c7                	cmp    eax,edi
1004022a:	74 15                	je     0x10040241
1004022c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040232:	50                   	push   eax
10040233:	8b 11                	mov    edx,DWORD PTR [ecx]
10040235:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1004023b:	89 be 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],edi
10040241:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10040246:	68 84 0a 00 00       	push   0xa84
1004024b:	50                   	push   eax
1004024c:	8b 08                	mov    ecx,DWORD PTR [eax]
1004024e:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10040254:	89 86 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],eax
1004025a:	8b 86 70 01 00 00    	mov    eax,DWORD PTR [esi+0x170]
10040260:	83 c4 08             	add    esp,0x8
10040263:	3b c7                	cmp    eax,edi
10040265:	74 15                	je     0x1004027c
10040267:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004026d:	50                   	push   eax
1004026e:	8b 11                	mov    edx,DWORD PTR [ecx]
10040270:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040276:	89 be 70 01 00 00    	mov    DWORD PTR [esi+0x170],edi
1004027c:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10040281:	68 82 0a 00 00       	push   0xa82
10040286:	50                   	push   eax
10040287:	8b 08                	mov    ecx,DWORD PTR [eax]
10040289:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1004028f:	89 86 70 01 00 00    	mov    DWORD PTR [esi+0x170],eax
10040295:	8b 86 74 01 00 00    	mov    eax,DWORD PTR [esi+0x174]
1004029b:	83 c4 08             	add    esp,0x8
1004029e:	3b c7                	cmp    eax,edi
100402a0:	74 15                	je     0x100402b7
100402a2:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100402a8:	50                   	push   eax
100402a9:	8b 11                	mov    edx,DWORD PTR [ecx]
100402ab:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100402b1:	89 be 74 01 00 00    	mov    DWORD PTR [esi+0x174],edi
100402b7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100402bc:	68 83 0a 00 00       	push   0xa83
100402c1:	50                   	push   eax
100402c2:	8b 08                	mov    ecx,DWORD PTR [eax]
100402c4:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
100402ca:	89 86 74 01 00 00    	mov    DWORD PTR [esi+0x174],eax
100402d0:	8b 86 78 01 00 00    	mov    eax,DWORD PTR [esi+0x178]
100402d6:	83 c4 08             	add    esp,0x8
100402d9:	3b c7                	cmp    eax,edi
100402db:	74 15                	je     0x100402f2
100402dd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100402e3:	50                   	push   eax
100402e4:	8b 11                	mov    edx,DWORD PTR [ecx]
100402e6:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100402ec:	89 be 78 01 00 00    	mov    DWORD PTR [esi+0x178],edi
100402f2:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100402f7:	68 85 0a 00 00       	push   0xa85
100402fc:	50                   	push   eax
100402fd:	8b 08                	mov    ecx,DWORD PTR [eax]
100402ff:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10040305:	89 86 78 01 00 00    	mov    DWORD PTR [esi+0x178],eax
1004030b:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
10040311:	83 c4 08             	add    esp,0x8
10040314:	3b c7                	cmp    eax,edi
10040316:	74 15                	je     0x1004032d
10040318:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004031e:	50                   	push   eax
1004031f:	8b 11                	mov    edx,DWORD PTR [ecx]
10040321:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040327:	89 be 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],edi
1004032d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10040332:	68 86 0a 00 00       	push   0xa86
10040337:	50                   	push   eax
10040338:	8b 08                	mov    ecx,DWORD PTR [eax]
1004033a:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10040340:	89 86 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],eax
10040346:	8b 86 6c 01 00 00    	mov    eax,DWORD PTR [esi+0x16c]
1004034c:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
1004034f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040355:	83 c4 08             	add    esp,0x8
10040358:	8b 11                	mov    edx,DWORD PTR [ecx]
1004035a:	50                   	push   eax
1004035b:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10040361:	89 86 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],eax
10040367:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004036d:	8b 86 70 01 00 00    	mov    eax,DWORD PTR [esi+0x170]
10040373:	8b 11                	mov    edx,DWORD PTR [ecx]
10040375:	50                   	push   eax
10040376:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1004037c:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
10040382:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040388:	8b 86 74 01 00 00    	mov    eax,DWORD PTR [esi+0x174]
1004038e:	8b 11                	mov    edx,DWORD PTR [ecx]
10040390:	50                   	push   eax
10040391:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10040397:	8d 4e 0c             	lea    ecx,[esi+0xc]
1004039a:	89 86 14 01 00 00    	mov    DWORD PTR [esi+0x114],eax
100403a0:	8b 86 64 01 00 00    	mov    eax,DWORD PTR [esi+0x164]
100403a6:	c7 86 34 01 00 00 02 	mov    DWORD PTR [esi+0x134],0x2
100403ad:	00 00 00 
100403b0:	89 8e 38 01 00 00    	mov    DWORD PTR [esi+0x138],ecx
100403b6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100403bc:	50                   	push   eax
100403bd:	8b 11                	mov    edx,DWORD PTR [ecx]
100403bf:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
100403c5:	89 86 3c 01 00 00    	mov    DWORD PTR [esi+0x13c],eax
100403cb:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100403d1:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
100403d7:	8b 11                	mov    edx,DWORD PTR [ecx]
100403d9:	50                   	push   eax
100403da:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
100403e0:	68 10 01 00 00       	push   0x110
100403e5:	89 86 40 01 00 00    	mov    DWORD PTR [esi+0x140],eax
100403eb:	c7 86 60 01 00 00 02 	mov    DWORD PTR [esi+0x160],0x2
100403f2:	00 00 00 
100403f5:	e8 2f 35 06 00       	call   0x100a3929
100403fa:	83 c4 04             	add    esp,0x4
100403fd:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10040401:	3b c7                	cmp    eax,edi
10040403:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
10040407:	74 12                	je     0x1004041b
10040409:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1004040f:	6a ff                	push   0xffffffff
10040411:	51                   	push   ecx
10040412:	8b c8                	mov    ecx,eax
10040414:	e8 f7 f2 ff ff       	call   0x1003f710
10040419:	eb 02                	jmp    0x1004041d
1004041b:	33 c0                	xor    eax,eax
1004041d:	68 04 01 00 00       	push   0x104
10040422:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
10040429:	ff 
1004042a:	89 06                	mov    DWORD PTR [esi],eax
1004042c:	e8 f8 34 06 00       	call   0x100a3929
10040431:	83 c4 04             	add    esp,0x4
10040434:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10040438:	3b c7                	cmp    eax,edi
1004043a:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
10040441:	00 
10040442:	74 24                	je     0x10040468
10040444:	8b 15 d8 40 12 10    	mov    edx,DWORD PTR ds:0x101240d8
1004044a:	6a ff                	push   0xffffffff
1004044c:	52                   	push   edx
1004044d:	8b c8                	mov    ecx,eax
1004044f:	e8 2c f7 ff ff       	call   0x1003fb80
10040454:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10040457:	5f                   	pop    edi
10040458:	5e                   	pop    esi
10040459:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1004045d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10040464:	83 c4 10             	add    esp,0x10
10040467:	c3                   	ret
10040468:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1004046c:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
1004046f:	5f                   	pop    edi
10040470:	5e                   	pop    esi
10040471:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10040478:	83 c4 10             	add    esp,0x10
1004047b:	c3                   	ret
1004047c:	90                   	nop
1004047d:	90                   	nop
1004047e:	90                   	nop
1004047f:	90                   	nop
10040480:	53                   	push   ebx
10040481:	56                   	push   esi
10040482:	8b f1                	mov    esi,ecx
10040484:	57                   	push   edi
10040485:	8b 0d 34 c3 11 10    	mov    ecx,DWORD PTR ds:0x1011c334
1004048b:	8d be 0c 01 00 00    	lea    edi,[esi+0x10c]
10040491:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10040494:	3b c7                	cmp    eax,edi
10040496:	74 0a                	je     0x100404a2
10040498:	8d 9e 38 01 00 00    	lea    ebx,[esi+0x138]
1004049e:	3b c3                	cmp    eax,ebx
100404a0:	75 0b                	jne    0x100404ad
100404a2:	6a ff                	push   0xffffffff
100404a4:	e8 17 07 02 00       	call   0x10060bc0
100404a9:	5f                   	pop    edi
100404aa:	5e                   	pop    esi
100404ab:	5b                   	pop    ebx
100404ac:	c3                   	ret
100404ad:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100404b3:	8b 01                	mov    eax,DWORD PTR [ecx]
100404b5:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
100404bb:	d8 5e 08             	fcomp  DWORD PTR [esi+0x8]
100404be:	56                   	push   esi
100404bf:	df e0                	fnstsw ax
100404c1:	f6 c4 01             	test   ah,0x1
100404c4:	74 15                	je     0x100404db
100404c6:	8b 0d 34 c3 11 10    	mov    ecx,DWORD PTR ds:0x1011c334
100404cc:	68 70 06 04 10       	push   0x10040670
100404d1:	53                   	push   ebx
100404d2:	e8 39 06 02 00       	call   0x10060b10
100404d7:	5f                   	pop    edi
100404d8:	5e                   	pop    esi
100404d9:	5b                   	pop    ebx
100404da:	c3                   	ret
100404db:	8b 0d 34 c3 11 10    	mov    ecx,DWORD PTR ds:0x1011c334
100404e1:	68 40 06 04 10       	push   0x10040640
100404e6:	57                   	push   edi
100404e7:	e8 24 06 02 00       	call   0x10060b10
100404ec:	5f                   	pop    edi
100404ed:	5e                   	pop    esi
100404ee:	5b                   	pop    ebx
100404ef:	c3                   	ret
100404f0:	56                   	push   esi
100404f1:	57                   	push   edi
100404f2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
100404f6:	8b f1                	mov    esi,ecx
100404f8:	85 ff                	test   edi,edi
100404fa:	75 05                	jne    0x10040501
100404fc:	bf 80 46 0d 10       	mov    edi,0x100d4680
10040501:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040507:	8b 96 78 01 00 00    	mov    edx,DWORD PTR [esi+0x178]
1004050d:	52                   	push   edx
1004050e:	8b 01                	mov    eax,DWORD PTR [ecx]
10040510:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10040516:	57                   	push   edi
10040517:	50                   	push   eax
10040518:	8d 46 0c             	lea    eax,[esi+0xc]
1004051b:	68 ff 00 00 00       	push   0xff
10040520:	50                   	push   eax
10040521:	e8 27 3b 06 00       	call   0x100a404d
10040526:	c6 86 0b 01 00 00 00 	mov    BYTE PTR [esi+0x10b],0x0
1004052d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040533:	83 c4 10             	add    esp,0x10
10040536:	8b 11                	mov    edx,DWORD PTR [ecx]
10040538:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1004053e:	d8 05 c0 85 0b 10    	fadd   DWORD PTR ds:0x100b85c0
10040544:	68 00 00 f0 41       	push   0x41f00000
10040549:	6a 00                	push   0x0
1004054b:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
1004054e:	e8 0d 05 02 00       	call   0x10060a60
10040553:	83 c4 08             	add    esp,0x8
10040556:	5f                   	pop    edi
10040557:	5e                   	pop    esi
10040558:	c2 04 00             	ret    0x4
1004055b:	90                   	nop
1004055c:	90                   	nop
1004055d:	90                   	nop
1004055e:	90                   	nop
1004055f:	90                   	nop
10040560:	56                   	push   esi
10040561:	57                   	push   edi
10040562:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
10040566:	8b f1                	mov    esi,ecx
10040568:	85 ff                	test   edi,edi
1004056a:	75 05                	jne    0x10040571
1004056c:	bf 80 46 0d 10       	mov    edi,0x100d4680
10040571:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040577:	8b 96 7c 01 00 00    	mov    edx,DWORD PTR [esi+0x17c]
1004057d:	52                   	push   edx
1004057e:	8b 01                	mov    eax,DWORD PTR [ecx]
10040580:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10040586:	57                   	push   edi
10040587:	50                   	push   eax
10040588:	8d 46 0c             	lea    eax,[esi+0xc]
1004058b:	68 ff 00 00 00       	push   0xff
10040590:	50                   	push   eax
10040591:	e8 b7 3a 06 00       	call   0x100a404d
10040596:	c6 86 0b 01 00 00 00 	mov    BYTE PTR [esi+0x10b],0x0
1004059d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100405a3:	83 c4 10             	add    esp,0x10
100405a6:	8b 11                	mov    edx,DWORD PTR [ecx]
100405a8:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
100405ae:	d8 05 c0 85 0b 10    	fadd   DWORD PTR ds:0x100b85c0
100405b4:	68 00 00 f0 41       	push   0x41f00000
100405b9:	6a 01                	push   0x1
100405bb:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
100405be:	e8 9d 04 02 00       	call   0x10060a60
100405c3:	83 c4 08             	add    esp,0x8
100405c6:	5f                   	pop    edi
100405c7:	5e                   	pop    esi
100405c8:	c2 04 00             	ret    0x4
100405cb:	90                   	nop
100405cc:	90                   	nop
100405cd:	90                   	nop
100405ce:	90                   	nop
100405cf:	90                   	nop
100405d0:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
100405d5:	56                   	push   esi
100405d6:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
100405dc:	8a 88 45 85 01 00    	mov    cl,BYTE PTR [eax+0x18545]
100405e2:	8a 80 44 85 01 00    	mov    al,BYTE PTR [eax+0x18544]
100405e8:	0f be c9             	movsx  ecx,cl
100405eb:	51                   	push   ecx
100405ec:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100405f0:	8b 32                	mov    esi,DWORD PTR [edx]
100405f2:	f7 d9                	neg    ecx
100405f4:	1b c9                	sbb    ecx,ecx
100405f6:	0f be c0             	movsx  eax,al
100405f9:	83 e1 fe             	and    ecx,0xfffffffe
100405fc:	50                   	push   eax
100405fd:	81 c1 6a 06 00 00    	add    ecx,0x66a
10040603:	51                   	push   ecx
10040604:	52                   	push   edx
10040605:	ff 96 b4 00 00 00    	call   DWORD PTR [esi+0xb4]
1004060b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040611:	83 c4 10             	add    esp,0x10
10040614:	8b f0                	mov    esi,eax
10040616:	8b 11                	mov    edx,DWORD PTR [ecx]
10040618:	68 00 00 20 41       	push   0x41200000
1004061d:	56                   	push   esi
1004061e:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10040624:	50                   	push   eax
10040625:	e8 86 f8 01 00       	call   0x1005feb0
1004062a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040630:	83 c4 08             	add    esp,0x8
10040633:	8b 01                	mov    eax,DWORD PTR [ecx]
10040635:	56                   	push   esi
10040636:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
1004063c:	5e                   	pop    esi
1004063d:	c2 04 00             	ret    0x4
10040640:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10040644:	83 e8 00             	sub    eax,0x0
10040647:	74 0f                	je     0x10040658
10040649:	48                   	dec    eax
1004064a:	75 17                	jne    0x10040663
1004064c:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10040650:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10040653:	e9 d8 30 03 00       	jmp    0x10073730
10040658:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1004065c:	8b 09                	mov    ecx,DWORD PTR [ecx]
1004065e:	e9 cd 30 03 00       	jmp    0x10073730
10040663:	c3                   	ret
10040664:	90                   	nop
10040665:	90                   	nop
10040666:	90                   	nop
10040667:	90                   	nop
10040668:	90                   	nop
10040669:	90                   	nop
1004066a:	90                   	nop
1004066b:	90                   	nop
1004066c:	90                   	nop
1004066d:	90                   	nop
1004066e:	90                   	nop
1004066f:	90                   	nop
10040670:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10040674:	83 e8 00             	sub    eax,0x0
10040677:	74 3b                	je     0x100406b4
10040679:	48                   	dec    eax
1004067a:	75 70                	jne    0x100406ec
1004067c:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10040681:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
10040684:	8d 44 24 0c          	lea    eax,[esp+0xc]
10040688:	50                   	push   eax
10040689:	8b 11                	mov    edx,DWORD PTR [ecx]
1004068b:	ff 52 40             	call   DWORD PTR [edx+0x40]
1004068e:	85 c0                	test   eax,eax
10040690:	75 5a                	jne    0x100406ec
10040692:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040698:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1004069c:	6a 02                	push   0x2
1004069e:	68 f8 00 00 00       	push   0xf8
100406a3:	8b 11                	mov    edx,DWORD PTR [ecx]
100406a5:	50                   	push   eax
100406a6:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
100406ac:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100406b0:	8b 11                	mov    edx,DWORD PTR [ecx]
100406b2:	ff 22                	jmp    DWORD PTR [edx]
100406b4:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100406b9:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
100406bc:	8d 44 24 0c          	lea    eax,[esp+0xc]
100406c0:	50                   	push   eax
100406c1:	8b 11                	mov    edx,DWORD PTR [ecx]
100406c3:	ff 52 40             	call   DWORD PTR [edx+0x40]
100406c6:	85 c0                	test   eax,eax
100406c8:	75 22                	jne    0x100406ec
100406ca:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100406d0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100406d4:	6a 02                	push   0x2
100406d6:	68 f7 00 00 00       	push   0xf7
100406db:	8b 11                	mov    edx,DWORD PTR [ecx]
100406dd:	50                   	push   eax
100406de:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
100406e4:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100406e8:	8b 11                	mov    edx,DWORD PTR [ecx]
100406ea:	ff 22                	jmp    DWORD PTR [edx]
100406ec:	c3                   	ret
100406ed:	90                   	nop
100406ee:	90                   	nop
100406ef:	90                   	nop
100406f0:	b9 a8 bc 11 10       	mov    ecx,0x1011bca8
100406f5:	e8 56 fa ff ff       	call   0x10040150
100406fa:	68 10 07 04 10       	push   0x10040710
100406ff:	e8 81 47 06 00       	call   0x100a4e85
10040704:	59                   	pop    ecx
10040705:	c3                   	ret
10040706:	90                   	nop
10040707:	90                   	nop
10040708:	90                   	nop
10040709:	90                   	nop
1004070a:	90                   	nop
1004070b:	90                   	nop
1004070c:	90                   	nop
1004070d:	90                   	nop
1004070e:	90                   	nop
1004070f:	90                   	nop
10040710:	b9 a8 bc 11 10       	mov    ecx,0x1011bca8
10040715:	e9 06 00 00 00       	jmp    0x10040720
1004071a:	90                   	nop
1004071b:	90                   	nop
1004071c:	90                   	nop
1004071d:	90                   	nop
1004071e:	90                   	nop
1004071f:	90                   	nop
10040720:	6a ff                	push   0xffffffff
10040722:	68 54 41 0b 10       	push   0x100b4154
10040727:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1004072d:	50                   	push   eax
1004072e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10040735:	51                   	push   ecx
10040736:	53                   	push   ebx
10040737:	56                   	push   esi
10040738:	8b f1                	mov    esi,ecx
1004073a:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
1004073e:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
10040744:	33 db                	xor    ebx,ebx
10040746:	3b c3                	cmp    eax,ebx
10040748:	c7 44 24 14 05 00 00 	mov    DWORD PTR [esp+0x14],0x5
1004074f:	00 
10040750:	74 15                	je     0x10040767
10040752:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040758:	50                   	push   eax
10040759:	8b 11                	mov    edx,DWORD PTR [ecx]
1004075b:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040761:	89 9e 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],ebx
10040767:	8b 86 78 01 00 00    	mov    eax,DWORD PTR [esi+0x178]
1004076d:	c6 44 24 14 04       	mov    BYTE PTR [esp+0x14],0x4
10040772:	3b c3                	cmp    eax,ebx
10040774:	74 15                	je     0x1004078b
10040776:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004077c:	50                   	push   eax
1004077d:	8b 11                	mov    edx,DWORD PTR [ecx]
1004077f:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040785:	89 9e 78 01 00 00    	mov    DWORD PTR [esi+0x178],ebx
1004078b:	8b 86 74 01 00 00    	mov    eax,DWORD PTR [esi+0x174]
10040791:	c6 44 24 14 03       	mov    BYTE PTR [esp+0x14],0x3
10040796:	3b c3                	cmp    eax,ebx
10040798:	74 15                	je     0x100407af
1004079a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100407a0:	50                   	push   eax
100407a1:	8b 11                	mov    edx,DWORD PTR [ecx]
100407a3:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100407a9:	89 9e 74 01 00 00    	mov    DWORD PTR [esi+0x174],ebx
100407af:	8b 86 70 01 00 00    	mov    eax,DWORD PTR [esi+0x170]
100407b5:	c6 44 24 14 02       	mov    BYTE PTR [esp+0x14],0x2
100407ba:	3b c3                	cmp    eax,ebx
100407bc:	74 15                	je     0x100407d3
100407be:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100407c4:	50                   	push   eax
100407c5:	8b 11                	mov    edx,DWORD PTR [ecx]
100407c7:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100407cd:	89 9e 70 01 00 00    	mov    DWORD PTR [esi+0x170],ebx
100407d3:	8b 86 6c 01 00 00    	mov    eax,DWORD PTR [esi+0x16c]
100407d9:	c6 44 24 14 01       	mov    BYTE PTR [esp+0x14],0x1
100407de:	3b c3                	cmp    eax,ebx
100407e0:	74 15                	je     0x100407f7
100407e2:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100407e8:	50                   	push   eax
100407e9:	8b 11                	mov    edx,DWORD PTR [ecx]
100407eb:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100407f1:	89 9e 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],ebx
100407f7:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
100407fd:	88 5c 24 14          	mov    BYTE PTR [esp+0x14],bl
10040801:	3b c3                	cmp    eax,ebx
10040803:	74 15                	je     0x1004081a
10040805:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004080b:	50                   	push   eax
1004080c:	8b 11                	mov    edx,DWORD PTR [ecx]
1004080e:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040814:	89 9e 68 01 00 00    	mov    DWORD PTR [esi+0x168],ebx
1004081a:	8b 86 64 01 00 00    	mov    eax,DWORD PTR [esi+0x164]
10040820:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
10040827:	ff 
10040828:	3b c3                	cmp    eax,ebx
1004082a:	74 15                	je     0x10040841
1004082c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040832:	50                   	push   eax
10040833:	8b 11                	mov    edx,DWORD PTR [ecx]
10040835:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1004083b:	89 9e 64 01 00 00    	mov    DWORD PTR [esi+0x164],ebx
10040841:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10040845:	5e                   	pop    esi
10040846:	5b                   	pop    ebx
10040847:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1004084e:	83 c4 10             	add    esp,0x10
10040851:	c3                   	ret
10040852:	90                   	nop
10040853:	90                   	nop
10040854:	90                   	nop
10040855:	90                   	nop
10040856:	90                   	nop
10040857:	90                   	nop
10040858:	90                   	nop
10040859:	90                   	nop
1004085a:	90                   	nop
1004085b:	90                   	nop
1004085c:	90                   	nop
1004085d:	90                   	nop
1004085e:	90                   	nop
1004085f:	90                   	nop
10040860:	51                   	push   ecx
10040861:	57                   	push   edi
10040862:	8b f9                	mov    edi,ecx
10040864:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10040867:	85 c9                	test   ecx,ecx
10040869:	75 04                	jne    0x1004086f
1004086b:	33 c0                	xor    eax,eax
1004086d:	eb 08                	jmp    0x10040877
1004086f:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
10040872:	2b c1                	sub    eax,ecx
10040874:	c1 f8 02             	sar    eax,0x2
10040877:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1004087b:	3b c1                	cmp    eax,ecx
1004087d:	0f 83 ac 00 00 00    	jae    0x1004092f
10040883:	85 c9                	test   ecx,ecx
10040885:	8b c1                	mov    eax,ecx
10040887:	7d 02                	jge    0x1004088b
10040889:	33 c0                	xor    eax,eax
1004088b:	53                   	push   ebx
1004088c:	55                   	push   ebp
1004088d:	c1 e0 02             	shl    eax,0x2
10040890:	56                   	push   esi
10040891:	50                   	push   eax
10040892:	e8 92 30 06 00       	call   0x100a3929
10040897:	8b 6f 08             	mov    ebp,DWORD PTR [edi+0x8]
1004089a:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1004089d:	83 c4 04             	add    esp,0x4
100408a0:	3b f5                	cmp    esi,ebp
100408a2:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100408a6:	8b d8                	mov    ebx,eax
100408a8:	74 14                	je     0x100408be
100408aa:	56                   	push   esi
100408ab:	53                   	push   ebx
100408ac:	e8 5f 04 00 00       	call   0x10040d10
100408b1:	83 c6 04             	add    esi,0x4
100408b4:	83 c4 08             	add    esp,0x8
100408b7:	83 c3 04             	add    ebx,0x4
100408ba:	3b f5                	cmp    esi,ebp
100408bc:	75 ec                	jne    0x100408aa
100408be:	8b 5f 08             	mov    ebx,DWORD PTR [edi+0x8]
100408c1:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100408c4:	3b f3                	cmp    esi,ebx
100408c6:	74 22                	je     0x100408ea
100408c8:	8b 06                	mov    eax,DWORD PTR [esi]
100408ca:	85 c0                	test   eax,eax
100408cc:	74 15                	je     0x100408e3
100408ce:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100408d4:	50                   	push   eax
100408d5:	8b 11                	mov    edx,DWORD PTR [ecx]
100408d7:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100408dd:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
100408e3:	83 c6 04             	add    esi,0x4
100408e6:	3b f3                	cmp    esi,ebx
100408e8:	75 de                	jne    0x100408c8
100408ea:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100408ed:	50                   	push   eax
100408ee:	e8 2b 30 06 00       	call   0x100a391e
100408f3:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100408f7:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
100408fb:	83 c4 04             	add    esp,0x4
100408fe:	8d 04 8a             	lea    eax,[edx+ecx*4]
10040901:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10040904:	5e                   	pop    esi
10040905:	5d                   	pop    ebp
10040906:	85 c9                	test   ecx,ecx
10040908:	89 47 0c             	mov    DWORD PTR [edi+0xc],eax
1004090b:	5b                   	pop    ebx
1004090c:	75 10                	jne    0x1004091e
1004090e:	33 c0                	xor    eax,eax
10040910:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
10040913:	8d 0c 82             	lea    ecx,[edx+eax*4]
10040916:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
10040919:	5f                   	pop    edi
1004091a:	59                   	pop    ecx
1004091b:	c2 04 00             	ret    0x4
1004091e:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
10040921:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
10040924:	2b c1                	sub    eax,ecx
10040926:	c1 f8 02             	sar    eax,0x2
10040929:	8d 0c 82             	lea    ecx,[edx+eax*4]
1004092c:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
1004092f:	5f                   	pop    edi
10040930:	59                   	pop    ecx
10040931:	c2 04 00             	ret    0x4
10040934:	90                   	nop
10040935:	90                   	nop
10040936:	90                   	nop
10040937:	90                   	nop
10040938:	90                   	nop
10040939:	90                   	nop
1004093a:	90                   	nop
1004093b:	90                   	nop
1004093c:	90                   	nop
1004093d:	90                   	nop
1004093e:	90                   	nop
1004093f:	90                   	nop
10040940:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10040943:	85 d2                	test   edx,edx
10040945:	75 03                	jne    0x1004094a
10040947:	33 c0                	xor    eax,eax
10040949:	c3                   	ret
1004094a:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
1004094d:	2b c2                	sub    eax,edx
1004094f:	c1 f8 02             	sar    eax,0x2
10040952:	c3                   	ret
10040953:	90                   	nop
10040954:	90                   	nop
10040955:	90                   	nop
10040956:	90                   	nop
10040957:	90                   	nop
10040958:	90                   	nop
10040959:	90                   	nop
1004095a:	90                   	nop
1004095b:	90                   	nop
1004095c:	90                   	nop
1004095d:	90                   	nop
1004095e:	90                   	nop
1004095f:	90                   	nop
10040960:	83 ec 0c             	sub    esp,0xc
10040963:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
10040966:	53                   	push   ebx
10040967:	55                   	push   ebp
10040968:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
1004096c:	56                   	push   esi
1004096d:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
10040970:	2b c6                	sub    eax,esi
10040972:	57                   	push   edi
10040973:	c1 f8 02             	sar    eax,0x2
10040976:	3b c5                	cmp    eax,ebp
10040978:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1004097c:	0f 83 2f 01 00 00    	jae    0x10040ab1
10040982:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
10040985:	85 c9                	test   ecx,ecx
10040987:	74 0b                	je     0x10040994
10040989:	8b c6                	mov    eax,esi
1004098b:	2b c1                	sub    eax,ecx
1004098d:	c1 f8 02             	sar    eax,0x2
10040990:	3b e8                	cmp    ebp,eax
10040992:	72 02                	jb     0x10040996
10040994:	8b c5                	mov    eax,ebp
10040996:	85 c9                	test   ecx,ecx
10040998:	75 04                	jne    0x1004099e
1004099a:	33 f6                	xor    esi,esi
1004099c:	eb 05                	jmp    0x100409a3
1004099e:	2b f1                	sub    esi,ecx
100409a0:	c1 fe 02             	sar    esi,0x2
100409a3:	03 c6                	add    eax,esi
100409a5:	85 c0                	test   eax,eax
100409a7:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100409ab:	7d 02                	jge    0x100409af
100409ad:	33 c0                	xor    eax,eax
100409af:	8d 0c 85 00 00 00 00 	lea    ecx,[eax*4+0x0]
100409b6:	51                   	push   ecx
100409b7:	e8 6d 2f 06 00       	call   0x100a3929
100409bc:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
100409c0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100409c4:	8b f8                	mov    edi,eax
100409c6:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
100409ca:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
100409cd:	83 c4 04             	add    esp,0x4
100409d0:	3b f0                	cmp    esi,eax
100409d2:	74 18                	je     0x100409ec
100409d4:	56                   	push   esi
100409d5:	57                   	push   edi
100409d6:	e8 35 03 00 00       	call   0x10040d10
100409db:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100409df:	83 c6 04             	add    esi,0x4
100409e2:	83 c4 08             	add    esp,0x8
100409e5:	83 c7 04             	add    edi,0x4
100409e8:	3b f0                	cmp    esi,eax
100409ea:	75 e8                	jne    0x100409d4
100409ec:	85 ed                	test   ebp,ebp
100409ee:	8b f7                	mov    esi,edi
100409f0:	76 20                	jbe    0x10040a12
100409f2:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
100409f6:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
100409fa:	52                   	push   edx
100409fb:	56                   	push   esi
100409fc:	e8 0f 03 00 00       	call   0x10040d10
10040a01:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10040a05:	83 c4 08             	add    esp,0x8
10040a08:	83 c6 04             	add    esi,0x4
10040a0b:	48                   	dec    eax
10040a0c:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10040a10:	75 e4                	jne    0x100409f6
10040a12:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
10040a16:	8d 04 af             	lea    eax,[edi+ebp*4]
10040a19:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
10040a1c:	3b f7                	cmp    esi,edi
10040a1e:	74 24                	je     0x10040a44
10040a20:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10040a24:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10040a28:	56                   	push   esi
10040a29:	50                   	push   eax
10040a2a:	e8 e1 02 00 00       	call   0x10040d10
10040a2f:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10040a33:	83 c6 04             	add    esi,0x4
10040a36:	83 c4 08             	add    esp,0x8
10040a39:	83 c1 04             	add    ecx,0x4
10040a3c:	3b f7                	cmp    esi,edi
10040a3e:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
10040a42:	75 e0                	jne    0x10040a24
10040a44:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
10040a47:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
10040a4a:	3b f7                	cmp    esi,edi
10040a4c:	74 0e                	je     0x10040a5c
10040a4e:	8b ce                	mov    ecx,esi
10040a50:	e8 cb eb ff ff       	call   0x1003f620
10040a55:	83 c6 04             	add    esi,0x4
10040a58:	3b f7                	cmp    esi,edi
10040a5a:	75 f2                	jne    0x10040a4e
10040a5c:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10040a5f:	51                   	push   ecx
10040a60:	e8 b9 2e 06 00       	call   0x100a391e
10040a65:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10040a69:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10040a6d:	83 c4 04             	add    esp,0x4
10040a70:	8d 0c 82             	lea    ecx,[edx+eax*4]
10040a73:	89 4b 0c             	mov    DWORD PTR [ebx+0xc],ecx
10040a76:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10040a79:	85 c9                	test   ecx,ecx
10040a7b:	75 17                	jne    0x10040a94
10040a7d:	33 c0                	xor    eax,eax
10040a7f:	5f                   	pop    edi
10040a80:	8b c5                	mov    eax,ebp
10040a82:	5e                   	pop    esi
10040a83:	89 53 04             	mov    DWORD PTR [ebx+0x4],edx
10040a86:	5d                   	pop    ebp
10040a87:	8d 04 82             	lea    eax,[edx+eax*4]
10040a8a:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
10040a8d:	5b                   	pop    ebx
10040a8e:	83 c4 0c             	add    esp,0xc
10040a91:	c2 0c 00             	ret    0xc
10040a94:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
10040a97:	5f                   	pop    edi
10040a98:	2b c1                	sub    eax,ecx
10040a9a:	5e                   	pop    esi
10040a9b:	c1 f8 02             	sar    eax,0x2
10040a9e:	03 c5                	add    eax,ebp
10040aa0:	89 53 04             	mov    DWORD PTR [ebx+0x4],edx
10040aa3:	5d                   	pop    ebp
10040aa4:	8d 04 82             	lea    eax,[edx+eax*4]
10040aa7:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
10040aaa:	5b                   	pop    ebx
10040aab:	83 c4 0c             	add    esp,0xc
10040aae:	c2 0c 00             	ret    0xc
10040ab1:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
10040ab5:	8b d6                	mov    edx,esi
10040ab7:	2b d3                	sub    edx,ebx
10040ab9:	c1 fa 02             	sar    edx,0x2
10040abc:	3b d5                	cmp    edx,ebp
10040abe:	0f 83 a8 00 00 00    	jae    0x10040b6c
10040ac4:	8d 04 ad 00 00 00 00 	lea    eax,[ebp*4+0x0]
10040acb:	8b fb                	mov    edi,ebx
10040acd:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10040ad1:	03 c3                	add    eax,ebx
10040ad3:	3b de                	cmp    ebx,esi
10040ad5:	74 28                	je     0x10040aff
10040ad7:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10040adb:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10040adf:	57                   	push   edi
10040ae0:	50                   	push   eax
10040ae1:	e8 2a 02 00 00       	call   0x10040d10
10040ae6:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10040aea:	83 c7 04             	add    edi,0x4
10040aed:	83 c4 08             	add    esp,0x8
10040af0:	83 c1 04             	add    ecx,0x4
10040af3:	3b fe                	cmp    edi,esi
10040af5:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
10040af9:	75 e0                	jne    0x10040adb
10040afb:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10040aff:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
10040b02:	8b d6                	mov    edx,esi
10040b04:	2b d3                	sub    edx,ebx
10040b06:	c1 fa 02             	sar    edx,0x2
10040b09:	2b ea                	sub    ebp,edx
10040b0b:	8b fd                	mov    edi,ebp
10040b0d:	8b 6c 24 28          	mov    ebp,DWORD PTR [esp+0x28]
10040b11:	74 14                	je     0x10040b27
10040b13:	55                   	push   ebp
10040b14:	56                   	push   esi
10040b15:	e8 f6 01 00 00       	call   0x10040d10
10040b1a:	83 c4 08             	add    esp,0x8
10040b1d:	83 c6 04             	add    esi,0x4
10040b20:	4f                   	dec    edi
10040b21:	75 f0                	jne    0x10040b13
10040b23:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10040b27:	8b 79 08             	mov    edi,DWORD PTR [ecx+0x8]
10040b2a:	8b f3                	mov    esi,ebx
10040b2c:	3b df                	cmp    ebx,edi
10040b2e:	74 26                	je     0x10040b56
10040b30:	8b ce                	mov    ecx,esi
10040b32:	e8 e9 ea ff ff       	call   0x1003f620
10040b37:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040b3d:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
10040b40:	50                   	push   eax
10040b41:	8b 11                	mov    edx,DWORD PTR [ecx]
10040b43:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
10040b49:	89 06                	mov    DWORD PTR [esi],eax
10040b4b:	83 c6 04             	add    esi,0x4
10040b4e:	3b f7                	cmp    esi,edi
10040b50:	75 de                	jne    0x10040b30
10040b52:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10040b56:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10040b5a:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
10040b5d:	5f                   	pop    edi
10040b5e:	03 d0                	add    edx,eax
10040b60:	5e                   	pop    esi
10040b61:	5d                   	pop    ebp
10040b62:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
10040b65:	5b                   	pop    ebx
10040b66:	83 c4 0c             	add    esp,0xc
10040b69:	c2 0c 00             	ret    0xc
10040b6c:	85 ed                	test   ebp,ebp
10040b6e:	0f 86 b0 00 00 00    	jbe    0x10040c24
10040b74:	c1 e5 02             	shl    ebp,0x2
10040b77:	8b fe                	mov    edi,esi
10040b79:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
10040b7d:	2b fd                	sub    edi,ebp
10040b7f:	3b fe                	cmp    edi,esi
10040b81:	74 24                	je     0x10040ba7
10040b83:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10040b87:	57                   	push   edi
10040b88:	51                   	push   ecx
10040b89:	e8 82 01 00 00       	call   0x10040d10
10040b8e:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10040b92:	83 c7 04             	add    edi,0x4
10040b95:	83 c4 08             	add    esp,0x8
10040b98:	83 c2 04             	add    edx,0x4
10040b9b:	3b fe                	cmp    edi,esi
10040b9d:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10040ba1:	75 e0                	jne    0x10040b83
10040ba3:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10040ba7:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
10040baa:	8b fe                	mov    edi,esi
10040bac:	2b fd                	sub    edi,ebp
10040bae:	3b df                	cmp    ebx,edi
10040bb0:	74 3d                	je     0x10040bef
10040bb2:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
10040bb5:	83 ee 04             	sub    esi,0x4
10040bb8:	83 ef 04             	sub    edi,0x4
10040bbb:	85 c0                	test   eax,eax
10040bbd:	74 15                	je     0x10040bd4
10040bbf:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040bc5:	50                   	push   eax
10040bc6:	8b 11                	mov    edx,DWORD PTR [ecx]
10040bc8:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040bce:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10040bd4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040bda:	8b 07                	mov    eax,DWORD PTR [edi]
10040bdc:	50                   	push   eax
10040bdd:	8b 11                	mov    edx,DWORD PTR [ecx]
10040bdf:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
10040be5:	3b fb                	cmp    edi,ebx
10040be7:	89 06                	mov    DWORD PTR [esi],eax
10040be9:	75 c7                	jne    0x10040bb2
10040beb:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10040bef:	8d 3c 2b             	lea    edi,[ebx+ebp*1]
10040bf2:	8b f3                	mov    esi,ebx
10040bf4:	3b df                	cmp    ebx,edi
10040bf6:	74 29                	je     0x10040c21
10040bf8:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
10040bfc:	8b ce                	mov    ecx,esi
10040bfe:	e8 1d ea ff ff       	call   0x1003f620
10040c03:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040c09:	8b 03                	mov    eax,DWORD PTR [ebx]
10040c0b:	50                   	push   eax
10040c0c:	8b 11                	mov    edx,DWORD PTR [ecx]
10040c0e:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
10040c14:	89 06                	mov    DWORD PTR [esi],eax
10040c16:	83 c6 04             	add    esi,0x4
10040c19:	3b f7                	cmp    esi,edi
10040c1b:	75 df                	jne    0x10040bfc
10040c1d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10040c21:	01 69 08             	add    DWORD PTR [ecx+0x8],ebp
10040c24:	5f                   	pop    edi
10040c25:	5e                   	pop    esi
10040c26:	5d                   	pop    ebp
10040c27:	5b                   	pop    ebx
10040c28:	83 c4 0c             	add    esp,0xc
10040c2b:	c2 0c 00             	ret    0xc
10040c2e:	90                   	nop
10040c2f:	90                   	nop
10040c30:	53                   	push   ebx
10040c31:	55                   	push   ebp
10040c32:	8b e9                	mov    ebp,ecx
10040c34:	56                   	push   esi
10040c35:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10040c39:	57                   	push   edi
10040c3a:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10040c3d:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
10040c41:	3b fb                	cmp    edi,ebx
10040c43:	8b f1                	mov    esi,ecx
10040c45:	74 3f                	je     0x10040c86
10040c47:	2b f9                	sub    edi,ecx
10040c49:	8b 06                	mov    eax,DWORD PTR [esi]
10040c4b:	85 c0                	test   eax,eax
10040c4d:	74 15                	je     0x10040c64
10040c4f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040c55:	50                   	push   eax
10040c56:	8b 11                	mov    edx,DWORD PTR [ecx]
10040c58:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040c5e:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10040c64:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040c6a:	8b 04 37             	mov    eax,DWORD PTR [edi+esi*1]
10040c6d:	50                   	push   eax
10040c6e:	8b 11                	mov    edx,DWORD PTR [ecx]
10040c70:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
10040c76:	89 06                	mov    DWORD PTR [esi],eax
10040c78:	83 c6 04             	add    esi,0x4
10040c7b:	8d 04 37             	lea    eax,[edi+esi*1]
10040c7e:	3b c3                	cmp    eax,ebx
10040c80:	75 c7                	jne    0x10040c49
10040c82:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10040c86:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10040c89:	8b fe                	mov    edi,esi
10040c8b:	3b f3                	cmp    esi,ebx
10040c8d:	74 26                	je     0x10040cb5
10040c8f:	8b 07                	mov    eax,DWORD PTR [edi]
10040c91:	85 c0                	test   eax,eax
10040c93:	74 19                	je     0x10040cae
10040c95:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040c9b:	50                   	push   eax
10040c9c:	8b 11                	mov    edx,DWORD PTR [ecx]
10040c9e:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040ca4:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10040ca8:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
10040cae:	83 c7 04             	add    edi,0x4
10040cb1:	3b fb                	cmp    edi,ebx
10040cb3:	75 da                	jne    0x10040c8f
10040cb5:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10040cb8:	5f                   	pop    edi
10040cb9:	5e                   	pop    esi
10040cba:	5d                   	pop    ebp
10040cbb:	8b c1                	mov    eax,ecx
10040cbd:	5b                   	pop    ebx
10040cbe:	c2 08 00             	ret    0x8
10040cc1:	90                   	nop
10040cc2:	90                   	nop
10040cc3:	90                   	nop
10040cc4:	90                   	nop
10040cc5:	90                   	nop
10040cc6:	90                   	nop
10040cc7:	90                   	nop
10040cc8:	90                   	nop
10040cc9:	90                   	nop
10040cca:	90                   	nop
10040ccb:	90                   	nop
10040ccc:	90                   	nop
10040ccd:	90                   	nop
10040cce:	90                   	nop
10040ccf:	90                   	nop
10040cd0:	56                   	push   esi
10040cd1:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10040cd5:	57                   	push   edi
10040cd6:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10040cda:	3b f7                	cmp    esi,edi
10040cdc:	74 22                	je     0x10040d00
10040cde:	8b 06                	mov    eax,DWORD PTR [esi]
10040ce0:	85 c0                	test   eax,eax
10040ce2:	74 15                	je     0x10040cf9
10040ce4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040cea:	50                   	push   eax
10040ceb:	8b 11                	mov    edx,DWORD PTR [ecx]
10040ced:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040cf3:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10040cf9:	83 c6 04             	add    esi,0x4
10040cfc:	3b f7                	cmp    esi,edi
10040cfe:	75 de                	jne    0x10040cde
10040d00:	5f                   	pop    edi
10040d01:	5e                   	pop    esi
10040d02:	c2 08 00             	ret    0x8
10040d05:	90                   	nop
10040d06:	90                   	nop
10040d07:	90                   	nop
10040d08:	90                   	nop
10040d09:	90                   	nop
10040d0a:	90                   	nop
10040d0b:	90                   	nop
10040d0c:	90                   	nop
10040d0d:	90                   	nop
10040d0e:	90                   	nop
10040d0f:	90                   	nop
10040d10:	6a ff                	push   0xffffffff
10040d12:	68 71 41 0b 10       	push   0x100b4171
10040d17:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10040d1d:	50                   	push   eax
10040d1e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10040d25:	51                   	push   ecx
10040d26:	56                   	push   esi
10040d27:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
10040d2b:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
10040d2f:	85 f6                	test   esi,esi
10040d31:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10040d38:	00 
10040d39:	74 17                	je     0x10040d52
10040d3b:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10040d3f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10040d45:	8b 00                	mov    eax,DWORD PTR [eax]
10040d47:	8b 11                	mov    edx,DWORD PTR [ecx]
10040d49:	50                   	push   eax
10040d4a:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
10040d50:	89 06                	mov    DWORD PTR [esi],eax
10040d52:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10040d56:	5e                   	pop    esi
10040d57:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10040d5e:	83 c4 10             	add    esp,0x10
10040d61:	c3                   	ret
10040d62:	90                   	nop
10040d63:	90                   	nop
10040d64:	90                   	nop
10040d65:	90                   	nop
10040d66:	90                   	nop
10040d67:	90                   	nop
10040d68:	90                   	nop
10040d69:	90                   	nop
10040d6a:	90                   	nop
10040d6b:	90                   	nop
10040d6c:	90                   	nop
10040d6d:	90                   	nop
10040d6e:	90                   	nop
10040d6f:	90                   	nop
10040d70:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10040d74:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040d7a:	56                   	push   esi
10040d7b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10040d7e:	8b 11                	mov    edx,DWORD PTR [ecx]
10040d80:	50                   	push   eax
10040d81:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10040d87:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040d8d:	8b f0                	mov    esi,eax
10040d8f:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10040d93:	8b 11                	mov    edx,DWORD PTR [ecx]
10040d95:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10040d98:	50                   	push   eax
10040d99:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10040d9f:	50                   	push   eax
10040da0:	56                   	push   esi
10040da1:	e8 2a 5f 06 00       	call   0x100a6cd0
10040da6:	83 c4 08             	add    esp,0x8
10040da9:	33 c9                	xor    ecx,ecx
10040dab:	85 c0                	test   eax,eax
10040dad:	0f 9c c1             	setl   cl
10040db0:	8a c1                	mov    al,cl
10040db2:	5e                   	pop    esi
10040db3:	c3                   	ret
10040db4:	90                   	nop
10040db5:	90                   	nop
10040db6:	90                   	nop
10040db7:	90                   	nop
10040db8:	90                   	nop
10040db9:	90                   	nop
10040dba:	90                   	nop
10040dbb:	90                   	nop
10040dbc:	90                   	nop
10040dbd:	90                   	nop
10040dbe:	90                   	nop
10040dbf:	90                   	nop
10040dc0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10040dc4:	56                   	push   esi
10040dc5:	8b f1                	mov    esi,ecx
10040dc7:	57                   	push   edi
10040dc8:	33 c9                	xor    ecx,ecx
10040dca:	89 0e                	mov    DWORD PTR [esi],ecx
10040dcc:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
10040dcf:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
10040dd2:	8b 00                	mov    eax,DWORD PTR [eax]
10040dd4:	89 0e                	mov    DWORD PTR [esi],ecx
10040dd6:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
10040dd9:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040ddf:	50                   	push   eax
10040de0:	8b 11                	mov    edx,DWORD PTR [ecx]
10040de2:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
10040de8:	89 06                	mov    DWORD PTR [esi],eax
10040dea:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040df0:	57                   	push   edi
10040df1:	8b 01                	mov    eax,DWORD PTR [ecx]
10040df3:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
10040df9:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10040dfc:	8b c6                	mov    eax,esi
10040dfe:	5f                   	pop    edi
10040dff:	5e                   	pop    esi
10040e00:	c2 04 00             	ret    0x4
10040e03:	90                   	nop
10040e04:	90                   	nop
10040e05:	90                   	nop
10040e06:	90                   	nop
10040e07:	90                   	nop
10040e08:	90                   	nop
10040e09:	90                   	nop
10040e0a:	90                   	nop
10040e0b:	90                   	nop
10040e0c:	90                   	nop
10040e0d:	90                   	nop
10040e0e:	90                   	nop
10040e0f:	90                   	nop
10040e10:	56                   	push   esi
10040e11:	8b f1                	mov    esi,ecx
10040e13:	8b 06                	mov    eax,DWORD PTR [esi]
10040e15:	85 c0                	test   eax,eax
10040e17:	74 0f                	je     0x10040e28
10040e19:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040e1f:	50                   	push   eax
10040e20:	8b 11                	mov    edx,DWORD PTR [ecx]
10040e22:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040e28:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10040e2b:	85 c0                	test   eax,eax
10040e2d:	74 0f                	je     0x10040e3e
10040e2f:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040e35:	50                   	push   eax
10040e36:	8b 11                	mov    edx,DWORD PTR [ecx]
10040e38:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040e3e:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10040e42:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10040e48:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
10040e4f:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040e55:	52                   	push   edx
10040e56:	8b 01                	mov    eax,DWORD PTR [ecx]
10040e58:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
10040e5e:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10040e62:	89 06                	mov    DWORD PTR [esi],eax
10040e64:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040e6a:	52                   	push   edx
10040e6b:	8b 01                	mov    eax,DWORD PTR [ecx]
10040e6d:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
10040e73:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10040e76:	5e                   	pop    esi
10040e77:	c2 08 00             	ret    0x8
10040e7a:	90                   	nop
10040e7b:	90                   	nop
10040e7c:	90                   	nop
10040e7d:	90                   	nop
10040e7e:	90                   	nop
10040e7f:	90                   	nop
10040e80:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10040e84:	53                   	push   ebx
10040e85:	56                   	push   esi
10040e86:	8b f1                	mov    esi,ecx
10040e88:	8b 18                	mov    ebx,DWORD PTR [eax]
10040e8a:	57                   	push   edi
10040e8b:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
10040e8e:	8b 06                	mov    eax,DWORD PTR [esi]
10040e90:	85 c0                	test   eax,eax
10040e92:	74 0f                	je     0x10040ea3
10040e94:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040e9a:	50                   	push   eax
10040e9b:	8b 11                	mov    edx,DWORD PTR [ecx]
10040e9d:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040ea3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10040ea6:	85 c0                	test   eax,eax
10040ea8:	74 0f                	je     0x10040eb9
10040eaa:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040eb0:	50                   	push   eax
10040eb1:	8b 11                	mov    edx,DWORD PTR [ecx]
10040eb3:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040eb9:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10040ebf:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
10040ec6:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040ecc:	53                   	push   ebx
10040ecd:	8b 01                	mov    eax,DWORD PTR [ecx]
10040ecf:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
10040ed5:	89 06                	mov    DWORD PTR [esi],eax
10040ed7:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040edd:	57                   	push   edi
10040ede:	8b 11                	mov    edx,DWORD PTR [ecx]
10040ee0:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
10040ee6:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10040ee9:	8b c6                	mov    eax,esi
10040eeb:	5f                   	pop    edi
10040eec:	5e                   	pop    esi
10040eed:	5b                   	pop    ebx
10040eee:	c2 04 00             	ret    0x4
10040ef1:	90                   	nop
10040ef2:	90                   	nop
10040ef3:	90                   	nop
10040ef4:	90                   	nop
10040ef5:	90                   	nop
10040ef6:	90                   	nop
10040ef7:	90                   	nop
10040ef8:	90                   	nop
10040ef9:	90                   	nop
10040efa:	90                   	nop
10040efb:	90                   	nop
10040efc:	90                   	nop
10040efd:	90                   	nop
10040efe:	90                   	nop
10040eff:	90                   	nop
10040f00:	56                   	push   esi
10040f01:	8b f1                	mov    esi,ecx
10040f03:	8b 06                	mov    eax,DWORD PTR [esi]
10040f05:	85 c0                	test   eax,eax
10040f07:	74 0f                	je     0x10040f18
10040f09:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040f0f:	50                   	push   eax
10040f10:	8b 11                	mov    edx,DWORD PTR [ecx]
10040f12:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040f18:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10040f1b:	85 c0                	test   eax,eax
10040f1d:	74 0f                	je     0x10040f2e
10040f1f:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040f25:	50                   	push   eax
10040f26:	8b 11                	mov    edx,DWORD PTR [ecx]
10040f28:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040f2e:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10040f34:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
10040f3b:	5e                   	pop    esi
10040f3c:	c3                   	ret
10040f3d:	90                   	nop
10040f3e:	90                   	nop
10040f3f:	90                   	nop
10040f40:	6a ff                	push   0xffffffff
10040f42:	68 88 41 0b 10       	push   0x100b4188
10040f47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10040f4d:	50                   	push   eax
10040f4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10040f55:	83 ec 08             	sub    esp,0x8
10040f58:	53                   	push   ebx
10040f59:	33 c0                	xor    eax,eax
10040f5b:	55                   	push   ebp
10040f5c:	57                   	push   edi
10040f5d:	8b e9                	mov    ebp,ecx
10040f5f:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
10040f63:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10040f67:	8b 5d 04             	mov    ebx,DWORD PTR [ebp+0x4]
10040f6a:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10040f6e:	3b d8                	cmp    ebx,eax
10040f70:	74 46                	je     0x10040fb8
10040f72:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10040f75:	8b cf                	mov    ecx,edi
10040f77:	2b cb                	sub    ecx,ebx
10040f79:	c1 f9 03             	sar    ecx,0x3
10040f7c:	74 3a                	je     0x10040fb8
10040f7e:	56                   	push   esi
10040f7f:	3b ff                	cmp    edi,edi
10040f81:	8b f7                	mov    esi,edi
10040f83:	74 12                	je     0x10040f97
10040f85:	56                   	push   esi
10040f86:	8b cb                	mov    ecx,ebx
10040f88:	e8 f3 fe ff ff       	call   0x10040e80
10040f8d:	83 c6 08             	add    esi,0x8
10040f90:	83 c3 08             	add    ebx,0x8
10040f93:	3b f7                	cmp    esi,edi
10040f95:	75 ee                	jne    0x10040f85
10040f97:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10040f9a:	8b f3                	mov    esi,ebx
10040f9c:	3b df                	cmp    ebx,edi
10040f9e:	74 10                	je     0x10040fb0
10040fa0:	6a 00                	push   0x0
10040fa2:	8b ce                	mov    ecx,esi
10040fa4:	e8 c7 40 00 00       	call   0x10045070
10040fa9:	83 c6 08             	add    esi,0x8
10040fac:	3b f7                	cmp    esi,edi
10040fae:	75 f0                	jne    0x10040fa0
10040fb0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10040fb4:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
10040fb7:	5e                   	pop    esi
10040fb8:	5f                   	pop    edi
10040fb9:	5d                   	pop    ebp
10040fba:	85 c0                	test   eax,eax
10040fbc:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
10040fc3:	ff 
10040fc4:	5b                   	pop    ebx
10040fc5:	74 0f                	je     0x10040fd6
10040fc7:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040fcd:	50                   	push   eax
10040fce:	8b 11                	mov    edx,DWORD PTR [ecx]
10040fd0:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040fd6:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10040fda:	85 c0                	test   eax,eax
10040fdc:	74 0f                	je     0x10040fed
10040fde:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10040fe4:	50                   	push   eax
10040fe5:	8b 11                	mov    edx,DWORD PTR [ecx]
10040fe7:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10040fed:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10040ff1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10040ff8:	83 c4 14             	add    esp,0x14
10040ffb:	c3                   	ret
10040ffc:	90                   	nop
10040ffd:	90                   	nop
10040ffe:	90                   	nop
10040fff:	90                   	nop

*/
void AboutDialog::LoadLogos() {
    // TODO: Implement LoadLogos
}

