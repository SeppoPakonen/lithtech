#include "WTeamSelect.h"

// 0x1006d480: WTeamSelect::CanJoinTeam
/*
1006d480:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006d486:	6a ff                	push   0xffffffff
1006d488:	68 b8 60 0b 10       	push   0x100b60b8
1006d48d:	50                   	push   eax
1006d48e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1006d495:	53                   	push   ebx
1006d496:	55                   	push   ebp
1006d497:	56                   	push   esi
1006d498:	57                   	push   edi
1006d499:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
1006d49d:	83 ff ff             	cmp    edi,0xffffffff
1006d4a0:	8b d9                	mov    ebx,ecx
1006d4a2:	74 04                	je     0x1006d4a8
1006d4a4:	85 ff                	test   edi,edi
1006d4a6:	7c 05                	jl     0x1006d4ad
1006d4a8:	3b 7b 30             	cmp    edi,DWORD PTR [ebx+0x30]
1006d4ab:	7c 3d                	jl     0x1006d4ea
1006d4ad:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006d4b3:	68 15 02 00 00       	push   0x215
1006d4b8:	68 80 d1 0d 10       	push   0x100dd180
1006d4bd:	8b 01                	mov    eax,DWORD PTR [ecx]
1006d4bf:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1006d4c5:	8b 53 30             	mov    edx,DWORD PTR [ebx+0x30]
1006d4c8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006d4cd:	52                   	push   edx
1006d4ce:	57                   	push   edi
1006d4cf:	8b 08                	mov    ecx,DWORD PTR [eax]
1006d4d1:	68 48 d1 0d 10       	push   0x100dd148
1006d4d6:	68 7c 5d 0c 10       	push   0x100c5d7c
1006d4db:	50                   	push   eax
1006d4dc:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006d4e2:	83 c4 14             	add    esp,0x14
1006d4e5:	e9 3c 01 00 00       	jmp    0x1006d626
1006d4ea:	83 ff ff             	cmp    edi,0xffffffff
1006d4ed:	74 2e                	je     0x1006d51d
1006d4ef:	8b 74 bb 54          	mov    esi,DWORD PTR [ebx+edi*4+0x54]
1006d4f3:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006d4f9:	e8 52 7a 00 00       	call   0x10074f50
1006d4fe:	8b 76 34             	mov    esi,DWORD PTR [esi+0x34]
1006d501:	b9 10 59 11 10       	mov    ecx,0x10115910
1006d506:	56                   	push   esi
1006d507:	8b e8                	mov    ebp,eax
1006d509:	e8 52 21 fb ff       	call   0x1001f660
1006d50e:	85 c0                	test   eax,eax
1006d510:	74 03                	je     0x1006d515
1006d512:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1006d515:	3b e8                	cmp    ebp,eax
1006d517:	0f 8d 09 01 00 00    	jge    0x1006d626
1006d51d:	8b 0d 10 43 12 10    	mov    ecx,DWORD PTR ds:0x10124310
1006d523:	57                   	push   edi
1006d524:	e8 d7 5d 01 00       	call   0x10083300
1006d529:	8b 43 2c             	mov    eax,DWORD PTR [ebx+0x2c]
1006d52c:	83 f8 ff             	cmp    eax,0xffffffff
1006d52f:	74 46                	je     0x1006d577
1006d531:	8b 74 83 54          	mov    esi,DWORD PTR [ebx+eax*4+0x54]
1006d535:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1006d538:	83 e1 fe             	and    ecx,0xfffffffe
1006d53b:	8a c1                	mov    al,cl
1006d53d:	89 4e 30             	mov    DWORD PTR [esi+0x30],ecx
1006d540:	a8 01                	test   al,0x1
1006d542:	74 07                	je     0x1006d54b
1006d544:	b8 01 00 00 00       	mov    eax,0x1
1006d549:	eb 0e                	jmp    0x1006d559
1006d54b:	8b ce                	mov    ecx,esi
1006d54d:	e8 ee 00 00 00       	call   0x1006d640
1006d552:	f7 d8                	neg    eax
1006d554:	1b c0                	sbb    eax,eax
1006d556:	83 e0 02             	and    eax,0x2
1006d559:	3b 86 60 01 00 00    	cmp    eax,DWORD PTR [esi+0x160]
1006d55f:	74 16                	je     0x1006d577
1006d561:	33 c9                	xor    ecx,ecx
1006d563:	83 f8 01             	cmp    eax,0x1
1006d566:	0f 94 c1             	sete   cl
1006d569:	89 86 60 01 00 00    	mov    DWORD PTR [esi+0x160],eax
1006d56f:	8b c1                	mov    eax,ecx
1006d571:	89 86 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],eax
1006d577:	83 ff ff             	cmp    edi,0xffffffff
1006d57a:	74 2d                	je     0x1006d5a9
1006d57c:	8b 74 bb 54          	mov    esi,DWORD PTR [ebx+edi*4+0x54]
1006d580:	8b ce                	mov    ecx,esi
1006d582:	83 4e 30 01          	or     DWORD PTR [esi+0x30],0x1
1006d586:	e8 f5 00 00 00       	call   0x1006d680
1006d58b:	3b 86 60 01 00 00    	cmp    eax,DWORD PTR [esi+0x160]
1006d591:	74 16                	je     0x1006d5a9
1006d593:	33 d2                	xor    edx,edx
1006d595:	83 f8 01             	cmp    eax,0x1
1006d598:	0f 94 c2             	sete   dl
1006d59b:	89 86 60 01 00 00    	mov    DWORD PTR [esi+0x160],eax
1006d5a1:	8b c2                	mov    eax,edx
1006d5a3:	89 86 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],eax
1006d5a9:	83 ff ff             	cmp    edi,0xffffffff
1006d5ac:	89 7b 2c             	mov    DWORD PTR [ebx+0x2c],edi
1006d5af:	74 66                	je     0x1006d617
1006d5b1:	57                   	push   edi
1006d5b2:	b9 10 59 11 10       	mov    ecx,0x10115910
1006d5b7:	e8 a4 20 fb ff       	call   0x1001f660
1006d5bc:	85 c0                	test   eax,eax
1006d5be:	74 57                	je     0x1006d617
1006d5c0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006d5c6:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
1006d5c9:	50                   	push   eax
1006d5ca:	8b 11                	mov    edx,DWORD PTR [ecx]
1006d5cc:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
1006d5d2:	8b f0                	mov    esi,eax
1006d5d4:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
1006d5d8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006d5de:	56                   	push   esi
1006d5df:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1006d5e6:	00 
1006d5e7:	8b 01                	mov    eax,DWORD PTR [ecx]
1006d5e9:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1006d5ef:	8b 4b 64             	mov    ecx,DWORD PTR [ebx+0x64]
1006d5f2:	6a ff                	push   0xffffffff
1006d5f4:	50                   	push   eax
1006d5f5:	e8 b6 bf 00 00       	call   0x100795b0
1006d5fa:	85 f6                	test   esi,esi
1006d5fc:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
1006d603:	ff 
1006d604:	74 20                	je     0x1006d626
1006d606:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006d60c:	56                   	push   esi
1006d60d:	8b 11                	mov    edx,DWORD PTR [ecx]
1006d60f:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1006d615:	eb 0f                	jmp    0x1006d626
1006d617:	8b 4b 64             	mov    ecx,DWORD PTR [ebx+0x64]
1006d61a:	6a ff                	push   0xffffffff
1006d61c:	68 00 d0 10 10       	push   0x1010d000
1006d621:	e8 8a bf 00 00       	call   0x100795b0
1006d626:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006d62a:	5f                   	pop    edi
1006d62b:	5e                   	pop    esi
1006d62c:	5d                   	pop    ebp
1006d62d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006d634:	5b                   	pop    ebx
1006d635:	83 c4 0c             	add    esp,0xc
1006d638:	c2 04 00             	ret    0x4
1006d63b:	90                   	nop
1006d63c:	90                   	nop
1006d63d:	90                   	nop
1006d63e:	90                   	nop
1006d63f:	90                   	nop
1006d640:	56                   	push   esi
1006d641:	8b f1                	mov    esi,ecx
1006d643:	57                   	push   edi
1006d644:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006d64a:	e8 01 79 00 00       	call   0x10074f50
1006d64f:	8b 76 34             	mov    esi,DWORD PTR [esi+0x34]
1006d652:	b9 10 59 11 10       	mov    ecx,0x10115910
1006d657:	56                   	push   esi
1006d658:	8b f8                	mov    edi,eax
1006d65a:	e8 01 20 fb ff       	call   0x1001f660
1006d65f:	85 c0                	test   eax,eax
1006d661:	75 0c                	jne    0x1006d66f
1006d663:	33 c9                	xor    ecx,ecx
1006d665:	3b f8                	cmp    edi,eax
1006d667:	0f 9d c1             	setge  cl
1006d66a:	5f                   	pop    edi
1006d66b:	8b c1                	mov    eax,ecx
1006d66d:	5e                   	pop    esi
1006d66e:	c3                   	ret
1006d66f:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1006d672:	33 c9                	xor    ecx,ecx
1006d674:	3b f8                	cmp    edi,eax
1006d676:	5f                   	pop    edi
1006d677:	0f 9d c1             	setge  cl
1006d67a:	8b c1                	mov    eax,ecx
1006d67c:	5e                   	pop    esi
1006d67d:	c3                   	ret
1006d67e:	90                   	nop
1006d67f:	90                   	nop
1006d680:	56                   	push   esi
1006d681:	8b f1                	mov    esi,ecx
1006d683:	b8 01 00 00 00       	mov    eax,0x1
1006d688:	84 46 30             	test   BYTE PTR [esi+0x30],al
1006d68b:	75 41                	jne    0x1006d6ce
1006d68d:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006d693:	57                   	push   edi
1006d694:	e8 b7 78 00 00       	call   0x10074f50
1006d699:	8b 76 34             	mov    esi,DWORD PTR [esi+0x34]
1006d69c:	b9 10 59 11 10       	mov    ecx,0x10115910
1006d6a1:	56                   	push   esi
1006d6a2:	8b f8                	mov    edi,eax
1006d6a4:	e8 b7 1f fb ff       	call   0x1001f660
1006d6a9:	85 c0                	test   eax,eax
1006d6ab:	75 10                	jne    0x1006d6bd
1006d6ad:	33 c9                	xor    ecx,ecx
1006d6af:	3b f8                	cmp    edi,eax
1006d6b1:	0f 9c c1             	setl   cl
1006d6b4:	49                   	dec    ecx
1006d6b5:	5f                   	pop    edi
1006d6b6:	83 e1 02             	and    ecx,0x2
1006d6b9:	5e                   	pop    esi
1006d6ba:	8b c1                	mov    eax,ecx
1006d6bc:	c3                   	ret
1006d6bd:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1006d6c0:	33 c9                	xor    ecx,ecx
1006d6c2:	3b f8                	cmp    edi,eax
1006d6c4:	5f                   	pop    edi
1006d6c5:	0f 9c c1             	setl   cl
1006d6c8:	49                   	dec    ecx
1006d6c9:	83 e1 02             	and    ecx,0x2
1006d6cc:	8b c1                	mov    eax,ecx
1006d6ce:	5e                   	pop    esi
1006d6cf:	c3                   	ret
1006d6d0:	a1 28 59 11 10       	mov    eax,ds:0x10115928
1006d6d5:	83 ec 10             	sub    esp,0x10
1006d6d8:	53                   	push   ebx
1006d6d9:	55                   	push   ebp
1006d6da:	56                   	push   esi
1006d6db:	8b d9                	mov    ebx,ecx
1006d6dd:	33 f6                	xor    esi,esi
1006d6df:	57                   	push   edi
1006d6e0:	85 c0                	test   eax,eax
1006d6e2:	89 43 30             	mov    DWORD PTR [ebx+0x30],eax
1006d6e5:	7e 25                	jle    0x1006d70c
1006d6e7:	8d 7b 54             	lea    edi,[ebx+0x54]
1006d6ea:	8b 0f                	mov    ecx,DWORD PTR [edi]
1006d6ec:	e8 0f f7 ff ff       	call   0x1006ce00
1006d6f1:	8b 0f                	mov    ecx,DWORD PTR [edi]
1006d6f3:	6a 00                	push   0x0
1006d6f5:	6a 03                	push   0x3
1006d6f7:	e8 84 10 00 00       	call   0x1006e780
1006d6fc:	8b 43 30             	mov    eax,DWORD PTR [ebx+0x30]
1006d6ff:	46                   	inc    esi
1006d700:	83 c7 04             	add    edi,0x4
1006d703:	3b f0                	cmp    esi,eax
1006d705:	7c e3                	jl     0x1006d6ea
1006d707:	83 fe 04             	cmp    esi,0x4
1006d70a:	7d 1c                	jge    0x1006d728
1006d70c:	bd 04 00 00 00       	mov    ebp,0x4
1006d711:	8d 7c b3 54          	lea    edi,[ebx+esi*4+0x54]
1006d715:	2b ee                	sub    ebp,esi
1006d717:	8b 0f                	mov    ecx,DWORD PTR [edi]
1006d719:	6a 03                	push   0x3
1006d71b:	6a 00                	push   0x0
1006d71d:	e8 5e 10 00 00       	call   0x1006e780
1006d722:	83 c7 04             	add    edi,0x4
1006d725:	4d                   	dec    ebp
1006d726:	75 ef                	jne    0x1006d717
1006d728:	8d 43 1c             	lea    eax,[ebx+0x1c]
1006d72b:	8b cb                	mov    ecx,ebx
1006d72d:	50                   	push   eax
1006d72e:	e8 1d 0f 00 00       	call   0x1006e650
1006d733:	8b 4b 2c             	mov    ecx,DWORD PTR [ebx+0x2c]
1006d736:	83 c8 ff             	or     eax,0xffffffff
1006d739:	3b c8                	cmp    ecx,eax
1006d73b:	0f 85 8e 00 00 00    	jne    0x1006d7cf
1006d741:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1006d745:	8b 43 30             	mov    eax,DWORD PTR [ebx+0x30]
1006d748:	85 c0                	test   eax,eax
1006d74a:	c7 44 24 14 9f 86 01 	mov    DWORD PTR [esp+0x14],0x1869f
1006d751:	00 
1006d752:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1006d759:	00 
1006d75a:	7e 67                	jle    0x1006d7c3
1006d75c:	8d 7b 54             	lea    edi,[ebx+0x54]
1006d75f:	8b 07                	mov    eax,DWORD PTR [edi]
1006d761:	8b 88 58 01 00 00    	mov    ecx,DWORD PTR [eax+0x158]
1006d767:	e8 e4 77 00 00       	call   0x10074f50
1006d76c:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006d770:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1006d774:	3b c1                	cmp    eax,ecx
1006d776:	7d 38                	jge    0x1006d7b0
1006d778:	8b 37                	mov    esi,DWORD PTR [edi]
1006d77a:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006d780:	e8 cb 77 00 00       	call   0x10074f50
1006d785:	8b 76 34             	mov    esi,DWORD PTR [esi+0x34]
1006d788:	b9 10 59 11 10       	mov    ecx,0x10115910
1006d78d:	56                   	push   esi
1006d78e:	8b e8                	mov    ebp,eax
1006d790:	e8 cb 1e fb ff       	call   0x1001f660
1006d795:	85 c0                	test   eax,eax
1006d797:	74 03                	je     0x1006d79c
1006d799:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1006d79c:	3b e8                	cmp    ebp,eax
1006d79e:	7d 10                	jge    0x1006d7b0
1006d7a0:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1006d7a4:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006d7a8:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1006d7ac:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1006d7b0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1006d7b4:	8b 4b 30             	mov    ecx,DWORD PTR [ebx+0x30]
1006d7b7:	40                   	inc    eax
1006d7b8:	83 c7 04             	add    edi,0x4
1006d7bb:	3b c1                	cmp    eax,ecx
1006d7bd:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1006d7c1:	7c 9c                	jl     0x1006d75f
1006d7c3:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1006d7c7:	8b cb                	mov    ecx,ebx
1006d7c9:	50                   	push   eax
1006d7ca:	e8 b1 fc ff ff       	call   0x1006d480
1006d7cf:	5f                   	pop    edi
1006d7d0:	5e                   	pop    esi
1006d7d1:	5d                   	pop    ebp
1006d7d2:	5b                   	pop    ebx
1006d7d3:	83 c4 10             	add    esp,0x10
1006d7d6:	c3                   	ret
1006d7d7:	90                   	nop
1006d7d8:	90                   	nop
1006d7d9:	90                   	nop
1006d7da:	90                   	nop
1006d7db:	90                   	nop
1006d7dc:	90                   	nop
1006d7dd:	90                   	nop
1006d7de:	90                   	nop
1006d7df:	90                   	nop
1006d7e0:	83 ec 28             	sub    esp,0x28
1006d7e3:	53                   	push   ebx
1006d7e4:	55                   	push   ebp
1006d7e5:	56                   	push   esi
1006d7e6:	8b f1                	mov    esi,ecx
1006d7e8:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
1006d7ee:	8b 1d 18 a0 0d 10    	mov    ebx,DWORD PTR ds:0x100da018
1006d7f4:	c1 e1 04             	shl    ecx,0x4
1006d7f7:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1006d7fc:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
1006d800:	f7 e1                	mul    ecx
1006d802:	c1 e3 04             	shl    ebx,0x4
1006d805:	c1 eb 0a             	shr    ebx,0xa
1006d808:	57                   	push   edi
1006d809:	8b fa                	mov    edi,edx
1006d80b:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1006d80e:	8d 04 1b             	lea    eax,[ebx+ebx*1]
1006d811:	2b d0                	sub    edx,eax
1006d813:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1006d817:	89 56 4c             	mov    DWORD PTR [esi+0x4c],edx
1006d81a:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1006d820:	c1 ef 09             	shr    edi,0x9
1006d823:	e8 48 fa fd ff       	call   0x1004d270
1006d828:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
1006d82f:	2b c8                	sub    ecx,eax
1006d831:	8d 46 44             	lea    eax,[esi+0x44]
1006d834:	89 4e 50             	mov    DWORD PTR [esi+0x50],ecx
1006d837:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1006d83a:	03 d3                	add    edx,ebx
1006d83c:	89 10                	mov    DWORD PTR [eax],edx
1006d83e:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
1006d841:	2b d1                	sub    edx,ecx
1006d843:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
1006d846:	2b d7                	sub    edx,edi
1006d848:	03 d1                	add    edx,ecx
1006d84a:	89 56 48             	mov    DWORD PTR [esi+0x48],edx
1006d84d:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
1006d850:	8d 54 24 18          	lea    edx,[esp+0x18]
1006d854:	52                   	push   edx
1006d855:	50                   	push   eax
1006d856:	8d 46 68             	lea    eax,[esi+0x68]
1006d859:	50                   	push   eax
1006d85a:	ff 14 8d 2c a0 0d 10 	call   DWORD PTR [ecx*4+0x100da02c]
1006d861:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1006d865:	8b c3                	mov    eax,ebx
1006d867:	99                   	cdq
1006d868:	2b c2                	sub    eax,edx
1006d86a:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1006d86e:	d1 f8                	sar    eax,1
1006d870:	03 c8                	add    ecx,eax
1006d872:	2b d3                	sub    edx,ebx
1006d874:	8b c7                	mov    eax,edi
1006d876:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
1006d87a:	99                   	cdq
1006d87b:	2b c2                	sub    eax,edx
1006d87d:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
1006d881:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1006d885:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1006d889:	d1 f8                	sar    eax,1
1006d88b:	03 c8                	add    ecx,eax
1006d88d:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1006d890:	2b d7                	sub    edx,edi
1006d892:	03 c3                	add    eax,ebx
1006d894:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
1006d898:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1006d89c:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
1006d89f:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
1006d8a2:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1006d8a6:	8b cf                	mov    ecx,edi
1006d8a8:	03 ca                	add    ecx,edx
1006d8aa:	83 c4 0c             	add    esp,0xc
1006d8ad:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
1006d8b0:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1006d8b3:	2b d0                	sub    edx,eax
1006d8b5:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1006d8b8:	8b e9                	mov    ebp,ecx
1006d8ba:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1006d8be:	2b c5                	sub    eax,ebp
1006d8c0:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
1006d8c3:	2b c7                	sub    eax,edi
1006d8c5:	51                   	push   ecx
1006d8c6:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
1006d8c9:	8b 4e 64             	mov    ecx,DWORD PTR [esi+0x64]
1006d8cc:	e8 7f 0d 00 00       	call   0x1006e650
1006d8d1:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1006d8d4:	85 c9                	test   ecx,ecx
1006d8d6:	0f 84 c6 00 00 00    	je     0x1006d9a2
1006d8dc:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
1006d8e1:	8b 6e 3c             	mov    ebp,DWORD PTR [esi+0x3c]
1006d8e4:	8d 14 40             	lea    edx,[eax+eax*2]
1006d8e7:	8b c5                	mov    eax,ebp
1006d8e9:	c1 e2 02             	shl    edx,0x2
1006d8ec:	8b da                	mov    ebx,edx
1006d8ee:	99                   	cdq
1006d8ef:	83 e2 03             	and    edx,0x3
1006d8f2:	c1 eb 0a             	shr    ebx,0xa
1006d8f5:	03 c2                	add    eax,edx
1006d8f7:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
1006d8fa:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
1006d8fe:	8b d8                	mov    ebx,eax
1006d900:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1006d904:	c1 fb 02             	sar    ebx,0x2
1006d907:	2b d8                	sub    ebx,eax
1006d909:	8d 04 7a             	lea    eax,[edx+edi*2]
1006d90c:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1006d910:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
1006d913:	8d 14 bd 00 00 00 00 	lea    edx,[edi*4+0x0]
1006d91a:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
1006d91e:	2b c2                	sub    eax,edx
1006d920:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1006d924:	8b c5                	mov    eax,ebp
1006d926:	99                   	cdq
1006d927:	f7 f9                	idiv   ecx
1006d929:	8b f8                	mov    edi,eax
1006d92b:	8b c5                	mov    eax,ebp
1006d92d:	2b c7                	sub    eax,edi
1006d92f:	8d 69 ff             	lea    ebp,[ecx-0x1]
1006d932:	99                   	cdq
1006d933:	f7 fd                	idiv   ebp
1006d935:	33 ed                	xor    ebp,ebp
1006d937:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1006d93b:	8b c7                	mov    eax,edi
1006d93d:	99                   	cdq
1006d93e:	2b c2                	sub    eax,edx
1006d940:	8b 56 34             	mov    edx,DWORD PTR [esi+0x34]
1006d943:	8b f8                	mov    edi,eax
1006d945:	d1 ff                	sar    edi,1
1006d947:	03 fa                	add    edi,edx
1006d949:	3b cd                	cmp    ecx,ebp
1006d94b:	7e 55                	jle    0x1006d9a2
1006d94d:	8d 4e 54             	lea    ecx,[esi+0x54]
1006d950:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
1006d954:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
1006d958:	eb 04                	jmp    0x1006d95e
1006d95a:	8b 5c 24 30          	mov    ebx,DWORD PTR [esp+0x30]
1006d95e:	8b c3                	mov    eax,ebx
1006d960:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1006d964:	99                   	cdq
1006d965:	8b 09                	mov    ecx,DWORD PTR [ecx]
1006d967:	2b c2                	sub    eax,edx
1006d969:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006d96d:	d1 f8                	sar    eax,1
1006d96f:	2b d0                	sub    edx,eax
1006d971:	8d 44 24 28          	lea    eax,[esp+0x28]
1006d975:	03 d7                	add    edx,edi
1006d977:	50                   	push   eax
1006d978:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
1006d97c:	e8 cf 0c 00 00       	call   0x1006e650
1006d981:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
1006d985:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006d989:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1006d98c:	83 c2 04             	add    edx,0x4
1006d98f:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1006d993:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1006d997:	45                   	inc    ebp
1006d998:	03 ca                	add    ecx,edx
1006d99a:	3b e8                	cmp    ebp,eax
1006d99c:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006d9a0:	7c b8                	jl     0x1006d95a
1006d9a2:	5f                   	pop    edi
1006d9a3:	5e                   	pop    esi
1006d9a4:	5d                   	pop    ebp
1006d9a5:	5b                   	pop    ebx
1006d9a6:	83 c4 28             	add    esp,0x28
1006d9a9:	c2 04 00             	ret    0x4
1006d9ac:	90                   	nop
1006d9ad:	90                   	nop
1006d9ae:	90                   	nop
1006d9af:	90                   	nop
1006d9b0:	83 ec 10             	sub    esp,0x10
1006d9b3:	55                   	push   ebp
1006d9b4:	8b e9                	mov    ebp,ecx
1006d9b6:	56                   	push   esi
1006d9b7:	8b 45 2c             	mov    eax,DWORD PTR [ebp+0x2c]
1006d9ba:	83 f8 ff             	cmp    eax,0xffffffff
1006d9bd:	74 76                	je     0x1006da35
1006d9bf:	8b 4c 85 54          	mov    ecx,DWORD PTR [ebp+eax*4+0x54]
1006d9c3:	53                   	push   ebx
1006d9c4:	57                   	push   edi
1006d9c5:	8b 41 28             	mov    eax,DWORD PTR [ecx+0x28]
1006d9c8:	8b 51 20             	mov    edx,DWORD PTR [ecx+0x20]
1006d9cb:	8d 5c 10 ff          	lea    ebx,[eax+edx*1-0x1]
1006d9cf:	a1 5c d8 11 10       	mov    eax,ds:0x1011d85c
1006d9d4:	03 c0                	add    eax,eax
1006d9d6:	99                   	cdq
1006d9d7:	2b c2                	sub    eax,edx
1006d9d9:	8b f8                	mov    edi,eax
1006d9db:	8b 41 24             	mov    eax,DWORD PTR [ecx+0x24]
1006d9de:	99                   	cdq
1006d9df:	2b c2                	sub    eax,edx
1006d9e1:	8b f0                	mov    esi,eax
1006d9e3:	d1 ff                	sar    edi,1
1006d9e5:	d1 fe                	sar    esi,1
1006d9e7:	2b f7                	sub    esi,edi
1006d9e9:	8b 79 1c             	mov    edi,DWORD PTR [ecx+0x1c]
1006d9ec:	8b 0d 5c d8 11 10    	mov    ecx,DWORD PTR ds:0x1011d85c
1006d9f2:	03 f7                	add    esi,edi
1006d9f4:	8b 7d 48             	mov    edi,DWORD PTR [ebp+0x48]
1006d9f7:	2b fb                	sub    edi,ebx
1006d9f9:	83 c7 02             	add    edi,0x2
1006d9fc:	57                   	push   edi
1006d9fd:	51                   	push   ecx
1006d9fe:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1006da04:	53                   	push   ebx
1006da05:	56                   	push   esi
1006da06:	6a ff                	push   0xffffffff
1006da08:	6a 02                	push   0x2
1006da0a:	68 48 d8 11 10       	push   0x1011d848
1006da0f:	e8 0c db fd ff       	call   0x1004b520
1006da14:	a1 5c d8 11 10       	mov    eax,ds:0x1011d85c
1006da19:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1006da1f:	57                   	push   edi
1006da20:	50                   	push   eax
1006da21:	03 c6                	add    eax,esi
1006da23:	53                   	push   ebx
1006da24:	50                   	push   eax
1006da25:	6a ff                	push   0xffffffff
1006da27:	6a 00                	push   0x0
1006da29:	68 48 d8 11 10       	push   0x1011d848
1006da2e:	e8 ed da fd ff       	call   0x1004b520
1006da33:	5f                   	pop    edi
1006da34:	5b                   	pop    ebx
1006da35:	8b 55 68             	mov    edx,DWORD PTR [ebp+0x68]
1006da38:	8d 75 68             	lea    esi,[ebp+0x68]
1006da3b:	8d 44 24 08          	lea    eax,[esp+0x8]
1006da3f:	83 c5 44             	add    ebp,0x44
1006da42:	50                   	push   eax
1006da43:	55                   	push   ebp
1006da44:	56                   	push   esi
1006da45:	ff 14 95 38 a0 0d 10 	call   DWORD PTR [edx*4+0x100da038]
1006da4c:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1006da50:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1006da54:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1006da58:	83 c4 0c             	add    esp,0xc
1006da5b:	68 73 4b 18 ff       	push   0xff184b73
1006da60:	6a 00                	push   0x0
1006da62:	51                   	push   ecx
1006da63:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006da67:	52                   	push   edx
1006da68:	50                   	push   eax
1006da69:	51                   	push   ecx
1006da6a:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1006da70:	e8 fb ba fd ff       	call   0x10049570
1006da75:	8b 16                	mov    edx,DWORD PTR [esi]
1006da77:	55                   	push   ebp
1006da78:	56                   	push   esi
1006da79:	ff 14 95 20 a0 0d 10 	call   DWORD PTR [edx*4+0x100da020]
1006da80:	83 c4 08             	add    esp,0x8
1006da83:	5e                   	pop    esi
1006da84:	5d                   	pop    ebp
1006da85:	83 c4 10             	add    esp,0x10
1006da88:	c2 08 00             	ret    0x8
1006da8b:	90                   	nop
1006da8c:	90                   	nop
1006da8d:	90                   	nop
1006da8e:	90                   	nop
1006da8f:	90                   	nop
1006da90:	83 7c 24 04 04       	cmp    DWORD PTR [esp+0x4],0x4
1006da95:	73 12                	jae    0x1006daa9
1006da97:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1006da9b:	83 38 00             	cmp    DWORD PTR [eax],0x0
1006da9e:	75 09                	jne    0x1006daa9
1006daa0:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1006daa3:	50                   	push   eax
1006daa4:	e8 d7 f9 ff ff       	call   0x1006d480
1006daa9:	b8 01 00 00 00       	mov    eax,0x1
1006daae:	c2 08 00             	ret    0x8
1006dab1:	90                   	nop
1006dab2:	90                   	nop
1006dab3:	90                   	nop
1006dab4:	90                   	nop
1006dab5:	90                   	nop
1006dab6:	90                   	nop
1006dab7:	90                   	nop
1006dab8:	90                   	nop
1006dab9:	90                   	nop
1006daba:	90                   	nop
1006dabb:	90                   	nop
1006dabc:	90                   	nop
1006dabd:	90                   	nop
1006dabe:	90                   	nop
1006dabf:	90                   	nop
1006dac0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1006dac4:	56                   	push   esi
1006dac5:	8b f1                	mov    esi,ecx
1006dac7:	8b c8                	mov    ecx,eax
1006dac9:	83 e9 25             	sub    ecx,0x25
1006dacc:	74 30                	je     0x1006dafe
1006dace:	83 e9 02             	sub    ecx,0x2
1006dad1:	74 27                	je     0x1006dafa
1006dad3:	83 f8 31             	cmp    eax,0x31
1006dad6:	72 1c                	jb     0x1006daf4
1006dad8:	83 f8 35             	cmp    eax,0x35
1006dadb:	73 17                	jae    0x1006daf4
1006dadd:	83 f8 39             	cmp    eax,0x39
1006dae0:	77 12                	ja     0x1006daf4
1006dae2:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1006dae5:	83 c0 cf             	add    eax,0xffffffcf
1006dae8:	3b c1                	cmp    eax,ecx
1006daea:	7d 08                	jge    0x1006daf4
1006daec:	50                   	push   eax
1006daed:	8b ce                	mov    ecx,esi
1006daef:	e8 8c f9 ff ff       	call   0x1006d480
1006daf4:	33 c0                	xor    eax,eax
1006daf6:	5e                   	pop    esi
1006daf7:	c2 04 00             	ret    0x4
1006dafa:	6a 00                	push   0x0
1006dafc:	eb 02                	jmp    0x1006db00
1006dafe:	6a 01                	push   0x1
1006db00:	8b ce                	mov    ecx,esi
1006db02:	e8 19 00 00 00       	call   0x1006db20
1006db07:	50                   	push   eax
1006db08:	8b ce                	mov    ecx,esi
1006db0a:	e8 71 f9 ff ff       	call   0x1006d480
1006db0f:	b8 01 00 00 00       	mov    eax,0x1
1006db14:	5e                   	pop    esi
1006db15:	c2 04 00             	ret    0x4
1006db18:	90                   	nop
1006db19:	90                   	nop
1006db1a:	90                   	nop
1006db1b:	90                   	nop
1006db1c:	90                   	nop
1006db1d:	90                   	nop
1006db1e:	90                   	nop
1006db1f:	90                   	nop
1006db20:	83 ec 08             	sub    esp,0x8
1006db23:	53                   	push   ebx
1006db24:	55                   	push   ebp
1006db25:	8b e9                	mov    ebp,ecx
1006db27:	56                   	push   esi
1006db28:	57                   	push   edi
1006db29:	8b 4d 30             	mov    ecx,DWORD PTR [ebp+0x30]
1006db2c:	85 c9                	test   ecx,ecx
1006db2e:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006db32:	75 0d                	jne    0x1006db41
1006db34:	5f                   	pop    edi
1006db35:	5e                   	pop    esi
1006db36:	5d                   	pop    ebp
1006db37:	83 c8 ff             	or     eax,0xffffffff
1006db3a:	5b                   	pop    ebx
1006db3b:	83 c4 08             	add    esp,0x8
1006db3e:	c2 04 00             	ret    0x4

*/
void WTeamSelect::CanJoinTeam() {
    // TODO: Implement CanJoinTeam
}

// 0x1006db41: WTeamSelect::GetNextAvailableTeam
/*
1006db41:	8b 7d 2c             	mov    edi,DWORD PTR [ebp+0x2c]
1006db44:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
1006db4b:	00 
1006db4c:	85 c9                	test   ecx,ecx
1006db4e:	0f 8e af 00 00 00    	jle    0x1006dc03
1006db54:	83 ff ff             	cmp    edi,0xffffffff
1006db57:	75 04                	jne    0x1006db5d
1006db59:	33 ff                	xor    edi,edi
1006db5b:	eb 1c                	jmp    0x1006db79
1006db5d:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
1006db61:	8b c6                	mov    eax,esi
1006db63:	83 e8 00             	sub    eax,0x0
1006db66:	74 09                	je     0x1006db71
1006db68:	48                   	dec    eax
1006db69:	75 4b                	jne    0x1006dbb6
1006db6b:	8d 44 0f ff          	lea    eax,[edi+ecx*1-0x1]
1006db6f:	eb 03                	jmp    0x1006db74
1006db71:	8d 47 01             	lea    eax,[edi+0x1]
1006db74:	99                   	cdq
1006db75:	f7 f9                	idiv   ecx
1006db77:	8b fa                	mov    edi,edx
1006db79:	8b 74 bd 54          	mov    esi,DWORD PTR [ebp+edi*4+0x54]
1006db7d:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006db83:	e8 c8 73 00 00       	call   0x10074f50
1006db88:	8b 76 34             	mov    esi,DWORD PTR [esi+0x34]
1006db8b:	b9 10 59 11 10       	mov    ecx,0x10115910
1006db90:	56                   	push   esi
1006db91:	8b d8                	mov    ebx,eax
1006db93:	e8 c8 1a fb ff       	call   0x1001f660
1006db98:	85 c0                	test   eax,eax
1006db9a:	74 03                	je     0x1006db9f
1006db9c:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1006db9f:	3b d8                	cmp    ebx,eax
1006dba1:	7c 54                	jl     0x1006dbf7
1006dba3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006dba7:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006dbab:	40                   	inc    eax
1006dbac:	3b c1                	cmp    eax,ecx
1006dbae:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1006dbb2:	7d 4f                	jge    0x1006dc03
1006dbb4:	eb 9e                	jmp    0x1006db54
1006dbb6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006dbbc:	68 c0 02 00 00       	push   0x2c0
1006dbc1:	68 80 d1 0d 10       	push   0x100dd180
1006dbc6:	8b 01                	mov    eax,DWORD PTR [ecx]
1006dbc8:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1006dbce:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006dbd3:	56                   	push   esi
1006dbd4:	68 b8 d1 0d 10       	push   0x100dd1b8
1006dbd9:	68 7c 5d 0c 10       	push   0x100c5d7c
1006dbde:	8b 08                	mov    ecx,DWORD PTR [eax]
1006dbe0:	50                   	push   eax
1006dbe1:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006dbe7:	83 c4 10             	add    esp,0x10
1006dbea:	83 c8 ff             	or     eax,0xffffffff
1006dbed:	5f                   	pop    edi
1006dbee:	5e                   	pop    esi
1006dbef:	5d                   	pop    ebp
1006dbf0:	5b                   	pop    ebx
1006dbf1:	83 c4 08             	add    esp,0x8
1006dbf4:	c2 04 00             	ret    0x4
1006dbf7:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006dbfb:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006dbff:	3b c2                	cmp    eax,edx
1006dc01:	7c 0d                	jl     0x1006dc10
1006dc03:	5f                   	pop    edi
1006dc04:	5e                   	pop    esi
1006dc05:	5d                   	pop    ebp
1006dc06:	83 c8 ff             	or     eax,0xffffffff
1006dc09:	5b                   	pop    ebx
1006dc0a:	83 c4 08             	add    esp,0x8
1006dc0d:	c2 04 00             	ret    0x4
1006dc10:	8b c7                	mov    eax,edi
1006dc12:	5f                   	pop    edi
1006dc13:	5e                   	pop    esi
1006dc14:	5d                   	pop    ebp
1006dc15:	5b                   	pop    ebx
1006dc16:	83 c4 08             	add    esp,0x8
1006dc19:	c2 04 00             	ret    0x4
1006dc1c:	90                   	nop
1006dc1d:	90                   	nop
1006dc1e:	90                   	nop
1006dc1f:	90                   	nop
1006dc20:	8b c1                	mov    eax,ecx
1006dc22:	33 c9                	xor    ecx,ecx
1006dc24:	c7 00 48 b9 0b 10    	mov    DWORD PTR [eax],0x100bb948
1006dc2a:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
1006dc2d:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1006dc30:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006dc33:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1006dc36:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
1006dc39:	89 48 18             	mov    DWORD PTR [eax+0x18],ecx
1006dc3c:	89 48 1c             	mov    DWORD PTR [eax+0x1c],ecx
1006dc3f:	89 48 20             	mov    DWORD PTR [eax+0x20],ecx
1006dc42:	89 48 24             	mov    DWORD PTR [eax+0x24],ecx
1006dc45:	c3                   	ret
1006dc46:	90                   	nop
1006dc47:	90                   	nop
1006dc48:	90                   	nop
1006dc49:	90                   	nop
1006dc4a:	90                   	nop
1006dc4b:	90                   	nop
1006dc4c:	90                   	nop
1006dc4d:	90                   	nop
1006dc4e:	90                   	nop
1006dc4f:	90                   	nop
1006dc50:	56                   	push   esi
1006dc51:	8b f1                	mov    esi,ecx
1006dc53:	c7 06 48 b9 0b 10    	mov    DWORD PTR [esi],0x100bb948
1006dc59:	e8 32 00 00 00       	call   0x1006dc90
1006dc5e:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1006dc63:	74 09                	je     0x1006dc6e
1006dc65:	56                   	push   esi
1006dc66:	e8 b3 5c 03 00       	call   0x100a391e
1006dc6b:	83 c4 04             	add    esp,0x4
1006dc6e:	8b c6                	mov    eax,esi
1006dc70:	5e                   	pop    esi
1006dc71:	c2 04 00             	ret    0x4
1006dc74:	90                   	nop
1006dc75:	90                   	nop
1006dc76:	90                   	nop
1006dc77:	90                   	nop
1006dc78:	90                   	nop
1006dc79:	90                   	nop
1006dc7a:	90                   	nop
1006dc7b:	90                   	nop
1006dc7c:	90                   	nop
1006dc7d:	90                   	nop
1006dc7e:	90                   	nop
1006dc7f:	90                   	nop
1006dc80:	c7 01 48 b9 0b 10    	mov    DWORD PTR [ecx],0x100bb948
1006dc86:	e9 05 00 00 00       	jmp    0x1006dc90
1006dc8b:	90                   	nop
1006dc8c:	90                   	nop
1006dc8d:	90                   	nop
1006dc8e:	90                   	nop
1006dc8f:	90                   	nop
1006dc90:	53                   	push   ebx
1006dc91:	56                   	push   esi
1006dc92:	8b f1                	mov    esi,ecx
1006dc94:	33 db                	xor    ebx,ebx
1006dc96:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1006dc99:	3b c3                	cmp    eax,ebx
1006dc9b:	74 0c                	je     0x1006dca9
1006dc9d:	50                   	push   eax
1006dc9e:	e8 7b 5c 03 00       	call   0x100a391e
1006dca3:	83 c4 04             	add    esp,0x4
1006dca6:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
1006dca9:	39 5e 24             	cmp    DWORD PTR [esi+0x24],ebx
1006dcac:	74 38                	je     0x1006dce6
1006dcae:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1006dcb1:	57                   	push   edi
1006dcb2:	33 ff                	xor    edi,edi
1006dcb4:	3b c3                	cmp    eax,ebx
1006dcb6:	7e 1e                	jle    0x1006dcd6
1006dcb8:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1006dcbb:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
1006dcbe:	3b c3                	cmp    eax,ebx
1006dcc0:	74 0c                	je     0x1006dcce
1006dcc2:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1006dcc8:	50                   	push   eax
1006dcc9:	8b 11                	mov    edx,DWORD PTR [ecx]
1006dccb:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1006dcce:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1006dcd1:	47                   	inc    edi
1006dcd2:	3b f8                	cmp    edi,eax
1006dcd4:	7c e2                	jl     0x1006dcb8
1006dcd6:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1006dcd9:	50                   	push   eax
1006dcda:	e8 3f 5c 03 00       	call   0x100a391e
1006dcdf:	83 c4 04             	add    esp,0x4
1006dce2:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
1006dce5:	5f                   	pop    edi
1006dce6:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
1006dce9:	89 5e 08             	mov    DWORD PTR [esi+0x8],ebx
1006dcec:	89 5e 0c             	mov    DWORD PTR [esi+0xc],ebx
1006dcef:	89 5e 10             	mov    DWORD PTR [esi+0x10],ebx
1006dcf2:	89 5e 14             	mov    DWORD PTR [esi+0x14],ebx
1006dcf5:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
1006dcf8:	89 5e 1c             	mov    DWORD PTR [esi+0x1c],ebx
1006dcfb:	5e                   	pop    esi
1006dcfc:	5b                   	pop    ebx
1006dcfd:	c3                   	ret
1006dcfe:	90                   	nop
1006dcff:	90                   	nop
1006dd00:	81 ec 0c 02 00 00    	sub    esp,0x20c
1006dd06:	55                   	push   ebp
1006dd07:	56                   	push   esi
1006dd08:	57                   	push   edi
1006dd09:	8b f1                	mov    esi,ecx
1006dd0b:	e8 80 ff ff ff       	call   0x1006dc90
1006dd10:	8b 84 24 24 02 00 00 	mov    eax,DWORD PTR [esp+0x224]
1006dd17:	85 c0                	test   eax,eax
1006dd19:	75 0e                	jne    0x1006dd29
1006dd1b:	5f                   	pop    edi
1006dd1c:	5e                   	pop    esi
1006dd1d:	33 c0                	xor    eax,eax
1006dd1f:	5d                   	pop    ebp
1006dd20:	81 c4 0c 02 00 00    	add    esp,0x20c
1006dd26:	c2 0c 00             	ret    0xc

*/
void WTeamSelect::GetNextAvailableTeam() {
    // TODO: Implement GetNextAvailableTeam
}

