#include "HudDeathQueue.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// 0x1005b2f0: HudDeathQueue::Dequeue
/*
1005b2f0:	83 ec 10             	sub    esp,0x10
1005b2f3:	53                   	push   ebx
1005b2f4:	55                   	push   ebp
1005b2f5:	56                   	push   esi
1005b2f6:	8b f1                	mov    esi,ecx
1005b2f8:	57                   	push   edi
1005b2f9:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
1005b2fd:	f6 46 34 01          	test   BYTE PTR [esi+0x34],0x1
1005b301:	74 24                	je     0x1005b327
1005b303:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1005b306:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1005b309:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1005b30c:	68 00 00 00 a0       	push   0xa0000000
1005b311:	68 00 00 00 a0       	push   0xa0000000
1005b316:	50                   	push   eax
1005b317:	8b 07                	mov    eax,DWORD PTR [edi]
1005b319:	51                   	push   ecx
1005b31a:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b320:	52                   	push   edx
1005b321:	50                   	push   eax
1005b322:	e8 49 e2 fe ff       	call   0x10049570
1005b327:	8b 86 00 01 00 00    	mov    eax,DWORD PTR [esi+0x100]
1005b32d:	85 c0                	test   eax,eax
1005b32f:	0f 84 77 01 00 00    	je     0x1005b4ac
1005b335:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005b33b:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b33d:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1005b343:	8b 8e 00 01 00 00    	mov    ecx,DWORD PTR [esi+0x100]
1005b349:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1005b34d:	85 c9                	test   ecx,ecx
1005b34f:	74 75                	je     0x1005b3c6
1005b351:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
1005b357:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1005b35b:	8b c2                	mov    eax,edx
1005b35d:	c1 e0 05             	shl    eax,0x5
1005b360:	d8 5c 30 38          	fcomp  DWORD PTR [eax+esi*1+0x38]
1005b364:	df e0                	fnstsw ax
1005b366:	f6 c4 01             	test   ah,0x1
1005b369:	75 5b                	jne    0x1005b3c6
1005b36b:	85 c9                	test   ecx,ecx
1005b36d:	75 35                	jne    0x1005b3a4
1005b36f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1005b375:	68 de 08 00 00       	push   0x8de
1005b37a:	68 b8 b3 0d 10       	push   0x100db3b8
1005b37f:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b381:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1005b387:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1005b38c:	68 00 b4 0d 10       	push   0x100db400
1005b391:	68 7c 5d 0c 10       	push   0x100c5d7c
1005b396:	50                   	push   eax
1005b397:	8b 08                	mov    ecx,DWORD PTR [eax]
1005b399:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1005b39f:	83 c4 0c             	add    esp,0xc
1005b3a2:	eb 18                	jmp    0x1005b3bc
1005b3a4:	8d 42 01             	lea    eax,[edx+0x1]
1005b3a7:	bb 06 00 00 00       	mov    ebx,0x6
1005b3ac:	99                   	cdq
1005b3ad:	f7 fb                	idiv   ebx
1005b3af:	49                   	dec    ecx
1005b3b0:	89 8e 00 01 00 00    	mov    DWORD PTR [esi+0x100],ecx
1005b3b6:	89 96 f8 00 00 00    	mov    DWORD PTR [esi+0xf8],edx
1005b3bc:	8b 8e 00 01 00 00    	mov    ecx,DWORD PTR [esi+0x100]
1005b3c2:	85 c9                	test   ecx,ecx
1005b3c4:	75 8b                	jne    0x1005b351
1005b3c6:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005b3cc:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b3ce:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1005b3d4:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1005b3d7:	8b ae 00 01 00 00    	mov    ebp,DWORD PTR [esi+0x100]
1005b3dd:	99                   	cdq
1005b3de:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1005b3e2:	f7 be 04 01 00 00    	idiv   DWORD PTR [esi+0x104]
1005b3e8:	8b c8                	mov    ecx,eax
1005b3ea:	8b 07                	mov    eax,DWORD PTR [edi]
1005b3ec:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
1005b3ef:	3b e9                	cmp    ebp,ecx
1005b3f1:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1005b3f5:	7d 08                	jge    0x1005b3ff
1005b3f7:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
1005b3fd:	eb 13                	jmp    0x1005b412
1005b3ff:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
1005b405:	2b c1                	sub    eax,ecx
1005b407:	b9 06 00 00 00       	mov    ecx,0x6
1005b40c:	83 c0 07             	add    eax,0x7
1005b40f:	99                   	cdq
1005b410:	f7 f9                	idiv   ecx
1005b412:	85 ed                	test   ebp,ebp
1005b414:	8b da                	mov    ebx,edx
1005b416:	0f 84 90 00 00 00    	je     0x1005b4ac
1005b41c:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
1005b420:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1005b424:	8b d3                	mov    edx,ebx
1005b426:	c1 e2 05             	shl    edx,0x5
1005b429:	d9 44 32 38          	fld    DWORD PTR [edx+esi*1+0x38]
1005b42d:	dc 25 28 a4 0b 10    	fsub   QWORD PTR ds:0x100ba428
1005b433:	8d 6c 32 38          	lea    ebp,[edx+esi*1+0x38]
1005b437:	de d9                	fcompp
1005b439:	df e0                	fnstsw ax
1005b43b:	f6 c4 01             	test   ah,0x1
1005b43e:	74 34                	je     0x1005b474
1005b440:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
1005b445:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1005b44c:	00 
1005b44d:	d9 45 00             	fld    DWORD PTR [ebp+0x0]
1005b450:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
1005b454:	c1 e8 18             	shr    eax,0x18
1005b457:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1005b45b:	da 4c 24 18          	fimul  DWORD PTR [esp+0x18]
1005b45f:	d8 0d 24 a4 0b 10    	fmul   DWORD PTR ds:0x100ba424
1005b465:	e8 ca 89 04 00       	call   0x100a3e34
1005b46a:	25 ff 00 00 00       	and    eax,0xff
1005b46f:	c1 e0 18             	shl    eax,0x18
1005b472:	eb 05                	jmp    0x1005b479
1005b474:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
1005b479:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1005b47d:	50                   	push   eax
1005b47e:	57                   	push   edi
1005b47f:	51                   	push   ecx
1005b480:	55                   	push   ebp
1005b481:	8b ce                	mov    ecx,esi
1005b483:	e8 a8 02 00 00       	call   0x1005b730
1005b488:	8d 43 01             	lea    eax,[ebx+0x1]
1005b48b:	b9 06 00 00 00       	mov    ecx,0x6
1005b490:	99                   	cdq
1005b491:	f7 f9                	idiv   ecx
1005b493:	8b 8e 04 01 00 00    	mov    ecx,DWORD PTR [esi+0x104]
1005b499:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1005b49d:	03 f9                	add    edi,ecx
1005b49f:	48                   	dec    eax
1005b4a0:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1005b4a4:	8b da                	mov    ebx,edx
1005b4a6:	0f 85 74 ff ff ff    	jne    0x1005b420
1005b4ac:	5f                   	pop    edi
1005b4ad:	5e                   	pop    esi
1005b4ae:	5d                   	pop    ebp
1005b4af:	5b                   	pop    ebx
1005b4b0:	83 c4 10             	add    esp,0x10
1005b4b3:	c2 08 00             	ret    0x8
1005b4b6:	90                   	nop
1005b4b7:	90                   	nop
1005b4b8:	90                   	nop
1005b4b9:	90                   	nop
1005b4ba:	90                   	nop
1005b4bb:	90                   	nop
1005b4bc:	90                   	nop
1005b4bd:	90                   	nop
1005b4be:	90                   	nop
1005b4bf:	90                   	nop
1005b4c0:	83 ec 08             	sub    esp,0x8
1005b4c3:	53                   	push   ebx
1005b4c4:	55                   	push   ebp
1005b4c5:	8b e9                	mov    ebp,ecx
1005b4c7:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005b4cd:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1005b4d1:	e8 9a 1d ff ff       	call   0x1004d270
1005b4d6:	8b 9d f8 00 00 00    	mov    ebx,DWORD PTR [ebp+0xf8]
1005b4dc:	c1 e0 02             	shl    eax,0x2
1005b4df:	89 85 04 01 00 00    	mov    DWORD PTR [ebp+0x104],eax
1005b4e5:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
1005b4eb:	85 c0                	test   eax,eax
1005b4ed:	74 41                	je     0x1005b530
1005b4ef:	56                   	push   esi
1005b4f0:	57                   	push   edi
1005b4f1:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1005b4f5:	8b c3                	mov    eax,ebx
1005b4f7:	bf 02 00 00 00       	mov    edi,0x2
1005b4fc:	c1 e0 05             	shl    eax,0x5
1005b4ff:	8d 44 28 38          	lea    eax,[eax+ebp*1+0x38]
1005b503:	8d 70 0c             	lea    esi,[eax+0xc]
1005b506:	8b 4e f8             	mov    ecx,DWORD PTR [esi-0x8]
1005b509:	51                   	push   ecx
1005b50a:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1005b50e:	e8 0d 1d ff ff       	call   0x1004d220
1005b513:	89 06                	mov    DWORD PTR [esi],eax
1005b515:	83 c6 04             	add    esi,0x4
1005b518:	4f                   	dec    edi
1005b519:	75 eb                	jne    0x1005b506
1005b51b:	8d 43 01             	lea    eax,[ebx+0x1]
1005b51e:	b9 06 00 00 00       	mov    ecx,0x6
1005b523:	99                   	cdq
1005b524:	f7 f9                	idiv   ecx
1005b526:	ff 4c 24 10          	dec    DWORD PTR [esp+0x10]
1005b52a:	8b da                	mov    ebx,edx
1005b52c:	75 c7                	jne    0x1005b4f5
1005b52e:	5f                   	pop    edi
1005b52f:	5e                   	pop    esi
1005b530:	5d                   	pop    ebp
1005b531:	5b                   	pop    ebx
1005b532:	83 c4 08             	add    esp,0x8
1005b535:	c3                   	ret
1005b536:	90                   	nop
1005b537:	90                   	nop
1005b538:	90                   	nop
1005b539:	90                   	nop
1005b53a:	90                   	nop
1005b53b:	90                   	nop
1005b53c:	90                   	nop
1005b53d:	90                   	nop
1005b53e:	90                   	nop
1005b53f:	90                   	nop
1005b540:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1005b544:	83 ec 1c             	sub    esp,0x1c
1005b547:	3d 80 00 00 00       	cmp    eax,0x80
1005b54c:	53                   	push   ebx
1005b54d:	56                   	push   esi
1005b54e:	75 4d                	jne    0x1005b59d
1005b550:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
1005b554:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1005b558:	b8 20 00 00 00       	mov    eax,0x20
1005b55d:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1005b561:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1005b565:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1005b569:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
1005b56c:	89 06                	mov    DWORD PTR [esi],eax
1005b56e:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1005b574:	8d 44 24 08          	lea    eax,[esp+0x8]
1005b578:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b57a:	50                   	push   eax
1005b57b:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1005b57f:	50                   	push   eax
1005b580:	a1 c4 c4 11 10       	mov    eax,ds:0x1011c4c4
1005b585:	50                   	push   eax
1005b586:	ff 52 28             	call   DWORD PTR [edx+0x28]
1005b589:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1005b58d:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1005b591:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1005b594:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1005b597:	5e                   	pop    esi
1005b598:	5b                   	pop    ebx
1005b599:	83 c4 1c             	add    esp,0x1c
1005b59c:	c3                   	ret
1005b59d:	3d 81 00 00 00       	cmp    eax,0x81
1005b5a2:	75 50                	jne    0x1005b5f4
1005b5a4:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
1005b5a8:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1005b5ac:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1005b5b0:	c7 44 24 28 40 00 00 	mov    DWORD PTR [esp+0x28],0x40
1005b5b7:	00 
1005b5b8:	89 06                	mov    DWORD PTR [esi],eax
1005b5ba:	8d 44 24 08          	lea    eax,[esp+0x8]
1005b5be:	50                   	push   eax
1005b5bf:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
1005b5c2:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1005b5c8:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1005b5cc:	50                   	push   eax
1005b5cd:	a1 c8 c4 11 10       	mov    eax,ds:0x1011c4c8
1005b5d2:	c7 44 24 10 10 00 00 	mov    DWORD PTR [esp+0x10],0x10
1005b5d9:	00 
1005b5da:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b5dc:	50                   	push   eax
1005b5dd:	ff 52 28             	call   DWORD PTR [edx+0x28]
1005b5e0:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1005b5e4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1005b5e8:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1005b5eb:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1005b5ee:	5e                   	pop    esi
1005b5ef:	5b                   	pop    ebx
1005b5f0:	83 c4 1c             	add    esp,0x1c
1005b5f3:	c3                   	ret
1005b5f4:	3d ff 00 00 00       	cmp    eax,0xff
1005b5f9:	0f 84 d9 00 00 00    	je     0x1005b6d8
1005b5ff:	3d 82 00 00 00       	cmp    eax,0x82
1005b604:	0f 84 ce 00 00 00    	je     0x1005b6d8
1005b60a:	3d 83 00 00 00       	cmp    eax,0x83
1005b60f:	0f 84 c3 00 00 00    	je     0x1005b6d8
1005b615:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
1005b619:	33 c9                	xor    ecx,ecx
1005b61b:	8b d3                	mov    edx,ebx
1005b61d:	89 0a                	mov    DWORD PTR [edx],ecx
1005b61f:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
1005b622:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
1005b625:	51                   	push   ecx
1005b626:	50                   	push   eax
1005b627:	89 4a 0c             	mov    DWORD PTR [edx+0xc],ecx
1005b62a:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b630:	e8 3b 07 ff ff       	call   0x1004bd70
1005b635:	85 c0                	test   eax,eax
1005b637:	0f 84 e2 00 00 00    	je     0x1005b71f
1005b63d:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1005b643:	57                   	push   edi
1005b644:	8d 74 24 1c          	lea    esi,[esp+0x1c]
1005b648:	6a 00                	push   0x0
1005b64a:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b64c:	56                   	push   esi
1005b64d:	50                   	push   eax
1005b64e:	ff 52 34             	call   DWORD PTR [edx+0x34]
1005b651:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1005b655:	d8 0d 30 a4 0b 10    	fmul   DWORD PTR ds:0x100ba430
1005b65b:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1005b65f:	d8 0d 30 a4 0b 10    	fmul   DWORD PTR ds:0x100ba430
1005b665:	8b 74 24 30          	mov    esi,DWORD PTR [esp+0x30]
1005b669:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
1005b66d:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
1005b671:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1005b675:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1005b679:	e8 b6 87 04 00       	call   0x100a3e34
1005b67e:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1005b682:	8d 34 46             	lea    esi,[esi+eax*2]
1005b685:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
1005b689:	e8 a6 87 04 00       	call   0x100a3e34
1005b68e:	8d 04 47             	lea    eax,[edi+eax*2]
1005b691:	33 d2                	xor    edx,edx
1005b693:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1005b697:	5f                   	pop    edi
1005b698:	8b 44 14 08          	mov    eax,DWORD PTR [esp+edx*1+0x8]
1005b69c:	8b 4c 14 10          	mov    ecx,DWORD PTR [esp+edx*1+0x10]
1005b6a0:	3b c1                	cmp    eax,ecx
1005b6a2:	7e 0c                	jle    0x1005b6b0
1005b6a4:	89 44 14 10          	mov    DWORD PTR [esp+edx*1+0x10],eax
1005b6a8:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1005b6ac:	89 4c 14 08          	mov    DWORD PTR [esp+edx*1+0x8],ecx
1005b6b0:	83 c2 04             	add    edx,0x4
1005b6b3:	83 fa 08             	cmp    edx,0x8
1005b6b6:	7c e0                	jl     0x1005b698
1005b6b8:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1005b6bc:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1005b6c0:	2b f0                	sub    esi,eax
1005b6c2:	89 03                	mov    DWORD PTR [ebx],eax
1005b6c4:	46                   	inc    esi
1005b6c5:	89 4b 04             	mov    DWORD PTR [ebx+0x4],ecx
1005b6c8:	89 73 08             	mov    DWORD PTR [ebx+0x8],esi
1005b6cb:	c7 43 0c 01 00 00 00 	mov    DWORD PTR [ebx+0xc],0x1
1005b6d2:	5e                   	pop    esi
1005b6d3:	5b                   	pop    ebx
1005b6d4:	83 c4 1c             	add    esp,0x1c
1005b6d7:	c3                   	ret
1005b6d8:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
1005b6dc:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1005b6e0:	b8 20 00 00 00       	mov    eax,0x20
1005b6e5:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1005b6e9:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1005b6ed:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1005b6f1:	89 16                	mov    DWORD PTR [esi],edx
1005b6f3:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1005b6f6:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1005b6fc:	8d 44 24 08          	lea    eax,[esp+0x8]
1005b700:	8b 11                	mov    edx,DWORD PTR [ecx]
1005b702:	50                   	push   eax
1005b703:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1005b707:	50                   	push   eax
1005b708:	a1 c0 c4 11 10       	mov    eax,ds:0x1011c4c0
1005b70d:	50                   	push   eax
1005b70e:	ff 52 28             	call   DWORD PTR [edx+0x28]
1005b711:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1005b715:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1005b719:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1005b71c:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1005b71f:	5e                   	pop    esi
1005b720:	5b                   	pop    ebx
1005b721:	83 c4 1c             	add    esp,0x1c
1005b724:	c3                   	ret
1005b725:	90                   	nop
1005b726:	90                   	nop
1005b727:	90                   	nop
1005b728:	90                   	nop
1005b729:	90                   	nop
1005b72a:	90                   	nop
1005b72b:	90                   	nop
1005b72c:	90                   	nop
1005b72d:	90                   	nop
1005b72e:	90                   	nop
1005b72f:	90                   	nop
1005b730:	83 ec 3c             	sub    esp,0x3c
1005b733:	53                   	push   ebx
1005b734:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
1005b738:	55                   	push   ebp
1005b739:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1005b73d:	56                   	push   esi
1005b73e:	57                   	push   edi
1005b73f:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1005b743:	8d 53 14             	lea    edx,[ebx+0x14]
1005b746:	be 02 00 00 00       	mov    esi,0x2
1005b74b:	8b 02                	mov    eax,DWORD PTR [edx]
1005b74d:	33 ed                	xor    ebp,ebp
1005b74f:	3b c5                	cmp    eax,ebp
1005b751:	7c 19                	jl     0x1005b76c
1005b753:	83 f8 04             	cmp    eax,0x4
1005b756:	7d 14                	jge    0x1005b76c
1005b758:	8b 04 85 10 b5 0d 10 	mov    eax,DWORD PTR [eax*4+0x100db510]
1005b75f:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
1005b763:	25 ff ff ff 00       	and    eax,0xffffff
1005b768:	0b c7                	or     eax,edi
1005b76a:	eb 09                	jmp    0x1005b775
1005b76c:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
1005b770:	0d 80 80 80 00       	or     eax,0x808080
1005b775:	89 01                	mov    DWORD PTR [ecx],eax
1005b777:	83 c2 04             	add    edx,0x4
1005b77a:	83 c1 04             	add    ecx,0x4
1005b77d:	4e                   	dec    esi
1005b77e:	75 cb                	jne    0x1005b74b
1005b780:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1005b783:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
1005b787:	8b 74 24 58          	mov    esi,DWORD PTR [esp+0x58]
1005b78b:	3b c5                	cmp    eax,ebp
1005b78d:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1005b791:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
1005b795:	74 20                	je     0x1005b7b7
1005b797:	3b 43 08             	cmp    eax,DWORD PTR [ebx+0x8]
1005b79a:	74 1b                	je     0x1005b7b7
1005b79c:	8b 53 0c             	mov    edx,DWORD PTR [ebx+0xc]
1005b79f:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005b7a5:	83 c2 04             	add    edx,0x4
1005b7a8:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
1005b7ac:	e8 bf 1a ff ff       	call   0x1004d270
1005b7b1:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1005b7b5:	eb 08                	jmp    0x1005b7bf
1005b7b7:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
1005b7bb:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1005b7bf:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1005b7c3:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1005b7c7:	8d 54 24 2c          	lea    edx,[esp+0x2c]
1005b7cb:	03 c1                	add    eax,ecx
1005b7cd:	52                   	push   edx
1005b7ce:	56                   	push   esi
1005b7cf:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1005b7d3:	50                   	push   eax
1005b7d4:	8b 43 1c             	mov    eax,DWORD PTR [ebx+0x1c]
1005b7d7:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
1005b7db:	50                   	push   eax
1005b7dc:	e8 5f fd ff ff       	call   0x1005b540
1005b7e1:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
1005b7e5:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
1005b7e9:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
1005b7ed:	83 c1 04             	add    ecx,0x4
1005b7f0:	83 c4 10             	add    esp,0x10
1005b7f3:	83 c0 02             	add    eax,0x2
1005b7f6:	8d 14 39             	lea    edx,[ecx+edi*1]
1005b7f9:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
1005b7fd:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1005b801:	8b 53 08             	mov    edx,DWORD PTR [ebx+0x8]
1005b804:	3b d5                	cmp    edx,ebp
1005b806:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1005b80a:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
1005b80e:	74 27                	je     0x1005b837
1005b810:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
1005b813:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1005b819:	83 c0 04             	add    eax,0x4
1005b81c:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1005b820:	e8 4b 1a ff ff       	call   0x1004d270
1005b825:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
1005b829:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
1005b82d:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
1005b831:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
1005b835:	eb 08                	jmp    0x1005b83f
1005b837:	89 6c 24 48          	mov    DWORD PTR [esp+0x48],ebp
1005b83b:	89 6c 24 44          	mov    DWORD PTR [esp+0x44],ebp
1005b83f:	3b cd                	cmp    ecx,ebp
1005b841:	0f 84 a6 00 00 00    	je     0x1005b8ed
1005b847:	8b 6b 1c             	mov    ebp,DWORD PTR [ebx+0x1c]
1005b84a:	81 fd 80 00 00 00    	cmp    ebp,0x80
1005b850:	75 15                	jne    0x1005b867
1005b852:	8b 15 c4 c4 11 10    	mov    edx,DWORD PTR ds:0x1011c4c4
1005b858:	6a ff                	push   0xffffffff
1005b85a:	6a 00                	push   0x0
1005b85c:	50                   	push   eax
1005b85d:	51                   	push   ecx
1005b85e:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
1005b862:	51                   	push   ecx
1005b863:	57                   	push   edi
1005b864:	52                   	push   edx
1005b865:	eb 7b                	jmp    0x1005b8e2
1005b867:	81 fd ff 00 00 00    	cmp    ebp,0xff
1005b86d:	74 60                	je     0x1005b8cf
1005b86f:	81 fd 82 00 00 00    	cmp    ebp,0x82
1005b875:	74 58                	je     0x1005b8cf
1005b877:	81 fd 83 00 00 00    	cmp    ebp,0x83
1005b87d:	74 50                	je     0x1005b8cf
1005b87f:	81 fd 81 00 00 00    	cmp    ebp,0x81
1005b885:	75 14                	jne    0x1005b89b
1005b887:	6a ff                	push   0xffffffff
1005b889:	6a 00                	push   0x0
1005b88b:	50                   	push   eax
1005b88c:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1005b890:	51                   	push   ecx
1005b891:	8b 0d c8 c4 11 10    	mov    ecx,DWORD PTR ds:0x1011c4c8
1005b897:	50                   	push   eax
1005b898:	57                   	push   edi
1005b899:	eb 46                	jmp    0x1005b8e1
1005b89b:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
1005b89f:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1005b8a3:	0d ff ff ff 00       	or     eax,0xffffff
1005b8a8:	50                   	push   eax
1005b8a9:	8b 82 04 01 00 00    	mov    eax,DWORD PTR [edx+0x104]
1005b8af:	99                   	cdq
1005b8b0:	2b c2                	sub    eax,edx
1005b8b2:	d1 f8                	sar    eax,1
1005b8b4:	03 c6                	add    eax,esi
1005b8b6:	50                   	push   eax
1005b8b7:	8b c1                	mov    eax,ecx
1005b8b9:	99                   	cdq
1005b8ba:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b8c0:	2b c2                	sub    eax,edx
1005b8c2:	d1 f8                	sar    eax,1
1005b8c4:	03 c7                	add    eax,edi
1005b8c6:	50                   	push   eax
1005b8c7:	55                   	push   ebp
1005b8c8:	e8 53 04 ff ff       	call   0x1004bd20
1005b8cd:	eb 1e                	jmp    0x1005b8ed
1005b8cf:	6a ff                	push   0xffffffff
1005b8d1:	6a 00                	push   0x0
1005b8d3:	50                   	push   eax
1005b8d4:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1005b8d8:	51                   	push   ecx
1005b8d9:	8b 0d c0 c4 11 10    	mov    ecx,DWORD PTR ds:0x1011c4c0
1005b8df:	50                   	push   eax
1005b8e0:	57                   	push   edi
1005b8e1:	51                   	push   ecx
1005b8e2:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b8e8:	e8 a3 ed fe ff       	call   0x1004a690
1005b8ed:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1005b8f1:	85 c0                	test   eax,eax
1005b8f3:	74 2d                	je     0x1005b922
1005b8f5:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1005b8f9:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1005b8fd:	6a 04                	push   0x4
1005b8ff:	52                   	push   edx
1005b900:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1005b904:	51                   	push   ecx
1005b905:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1005b908:	50                   	push   eax
1005b909:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1005b90d:	52                   	push   edx
1005b90e:	8b 15 ec b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6ec
1005b914:	50                   	push   eax
1005b915:	51                   	push   ecx
1005b916:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b91c:	52                   	push   edx
1005b91d:	e8 de e7 fe ff       	call   0x1004a100
1005b922:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
1005b926:	85 c0                	test   eax,eax
1005b928:	74 2c                	je     0x1005b956
1005b92a:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1005b92e:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
1005b932:	6a 04                	push   0x4
1005b934:	51                   	push   ecx
1005b935:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
1005b939:	52                   	push   edx
1005b93a:	8b 53 08             	mov    edx,DWORD PTR [ebx+0x8]
1005b93d:	50                   	push   eax
1005b93e:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
1005b942:	50                   	push   eax
1005b943:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
1005b948:	51                   	push   ecx
1005b949:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b94f:	52                   	push   edx
1005b950:	50                   	push   eax
1005b951:	e8 aa e7 fe ff       	call   0x1004a100
1005b956:	5f                   	pop    edi
1005b957:	5e                   	pop    esi
1005b958:	5d                   	pop    ebp
1005b959:	5b                   	pop    ebx
1005b95a:	83 c4 3c             	add    esp,0x3c
1005b95d:	c2 10 00             	ret    0x10
1005b960:	33 c0                	xor    eax,eax
1005b962:	c7 81 40 01 00 00 ff 	mov    DWORD PTR [ecx+0x140],0xffffff
1005b969:	ff ff 00 
1005b96c:	89 81 38 01 00 00    	mov    DWORD PTR [ecx+0x138],eax
1005b972:	89 81 3c 01 00 00    	mov    DWORD PTR [ecx+0x13c],eax
1005b978:	88 41 38             	mov    BYTE PTR [ecx+0x38],al
1005b97b:	c3                   	ret
1005b97c:	90                   	nop
1005b97d:	90                   	nop
1005b97e:	90                   	nop
1005b97f:	90                   	nop
1005b980:	56                   	push   esi
1005b981:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1005b985:	c7 06 58 02 00 00    	mov    DWORD PTR [esi],0x258
1005b98b:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
1005b991:	e8 da 18 ff ff       	call   0x1004d270
1005b996:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1005b999:	5e                   	pop    esi
1005b99a:	c2 04 00             	ret    0x4
1005b99d:	90                   	nop
1005b99e:	90                   	nop
1005b99f:	90                   	nop
1005b9a0:	56                   	push   esi
1005b9a1:	8b f1                	mov    esi,ecx
1005b9a3:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005b9a9:	8b 01                	mov    eax,DWORD PTR [ecx]
1005b9ab:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1005b9b1:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
1005b9b5:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1005b9b9:	89 8e 3c 01 00 00    	mov    DWORD PTR [esi+0x13c],ecx
1005b9bf:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
1005b9c3:	d9 9e 38 01 00 00    	fstp   DWORD PTR [esi+0x138]
1005b9c9:	5e                   	pop    esi
1005b9ca:	c2 08 00             	ret    0x8
1005b9cd:	90                   	nop
1005b9ce:	90                   	nop
1005b9cf:	90                   	nop
1005b9d0:	83 ec 08             	sub    esp,0x8
1005b9d3:	56                   	push   esi
1005b9d4:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1005b9d8:	57                   	push   edi
1005b9d9:	8b f9                	mov    edi,ecx
1005b9db:	f6 47 34 01          	test   BYTE PTR [edi+0x34],0x1
1005b9df:	74 24                	je     0x1005ba05
1005b9e1:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1005b9e4:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1005b9e7:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1005b9ea:	68 00 00 00 a0       	push   0xa0000000
1005b9ef:	68 00 00 00 a0       	push   0xa0000000
1005b9f4:	50                   	push   eax
1005b9f5:	8b 06                	mov    eax,DWORD PTR [esi]
1005b9f7:	51                   	push   ecx
1005b9f8:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005b9fe:	52                   	push   edx
1005b9ff:	50                   	push   eax
1005ba00:	e8 6b db fe ff       	call   0x10049570
1005ba05:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005ba0b:	8b 11                	mov    edx,DWORD PTR [ecx]
1005ba0d:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1005ba13:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
1005ba17:	d8 9f 38 01 00 00    	fcomp  DWORD PTR [edi+0x138]
1005ba1d:	df e0                	fnstsw ax
1005ba1f:	f6 c4 01             	test   ah,0x1
1005ba22:	0f 84 82 00 00 00    	je     0x1005baaa
1005ba28:	d9 87 38 01 00 00    	fld    DWORD PTR [edi+0x138]
1005ba2e:	d8 a7 3c 01 00 00    	fsub   DWORD PTR [edi+0x13c]
1005ba34:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1005ba38:	df e0                	fnstsw ax
1005ba3a:	f6 c4 41             	test   ah,0x41
1005ba3d:	74 37                	je     0x1005ba76
1005ba3f:	d9 87 38 01 00 00    	fld    DWORD PTR [edi+0x138]
1005ba45:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1005ba49:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
1005ba4e:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1005ba55:	00 
1005ba56:	c1 e8 18             	shr    eax,0x18
1005ba59:	d8 b7 3c 01 00 00    	fdiv   DWORD PTR [edi+0x13c]
1005ba5f:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1005ba63:	da 4c 24 08          	fimul  DWORD PTR [esp+0x8]
1005ba67:	e8 c8 83 04 00       	call   0x100a3e34
1005ba6c:	25 ff 00 00 00       	and    eax,0xff
1005ba71:	c1 e0 18             	shl    eax,0x18
1005ba74:	eb 05                	jmp    0x1005ba7b
1005ba76:	a1 00 b1 0d 10       	mov    eax,ds:0x100db100
1005ba7b:	8b 8f 40 01 00 00    	mov    ecx,DWORD PTR [edi+0x140]
1005ba81:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
1005ba84:	0b c8                	or     ecx,eax
1005ba86:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1005ba89:	6a 01                	push   0x1
1005ba8b:	51                   	push   ecx
1005ba8c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1005ba8f:	52                   	push   edx
1005ba90:	8b 16                	mov    edx,DWORD PTR [esi]
1005ba92:	50                   	push   eax
1005ba93:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
1005ba98:	51                   	push   ecx
1005ba99:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1005ba9f:	83 c7 38             	add    edi,0x38
1005baa2:	52                   	push   edx
1005baa3:	57                   	push   edi
1005baa4:	50                   	push   eax
1005baa5:	e8 56 e6 fe ff       	call   0x1004a100
1005baaa:	5f                   	pop    edi
1005baab:	5e                   	pop    esi
1005baac:	83 c4 08             	add    esp,0x8
1005baaf:	c2 08 00             	ret    0x8
1005bab2:	90                   	nop
1005bab3:	90                   	nop
1005bab4:	90                   	nop
1005bab5:	90                   	nop
1005bab6:	90                   	nop
1005bab7:	90                   	nop
1005bab8:	90                   	nop
1005bab9:	90                   	nop
1005baba:	90                   	nop
1005babb:	90                   	nop
1005babc:	90                   	nop
1005babd:	90                   	nop
1005babe:	90                   	nop
1005babf:	90                   	nop
1005bac0:	33 c0                	xor    eax,eax
1005bac2:	c7 81 40 01 00 00 ff 	mov    DWORD PTR [ecx+0x140],0xffffff
1005bac9:	ff ff 00 
1005bacc:	89 81 38 01 00 00    	mov    DWORD PTR [ecx+0x138],eax
1005bad2:	89 81 3c 01 00 00    	mov    DWORD PTR [ecx+0x13c],eax
1005bad8:	88 41 38             	mov    BYTE PTR [ecx+0x38],al
1005badb:	89 81 44 01 00 00    	mov    DWORD PTR [ecx+0x144],eax
1005bae1:	89 81 48 01 00 00    	mov    DWORD PTR [ecx+0x148],eax
1005bae7:	c3                   	ret
1005bae8:	90                   	nop
1005bae9:	90                   	nop
1005baea:	90                   	nop
1005baeb:	90                   	nop
1005baec:	90                   	nop
1005baed:	90                   	nop
1005baee:	90                   	nop
1005baef:	90                   	nop

*/
void HudDeathQueue::Dequeue(int unknown1, LTRect* pRect) {
    if (m_bDrawBG && pRect) {
        typedef void (__thiscall *DrawRectFn)(void*, int, int, int, int, float, float);
        DrawRectFn pDrawRect = (DrawRectFn)0x10049570;
        void* pFontMgr = *(void**)0x1011be5c;
        if (pFontMgr) {
            pDrawRect(pFontMgr, pRect->left, pRect->top, pRect->right, pRect->bottom, -2.0f, -2.0f);
        }
    }
    
    if (m_nMaxItems == 0) return;
    
    float fTime = g_pLTClient->GetTime();
    
    while (m_nNumItems > 0) {
        uint32 index = m_nHead;
        if (fTime < m_aItems[index].fTimeRemaining) {
            break;
        }
        
        m_nHead = (m_nHead + 1) % m_nMaxItems;
        m_nNumItems--;
    }
    
    if (m_nNumItems == 0) {
        return;
    }
    
    int height = pRect->bottom - pRect->top;
    int limit = m_nLineHeight > 0 ? (height / m_nLineHeight) : 0;
    
    uint32 startIndex = m_nHead;
    uint32 drawCount = m_nNumItems;
    
    if (drawCount > (uint32)limit) {
        startIndex = (m_nTail - limit + 7) % 6; // matching assembly (m_nTail - limit + 7) % 6
        drawCount = limit;
    }
    
    int currentTop = pRect->top;
    uint32 idx = startIndex;
    
    for (uint32 i = 0; i < drawCount; ++i) {
        DeathQueueItem* pItem = &m_aItems[idx];
        
        uint32 color = m_nColor;
        float timeLeft = pItem->fTimeRemaining - fTime;
        if (timeLeft < 0.2f) {
            float factor = timeLeft > 0.0f ? (timeLeft / 0.2f) : 0.0f;
            uint8 alpha = (uint8)(((m_nColor >> 24) & 0xff) * factor);
            color = (m_nColor & 0x00ffffff) | (alpha << 24);
        }
        
        typedef void (__thiscall *DrawItemFn)(void* pThis, DeathQueueItem* pItem, int left, int top, uint32 color);
        DrawItemFn pDrawItem = (DrawItemFn)0x1005b730;
        pDrawItem(this, pItem, pRect->left, currentTop, color);
        
        currentTop += m_nLineHeight;
        idx = (idx + 1) % 6; // matching assembly (idx + 1) % 6
    }
}

