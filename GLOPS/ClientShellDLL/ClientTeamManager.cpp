#include "ClientTeamManager.h"

// 0x1001f2c0: ClientTeamManager::AddTeam
/*
1001f2c0:	81 ec 38 01 00 00    	sub    esp,0x138
1001f2c6:	53                   	push   ebx
1001f2c7:	56                   	push   esi
1001f2c8:	57                   	push   edi
1001f2c9:	8b f9                	mov    edi,ecx
1001f2cb:	6a 44                	push   0x44
1001f2cd:	e8 57 46 08 00       	call   0x100a3929
1001f2d2:	33 db                	xor    ebx,ebx
1001f2d4:	83 c4 04             	add    esp,0x4
1001f2d7:	3b c3                	cmp    eax,ebx
1001f2d9:	74 3e                	je     0x1001f319
1001f2db:	88 58 40             	mov    BYTE PTR [eax+0x40],bl
1001f2de:	88 58 41             	mov    BYTE PTR [eax+0x41],bl
1001f2e1:	c7 00 ff ff ff ff    	mov    DWORD PTR [eax],0xffffffff
1001f2e7:	c7 40 04 ff ff ff ff 	mov    DWORD PTR [eax+0x4],0xffffffff
1001f2ee:	89 58 10             	mov    DWORD PTR [eax+0x10],ebx
1001f2f1:	89 58 18             	mov    DWORD PTR [eax+0x18],ebx
1001f2f4:	89 58 1c             	mov    DWORD PTR [eax+0x1c],ebx
1001f2f7:	89 58 3c             	mov    DWORD PTR [eax+0x3c],ebx
1001f2fa:	89 58 14             	mov    DWORD PTR [eax+0x14],ebx
1001f2fd:	89 58 20             	mov    DWORD PTR [eax+0x20],ebx
1001f300:	89 58 24             	mov    DWORD PTR [eax+0x24],ebx
1001f303:	89 58 30             	mov    DWORD PTR [eax+0x30],ebx
1001f306:	89 58 34             	mov    DWORD PTR [eax+0x34],ebx
1001f309:	89 58 28             	mov    DWORD PTR [eax+0x28],ebx
1001f30c:	89 58 2c             	mov    DWORD PTR [eax+0x2c],ebx
1001f30f:	89 58 38             	mov    DWORD PTR [eax+0x38],ebx
1001f312:	89 58 0c             	mov    DWORD PTR [eax+0xc],ebx
1001f315:	8b f0                	mov    esi,eax
1001f317:	eb 02                	jmp    0x1001f31b
1001f319:	33 f6                	xor    esi,esi
1001f31b:	8d 44 24 0c          	lea    eax,[esp+0xc]
1001f31f:	50                   	push   eax
1001f320:	68 1c 51 0c 10       	push   0x100c511c
1001f325:	e8 d6 e7 06 00       	call   0x1008db00
1001f32a:	83 c4 08             	add    esp,0x8
1001f32d:	85 c0                	test   eax,eax
1001f32f:	75 16                	jne    0x1001f347
1001f331:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f337:	8d 44 24 24          	lea    eax,[esp+0x24]
1001f33b:	50                   	push   eax
1001f33c:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f33e:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
1001f344:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1001f347:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
1001f34b:	51                   	push   ecx
1001f34c:	68 a4 62 0d 10       	push   0x100d62a4
1001f351:	e8 aa e7 06 00       	call   0x1008db00
1001f356:	83 c4 08             	add    esp,0x8
1001f359:	85 c0                	test   eax,eax
1001f35b:	75 25                	jne    0x1001f382
1001f35d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f363:	8d 44 24 24          	lea    eax,[esp+0x24]
1001f367:	50                   	push   eax
1001f368:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f36a:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
1001f370:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1001f374:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
1001f377:	51                   	push   ecx
1001f378:	8b cf                	mov    ecx,edi
1001f37a:	e8 a1 1e fe ff       	call   0x10001220
1001f37f:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
1001f382:	8d 54 24 0c          	lea    edx,[esp+0xc]
1001f386:	52                   	push   edx
1001f387:	68 94 62 0d 10       	push   0x100d6294
1001f38c:	e8 6f e7 06 00       	call   0x1008db00
1001f391:	83 c4 08             	add    esp,0x8
1001f394:	85 c0                	test   eax,eax
1001f396:	75 10                	jne    0x1001f3a8
1001f398:	8d 44 24 24          	lea    eax,[esp+0x24]
1001f39c:	50                   	push   eax
1001f39d:	e8 2e 20 ff ff       	call   0x100113d0
1001f3a2:	83 c4 04             	add    esp,0x4
1001f3a5:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
1001f3a8:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
1001f3ac:	51                   	push   ecx
1001f3ad:	68 8c 62 0d 10       	push   0x100d628c
1001f3b2:	e8 49 e7 06 00       	call   0x1008db00
1001f3b7:	83 c4 08             	add    esp,0x8
1001f3ba:	85 c0                	test   eax,eax
1001f3bc:	75 09                	jne    0x1001f3c7
1001f3be:	8b 94 24 38 01 00 00 	mov    edx,DWORD PTR [esp+0x138]
1001f3c5:	89 16                	mov    DWORD PTR [esi],edx
1001f3c7:	8d 44 24 0c          	lea    eax,[esp+0xc]
1001f3cb:	50                   	push   eax
1001f3cc:	68 80 62 0d 10       	push   0x100d6280
1001f3d1:	e8 2a e7 06 00       	call   0x1008db00
1001f3d6:	83 c4 08             	add    esp,0x8
1001f3d9:	85 c0                	test   eax,eax
1001f3db:	75 10                	jne    0x1001f3ed
1001f3dd:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1001f3e1:	51                   	push   ecx
1001f3e2:	e8 e9 1f ff ff       	call   0x100113d0
1001f3e7:	83 c4 04             	add    esp,0x4
1001f3ea:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
1001f3ed:	8d 54 24 0c          	lea    edx,[esp+0xc]
1001f3f1:	52                   	push   edx
1001f3f2:	68 74 62 0d 10       	push   0x100d6274
1001f3f7:	e8 04 e7 06 00       	call   0x1008db00
1001f3fc:	83 c4 08             	add    esp,0x8
1001f3ff:	85 c0                	test   eax,eax
1001f401:	75 10                	jne    0x1001f413
1001f403:	8d 44 24 24          	lea    eax,[esp+0x24]
1001f407:	50                   	push   eax
1001f408:	e8 c3 1f ff ff       	call   0x100113d0
1001f40d:	83 c4 04             	add    esp,0x4
1001f410:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
1001f413:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
1001f417:	51                   	push   ecx
1001f418:	68 6c 62 0d 10       	push   0x100d626c
1001f41d:	e8 de e6 06 00       	call   0x1008db00
1001f422:	83 c4 08             	add    esp,0x8
1001f425:	85 c0                	test   eax,eax
1001f427:	75 0a                	jne    0x1001f433
1001f429:	8b 94 24 40 01 00 00 	mov    edx,DWORD PTR [esp+0x140]
1001f430:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1001f433:	8d 44 24 0c          	lea    eax,[esp+0xc]
1001f437:	50                   	push   eax
1001f438:	68 60 62 0d 10       	push   0x100d6260
1001f43d:	e8 be e6 06 00       	call   0x1008db00
1001f442:	83 c4 08             	add    esp,0x8
1001f445:	85 c0                	test   eax,eax
1001f447:	75 10                	jne    0x1001f459
1001f449:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1001f44d:	51                   	push   ecx
1001f44e:	e8 7d 1f ff ff       	call   0x100113d0
1001f453:	83 c4 04             	add    esp,0x4
1001f456:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
1001f459:	8d 54 24 0c          	lea    edx,[esp+0xc]
1001f45d:	55                   	push   ebp
1001f45e:	52                   	push   edx
1001f45f:	68 54 62 0d 10       	push   0x100d6254
1001f464:	e8 97 e6 06 00       	call   0x1008db00
1001f469:	83 c4 08             	add    esp,0x8
1001f46c:	85 c0                	test   eax,eax
1001f46e:	75 57                	jne    0x1001f4c7
1001f470:	8d 46 30             	lea    eax,[esi+0x30]
1001f473:	89 18                	mov    DWORD PTR [eax],ebx
1001f475:	8a 4c 24 28          	mov    cl,BYTE PTR [esp+0x28]
1001f479:	3a cb                	cmp    cl,bl
1001f47b:	74 4a                	je     0x1001f4c7
1001f47d:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1001f483:	8d 6c 24 28          	lea    ebp,[esp+0x28]
1001f487:	55                   	push   ebp
1001f488:	50                   	push   eax
1001f489:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f48b:	ff 52 08             	call   DWORD PTR [edx+0x8]
1001f48e:	85 c0                	test   eax,eax
1001f490:	74 35                	je     0x1001f4c7
1001f492:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f498:	6a 7d                	push   0x7d
1001f49a:	68 18 62 0d 10       	push   0x100d6218
1001f49f:	8b 01                	mov    eax,DWORD PTR [ecx]
1001f4a1:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1001f4a7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1001f4ac:	8d 54 24 28          	lea    edx,[esp+0x28]
1001f4b0:	52                   	push   edx
1001f4b1:	68 d8 61 0d 10       	push   0x100d61d8
1001f4b6:	8b 08                	mov    ecx,DWORD PTR [eax]
1001f4b8:	68 7c 5d 0c 10       	push   0x100c5d7c
1001f4bd:	50                   	push   eax
1001f4be:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1001f4c4:	83 c4 10             	add    esp,0x10
1001f4c7:	8d 44 24 10          	lea    eax,[esp+0x10]
1001f4cb:	50                   	push   eax
1001f4cc:	68 cc 61 0d 10       	push   0x100d61cc
1001f4d1:	e8 2a e6 06 00       	call   0x1008db00
1001f4d6:	83 c4 08             	add    esp,0x8
1001f4d9:	85 c0                	test   eax,eax
1001f4db:	75 5a                	jne    0x1001f537
1001f4dd:	8d 46 34             	lea    eax,[esi+0x34]
1001f4e0:	89 18                	mov    DWORD PTR [eax],ebx
1001f4e2:	8a 4c 24 28          	mov    cl,BYTE PTR [esp+0x28]
1001f4e6:	3a cb                	cmp    cl,bl
1001f4e8:	74 4d                	je     0x1001f537
1001f4ea:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1001f4f0:	8d 6c 24 28          	lea    ebp,[esp+0x28]
1001f4f4:	55                   	push   ebp
1001f4f5:	50                   	push   eax
1001f4f6:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f4f8:	ff 52 08             	call   DWORD PTR [edx+0x8]
1001f4fb:	85 c0                	test   eax,eax
1001f4fd:	74 38                	je     0x1001f537
1001f4ff:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f505:	68 85 00 00 00       	push   0x85
1001f50a:	68 18 62 0d 10       	push   0x100d6218
1001f50f:	8b 01                	mov    eax,DWORD PTR [ecx]
1001f511:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1001f517:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1001f51c:	8d 54 24 28          	lea    edx,[esp+0x28]
1001f520:	52                   	push   edx
1001f521:	68 d8 61 0d 10       	push   0x100d61d8
1001f526:	8b 08                	mov    ecx,DWORD PTR [eax]
1001f528:	68 7c 5d 0c 10       	push   0x100c5d7c
1001f52d:	50                   	push   eax
1001f52e:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1001f534:	83 c4 10             	add    esp,0x10
1001f537:	8d 44 24 10          	lea    eax,[esp+0x10]
1001f53b:	50                   	push   eax
1001f53c:	68 c0 61 0d 10       	push   0x100d61c0
1001f541:	e8 ba e5 06 00       	call   0x1008db00
1001f546:	83 c4 08             	add    esp,0x8
1001f549:	85 c0                	test   eax,eax
1001f54b:	5d                   	pop    ebp
1001f54c:	75 10                	jne    0x1001f55e
1001f54e:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1001f552:	51                   	push   ecx
1001f553:	e8 78 1e ff ff       	call   0x100113d0
1001f558:	83 c4 04             	add    esp,0x4
1001f55b:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
1001f55e:	8d 54 24 0c          	lea    edx,[esp+0xc]
1001f562:	52                   	push   edx
1001f563:	68 b4 61 0d 10       	push   0x100d61b4
1001f568:	e8 93 e5 06 00       	call   0x1008db00
1001f56d:	83 c4 08             	add    esp,0x8
1001f570:	85 c0                	test   eax,eax
1001f572:	75 10                	jne    0x1001f584
1001f574:	8d 44 24 24          	lea    eax,[esp+0x24]
1001f578:	50                   	push   eax
1001f579:	e8 52 1e ff ff       	call   0x100113d0
1001f57e:	83 c4 04             	add    esp,0x4
1001f581:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
1001f584:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
1001f588:	51                   	push   ecx
1001f589:	68 a8 61 0d 10       	push   0x100d61a8
1001f58e:	e8 6d e5 06 00       	call   0x1008db00
1001f593:	83 c4 08             	add    esp,0x8
1001f596:	85 c0                	test   eax,eax
1001f598:	75 0a                	jne    0x1001f5a4
1001f59a:	8b 94 24 38 01 00 00 	mov    edx,DWORD PTR [esp+0x138]
1001f5a1:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
1001f5a4:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1001f5a7:	8d 46 38             	lea    eax,[esi+0x38]
1001f5aa:	3b d3                	cmp    edx,ebx
1001f5ac:	89 18                	mov    DWORD PTR [eax],ebx
1001f5ae:	74 56                	je     0x1001f606
1001f5b0:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1001f5b6:	81 c2 b4 00 00 00    	add    edx,0xb4
1001f5bc:	52                   	push   edx
1001f5bd:	50                   	push   eax
1001f5be:	8b 19                	mov    ebx,DWORD PTR [ecx]
1001f5c0:	ff 53 08             	call   DWORD PTR [ebx+0x8]
1001f5c3:	85 c0                	test   eax,eax
1001f5c5:	74 72                	je     0x1001f639
1001f5c7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f5cd:	68 9c 00 00 00       	push   0x9c
1001f5d2:	68 18 62 0d 10       	push   0x100d6218
1001f5d7:	8b 01                	mov    eax,DWORD PTR [ecx]
1001f5d9:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1001f5df:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1001f5e2:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1001f5e7:	81 c2 b4 00 00 00    	add    edx,0xb4
1001f5ed:	8b 08                	mov    ecx,DWORD PTR [eax]
1001f5ef:	52                   	push   edx
1001f5f0:	68 68 61 0d 10       	push   0x100d6168
1001f5f5:	68 7c 5d 0c 10       	push   0x100c5d7c
1001f5fa:	50                   	push   eax
1001f5fb:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1001f601:	83 c4 10             	add    esp,0x10
1001f604:	eb 33                	jmp    0x1001f639
1001f606:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f60c:	68 a1 00 00 00       	push   0xa1
1001f611:	68 18 62 0d 10       	push   0x100d6218
1001f616:	8b 01                	mov    eax,DWORD PTR [ecx]
1001f618:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1001f61e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1001f623:	68 2c 61 0d 10       	push   0x100d612c
1001f628:	68 7c 5d 0c 10       	push   0x100c5d7c
1001f62d:	50                   	push   eax
1001f62e:	8b 08                	mov    ecx,DWORD PTR [eax]
1001f630:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1001f636:	83 c4 0c             	add    esp,0xc
1001f639:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1001f63c:	8d 4f 0c             	lea    ecx,[edi+0xc]
1001f63f:	50                   	push   eax
1001f640:	e8 cb ce fe ff       	call   0x1000c510
1001f645:	89 70 08             	mov    DWORD PTR [eax+0x8],esi
1001f648:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
1001f64b:	40                   	inc    eax
1001f64c:	89 47 18             	mov    DWORD PTR [edi+0x18],eax
1001f64f:	5f                   	pop    edi
1001f650:	5e                   	pop    esi
1001f651:	5b                   	pop    ebx
1001f652:	81 c4 38 01 00 00    	add    esp,0x138
1001f658:	c3                   	ret
1001f659:	90                   	nop
1001f65a:	90                   	nop
1001f65b:	90                   	nop
1001f65c:	90                   	nop
1001f65d:	90                   	nop
1001f65e:	90                   	nop
1001f65f:	90                   	nop
1001f660:	56                   	push   esi
1001f661:	8b 71 0c             	mov    esi,DWORD PTR [ecx+0xc]
1001f664:	8b 49 10             	mov    ecx,DWORD PTR [ecx+0x10]
1001f667:	33 d2                	xor    edx,edx
1001f669:	57                   	push   edi
1001f66a:	85 f6                	test   esi,esi
1001f66c:	7e 16                	jle    0x1001f684
1001f66e:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
1001f672:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
1001f675:	85 c0                	test   eax,eax
1001f677:	74 04                	je     0x1001f67d
1001f679:	39 38                	cmp    DWORD PTR [eax],edi
1001f67b:	74 09                	je     0x1001f686
1001f67d:	8b 09                	mov    ecx,DWORD PTR [ecx]
1001f67f:	42                   	inc    edx
1001f680:	3b d6                	cmp    edx,esi
1001f682:	7c ee                	jl     0x1001f672
1001f684:	33 c0                	xor    eax,eax
1001f686:	5f                   	pop    edi
1001f687:	5e                   	pop    esi
1001f688:	c2 04 00             	ret    0x4
1001f68b:	90                   	nop
1001f68c:	90                   	nop
1001f68d:	90                   	nop
1001f68e:	90                   	nop
1001f68f:	90                   	nop
1001f690:	53                   	push   ebx
1001f691:	55                   	push   ebp
1001f692:	8b 69 0c             	mov    ebp,DWORD PTR [ecx+0xc]
1001f695:	33 db                	xor    ebx,ebx
1001f697:	56                   	push   esi
1001f698:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
1001f69b:	85 ed                	test   ebp,ebp
1001f69d:	57                   	push   edi
1001f69e:	7e 29                	jle    0x1001f6c9
1001f6a0:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
1001f6a3:	85 ff                	test   edi,edi
1001f6a5:	74 1b                	je     0x1001f6c2
1001f6a7:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1001f6ab:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f6b1:	52                   	push   edx
1001f6b2:	8b 57 18             	mov    edx,DWORD PTR [edi+0x18]
1001f6b5:	8b 01                	mov    eax,DWORD PTR [ecx]
1001f6b7:	52                   	push   edx
1001f6b8:	ff 90 c4 00 00 00    	call   DWORD PTR [eax+0xc4]
1001f6be:	85 c0                	test   eax,eax
1001f6c0:	75 10                	jne    0x1001f6d2
1001f6c2:	8b 36                	mov    esi,DWORD PTR [esi]
1001f6c4:	43                   	inc    ebx
1001f6c5:	3b dd                	cmp    ebx,ebp
1001f6c7:	7c d7                	jl     0x1001f6a0
1001f6c9:	5f                   	pop    edi
1001f6ca:	5e                   	pop    esi
1001f6cb:	5d                   	pop    ebp
1001f6cc:	33 c0                	xor    eax,eax
1001f6ce:	5b                   	pop    ebx
1001f6cf:	c2 04 00             	ret    0x4
1001f6d2:	8b c7                	mov    eax,edi
1001f6d4:	5f                   	pop    edi
1001f6d5:	5e                   	pop    esi
1001f6d6:	5d                   	pop    ebp
1001f6d7:	5b                   	pop    ebx
1001f6d8:	c2 04 00             	ret    0x4
1001f6db:	90                   	nop
1001f6dc:	90                   	nop
1001f6dd:	90                   	nop
1001f6de:	90                   	nop
1001f6df:	90                   	nop
1001f6e0:	56                   	push   esi
1001f6e1:	8b f1                	mov    esi,ecx
1001f6e3:	57                   	push   edi
1001f6e4:	33 ff                	xor    edi,edi
1001f6e6:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
1001f6e9:	c7 06 ff ff ff ff    	mov    DWORD PTR [esi],0xffffffff
1001f6ef:	3b c7                	cmp    eax,edi
1001f6f1:	74 0f                	je     0x1001f702
1001f6f3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f6f9:	50                   	push   eax
1001f6fa:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f6fc:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f702:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
1001f705:	89 7e 10             	mov    DWORD PTR [esi+0x10],edi
1001f708:	3b c7                	cmp    eax,edi
1001f70a:	74 0f                	je     0x1001f71b
1001f70c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f712:	50                   	push   eax
1001f713:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f715:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f71b:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1001f71e:	89 7e 18             	mov    DWORD PTR [esi+0x18],edi
1001f721:	3b c7                	cmp    eax,edi
1001f723:	74 0f                	je     0x1001f734
1001f725:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f72b:	50                   	push   eax
1001f72c:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f72e:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f734:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1001f737:	89 7e 1c             	mov    DWORD PTR [esi+0x1c],edi
1001f73a:	3b c7                	cmp    eax,edi
1001f73c:	89 7e 3c             	mov    DWORD PTR [esi+0x3c],edi
1001f73f:	74 0f                	je     0x1001f750
1001f741:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f747:	50                   	push   eax
1001f748:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f74a:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f750:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1001f753:	89 7e 14             	mov    DWORD PTR [esi+0x14],edi
1001f756:	3b c7                	cmp    eax,edi
1001f758:	74 0f                	je     0x1001f769
1001f75a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f760:	50                   	push   eax
1001f761:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f763:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f769:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1001f76c:	89 7e 20             	mov    DWORD PTR [esi+0x20],edi
1001f76f:	3b c7                	cmp    eax,edi
1001f771:	74 0f                	je     0x1001f782
1001f773:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f779:	50                   	push   eax
1001f77a:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f77c:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f782:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1001f785:	89 7e 24             	mov    DWORD PTR [esi+0x24],edi
1001f788:	3b c7                	cmp    eax,edi
1001f78a:	74 0c                	je     0x1001f798
1001f78c:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1001f792:	50                   	push   eax
1001f793:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f795:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1001f798:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1001f79b:	89 7e 30             	mov    DWORD PTR [esi+0x30],edi
1001f79e:	3b c7                	cmp    eax,edi
1001f7a0:	74 0c                	je     0x1001f7ae
1001f7a2:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1001f7a8:	50                   	push   eax
1001f7a9:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f7ab:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1001f7ae:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
1001f7b1:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
1001f7b4:	3b c7                	cmp    eax,edi
1001f7b6:	74 0f                	je     0x1001f7c7
1001f7b8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f7be:	50                   	push   eax
1001f7bf:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f7c1:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f7c7:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
1001f7ca:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
1001f7cd:	3b c7                	cmp    eax,edi
1001f7cf:	74 0f                	je     0x1001f7e0
1001f7d1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f7d7:	50                   	push   eax
1001f7d8:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f7da:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1001f7e0:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1001f7e3:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
1001f7e6:	3b c7                	cmp    eax,edi
1001f7e8:	74 0c                	je     0x1001f7f6
1001f7ea:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1001f7f0:	50                   	push   eax
1001f7f1:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f7f3:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1001f7f6:	89 7e 38             	mov    DWORD PTR [esi+0x38],edi
1001f7f9:	5f                   	pop    edi
1001f7fa:	5e                   	pop    esi
1001f7fb:	c3                   	ret
1001f7fc:	90                   	nop
1001f7fd:	90                   	nop
1001f7fe:	90                   	nop
1001f7ff:	90                   	nop
1001f800:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
1001f803:	85 c0                	test   eax,eax
1001f805:	75 03                	jne    0x1001f80a
1001f807:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
1001f80a:	c3                   	ret
1001f80b:	90                   	nop
1001f80c:	90                   	nop
1001f80d:	90                   	nop
1001f80e:	90                   	nop
1001f80f:	90                   	nop
1001f810:	56                   	push   esi
1001f811:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1001f815:	33 c0                	xor    eax,eax
1001f817:	33 d2                	xor    edx,edx
1001f819:	b9 b4 62 0d 10       	mov    ecx,0x100d62b4
1001f81e:	39 31                	cmp    DWORD PTR [ecx],esi
1001f820:	74 0e                	je     0x1001f830
1001f822:	83 c1 14             	add    ecx,0x14
1001f825:	42                   	inc    edx
1001f826:	81 f9 b0 66 0d 10    	cmp    ecx,0x100d66b0
1001f82c:	7c f0                	jl     0x1001f81e
1001f82e:	5e                   	pop    esi
1001f82f:	c3                   	ret
1001f830:	8d 04 92             	lea    eax,[edx+edx*4]
1001f833:	5e                   	pop    esi
1001f834:	8d 04 85 b0 62 0d 10 	lea    eax,[eax*4+0x100d62b0]
1001f83b:	c3                   	ret
1001f83c:	90                   	nop
1001f83d:	90                   	nop
1001f83e:	90                   	nop
1001f83f:	90                   	nop
1001f840:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1001f844:	b8 3f 09 00 00       	mov    eax,0x93f
1001f849:	83 f9 08             	cmp    ecx,0x8
1001f84c:	0f 87 d4 00 00 00    	ja     0x1001f926
1001f852:	ff 24 8d 3c f9 01 10 	jmp    DWORD PTR [ecx*4+0x1001f93c]
1001f859:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f85f:	b8 37 09 00 00       	mov    eax,0x937
1001f864:	50                   	push   eax
1001f865:	51                   	push   ecx
1001f866:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f868:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f86e:	83 c4 08             	add    esp,0x8
1001f871:	c3                   	ret
1001f872:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f878:	b8 38 09 00 00       	mov    eax,0x938
1001f87d:	50                   	push   eax
1001f87e:	51                   	push   ecx
1001f87f:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f881:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f887:	83 c4 08             	add    esp,0x8
1001f88a:	c3                   	ret
1001f88b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f891:	b8 39 09 00 00       	mov    eax,0x939
1001f896:	50                   	push   eax
1001f897:	51                   	push   ecx
1001f898:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f89a:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f8a0:	83 c4 08             	add    esp,0x8
1001f8a3:	c3                   	ret
1001f8a4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f8aa:	b8 3a 09 00 00       	mov    eax,0x93a
1001f8af:	50                   	push   eax
1001f8b0:	51                   	push   ecx
1001f8b1:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f8b3:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f8b9:	83 c4 08             	add    esp,0x8
1001f8bc:	c3                   	ret
1001f8bd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f8c3:	b8 3b 09 00 00       	mov    eax,0x93b
1001f8c8:	50                   	push   eax
1001f8c9:	51                   	push   ecx
1001f8ca:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f8cc:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f8d2:	83 c4 08             	add    esp,0x8
1001f8d5:	c3                   	ret
1001f8d6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f8dc:	b8 3c 09 00 00       	mov    eax,0x93c
1001f8e1:	50                   	push   eax
1001f8e2:	51                   	push   ecx
1001f8e3:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f8e5:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f8eb:	83 c4 08             	add    esp,0x8
1001f8ee:	c3                   	ret
1001f8ef:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f8f5:	b8 3d 09 00 00       	mov    eax,0x93d
1001f8fa:	50                   	push   eax
1001f8fb:	51                   	push   ecx
1001f8fc:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f8fe:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f904:	83 c4 08             	add    esp,0x8
1001f907:	c3                   	ret
1001f908:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f90e:	b8 3e 09 00 00       	mov    eax,0x93e
1001f913:	50                   	push   eax
1001f914:	51                   	push   ecx
1001f915:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f917:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f91d:	83 c4 08             	add    esp,0x8
1001f920:	c3                   	ret
1001f921:	b8 3f 09 00 00       	mov    eax,0x93f
1001f926:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f92c:	50                   	push   eax
1001f92d:	51                   	push   ecx
1001f92e:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f930:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1001f936:	83 c4 08             	add    esp,0x8
1001f939:	c3                   	ret
1001f93a:	8b ff                	mov    edi,edi
1001f93c:	59                   	pop    ecx
1001f93d:	f8                   	clc
1001f93e:	01 10                	add    DWORD PTR [eax],edx
1001f940:	72 f8                	jb     0x1001f93a
1001f942:	01 10                	add    DWORD PTR [eax],edx
1001f944:	8b f8                	mov    edi,eax
1001f946:	01 10                	add    DWORD PTR [eax],edx
1001f948:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
1001f949:	f8                   	clc
1001f94a:	01 10                	add    DWORD PTR [eax],edx
1001f94c:	bd f8 01 10 d6       	mov    ebp,0xd61001f8
1001f951:	f8                   	clc
1001f952:	01 10                	add    DWORD PTR [eax],edx
1001f954:	ef                   	out    dx,eax
1001f955:	f8                   	clc
1001f956:	01 10                	add    DWORD PTR [eax],edx
1001f958:	08 f9                	or     cl,bh
1001f95a:	01 10                	add    DWORD PTR [eax],edx
1001f95c:	21 f9                	and    ecx,edi
1001f95e:	01 10                	add    DWORD PTR [eax],edx
1001f960:	83 ec 10             	sub    esp,0x10
1001f963:	8d 44 24 0c          	lea    eax,[esp+0xc]
1001f967:	8d 4c 24 08          	lea    ecx,[esp+0x8]
1001f96b:	50                   	push   eax
1001f96c:	8d 54 24 08          	lea    edx,[esp+0x8]
1001f970:	51                   	push   ecx
1001f971:	8d 44 24 08          	lea    eax,[esp+0x8]
1001f975:	52                   	push   edx
1001f976:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1001f97a:	8d 4c 24 20          	lea    ecx,[esp+0x20]
1001f97e:	50                   	push   eax
1001f97f:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1001f984:	51                   	push   ecx
1001f985:	52                   	push   edx
1001f986:	ff 90 44 03 00 00    	call   DWORD PTR [eax+0x344]
1001f98c:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
1001f990:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1001f994:	d9 c0                	fld    st(0)
1001f996:	d9 18                	fstp   DWORD PTR [eax]
1001f998:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
1001f99c:	d9 54 24 2c          	fst    DWORD PTR [esp+0x2c]
1001f9a0:	d9 58 04             	fstp   DWORD PTR [eax+0x4]
1001f9a3:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
1001f9a7:	d8 e1                	fsub   st,st(1)
1001f9a9:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
1001f9ac:	dd d8                	fstp   st(0)
1001f9ae:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
1001f9b2:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
1001f9b6:	d9 58 0c             	fstp   DWORD PTR [eax+0xc]
1001f9b9:	83 c4 28             	add    esp,0x28
1001f9bc:	c3                   	ret
1001f9bd:	90                   	nop
1001f9be:	90                   	nop
1001f9bf:	90                   	nop
1001f9c0:	c3                   	ret
1001f9c1:	90                   	nop
1001f9c2:	90                   	nop
1001f9c3:	90                   	nop
1001f9c4:	90                   	nop
1001f9c5:	90                   	nop
1001f9c6:	90                   	nop
1001f9c7:	90                   	nop
1001f9c8:	90                   	nop
1001f9c9:	90                   	nop
1001f9ca:	90                   	nop
1001f9cb:	90                   	nop
1001f9cc:	90                   	nop
1001f9cd:	90                   	nop
1001f9ce:	90                   	nop
1001f9cf:	90                   	nop
1001f9d0:	c3                   	ret
1001f9d1:	90                   	nop
1001f9d2:	90                   	nop
1001f9d3:	90                   	nop
1001f9d4:	90                   	nop
1001f9d5:	90                   	nop
1001f9d6:	90                   	nop
1001f9d7:	90                   	nop
1001f9d8:	90                   	nop
1001f9d9:	90                   	nop
1001f9da:	90                   	nop
1001f9db:	90                   	nop
1001f9dc:	90                   	nop
1001f9dd:	90                   	nop
1001f9de:	90                   	nop
1001f9df:	90                   	nop
1001f9e0:	81 ec 84 06 00 00    	sub    esp,0x684
1001f9e6:	8d 84 24 fc 00 00 00 	lea    eax,[esp+0xfc]
1001f9ed:	ba 0a 00 00 00       	mov    edx,0xa
1001f9f2:	33 c9                	xor    ecx,ecx
1001f9f4:	88 08                	mov    BYTE PTR [eax],cl
1001f9f6:	05 80 00 00 00       	add    eax,0x80
1001f9fb:	4a                   	dec    edx
1001f9fc:	75 f6                	jne    0x1001f9f4
1001f9fe:	56                   	push   esi
1001f9ff:	be 01 00 00 00       	mov    esi,0x1
1001fa04:	66 89 4c 24 06       	mov    WORD PTR [esp+0x6],cx
1001fa09:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
1001fa0d:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1001fa11:	c7 44 24 20 00 00 80 	mov    DWORD PTR [esp+0x20],0x3f800000
1001fa18:	3f 
1001fa19:	c7 44 24 24 00 00 80 	mov    DWORD PTR [esp+0x24],0x3f800000
1001fa20:	3f 
1001fa21:	c7 44 24 28 00 00 80 	mov    DWORD PTR [esp+0x28],0x3f800000
1001fa28:	3f 
1001fa29:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
1001fa30:	00 
1001fa31:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
1001fa38:	00 
1001fa39:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
1001fa40:	00 
1001fa41:	c7 44 24 38 00 00 80 	mov    DWORD PTR [esp+0x38],0x3f800000
1001fa48:	3f 
1001fa49:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
1001fa4d:	88 4c 24 40          	mov    BYTE PTR [esp+0x40],cl
1001fa51:	88 8c 24 80 00 00 00 	mov    BYTE PTR [esp+0x80],cl
1001fa58:	8d 84 24 00 01 00 00 	lea    eax,[esp+0x100]
1001fa5f:	ba 0a 00 00 00       	mov    edx,0xa
1001fa64:	88 08                	mov    BYTE PTR [eax],cl
1001fa66:	05 80 00 00 00       	add    eax,0x80
1001fa6b:	4a                   	dec    edx
1001fa6c:	75 f6                	jne    0x1001fa64
1001fa6e:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
1001fa72:	8b b4 24 8c 06 00 00 	mov    esi,DWORD PTR [esp+0x68c]
1001fa79:	88 8c 24 00 06 00 00 	mov    BYTE PTR [esp+0x600],cl
1001fa80:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1001fa86:	d9 46 18             	fld    DWORD PTR [esi+0x18]
1001fa89:	d8 46 0c             	fadd   DWORD PTR [esi+0xc]
1001fa8c:	d9 46 1c             	fld    DWORD PTR [esi+0x1c]
1001fa8f:	d8 46 10             	fadd   DWORD PTR [esi+0x10]
1001fa92:	8d 44 24 04          	lea    eax,[esp+0x4]
1001fa96:	c7 84 24 80 06 00 00 	mov    DWORD PTR [esp+0x680],0x0
1001fa9d:	00 00 00 00 
1001faa1:	50                   	push   eax
1001faa2:	c7 84 24 88 06 00 00 	mov    DWORD PTR [esp+0x688],0x0
1001faa9:	00 00 00 00 
1001faad:	66 c7 44 24 08 08 00 	mov    WORD PTR [esp+0x8],0x8
1001fab4:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1001fab8:	d9 46 20             	fld    DWORD PTR [esi+0x20]
1001fabb:	d8 46 14             	fadd   DWORD PTR [esi+0x14]
1001fabe:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1001fac2:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1001fac8:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1001facc:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1001fad0:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1001fad6:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1001fada:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1001fade:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1001fae4:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1001fae8:	ff 91 ec 02 00 00    	call   DWORD PTR [ecx+0x2ec]
1001faee:	83 c4 04             	add    esp,0x4
1001faf1:	89 06                	mov    DWORD PTR [esi],eax
1001faf3:	5e                   	pop    esi
1001faf4:	81 c4 84 06 00 00    	add    esp,0x684
1001fafa:	c3                   	ret
1001fafb:	90                   	nop
1001fafc:	90                   	nop
1001fafd:	90                   	nop
1001fafe:	90                   	nop
1001faff:	90                   	nop
1001fb00:	c3                   	ret
1001fb01:	90                   	nop
1001fb02:	90                   	nop
1001fb03:	90                   	nop
1001fb04:	90                   	nop
1001fb05:	90                   	nop
1001fb06:	90                   	nop
1001fb07:	90                   	nop
1001fb08:	90                   	nop
1001fb09:	90                   	nop
1001fb0a:	90                   	nop
1001fb0b:	90                   	nop
1001fb0c:	90                   	nop
1001fb0d:	90                   	nop
1001fb0e:	90                   	nop
1001fb0f:	90                   	nop
1001fb10:	a0 c8 7d 11 10       	mov    al,ds:0x10117dc8
1001fb15:	81 ec c8 00 00 00    	sub    esp,0xc8
1001fb1b:	a8 01                	test   al,0x1
1001fb1d:	75 36                	jne    0x1001fb55
1001fb1f:	8a d0                	mov    dl,al
1001fb21:	68 a0 01 02 10       	push   0x100201a0
1001fb26:	80 ca 01             	or     dl,0x1
1001fb29:	c7 05 30 5b 11 10 00 	mov    DWORD PTR ds:0x10115b30,0x0
1001fb30:	00 00 00 
1001fb33:	88 15 c8 7d 11 10    	mov    BYTE PTR ds:0x10117dc8,dl
1001fb39:	c7 05 34 5b 11 10 00 	mov    DWORD PTR ds:0x10115b34,0xc47a0000
1001fb40:	00 7a c4 
1001fb43:	c7 05 38 5b 11 10 00 	mov    DWORD PTR ds:0x10115b38,0x0
1001fb4a:	00 00 00 
1001fb4d:	e8 33 53 08 00       	call   0x100a4e85
1001fb52:	83 c4 04             	add    esp,0x4
1001fb55:	d9 05 30 5b 11 10    	fld    DWORD PTR ds:0x10115b30
1001fb5b:	d8 05 60 5b 11 10    	fadd   DWORD PTR ds:0x10115b60
1001fb61:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1001fb67:	53                   	push   ebx
1001fb68:	55                   	push   ebp
1001fb69:	56                   	push   esi
1001fb6a:	8b 01                	mov    eax,DWORD PTR [ecx]
1001fb6c:	57                   	push   edi
1001fb6d:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1001fb71:	d9 05 34 5b 11 10    	fld    DWORD PTR ds:0x10115b34
1001fb77:	d8 05 64 5b 11 10    	fadd   DWORD PTR ds:0x10115b64
1001fb7d:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1001fb81:	d9 05 38 5b 11 10    	fld    DWORD PTR ds:0x10115b38
1001fb87:	d8 05 68 5b 11 10    	fadd   DWORD PTR ds:0x10115b68
1001fb8d:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1001fb91:	ff 90 dc 00 00 00    	call   DWORD PTR [eax+0xdc]
1001fb97:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1001fb9d:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
1001fba1:	8b 11                	mov    edx,DWORD PTR [ecx]
1001fba3:	d9 9c 24 8c 00 00 00 	fstp   DWORD PTR [esp+0x8c]
1001fbaa:	ff 92 dc 00 00 00    	call   DWORD PTR [edx+0xdc]
1001fbb0:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1001fbb6:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
1001fbba:	8b 01                	mov    eax,DWORD PTR [ecx]
1001fbbc:	d9 9c 24 90 00 00 00 	fstp   DWORD PTR [esp+0x90]
1001fbc3:	ff 90 dc 00 00 00    	call   DWORD PTR [eax+0xdc]
1001fbc9:	8b b4 24 dc 00 00 00 	mov    esi,DWORD PTR [esp+0xdc]
1001fbd0:	8b ac 24 ec 00 00 00 	mov    ebp,DWORD PTR [esp+0xec]
1001fbd7:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
1001fbdb:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1001fbde:	8b bc 24 e8 00 00 00 	mov    edi,DWORD PTR [esp+0xe8]
1001fbe5:	8b 9c 24 e4 00 00 00 	mov    ebx,DWORD PTR [esp+0xe4]
1001fbec:	3b c5                	cmp    eax,ebp
1001fbee:	d9 9c 24 94 00 00 00 	fstp   DWORD PTR [esp+0x94]
1001fbf5:	d9 46 24             	fld    DWORD PTR [esi+0x24]
1001fbf8:	d8 0d 08 84 0b 10    	fmul   DWORD PTR ds:0x100b8408
1001fbfe:	d9 c0                	fld    st(0)
1001fc00:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
1001fc04:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1001fc08:	d9 c0                	fld    st(0)
1001fc0a:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
1001fc0e:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1001fc12:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
1001fc16:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1001fc1a:	0f 8d 6c 01 00 00    	jge    0x1001fd8c
1001fc20:	a0 7c 5b 11 10       	mov    al,ds:0x10115b7c
1001fc25:	a8 01                	test   al,0x1
1001fc27:	75 27                	jne    0x1001fc50
1001fc29:	68 d0 1a 05 10       	push   0x10051ad0
1001fc2e:	6a 02                	push   0x2
1001fc30:	0c 01                	or     al,0x1
1001fc32:	6a 1c                	push   0x1c
1001fc34:	68 80 5d 11 10       	push   0x10115d80
1001fc39:	a2 7c 5b 11 10       	mov    ds:0x10115b7c,al
1001fc3e:	e8 2d b8 fe ff       	call   0x1000b470
1001fc43:	68 90 01 02 10       	push   0x10020190
1001fc48:	e8 38 52 08 00       	call   0x100a4e85
1001fc4d:	83 c4 04             	add    esp,0x4
1001fc50:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1001fc53:	89 0d 8c 5d 11 10    	mov    DWORD PTR ds:0x10115d8c,ecx
1001fc59:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
1001fc5c:	89 15 90 5d 11 10    	mov    DWORD PTR ds:0x10115d90,edx
1001fc62:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1001fc65:	a3 94 5d 11 10       	mov    ds:0x10115d94,eax
1001fc6a:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1001fc6d:	89 0d a8 5d 11 10    	mov    DWORD PTR ds:0x10115da8,ecx
1001fc73:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
1001fc76:	89 15 ac 5d 11 10    	mov    DWORD PTR ds:0x10115dac,edx
1001fc7c:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1001fc7f:	a3 b0 5d 11 10       	mov    ds:0x10115db0,eax
1001fc84:	c7 05 b4 5d 11 10 00 	mov    DWORD PTR ds:0x10115db4,0x0
1001fc8b:	00 00 00 
1001fc8e:	8b 0f                	mov    ecx,DWORD PTR [edi]
1001fc90:	8b 13                	mov    edx,DWORD PTR [ebx]
1001fc92:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
1001fc96:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1001fc9a:	e8 c1 86 fe ff       	call   0x10008360
1001fc9f:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
1001fca3:	c7 44 24 70 00 00 00 	mov    DWORD PTR [esp+0x70],0x0
1001fcaa:	00 
1001fcab:	df 6c 24 6c          	fild   QWORD PTR [esp+0x6c]
1001fcaf:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1001fcb5:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
1001fcb9:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1001fcbd:	de c9                	fmulp  st(1),st
1001fcbf:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
1001fcc3:	d9 1d 80 5d 11 10    	fstp   DWORD PTR ds:0x10115d80
1001fcc9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001fccc:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1001fccf:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1001fcd3:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1001fcd7:	e8 84 86 fe ff       	call   0x10008360
1001fcdc:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
1001fce0:	c7 44 24 78 00 00 00 	mov    DWORD PTR [esp+0x78],0x0
1001fce7:	00 
1001fce8:	df 6c 24 74          	fild   QWORD PTR [esp+0x74]
1001fcec:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1001fcf2:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1001fcf6:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
1001fcfa:	de c9                	fmulp  st(1),st
1001fcfc:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
1001fd00:	d9 1d 84 5d 11 10    	fstp   DWORD PTR ds:0x10115d84
1001fd06:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
1001fd09:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
1001fd0c:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1001fd10:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1001fd14:	e8 47 86 fe ff       	call   0x10008360
1001fd19:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
1001fd1d:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x0
1001fd24:	00 00 00 00 
1001fd28:	df 6c 24 7c          	fild   QWORD PTR [esp+0x7c]
1001fd2c:	8b 0d 80 5d 11 10    	mov    ecx,DWORD PTR ds:0x10115d80
1001fd32:	8b 15 84 5d 11 10    	mov    edx,DWORD PTR ds:0x10115d84
1001fd38:	89 0d 9c 5d 11 10    	mov    DWORD PTR ds:0x10115d9c,ecx
1001fd3e:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1001fd44:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1001fd4a:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1001fd4e:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
1001fd52:	89 15 a0 5d 11 10    	mov    DWORD PTR ds:0x10115da0,edx
1001fd58:	68 80 5d 11 10       	push   0x10115d80
1001fd5d:	de c9                	fmulp  st(1),st
1001fd5f:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
1001fd63:	d9 15 88 5d 11 10    	fst    DWORD PTR ds:0x10115d88
1001fd69:	d9 1d a4 5d 11 10    	fstp   DWORD PTR ds:0x10115da4
1001fd6f:	8b 06                	mov    eax,DWORD PTR [esi]
1001fd71:	50                   	push   eax
1001fd72:	ff 91 88 03 00 00    	call   DWORD PTR [ecx+0x388]
1001fd78:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
1001fd7b:	83 c4 08             	add    esp,0x8
1001fd7e:	41                   	inc    ecx
1001fd7f:	8b c1                	mov    eax,ecx
1001fd81:	89 4e 3c             	mov    DWORD PTR [esi+0x3c],ecx
1001fd84:	3b c5                	cmp    eax,ebp
1001fd86:	0f 8c 94 fe ff ff    	jl     0x1001fc20
1001fd8c:	8b 16                	mov    edx,DWORD PTR [esi]
1001fd8e:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1001fd93:	6a 00                	push   0x0
1001fd95:	52                   	push   edx
1001fd96:	ff 90 7c 03 00 00    	call   DWORD PTR [eax+0x37c]
1001fd9c:	8b e8                	mov    ebp,eax
1001fd9e:	83 c4 08             	add    esp,0x8
1001fda1:	85 ed                	test   ebp,ebp
1001fda3:	0f 84 ce 03 00 00    	je     0x10020177
1001fda9:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
1001fdaf:	8d 4c 24 34          	lea    ecx,[esp+0x34]
1001fdb3:	51                   	push   ecx
1001fdb4:	55                   	push   ebp
1001fdb5:	ff 92 80 03 00 00    	call   DWORD PTR [edx+0x380]
1001fdbb:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1001fdbf:	d8 84 24 94 00 00 00 	fadd   DWORD PTR [esp+0x94]
1001fdc6:	83 c4 08             	add    esp,0x8
1001fdc9:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1001fdcd:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1001fdd1:	d8 84 24 90 00 00 00 	fadd   DWORD PTR [esp+0x90]
1001fdd8:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1001fddc:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1001fde0:	d8 84 24 94 00 00 00 	fadd   DWORD PTR [esp+0x94]
1001fde7:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
1001fdeb:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1001fdef:	d8 43 04             	fadd   DWORD PTR [ebx+0x4]
1001fdf2:	d8 5c 24 38          	fcomp  DWORD PTR [esp+0x38]
1001fdf6:	df e0                	fnstsw ax
1001fdf8:	f6 c4 01             	test   ah,0x1
1001fdfb:	0f 85 e3 00 00 00    	jne    0x1001fee4
1001fe01:	8b 84 24 ec 00 00 00 	mov    eax,DWORD PTR [esp+0xec]
1001fe08:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
1001fe0b:	3b c8                	cmp    ecx,eax
1001fe0d:	7e 29                	jle    0x1001fe38
1001fe0f:	8b 16                	mov    edx,DWORD PTR [esi]
1001fe11:	8b 4d 3c             	mov    ecx,DWORD PTR [ebp+0x3c]
1001fe14:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1001fe19:	55                   	push   ebp
1001fe1a:	52                   	push   edx
1001fe1b:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1001fe1f:	ff 90 8c 03 00 00    	call   DWORD PTR [eax+0x38c]
1001fe25:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1001fe28:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
1001fe2c:	83 c4 08             	add    esp,0x8
1001fe2f:	48                   	dec    eax
1001fe30:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
1001fe33:	e9 23 03 00 00       	jmp    0x1002015b
1001fe38:	8b 0f                	mov    ecx,DWORD PTR [edi]
1001fe3a:	8b 13                	mov    edx,DWORD PTR [ebx]
1001fe3c:	89 8c 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],ecx
1001fe43:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1001fe47:	e8 14 85 fe ff       	call   0x10008360
1001fe4c:	89 84 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],eax
1001fe53:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0x0
1001fe5a:	00 00 00 00 
1001fe5e:	df ac 24 b0 00 00 00 	fild   QWORD PTR [esp+0xb0]
1001fe65:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1001fe6b:	d9 84 24 88 00 00 00 	fld    DWORD PTR [esp+0x88]
1001fe72:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
1001fe76:	de c9                	fmulp  st(1),st
1001fe78:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
1001fe7c:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1001fe80:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1001fe84:	d8 67 04             	fsub   DWORD PTR [edi+0x4]
1001fe87:	d9 47 04             	fld    DWORD PTR [edi+0x4]
1001fe8a:	d8 63 04             	fsub   DWORD PTR [ebx+0x4]
1001fe8d:	e8 48 50 08 00       	call   0x100a4eda
1001fe92:	d8 47 04             	fadd   DWORD PTR [edi+0x4]
1001fe95:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1001fe98:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
1001fe9b:	89 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],eax
1001fea2:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1001fea6:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1001feaa:	e8 b1 84 fe ff       	call   0x10008360
1001feaf:	89 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],eax
1001feb6:	c7 84 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],0x0
1001febd:	00 00 00 00 
1001fec1:	df ac 24 b8 00 00 00 	fild   QWORD PTR [esp+0xb8]
1001fec8:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1001fece:	d9 84 24 84 00 00 00 	fld    DWORD PTR [esp+0x84]
1001fed5:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
1001fed9:	de c9                	fmulp  st(1),st
1001fedb:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
1001fedf:	e9 38 01 00 00       	jmp    0x1002001c
1001fee4:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
1001fee8:	d8 1f                	fcomp  DWORD PTR [edi]
1001feea:	df e0                	fnstsw ax
1001feec:	f6 c4 41             	test   ah,0x41
1001feef:	74 2d                	je     0x1001ff1e
1001fef1:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
1001fef5:	d8 1b                	fcomp  DWORD PTR [ebx]
1001fef7:	df e0                	fnstsw ax
1001fef9:	f6 c4 01             	test   ah,0x1
1001fefc:	75 20                	jne    0x1001ff1e
1001fefe:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1001ff02:	d8 5f 08             	fcomp  DWORD PTR [edi+0x8]
1001ff05:	df e0                	fnstsw ax
1001ff07:	f6 c4 41             	test   ah,0x41
1001ff0a:	74 12                	je     0x1001ff1e
1001ff0c:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1001ff10:	d8 5b 08             	fcomp  DWORD PTR [ebx+0x8]
1001ff13:	df e0                	fnstsw ax
1001ff15:	f6 c4 01             	test   ah,0x1
1001ff18:	0f 84 02 01 00 00    	je     0x10020020
1001ff1e:	8b 94 24 ec 00 00 00 	mov    edx,DWORD PTR [esp+0xec]
1001ff25:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1001ff28:	3b c2                	cmp    eax,edx
1001ff2a:	7e 2a                	jle    0x1001ff56
1001ff2c:	8b 0e                	mov    ecx,DWORD PTR [esi]
1001ff2e:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
1001ff31:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
1001ff37:	55                   	push   ebp
1001ff38:	51                   	push   ecx
1001ff39:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1001ff3d:	ff 92 8c 03 00 00    	call   DWORD PTR [edx+0x38c]
1001ff43:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1001ff46:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
1001ff4a:	83 c4 08             	add    esp,0x8
1001ff4d:	48                   	dec    eax
1001ff4e:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
1001ff51:	e9 05 02 00 00       	jmp    0x1002015b
1001ff56:	8b 07                	mov    eax,DWORD PTR [edi]
1001ff58:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1001ff5a:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
1001ff5e:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1001ff62:	e8 f9 83 fe ff       	call   0x10008360
1001ff67:	89 84 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],eax
1001ff6e:	c7 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],0x0
1001ff75:	00 00 00 00 
1001ff79:	df ac 24 a0 00 00 00 	fild   QWORD PTR [esp+0xa0]
1001ff80:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1001ff83:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1001ff86:	89 54 24 74          	mov    DWORD PTR [esp+0x74],edx
1001ff8a:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1001ff8e:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1001ff94:	d9 44 24 7c          	fld    DWORD PTR [esp+0x7c]
1001ff98:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1001ff9c:	de c9                	fmulp  st(1),st
1001ff9e:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
1001ffa2:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1001ffa6:	e8 b5 83 fe ff       	call   0x10008360
1001ffab:	89 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],eax
1001ffb2:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x0
1001ffb9:	00 00 00 00 
1001ffbd:	df ac 24 98 00 00 00 	fild   QWORD PTR [esp+0x98]
1001ffc4:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1001ffc7:	8b 53 08             	mov    edx,DWORD PTR [ebx+0x8]
1001ffca:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
1001ffce:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1001ffd2:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1001ffd8:	d9 44 24 74          	fld    DWORD PTR [esp+0x74]
1001ffdc:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
1001ffe0:	de c9                	fmulp  st(1),st
1001ffe2:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
1001ffe6:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1001ffea:	e8 71 83 fe ff       	call   0x10008360
1001ffef:	89 84 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],eax
1001fff6:	c7 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],0x0
1001fffd:	00 00 00 00 
10020001:	df ac 24 a8 00 00 00 	fild   QWORD PTR [esp+0xa8]
10020008:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002000e:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
10020012:	d8 64 24 30          	fsub   DWORD PTR [esp+0x30]
10020016:	de c9                	fmulp  st(1),st
10020018:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
1002001c:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10020020:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
10020024:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
10020028:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1002002b:	85 c0                	test   eax,eax
1002002d:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
10020031:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
10020035:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
10020039:	d9 5c 24 54          	fstp   DWORD PTR [esp+0x54]
1002003d:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
10020041:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
10020045:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
10020049:	0f 84 99 00 00 00    	je     0x100200e8
1002004f:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
10020053:	d8 05 40 5b 11 10    	fadd   DWORD PTR ds:0x10115b40
10020059:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1002005f:	8d 94 24 cc 00 00 00 	lea    edx,[esp+0xcc]
10020066:	52                   	push   edx
10020067:	8d 94 24 c4 00 00 00 	lea    edx,[esp+0xc4]
1002006e:	52                   	push   edx
1002006f:	d9 9c 24 c8 00 00 00 	fstp   DWORD PTR [esp+0xc8]
10020076:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
1002007a:	d8 05 44 5b 11 10    	fadd   DWORD PTR ds:0x10115b44
10020080:	d9 9c 24 cc 00 00 00 	fstp   DWORD PTR [esp+0xcc]
10020087:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
1002008b:	d8 05 48 5b 11 10    	fadd   DWORD PTR ds:0x10115b48
10020091:	d9 9c 24 d0 00 00 00 	fstp   DWORD PTR [esp+0xd0]
10020098:	8b 01                	mov    eax,DWORD PTR [ecx]
1002009a:	ff 90 44 01 00 00    	call   DWORD PTR [eax+0x144]
100200a0:	d9 84 24 cc 00 00 00 	fld    DWORD PTR [esp+0xcc]
100200a7:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
100200ad:	d8 46 2c             	fadd   DWORD PTR [esi+0x2c]
100200b0:	d9 54 24 5c          	fst    DWORD PTR [esp+0x5c]
100200b4:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
100200b8:	d9 84 24 d0 00 00 00 	fld    DWORD PTR [esp+0xd0]
100200bf:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
100200c5:	d8 46 2c             	fadd   DWORD PTR [esi+0x2c]
100200c8:	d9 54 24 60          	fst    DWORD PTR [esp+0x60]
100200cc:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
100200d0:	d9 84 24 d4 00 00 00 	fld    DWORD PTR [esp+0xd4]
100200d7:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
100200dd:	d8 46 2c             	fadd   DWORD PTR [esi+0x2c]
100200e0:	d9 54 24 64          	fst    DWORD PTR [esp+0x64]
100200e4:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
100200e8:	8b 84 24 e0 00 00 00 	mov    eax,DWORD PTR [esp+0xe0]
100200ef:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
100200f3:	d8 20                	fsub   DWORD PTR [eax]
100200f5:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
100200f9:	d8 60 04             	fsub   DWORD PTR [eax+0x4]
100200fc:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
10020100:	d8 60 08             	fsub   DWORD PTR [eax+0x8]
10020103:	d9 c0                	fld    st(0)
10020105:	d8 c9                	fmul   st,st(1)
10020107:	d9 c2                	fld    st(2)
10020109:	d8 cb                	fmul   st,st(3)
1002010b:	de c1                	faddp  st(1),st
1002010d:	d9 c3                	fld    st(3)
1002010f:	d8 cc                	fmul   st,st(4)
10020111:	de c1                	faddp  st(1),st
10020113:	d9 fa                	fsqrt
10020115:	dd db                	fstp   st(3)
10020117:	dd d8                	fstp   st(0)
10020119:	dd d8                	fstp   st(0)
1002011b:	d8 0d d0 88 0b 10    	fmul   DWORD PTR ds:0x100b88d0
10020121:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
10020127:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1002012d:	df e0                	fnstsw ax
1002012f:	f6 c4 01             	test   ah,0x1
10020132:	74 08                	je     0x1002013c
10020134:	dd d8                	fstp   st(0)
10020136:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002013c:	d8 0d fc 84 0b 10    	fmul   DWORD PTR ds:0x100b84fc
10020142:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10020148:	8d 44 24 34          	lea    eax,[esp+0x34]
1002014c:	50                   	push   eax
1002014d:	55                   	push   ebp
1002014e:	d9 5c 24 54          	fstp   DWORD PTR [esp+0x54]
10020152:	ff 91 84 03 00 00    	call   DWORD PTR [ecx+0x384]
10020158:	83 c4 08             	add    esp,0x8
1002015b:	8b 16                	mov    edx,DWORD PTR [esi]
1002015d:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
10020162:	55                   	push   ebp
10020163:	52                   	push   edx
10020164:	ff 90 7c 03 00 00    	call   DWORD PTR [eax+0x37c]
1002016a:	8b e8                	mov    ebp,eax
1002016c:	83 c4 08             	add    esp,0x8
1002016f:	85 ed                	test   ebp,ebp
10020171:	0f 85 32 fc ff ff    	jne    0x1001fda9
10020177:	5f                   	pop    edi
10020178:	5e                   	pop    esi
10020179:	5d                   	pop    ebp
1002017a:	5b                   	pop    ebx
1002017b:	81 c4 c8 00 00 00    	add    esp,0xc8
10020181:	c3                   	ret
10020182:	90                   	nop
10020183:	90                   	nop
10020184:	90                   	nop
10020185:	90                   	nop
10020186:	90                   	nop
10020187:	90                   	nop
10020188:	90                   	nop
10020189:	90                   	nop
1002018a:	90                   	nop
1002018b:	90                   	nop
1002018c:	90                   	nop
1002018d:	90                   	nop
1002018e:	90                   	nop
1002018f:	90                   	nop
10020190:	c3                   	ret
10020191:	90                   	nop
10020192:	90                   	nop
10020193:	90                   	nop
10020194:	90                   	nop
10020195:	90                   	nop
10020196:	90                   	nop
10020197:	90                   	nop
10020198:	90                   	nop
10020199:	90                   	nop
1002019a:	90                   	nop
1002019b:	90                   	nop
1002019c:	90                   	nop
1002019d:	90                   	nop
1002019e:	90                   	nop
1002019f:	90                   	nop
100201a0:	c3                   	ret
100201a1:	90                   	nop
100201a2:	90                   	nop
100201a3:	90                   	nop
100201a4:	90                   	nop
100201a5:	90                   	nop
100201a6:	90                   	nop
100201a7:	90                   	nop
100201a8:	90                   	nop
100201a9:	90                   	nop
100201aa:	90                   	nop
100201ab:	90                   	nop
100201ac:	90                   	nop
100201ad:	90                   	nop
100201ae:	90                   	nop
100201af:	90                   	nop
100201b0:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100201b6:	56                   	push   esi
100201b7:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
100201bb:	6a 00                	push   0x0
100201bd:	8b 06                	mov    eax,DWORD PTR [esi]
100201bf:	50                   	push   eax
100201c0:	ff 91 7c 03 00 00    	call   DWORD PTR [ecx+0x37c]
100201c6:	83 c4 08             	add    esp,0x8
100201c9:	85 c0                	test   eax,eax
100201cb:	74 37                	je     0x10020204
100201cd:	57                   	push   edi
100201ce:	8b 78 3c             	mov    edi,DWORD PTR [eax+0x3c]
100201d1:	8b 16                	mov    edx,DWORD PTR [esi]
100201d3:	50                   	push   eax
100201d4:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
100201d9:	52                   	push   edx
100201da:	ff 90 8c 03 00 00    	call   DWORD PTR [eax+0x38c]
100201e0:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
100201e3:	57                   	push   edi
100201e4:	49                   	dec    ecx
100201e5:	89 4e 3c             	mov    DWORD PTR [esi+0x3c],ecx
100201e8:	8b 0e                	mov    ecx,DWORD PTR [esi]
100201ea:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
100201f0:	51                   	push   ecx
100201f1:	ff 92 7c 03 00 00    	call   DWORD PTR [edx+0x37c]
100201f7:	83 c4 10             	add    esp,0x10
100201fa:	85 c0                	test   eax,eax
100201fc:	75 d0                	jne    0x100201ce
100201fe:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
10020201:	5f                   	pop    edi
10020202:	5e                   	pop    esi
10020203:	c3                   	ret
10020204:	c7 46 3c 00 00 00 00 	mov    DWORD PTR [esi+0x3c],0x0
1002020b:	5e                   	pop    esi
1002020c:	c3                   	ret
1002020d:	90                   	nop
1002020e:	90                   	nop
1002020f:	90                   	nop

*/
void ClientTeamManager::AddTeam() {
    // TODO: Implement AddTeam
}

