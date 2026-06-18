#include "TeamBriefWidget.h"

// 0x100812c0: TeamBriefWidget::UpdateBriefing
/*
100812c0:	56                   	push   esi
100812c1:	8b f1                	mov    esi,ecx
100812c3:	57                   	push   edi
100812c4:	6a ff                	push   0xffffffff
100812c6:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
100812c9:	68 00 d0 10 10       	push   0x1010d000
100812ce:	e8 dd 82 ff ff       	call   0x100795b0
100812d3:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100812d7:	b9 10 59 11 10       	mov    ecx,0x10115910
100812dc:	50                   	push   eax
100812dd:	e8 7e e3 f9 ff       	call   0x1001f660
100812e2:	8b f8                	mov    edi,eax
100812e4:	85 ff                	test   edi,edi
100812e6:	75 38                	jne    0x10081320
100812e8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100812ee:	68 a5 01 00 00       	push   0x1a5
100812f3:	68 4c dd 0d 10       	push   0x100ddd4c
100812f8:	8b 11                	mov    edx,DWORD PTR [ecx]
100812fa:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
10081300:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10081305:	68 20 dd 0d 10       	push   0x100ddd20
1008130a:	68 7c 5d 0c 10       	push   0x100c5d7c
1008130f:	50                   	push   eax
10081310:	8b 08                	mov    ecx,DWORD PTR [eax]
10081312:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10081318:	83 c4 0c             	add    esp,0xc
1008131b:	5f                   	pop    edi
1008131c:	5e                   	pop    esi
1008131d:	c2 04 00             	ret    0x4
10081320:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10081326:	8b 47 1c             	mov    eax,DWORD PTR [edi+0x1c]
10081329:	6a ff                	push   0xffffffff
1008132b:	50                   	push   eax
1008132c:	8b 11                	mov    edx,DWORD PTR [ecx]
1008132e:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10081334:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10081337:	50                   	push   eax
10081338:	e8 73 82 ff ff       	call   0x100795b0
1008133d:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10081343:	8b 47 28             	mov    eax,DWORD PTR [edi+0x28]
10081346:	6a ff                	push   0xffffffff
10081348:	50                   	push   eax
10081349:	8b 11                	mov    edx,DWORD PTR [ecx]
1008134b:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10081351:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10081354:	50                   	push   eax
10081355:	e8 56 82 ff ff       	call   0x100795b0
1008135a:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10081360:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
10081363:	6a ff                	push   0xffffffff
10081365:	50                   	push   eax
10081366:	8b 11                	mov    edx,DWORD PTR [ecx]
10081368:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008136e:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10081371:	50                   	push   eax
10081372:	e8 39 82 ff ff       	call   0x100795b0
10081377:	8b 4f 30             	mov    ecx,DWORD PTR [edi+0x30]
1008137a:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
1008137d:	8b 57 34             	mov    edx,DWORD PTR [edi+0x34]
10081380:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
10081383:	5f                   	pop    edi
10081384:	5e                   	pop    esi
10081385:	c2 04 00             	ret    0x4
10081388:	90                   	nop
10081389:	90                   	nop
1008138a:	90                   	nop
1008138b:	90                   	nop
1008138c:	90                   	nop
1008138d:	90                   	nop
1008138e:	90                   	nop
1008138f:	90                   	nop
10081390:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
10081394:	83 ec 10             	sub    esp,0x10
10081397:	a8 01                	test   al,0x1
10081399:	56                   	push   esi
1008139a:	8b f1                	mov    esi,ecx
1008139c:	74 16                	je     0x100813b4
1008139e:	8d 44 24 04          	lea    eax,[esp+0x4]
100813a2:	50                   	push   eax
100813a3:	e8 18 d3 fe ff       	call   0x1006e6c0
100813a8:	8b 16                	mov    edx,DWORD PTR [esi]
100813aa:	8d 44 24 04          	lea    eax,[esp+0x4]
100813ae:	50                   	push   eax
100813af:	8b ce                	mov    ecx,esi
100813b1:	ff 52 54             	call   DWORD PTR [edx+0x54]
100813b4:	5e                   	pop    esi
100813b5:	83 c4 10             	add    esp,0x10
100813b8:	c2 08 00             	ret    0x8
100813bb:	90                   	nop
100813bc:	90                   	nop
100813bd:	90                   	nop
100813be:	90                   	nop
100813bf:	90                   	nop
100813c0:	83 ec 30             	sub    esp,0x30
100813c3:	53                   	push   ebx
100813c4:	55                   	push   ebp
100813c5:	56                   	push   esi
100813c6:	8b f1                	mov    esi,ecx
100813c8:	8b 0d 58 be 11 10    	mov    ecx,DWORD PTR ds:0x1011be58
100813ce:	57                   	push   edi
100813cf:	81 f9 00 04 00 00    	cmp    ecx,0x400
100813d5:	1b ff                	sbb    edi,edi
100813d7:	83 e7 f6             	and    edi,0xfffffff6
100813da:	83 c7 1a             	add    edi,0x1a
100813dd:	8b c7                	mov    eax,edi
100813df:	99                   	cdq
100813e0:	83 e2 03             	and    edx,0x3
100813e3:	03 c2                	add    eax,edx
100813e5:	8b e8                	mov    ebp,eax
100813e7:	c1 fd 02             	sar    ebp,0x2
100813ea:	81 f9 00 04 00 00    	cmp    ecx,0x400
100813f0:	1b c0                	sbb    eax,eax
100813f2:	24 80                	and    al,0x80
100813f4:	05 00 01 00 00       	add    eax,0x100
100813f9:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
100813fc:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10081401:	3d 00 04 00 00       	cmp    eax,0x400
10081406:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
1008140a:	1b c9                	sbb    ecx,ecx
1008140c:	83 e1 80             	and    ecx,0xffffff80
1008140f:	81 c1 00 01 00 00    	add    ecx,0x100
10081415:	89 4e 4c             	mov    DWORD PTR [esi+0x4c],ecx
10081418:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1008141b:	03 cf                	add    ecx,edi
1008141d:	8b 10                	mov    edx,DWORD PTR [eax]
1008141f:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10081423:	8d 0c 7f             	lea    ecx,[edi+edi*2]
10081426:	8b d9                	mov    ebx,ecx
10081428:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1008142b:	2b cb                	sub    ecx,ebx
1008142d:	8b 5e 48             	mov    ebx,DWORD PTR [esi+0x48]
10081430:	2b cb                	sub    ecx,ebx
10081432:	8b 58 0c             	mov    ebx,DWORD PTR [eax+0xc]
10081435:	03 d7                	add    edx,edi
10081437:	2b df                	sub    ebx,edi
10081439:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1008143d:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
10081441:	03 ca                	add    ecx,edx
10081443:	8d 5e 40             	lea    ebx,[esi+0x40]
10081446:	03 cf                	add    ecx,edi
10081448:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1008144c:	89 0b                	mov    DWORD PTR [ebx],ecx
1008144e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10081451:	03 d7                	add    edx,edi
10081453:	89 56 44             	mov    DWORD PTR [esi+0x44],edx
10081456:	8b d3                	mov    edx,ebx
10081458:	8b 02                	mov    eax,DWORD PTR [edx]
1008145a:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1008145e:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10081461:	8b 4a 08             	mov    ecx,DWORD PTR [edx+0x8]
10081464:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
10081468:	51                   	push   ecx
10081469:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
1008146c:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1008146f:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
10081473:	8b 56 4c             	mov    edx,DWORD PTR [esi+0x4c]
10081476:	03 d5                	add    edx,ebp
10081478:	03 c2                	add    eax,edx
1008147a:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1008147e:	e8 5d d2 fe ff       	call   0x1006e6e0
10081483:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10081486:	e8 75 81 ff ff       	call   0x10079600
1008148b:	8b 13                	mov    edx,DWORD PTR [ebx]
1008148d:	8d 4e 50             	lea    ecx,[esi+0x50]
10081490:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10081494:	8b c1                	mov    eax,ecx
10081496:	89 10                	mov    DWORD PTR [eax],edx
10081498:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1008149b:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1008149e:	8b 53 08             	mov    edx,DWORD PTR [ebx+0x8]
100814a1:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
100814a4:	8b 53 0c             	mov    edx,DWORD PTR [ebx+0xc]
100814a7:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
100814aa:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
100814ae:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
100814b2:	03 d0                	add    edx,eax
100814b4:	03 d7                	add    edx,edi
100814b6:	89 56 54             	mov    DWORD PTR [esi+0x54],edx
100814b9:	8b 01                	mov    eax,DWORD PTR [ecx]
100814bb:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
100814be:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
100814c2:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100814c5:	8b 49 0c             	mov    ecx,DWORD PTR [ecx+0xc]
100814c8:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
100814cc:	8b 4e 5c             	mov    ecx,DWORD PTR [esi+0x5c]
100814cf:	03 cd                	add    ecx,ebp
100814d1:	52                   	push   edx
100814d2:	03 c1                	add    eax,ecx
100814d4:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
100814d7:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
100814db:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
100814df:	e8 fc d1 fe ff       	call   0x1006e6e0
100814e4:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
100814e7:	e8 14 81 ff ff       	call   0x10079600
100814ec:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
100814ef:	8d 54 24 10          	lea    edx,[esp+0x10]
100814f3:	52                   	push   edx
100814f4:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
100814f8:	e8 53 d1 fe ff       	call   0x1006e650
100814fd:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10081500:	8d 44 24 20          	lea    eax,[esp+0x20]
10081504:	50                   	push   eax
10081505:	e8 46 d1 fe ff       	call   0x1006e650
1008150a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
1008150e:	51                   	push   ecx
1008150f:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10081512:	e8 39 d1 fe ff       	call   0x1006e650
10081517:	5f                   	pop    edi
10081518:	5e                   	pop    esi
10081519:	5d                   	pop    ebp
1008151a:	5b                   	pop    ebx
1008151b:	83 c4 30             	add    esp,0x30
1008151e:	c2 04 00             	ret    0x4
10081521:	90                   	nop
10081522:	90                   	nop
10081523:	90                   	nop
10081524:	90                   	nop
10081525:	90                   	nop
10081526:	90                   	nop
10081527:	90                   	nop
10081528:	90                   	nop
10081529:	90                   	nop
1008152a:	90                   	nop
1008152b:	90                   	nop
1008152c:	90                   	nop
1008152d:	90                   	nop
1008152e:	90                   	nop
1008152f:	90                   	nop
10081530:	53                   	push   ebx
10081531:	56                   	push   esi
10081532:	57                   	push   edi
10081533:	8d 79 38             	lea    edi,[ecx+0x38]
10081536:	8d 71 48             	lea    esi,[ecx+0x48]
10081539:	bb 02 00 00 00       	mov    ebx,0x2
1008153e:	8b 07                	mov    eax,DWORD PTR [edi]
10081540:	85 c0                	test   eax,eax
10081542:	74 21                	je     0x10081565
10081544:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10081547:	8b 16                	mov    edx,DWORD PTR [esi]
10081549:	6a ff                	push   0xffffffff
1008154b:	6a 00                	push   0x0
1008154d:	51                   	push   ecx
1008154e:	8b 4e fc             	mov    ecx,DWORD PTR [esi-0x4]
10081551:	52                   	push   edx
10081552:	8b 56 f8             	mov    edx,DWORD PTR [esi-0x8]
10081555:	51                   	push   ecx
10081556:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008155c:	52                   	push   edx
1008155d:	50                   	push   eax
1008155e:	e8 2d 91 fc ff       	call   0x1004a690
10081563:	eb 24                	jmp    0x10081589
10081565:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10081568:	8b 0e                	mov    ecx,DWORD PTR [esi]
1008156a:	8b 56 fc             	mov    edx,DWORD PTR [esi-0x4]
1008156d:	68 00 00 00 10       	push   0x10000000
10081572:	68 00 00 00 10       	push   0x10000000
10081577:	50                   	push   eax
10081578:	8b 46 f8             	mov    eax,DWORD PTR [esi-0x8]
1008157b:	51                   	push   ecx
1008157c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081582:	52                   	push   edx
10081583:	50                   	push   eax
10081584:	e8 e7 7f fc ff       	call   0x10049570
10081589:	83 c7 04             	add    edi,0x4
1008158c:	83 c6 10             	add    esi,0x10
1008158f:	4b                   	dec    ebx
10081590:	75 ac                	jne    0x1008153e
10081592:	5f                   	pop    edi
10081593:	5e                   	pop    esi
10081594:	5b                   	pop    ebx
10081595:	c2 08 00             	ret    0x8
10081598:	90                   	nop
10081599:	90                   	nop
1008159a:	90                   	nop
1008159b:	90                   	nop
1008159c:	90                   	nop
1008159d:	90                   	nop
1008159e:	90                   	nop
1008159f:	90                   	nop
100815a0:	6a ff                	push   0xffffffff
100815a2:	68 41 67 0b 10       	push   0x100b6741
100815a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100815ad:	50                   	push   eax
100815ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100815b5:	51                   	push   ecx
100815b6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100815ba:	53                   	push   ebx
100815bb:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
100815bf:	55                   	push   ebp
100815c0:	56                   	push   esi
100815c1:	8b f1                	mov    esi,ecx
100815c3:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
100815c7:	53                   	push   ebx
100815c8:	50                   	push   eax
100815c9:	51                   	push   ecx
100815ca:	8b ce                	mov    ecx,esi
100815cc:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
100815d0:	e8 ab cd fe ff       	call   0x1006e380
100815d5:	33 ed                	xor    ebp,ebp
100815d7:	8d 8e d4 00 00 00    	lea    ecx,[esi+0xd4]
100815dd:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
100815e1:	e8 3a c6 fe ff       	call   0x1006dc20
100815e6:	6a 38                	push   0x38
100815e8:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
100815ed:	c7 06 78 cd 0b 10    	mov    DWORD PTR [esi],0x100bcd78
100815f3:	c7 86 fc 00 00 00 ff 	mov    DWORD PTR [esi+0xfc],0xffffffff
100815fa:	ff ff ff 
100815fd:	89 ae b8 00 00 00    	mov    DWORD PTR [esi+0xb8],ebp
10081603:	e8 21 23 02 00       	call   0x100a3929
10081608:	83 c4 04             	add    esp,0x4
1008160b:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1008160f:	3b c5                	cmp    eax,ebp
10081611:	c6 44 24 18 02       	mov    BYTE PTR [esp+0x18],0x2
10081616:	74 0c                	je     0x10081624
10081618:	55                   	push   ebp
10081619:	55                   	push   ebp
1008161a:	56                   	push   esi
1008161b:	8b c8                	mov    ecx,eax
1008161d:	e8 7e 7e ff ff       	call   0x100794a0
10081622:	eb 02                	jmp    0x10081626
10081624:	33 c0                	xor    eax,eax
10081626:	57                   	push   edi
10081627:	89 86 a4 00 00 00    	mov    DWORD PTR [esi+0xa4],eax
1008162d:	8b 3d 74 cd 0b 10    	mov    edi,DWORD PTR ds:0x100bcd74
10081633:	8b ce                	mov    ecx,esi
10081635:	57                   	push   edi
10081636:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
1008163b:	e8 f0 00 00 00       	call   0x10081730
10081640:	85 c0                	test   eax,eax
10081642:	74 15                	je     0x10081659
10081644:	57                   	push   edi
10081645:	8b ce                	mov    ecx,esi
10081647:	e8 94 0c 00 00       	call   0x100822e0
1008164c:	8b 14 bd 34 cd 0b 10 	mov    edx,DWORD PTR [edi*4+0x100bcd34]
10081653:	89 96 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],edx
10081659:	3b dd                	cmp    ebx,ebp
1008165b:	5f                   	pop    edi
1008165c:	74 08                	je     0x10081666
1008165e:	53                   	push   ebx
1008165f:	8b ce                	mov    ecx,esi
10081661:	e8 9a 08 00 00       	call   0x10081f00
10081666:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008166a:	89 ae a0 00 00 00    	mov    DWORD PTR [esi+0xa0],ebp
10081670:	8b c6                	mov    eax,esi
10081672:	5e                   	pop    esi
10081673:	5d                   	pop    ebp
10081674:	5b                   	pop    ebx
10081675:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1008167c:	83 c4 10             	add    esp,0x10
1008167f:	c2 0c 00             	ret    0xc
10081682:	90                   	nop
10081683:	90                   	nop
10081684:	90                   	nop
10081685:	90                   	nop
10081686:	90                   	nop
10081687:	90                   	nop
10081688:	90                   	nop
10081689:	90                   	nop
1008168a:	90                   	nop
1008168b:	90                   	nop
1008168c:	90                   	nop
1008168d:	90                   	nop
1008168e:	90                   	nop
1008168f:	90                   	nop
10081690:	56                   	push   esi
10081691:	8b f1                	mov    esi,ecx
10081693:	e8 18 00 00 00       	call   0x100816b0
10081698:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1008169d:	74 09                	je     0x100816a8
1008169f:	56                   	push   esi
100816a0:	e8 79 22 02 00       	call   0x100a391e
100816a5:	83 c4 04             	add    esp,0x4
100816a8:	8b c6                	mov    eax,esi
100816aa:	5e                   	pop    esi
100816ab:	c2 04 00             	ret    0x4
100816ae:	90                   	nop
100816af:	90                   	nop
100816b0:	6a ff                	push   0xffffffff
100816b2:	68 66 67 0b 10       	push   0x100b6766
100816b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100816bd:	50                   	push   eax
100816be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100816c5:	51                   	push   ecx
100816c6:	56                   	push   esi
100816c7:	8b f1                	mov    esi,ecx
100816c9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
100816cd:	c7 06 78 cd 0b 10    	mov    DWORD PTR [esi],0x100bcd78
100816d3:	8b 86 a0 00 00 00    	mov    eax,DWORD PTR [esi+0xa0]
100816d9:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
100816e0:	00 
100816e1:	85 c0                	test   eax,eax
100816e3:	74 0f                	je     0x100816f4
100816e5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100816eb:	50                   	push   eax
100816ec:	8b 11                	mov    edx,DWORD PTR [ecx]
100816ee:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100816f4:	8d 8e d4 00 00 00    	lea    ecx,[esi+0xd4]
100816fa:	c7 86 a0 00 00 00 00 	mov    DWORD PTR [esi+0xa0],0x0
10081701:	00 00 00 
10081704:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
10081709:	e8 72 c5 fe ff       	call   0x1006dc80
1008170e:	8b ce                	mov    ecx,esi
10081710:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10081717:	ff 
10081718:	e8 03 ce fe ff       	call   0x1006e520
1008171d:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10081721:	5e                   	pop    esi
10081722:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10081729:	83 c4 10             	add    esp,0x10
1008172c:	c3                   	ret
1008172d:	90                   	nop
1008172e:	90                   	nop
1008172f:	90                   	nop
10081730:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10081734:	53                   	push   ebx
10081735:	56                   	push   esi
10081736:	83 f8 06             	cmp    eax,0x6
10081739:	57                   	push   edi
1008173a:	8b d9                	mov    ebx,ecx
1008173c:	75 08                	jne    0x10081746
1008173e:	5f                   	pop    edi
1008173f:	5e                   	pop    esi
10081740:	33 c0                	xor    eax,eax
10081742:	5b                   	pop    ebx
10081743:	c2 04 00             	ret    0x4
10081746:	83 f8 07             	cmp    eax,0x7
10081749:	75 5d                	jne    0x100817a8
1008174b:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10081751:	8b 81 08 81 01 00    	mov    eax,DWORD PTR [ecx+0x18108]
10081757:	83 f8 01             	cmp    eax,0x1
1008175a:	74 05                	je     0x10081761
1008175c:	83 f8 02             	cmp    eax,0x2
1008175f:	75 08                	jne    0x10081769
10081761:	5f                   	pop    edi
10081762:	5e                   	pop    esi
10081763:	33 c0                	xor    eax,eax
10081765:	5b                   	pop    ebx
10081766:	c2 04 00             	ret    0x4
10081769:	33 ff                	xor    edi,edi
1008176b:	eb 06                	jmp    0x10081773
1008176d:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10081773:	8b 01                	mov    eax,DWORD PTR [ecx]
10081775:	57                   	push   edi
10081776:	ff 50 68             	call   DWORD PTR [eax+0x68]
10081779:	8b f0                	mov    esi,eax
1008177b:	85 f6                	test   esi,esi
1008177d:	74 23                	je     0x100817a2
1008177f:	3b 3d 50 d0 0d 10    	cmp    edi,DWORD PTR ds:0x100dd050
10081785:	74 1b                	je     0x100817a2
10081787:	8b 16                	mov    edx,DWORD PTR [esi]
10081789:	8b ce                	mov    ecx,esi
1008178b:	ff 52 18             	call   DWORD PTR [edx+0x18]
1008178e:	3b 83 fc 00 00 00    	cmp    eax,DWORD PTR [ebx+0xfc]
10081794:	75 0c                	jne    0x100817a2
10081796:	8b 06                	mov    eax,DWORD PTR [esi]
10081798:	8b ce                	mov    ecx,esi
1008179a:	ff 50 40             	call   DWORD PTR [eax+0x40]
1008179d:	83 f8 07             	cmp    eax,0x7
100817a0:	74 bf                	je     0x10081761
100817a2:	47                   	inc    edi
100817a3:	83 ff 24             	cmp    edi,0x24
100817a6:	7c c5                	jl     0x1008176d
100817a8:	5f                   	pop    edi
100817a9:	5e                   	pop    esi
100817aa:	b8 01 00 00 00       	mov    eax,0x1
100817af:	5b                   	pop    ebx
100817b0:	c2 04 00             	ret    0x4
100817b3:	90                   	nop
100817b4:	90                   	nop
100817b5:	90                   	nop
100817b6:	90                   	nop
100817b7:	90                   	nop
100817b8:	90                   	nop
100817b9:	90                   	nop
100817ba:	90                   	nop
100817bb:	90                   	nop
100817bc:	90                   	nop
100817bd:	90                   	nop
100817be:	90                   	nop
100817bf:	90                   	nop
100817c0:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
100817c5:	56                   	push   esi
100817c6:	8b f1                	mov    esi,ecx
100817c8:	57                   	push   edi
100817c9:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
100817cf:	85 c9                	test   ecx,ecx
100817d1:	74 2b                	je     0x100817fe
100817d3:	8b 11                	mov    edx,DWORD PTR [ecx]
100817d5:	ff 52 40             	call   DWORD PTR [edx+0x40]
100817d8:	8b f8                	mov    edi,eax
100817da:	8b ce                	mov    ecx,esi
100817dc:	57                   	push   edi
100817dd:	e8 4e ff ff ff       	call   0x10081730
100817e2:	85 c0                	test   eax,eax
100817e4:	74 3a                	je     0x10081820
100817e6:	57                   	push   edi
100817e7:	8b ce                	mov    ecx,esi
100817e9:	e8 f2 0a 00 00       	call   0x100822e0
100817ee:	8b 04 bd 34 cd 0b 10 	mov    eax,DWORD PTR [edi*4+0x100bcd34]
100817f5:	5f                   	pop    edi
100817f6:	89 86 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],eax
100817fc:	5e                   	pop    esi
100817fd:	c3                   	ret
100817fe:	6a 08                	push   0x8
10081800:	8b ce                	mov    ecx,esi
10081802:	e8 29 ff ff ff       	call   0x10081730
10081807:	85 c0                	test   eax,eax
10081809:	74 15                	je     0x10081820
1008180b:	6a 08                	push   0x8
1008180d:	8b ce                	mov    ecx,esi
1008180f:	e8 cc 0a 00 00       	call   0x100822e0
10081814:	8b 0d 54 cd 0b 10    	mov    ecx,DWORD PTR ds:0x100bcd54
1008181a:	89 8e 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],ecx
10081820:	5f                   	pop    edi
10081821:	5e                   	pop    esi
10081822:	c3                   	ret
10081823:	90                   	nop
10081824:	90                   	nop
10081825:	90                   	nop
10081826:	90                   	nop
10081827:	90                   	nop
10081828:	90                   	nop
10081829:	90                   	nop
1008182a:	90                   	nop
1008182b:	90                   	nop
1008182c:	90                   	nop
1008182d:	90                   	nop
1008182e:	90                   	nop
1008182f:	90                   	nop
10081830:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10081834:	50                   	push   eax
10081835:	e8 c6 06 00 00       	call   0x10081f00
1008183a:	c2 04 00             	ret    0x4
1008183d:	90                   	nop
1008183e:	90                   	nop
1008183f:	90                   	nop
10081840:	83 ec 28             	sub    esp,0x28
10081843:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10081847:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
1008184b:	83 f8 06             	cmp    eax,0x6
1008184e:	75 0b                	jne    0x1008185b
10081850:	e8 0b 03 00 00       	call   0x10081b60
10081855:	83 c4 28             	add    esp,0x28
10081858:	c2 04 00             	ret    0x4
1008185b:	8b d0                	mov    edx,eax
1008185d:	53                   	push   ebx
1008185e:	c1 e2 04             	shl    edx,0x4
10081861:	55                   	push   ebp
10081862:	56                   	push   esi
10081863:	8d 6c 0a 2c          	lea    ebp,[edx+ecx*1+0x2c]
10081867:	8b 0d 84 ce 11 10    	mov    ecx,DWORD PTR ds:0x1011ce84
1008186d:	57                   	push   edi
1008186e:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
10081872:	8b 7d 00             	mov    edi,DWORD PTR [ebp+0x0]
10081875:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10081878:	8b 5d 04             	mov    ebx,DWORD PTR [ebp+0x4]
1008187b:	2b f9                	sub    edi,ecx
1008187d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10081881:	03 fe                	add    edi,esi
10081883:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10081886:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
1008188a:	39 81 9c 00 00 00    	cmp    DWORD PTR [ecx+0x9c],eax
10081890:	0f 85 f6 00 00 00    	jne    0x1008198c
10081896:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1008189c:	6a 00                	push   0x0
1008189e:	8b 11                	mov    edx,DWORD PTR [ecx]
100818a0:	ff 52 10             	call   DWORD PTR [edx+0x10]
100818a3:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100818a9:	6a 03                	push   0x3
100818ab:	8b 01                	mov    eax,DWORD PTR [ecx]
100818ad:	ff 50 14             	call   DWORD PTR [eax+0x14]
100818b0:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100818b6:	6a 02                	push   0x2
100818b8:	8b 11                	mov    edx,DWORD PTR [ecx]
100818ba:	ff 52 18             	call   DWORD PTR [edx+0x18]
100818bd:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100818c3:	6a 00                	push   0x0
100818c5:	8b 01                	mov    eax,DWORD PTR [ecx]
100818c7:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
100818ca:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100818d0:	6a 01                	push   0x1
100818d2:	8b 11                	mov    edx,DWORD PTR [ecx]
100818d4:	ff 52 20             	call   DWORD PTR [edx+0x20]
100818d7:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100818dd:	6a 01                	push   0x1
100818df:	8b 01                	mov    eax,DWORD PTR [ecx]
100818e1:	ff 50 24             	call   DWORD PTR [eax+0x24]
100818e4:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100818ea:	6a 00                	push   0x0
100818ec:	8b 11                	mov    edx,DWORD PTR [ecx]
100818ee:	ff 52 28             	call   DWORD PTR [edx+0x28]
100818f1:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100818f7:	6a 00                	push   0x0
100818f9:	8b 01                	mov    eax,DWORD PTR [ecx]
100818fb:	ff 50 08             	call   DWORD PTR [eax+0x8]
100818fe:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081904:	53                   	push   ebx
10081905:	57                   	push   edi
10081906:	6a ff                	push   0xffffffff
10081908:	6a 00                	push   0x0
1008190a:	68 70 ce 11 10       	push   0x1011ce70
1008190f:	e8 dc 9b fc ff       	call   0x1004b4f0
10081914:	8b 15 a4 ce 11 10    	mov    edx,DWORD PTR ds:0x1011cea4
1008191a:	8b ce                	mov    ecx,esi
1008191c:	2b ca                	sub    ecx,edx
1008191e:	03 cb                	add    ecx,ebx
10081920:	51                   	push   ecx
10081921:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081927:	57                   	push   edi
10081928:	6a ff                	push   0xffffffff
1008192a:	6a 00                	push   0x0
1008192c:	68 8c ce 11 10       	push   0x1011ce8c
10081931:	e8 ba 9b fc ff       	call   0x1004b4f0
10081936:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1008193c:	6a 00                	push   0x0
1008193e:	6a ff                	push   0xffffffff
10081940:	e8 2b b9 fc ff       	call   0x1004d270
10081945:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
10081949:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1008194f:	50                   	push   eax
10081950:	52                   	push   edx
10081951:	e8 1a b9 fc ff       	call   0x1004d270
10081956:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1008195a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10081960:	2b d8                	sub    ebx,eax
10081962:	8b 92 a0 00 00 00    	mov    edx,DWORD PTR [edx+0xa0]
10081968:	8b 01                	mov    eax,DWORD PTR [ecx]
1008196a:	83 eb 02             	sub    ebx,0x2
1008196d:	53                   	push   ebx
1008196e:	57                   	push   edi
1008196f:	52                   	push   edx
10081970:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10081976:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008197c:	50                   	push   eax
1008197d:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
10081982:	50                   	push   eax
10081983:	e8 78 87 fc ff       	call   0x1004a100
10081988:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1008198c:	8b 0c 85 58 cd 0b 10 	mov    ecx,DWORD PTR [eax*4+0x100bcd58]
10081993:	33 db                	xor    ebx,ebx
10081995:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
10081999:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1008199d:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
100819a1:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
100819a7:	8b 8a c8 81 01 00    	mov    ecx,DWORD PTR [edx+0x181c8]
100819ad:	85 c9                	test   ecx,ecx
100819af:	74 4d                	je     0x100819fe
100819b1:	8b 01                	mov    eax,DWORD PTR [ecx]
100819b3:	ff 50 08             	call   DWORD PTR [eax+0x8]
100819b6:	3b c3                	cmp    eax,ebx
100819b8:	74 44                	je     0x100819fe
100819ba:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100819c0:	53                   	push   ebx
100819c1:	8b 11                	mov    edx,DWORD PTR [ecx]
100819c3:	ff 52 68             	call   DWORD PTR [edx+0x68]
100819c6:	8b d8                	mov    ebx,eax
100819c8:	85 db                	test   ebx,ebx
100819ca:	74 2e                	je     0x100819fa
100819cc:	8b 03                	mov    eax,DWORD PTR [ebx]
100819ce:	8b cb                	mov    ecx,ebx
100819d0:	ff 50 18             	call   DWORD PTR [eax+0x18]
100819d3:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100819d7:	3b 81 fc 00 00 00    	cmp    eax,DWORD PTR [ecx+0xfc]
100819dd:	75 1b                	jne    0x100819fa
100819df:	8b 13                	mov    edx,DWORD PTR [ebx]
100819e1:	8b cb                	mov    ecx,ebx
100819e3:	ff 52 40             	call   DWORD PTR [edx+0x40]
100819e6:	3b 44 24 24          	cmp    eax,DWORD PTR [esp+0x24]
100819ea:	75 0e                	jne    0x100819fa
100819ec:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100819f0:	83 f8 63             	cmp    eax,0x63
100819f3:	7d 13                	jge    0x10081a08
100819f5:	40                   	inc    eax
100819f6:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100819fa:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
100819fe:	43                   	inc    ebx
100819ff:	83 fb 24             	cmp    ebx,0x24
10081a02:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
10081a06:	7c 99                	jl     0x100819a1
10081a08:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
10081a0d:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
10081a11:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10081a17:	8d 1c 40             	lea    ebx,[eax+eax*2]
10081a1a:	8d 04 80             	lea    eax,[eax+eax*4]
10081a1d:	d1 e0                	shl    eax,1
10081a1f:	c1 e8 0a             	shr    eax,0xa
10081a22:	03 f8                	add    edi,eax
10081a24:	2b f0                	sub    esi,eax
10081a26:	a1 dc ce 11 10       	mov    eax,ds:0x1011cedc
10081a2b:	d1 e3                	shl    ebx,1
10081a2d:	2b f0                	sub    esi,eax
10081a2f:	c1 eb 0a             	shr    ebx,0xa
10081a32:	03 f2                	add    esi,edx
10081a34:	e8 37 b8 fc ff       	call   0x1004d270
10081a39:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081a3f:	56                   	push   esi
10081a40:	57                   	push   edi
10081a41:	6a ff                	push   0xffffffff
10081a43:	6a 00                	push   0x0
10081a45:	68 c4 ce 11 10       	push   0x1011cec4
10081a4a:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
10081a4e:	e8 9d 9a fc ff       	call   0x1004b4f0
10081a53:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10081a57:	8d 44 24 1e          	lea    eax,[esp+0x1e]
10081a5b:	6a 0a                	push   0xa
10081a5d:	50                   	push   eax
10081a5e:	51                   	push   ecx
10081a5f:	c6 44 24 28 78       	mov    BYTE PTR [esp+0x28],0x78
10081a64:	c6 44 24 29 20       	mov    BYTE PTR [esp+0x29],0x20
10081a69:	e8 e3 3f 02 00       	call   0x100a5a51
10081a6e:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10081a72:	8b 15 dc ce 11 10    	mov    edx,DWORD PTR ds:0x1011cedc
10081a78:	83 c4 0c             	add    esp,0xc
10081a7b:	2b d0                	sub    edx,eax
10081a7d:	03 d6                	add    edx,esi
10081a7f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
10081a83:	6a 04                	push   0x4
10081a85:	6a ff                	push   0xffffffff
10081a87:	50                   	push   eax
10081a88:	a1 d8 ce 11 10       	mov    eax,ds:0x1011ced8
10081a8d:	03 c7                	add    eax,edi
10081a8f:	68 00 04 00 00       	push   0x400
10081a94:	03 c3                	add    eax,ebx
10081a96:	52                   	push   edx
10081a97:	8b 15 f0 b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6f0
10081a9d:	50                   	push   eax
10081a9e:	51                   	push   ecx
10081a9f:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081aa5:	52                   	push   edx
10081aa6:	e8 55 86 fc ff       	call   0x1004a100
10081aab:	8b 75 00             	mov    esi,DWORD PTR [ebp+0x0]
10081aae:	a1 bc ce 11 10       	mov    eax,ds:0x1011cebc
10081ab3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10081ab6:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
10081ab9:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
10081abc:	8b 5c 24 3c          	mov    ebx,DWORD PTR [esp+0x3c]
10081ac0:	2b f0                	sub    esi,eax
10081ac2:	8b e8                	mov    ebp,eax
10081ac4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10081ac8:	03 f1                	add    esi,ecx
10081aca:	8b 0d c0 ce 11 10    	mov    ecx,DWORD PTR ds:0x1011cec0
10081ad0:	2b f9                	sub    edi,ecx
10081ad2:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
10081ad6:	8b 88 9c 00 00 00    	mov    ecx,DWORD PTR [eax+0x9c]
10081adc:	03 fa                	add    edi,edx
10081ade:	3b d9                	cmp    ebx,ecx
10081ae0:	74 16                	je     0x10081af8
10081ae2:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081ae8:	57                   	push   edi
10081ae9:	56                   	push   esi
10081aea:	6a ff                	push   0xffffffff
10081aec:	6a 00                	push   0x0
10081aee:	68 a8 ce 11 10       	push   0x1011cea8
10081af3:	e8 f8 99 fc ff       	call   0x1004b4f0
10081af8:	8b c5                	mov    eax,ebp
10081afa:	8a cb                	mov    cl,bl
10081afc:	99                   	cdq
10081afd:	80 c1 31             	add    cl,0x31
10081b00:	2b c2                	sub    eax,edx
10081b02:	88 4c 24 12          	mov    BYTE PTR [esp+0x12],cl
10081b06:	8b c8                	mov    ecx,eax
10081b08:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10081b0c:	6a 00                	push   0x0
10081b0e:	99                   	cdq
10081b0f:	2b c2                	sub    eax,edx
10081b11:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10081b15:	d1 f9                	sar    ecx,1
10081b17:	8b 92 9c 00 00 00    	mov    edx,DWORD PTR [edx+0x9c]
10081b1d:	03 f1                	add    esi,ecx
10081b1f:	d1 f8                	sar    eax,1
10081b21:	2b d3                	sub    edx,ebx
10081b23:	03 f8                	add    edi,eax
10081b25:	f7 da                	neg    edx
10081b27:	1b d2                	sbb    edx,edx
10081b29:	c6 44 24 17 00       	mov    BYTE PTR [esp+0x17],0x0
10081b2e:	81 e2 ff 00 ff 00    	and    edx,0xff00ff
10081b34:	81 c2 00 ff 00 ff    	add    edx,0xff00ff00
10081b3a:	52                   	push   edx
10081b3b:	50                   	push   eax
10081b3c:	51                   	push   ecx
10081b3d:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10081b43:	57                   	push   edi
10081b44:	8d 44 24 26          	lea    eax,[esp+0x26]
10081b48:	56                   	push   esi
10081b49:	50                   	push   eax
10081b4a:	51                   	push   ecx
10081b4b:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081b51:	e8 aa 85 fc ff       	call   0x1004a100
10081b56:	5f                   	pop    edi
10081b57:	5e                   	pop    esi
10081b58:	5d                   	pop    ebp
10081b59:	5b                   	pop    ebx
10081b5a:	83 c4 28             	add    esp,0x28
10081b5d:	c2 04 00             	ret    0x4
10081b60:	51                   	push   ecx
10081b61:	53                   	push   ebx
10081b62:	56                   	push   esi
10081b63:	57                   	push   edi
10081b64:	8b f9                	mov    edi,ecx
10081b66:	6a 07                	push   0x7
10081b68:	e8 c3 fb ff ff       	call   0x10081730
10081b6d:	8b 8f 9c 00 00 00    	mov    ecx,DWORD PTR [edi+0x9c]
10081b73:	8b d8                	mov    ebx,eax
10081b75:	33 c0                	xor    eax,eax
10081b77:	83 f9 06             	cmp    ecx,0x6
10081b7a:	0f 94 c0             	sete   al
10081b7d:	8b f0                	mov    esi,eax
10081b7f:	85 f6                	test   esi,esi
10081b81:	74 22                	je     0x10081ba5
10081b83:	8b 8f 90 00 00 00    	mov    ecx,DWORD PTR [edi+0x90]
10081b89:	8b 97 8c 00 00 00    	mov    edx,DWORD PTR [edi+0x8c]
10081b8f:	51                   	push   ecx
10081b90:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081b96:	52                   	push   edx
10081b97:	6a ff                	push   0xffffffff
10081b99:	6a 00                	push   0x0
10081b9b:	68 e0 ce 11 10       	push   0x1011cee0
10081ba0:	e8 4b 99 fc ff       	call   0x1004b4f0
10081ba5:	85 db                	test   ebx,ebx
10081ba7:	74 70                	je     0x10081c19
10081ba9:	a1 bc ce 11 10       	mov    eax,ds:0x1011cebc
10081bae:	8b 8f 8c 00 00 00    	mov    ecx,DWORD PTR [edi+0x8c]
10081bb4:	99                   	cdq
10081bb5:	2b c2                	sub    eax,edx
10081bb7:	55                   	push   ebp
10081bb8:	8b d8                	mov    ebx,eax
10081bba:	a1 c0 ce 11 10       	mov    eax,ds:0x1011cec0
10081bbf:	99                   	cdq
10081bc0:	8b af 90 00 00 00    	mov    ebp,DWORD PTR [edi+0x90]
10081bc6:	2b c2                	sub    eax,edx
10081bc8:	8b 97 94 00 00 00    	mov    edx,DWORD PTR [edi+0x94]
10081bce:	6a 00                	push   0x0
10081bd0:	d1 fb                	sar    ebx,1
10081bd2:	2b d3                	sub    edx,ebx
10081bd4:	c6 44 24 16 37       	mov    BYTE PTR [esp+0x16],0x37
10081bd9:	03 d1                	add    edx,ecx
10081bdb:	8b 8f 98 00 00 00    	mov    ecx,DWORD PTR [edi+0x98]
10081be1:	d1 f8                	sar    eax,1
10081be3:	03 cd                	add    ecx,ebp
10081be5:	c6 44 24 17 00       	mov    BYTE PTR [esp+0x17],0x0
10081bea:	2b c8                	sub    ecx,eax
10081bec:	f7 de                	neg    esi
10081bee:	1b f6                	sbb    esi,esi
10081bf0:	81 e6 01 ff 00 ff    	and    esi,0xff00ff01
10081bf6:	4e                   	dec    esi
10081bf7:	56                   	push   esi
10081bf8:	50                   	push   eax
10081bf9:	53                   	push   ebx
10081bfa:	51                   	push   ecx
10081bfb:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10081c01:	8d 44 24 26          	lea    eax,[esp+0x26]
10081c05:	52                   	push   edx
10081c06:	50                   	push   eax
10081c07:	51                   	push   ecx
10081c08:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081c0e:	e8 ed 84 fc ff       	call   0x1004a100
10081c13:	5d                   	pop    ebp
10081c14:	5f                   	pop    edi
10081c15:	5e                   	pop    esi
10081c16:	5b                   	pop    ebx
10081c17:	59                   	pop    ecx
10081c18:	c3                   	ret
10081c19:	8b 97 98 00 00 00    	mov    edx,DWORD PTR [edi+0x98]
10081c1f:	8b 87 94 00 00 00    	mov    eax,DWORD PTR [edi+0x94]
10081c25:	8b 8f 90 00 00 00    	mov    ecx,DWORD PTR [edi+0x90]
10081c2b:	68 64 64 64 c4       	push   0xc4646464
10081c30:	6a 00                	push   0x0
10081c32:	52                   	push   edx
10081c33:	8b 97 8c 00 00 00    	mov    edx,DWORD PTR [edi+0x8c]
10081c39:	50                   	push   eax
10081c3a:	51                   	push   ecx
10081c3b:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081c41:	52                   	push   edx
10081c42:	e8 29 79 fc ff       	call   0x10049570
10081c47:	5f                   	pop    edi
10081c48:	5e                   	pop    esi
10081c49:	5b                   	pop    ebx
10081c4a:	59                   	pop    ecx
10081c4b:	c3                   	ret
10081c4c:	90                   	nop
10081c4d:	90                   	nop
10081c4e:	90                   	nop
10081c4f:	90                   	nop
10081c50:	56                   	push   esi
10081c51:	8b f1                	mov    esi,ecx
10081c53:	57                   	push   edi
10081c54:	8d 8e d4 00 00 00    	lea    ecx,[esi+0xd4]
10081c5a:	e8 61 c4 fe ff       	call   0x1006e0c0
10081c5f:	8b 86 b8 00 00 00    	mov    eax,DWORD PTR [esi+0xb8]
10081c65:	8d 8e b8 00 00 00    	lea    ecx,[esi+0xb8]
10081c6b:	85 c0                	test   eax,eax
10081c6d:	74 56                	je     0x10081cc5
10081c6f:	8b 86 d0 00 00 00    	mov    eax,DWORD PTR [esi+0xd0]
10081c75:	99                   	cdq
10081c76:	2b c2                	sub    eax,edx
10081c78:	8b f8                	mov    edi,eax
10081c7a:	8b 86 b4 00 00 00    	mov    eax,DWORD PTR [esi+0xb4]
10081c80:	99                   	cdq
10081c81:	2b c2                	sub    eax,edx
10081c83:	d1 ff                	sar    edi,1
10081c85:	d1 f8                	sar    eax,1
10081c87:	2b c7                	sub    eax,edi
10081c89:	8b be ac 00 00 00    	mov    edi,DWORD PTR [esi+0xac]
10081c8f:	03 c7                	add    eax,edi
10081c91:	50                   	push   eax
10081c92:	8b 86 cc 00 00 00    	mov    eax,DWORD PTR [esi+0xcc]
10081c98:	99                   	cdq
10081c99:	2b c2                	sub    eax,edx
10081c9b:	8b f8                	mov    edi,eax
10081c9d:	8b 86 b0 00 00 00    	mov    eax,DWORD PTR [esi+0xb0]
10081ca3:	99                   	cdq
10081ca4:	2b c2                	sub    eax,edx
10081ca6:	d1 ff                	sar    edi,1
10081ca8:	d1 f8                	sar    eax,1
10081caa:	2b c7                	sub    eax,edi
10081cac:	8b be a8 00 00 00    	mov    edi,DWORD PTR [esi+0xa8]
10081cb2:	03 c7                	add    eax,edi
10081cb4:	50                   	push   eax
10081cb5:	6a ff                	push   0xffffffff
10081cb7:	6a 00                	push   0x0
10081cb9:	51                   	push   ecx
10081cba:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10081cc0:	e8 2b 98 fc ff       	call   0x1004b4f0
10081cc5:	33 ff                	xor    edi,edi
10081cc7:	57                   	push   edi
10081cc8:	8b ce                	mov    ecx,esi
10081cca:	e8 71 fb ff ff       	call   0x10081840
10081ccf:	47                   	inc    edi
10081cd0:	83 ff 07             	cmp    edi,0x7
10081cd3:	7c f2                	jl     0x10081cc7
10081cd5:	5f                   	pop    edi
10081cd6:	5e                   	pop    esi
10081cd7:	c2 08 00             	ret    0x8
10081cda:	90                   	nop
10081cdb:	90                   	nop
10081cdc:	90                   	nop
10081cdd:	90                   	nop
10081cde:	90                   	nop
10081cdf:	90                   	nop
10081ce0:	53                   	push   ebx
10081ce1:	55                   	push   ebp
10081ce2:	8b e9                	mov    ebp,ecx
10081ce4:	56                   	push   esi
10081ce5:	57                   	push   edi
10081ce6:	bb 58 cd 0b 10       	mov    ebx,0x100bcd58
10081ceb:	8d 75 2c             	lea    esi,[ebp+0x2c]
10081cee:	8b 0e                	mov    ecx,DWORD PTR [esi]
10081cf0:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10081cf4:	3b c1                	cmp    eax,ecx
10081cf6:	7c 70                	jl     0x10081d68
10081cf8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10081cfb:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
10081cff:	3b d0                	cmp    edx,eax
10081d01:	7c 65                	jl     0x10081d68
10081d03:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
10081d06:	03 f9                	add    edi,ecx
10081d08:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10081d0c:	3b cf                	cmp    ecx,edi
10081d0e:	7d 58                	jge    0x10081d68
10081d10:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
10081d13:	03 c8                	add    ecx,eax
10081d15:	3b d1                	cmp    edx,ecx
10081d17:	7d 4f                	jge    0x10081d68
10081d19:	8b 03                	mov    eax,DWORD PTR [ebx]
10081d1b:	8b cd                	mov    ecx,ebp
10081d1d:	50                   	push   eax
10081d1e:	e8 0d fa ff ff       	call   0x10081730
10081d23:	85 c0                	test   eax,eax
10081d25:	74 41                	je     0x10081d68
10081d27:	8b 3b                	mov    edi,DWORD PTR [ebx]
10081d29:	8b cd                	mov    ecx,ebp
10081d2b:	57                   	push   edi
10081d2c:	e8 ff f9 ff ff       	call   0x10081730
10081d31:	85 c0                	test   eax,eax
10081d33:	74 15                	je     0x10081d4a
10081d35:	57                   	push   edi
10081d36:	8b cd                	mov    ecx,ebp
10081d38:	e8 a3 05 00 00       	call   0x100822e0
10081d3d:	8b 14 bd 34 cd 0b 10 	mov    edx,DWORD PTR [edi*4+0x100bcd34]
10081d44:	89 95 9c 00 00 00    	mov    DWORD PTR [ebp+0x9c],edx
10081d4a:	8b 85 9c 00 00 00    	mov    eax,DWORD PTR [ebp+0x9c]
10081d50:	8b cd                	mov    ecx,ebp
10081d52:	8b 3c 85 58 cd 0b 10 	mov    edi,DWORD PTR [eax*4+0x100bcd58]
10081d59:	57                   	push   edi
10081d5a:	e8 81 05 00 00       	call   0x100822e0
10081d5f:	8b 0d 10 43 12 10    	mov    ecx,DWORD PTR ds:0x10124310
10081d65:	89 79 60             	mov    DWORD PTR [ecx+0x60],edi
10081d68:	83 c3 04             	add    ebx,0x4
10081d6b:	83 c6 10             	add    esi,0x10
10081d6e:	81 fb 74 cd 0b 10    	cmp    ebx,0x100bcd74
10081d74:	0f 8c 74 ff ff ff    	jl     0x10081cee
10081d7a:	5f                   	pop    edi
10081d7b:	5e                   	pop    esi
10081d7c:	5d                   	pop    ebp
10081d7d:	5b                   	pop    ebx
10081d7e:	c2 0c 00             	ret    0xc
10081d81:	90                   	nop
10081d82:	90                   	nop
10081d83:	90                   	nop
10081d84:	90                   	nop
10081d85:	90                   	nop
10081d86:	90                   	nop
10081d87:	90                   	nop
10081d88:	90                   	nop
10081d89:	90                   	nop
10081d8a:	90                   	nop
10081d8b:	90                   	nop
10081d8c:	90                   	nop
10081d8d:	90                   	nop
10081d8e:	90                   	nop
10081d8f:	90                   	nop
10081d90:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10081d94:	56                   	push   esi
10081d95:	8b f1                	mov    esi,ecx
10081d97:	57                   	push   edi
10081d98:	8b c8                	mov    ecx,eax
10081d9a:	83 e9 25             	sub    ecx,0x25
10081d9d:	0f 84 ca 00 00 00    	je     0x10081e6d
10081da3:	83 e9 02             	sub    ecx,0x2
10081da6:	74 66                	je     0x10081e0e
10081da8:	83 f8 31             	cmp    eax,0x31
10081dab:	72 5a                	jb     0x10081e07
10081dad:	83 f8 38             	cmp    eax,0x38
10081db0:	73 55                	jae    0x10081e07
10081db2:	83 f8 39             	cmp    eax,0x39
10081db5:	77 50                	ja     0x10081e07
10081db7:	8b 3c 85 94 cc 0b 10 	mov    edi,DWORD PTR [eax*4+0x100bcc94]
10081dbe:	8b ce                	mov    ecx,esi
10081dc0:	57                   	push   edi
10081dc1:	e8 6a f9 ff ff       	call   0x10081730
10081dc6:	85 c0                	test   eax,eax
10081dc8:	74 15                	je     0x10081ddf
10081dca:	57                   	push   edi
10081dcb:	8b ce                	mov    ecx,esi
10081dcd:	e8 0e 05 00 00       	call   0x100822e0
10081dd2:	8b 04 bd 34 cd 0b 10 	mov    eax,DWORD PTR [edi*4+0x100bcd34]
10081dd9:	89 86 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],eax
10081ddf:	8b 8e 9c 00 00 00    	mov    ecx,DWORD PTR [esi+0x9c]
10081de5:	8b 3c 8d 58 cd 0b 10 	mov    edi,DWORD PTR [ecx*4+0x100bcd58]
10081dec:	8b ce                	mov    ecx,esi
10081dee:	57                   	push   edi
10081def:	e8 ec 04 00 00       	call   0x100822e0
10081df4:	8b 15 10 43 12 10    	mov    edx,DWORD PTR ds:0x10124310
10081dfa:	b8 01 00 00 00       	mov    eax,0x1
10081dff:	89 7a 60             	mov    DWORD PTR [edx+0x60],edi
10081e02:	5f                   	pop    edi
10081e03:	5e                   	pop    esi
10081e04:	c2 04 00             	ret    0x4
10081e07:	5f                   	pop    edi
10081e08:	33 c0                	xor    eax,eax
10081e0a:	5e                   	pop    esi
10081e0b:	c2 04 00             	ret    0x4
10081e0e:	8b 86 9c 00 00 00    	mov    eax,DWORD PTR [esi+0x9c]
10081e14:	6a 00                	push   0x0
10081e16:	50                   	push   eax
10081e17:	8b ce                	mov    ecx,esi
10081e19:	e8 12 07 00 00       	call   0x10082530
10081e1e:	8b 3c 85 58 cd 0b 10 	mov    edi,DWORD PTR [eax*4+0x100bcd58]
10081e25:	8b ce                	mov    ecx,esi
10081e27:	57                   	push   edi
10081e28:	e8 03 f9 ff ff       	call   0x10081730
10081e2d:	85 c0                	test   eax,eax
10081e2f:	74 15                	je     0x10081e46
10081e31:	57                   	push   edi
10081e32:	8b ce                	mov    ecx,esi
10081e34:	e8 a7 04 00 00       	call   0x100822e0
10081e39:	8b 0c bd 34 cd 0b 10 	mov    ecx,DWORD PTR [edi*4+0x100bcd34]
10081e40:	89 8e 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],ecx
10081e46:	8b 96 9c 00 00 00    	mov    edx,DWORD PTR [esi+0x9c]
10081e4c:	8b ce                	mov    ecx,esi
10081e4e:	8b 3c 95 58 cd 0b 10 	mov    edi,DWORD PTR [edx*4+0x100bcd58]
10081e55:	57                   	push   edi
10081e56:	e8 85 04 00 00       	call   0x100822e0
10081e5b:	a1 10 43 12 10       	mov    eax,ds:0x10124310
10081e60:	89 78 60             	mov    DWORD PTR [eax+0x60],edi
10081e63:	5f                   	pop    edi
10081e64:	b8 01 00 00 00       	mov    eax,0x1
10081e69:	5e                   	pop    esi
10081e6a:	c2 04 00             	ret    0x4
10081e6d:	8b 8e 9c 00 00 00    	mov    ecx,DWORD PTR [esi+0x9c]
10081e73:	6a 01                	push   0x1
10081e75:	51                   	push   ecx
10081e76:	8b ce                	mov    ecx,esi
10081e78:	e8 b3 06 00 00       	call   0x10082530
10081e7d:	8b 3c 85 58 cd 0b 10 	mov    edi,DWORD PTR [eax*4+0x100bcd58]
10081e84:	8b ce                	mov    ecx,esi
10081e86:	57                   	push   edi
10081e87:	e8 a4 f8 ff ff       	call   0x10081730
10081e8c:	85 c0                	test   eax,eax
10081e8e:	74 15                	je     0x10081ea5
10081e90:	57                   	push   edi
10081e91:	8b ce                	mov    ecx,esi
10081e93:	e8 48 04 00 00       	call   0x100822e0
10081e98:	8b 14 bd 34 cd 0b 10 	mov    edx,DWORD PTR [edi*4+0x100bcd34]
10081e9f:	89 96 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],edx
10081ea5:	8b 86 9c 00 00 00    	mov    eax,DWORD PTR [esi+0x9c]
10081eab:	8b ce                	mov    ecx,esi
10081ead:	8b 3c 85 58 cd 0b 10 	mov    edi,DWORD PTR [eax*4+0x100bcd58]
10081eb4:	57                   	push   edi
10081eb5:	e8 26 04 00 00       	call   0x100822e0
10081eba:	8b 0d 10 43 12 10    	mov    ecx,DWORD PTR ds:0x10124310
10081ec0:	b8 01 00 00 00       	mov    eax,0x1
10081ec5:	89 79 60             	mov    DWORD PTR [ecx+0x60],edi
10081ec8:	5f                   	pop    edi
10081ec9:	5e                   	pop    esi
10081eca:	c2 04 00             	ret    0x4
10081ecd:	90                   	nop
10081ece:	90                   	nop
10081ecf:	90                   	nop
10081ed0:	56                   	push   esi
10081ed1:	8b f1                	mov    esi,ecx
10081ed3:	8b 86 9c 00 00 00    	mov    eax,DWORD PTR [esi+0x9c]
10081ed9:	8b 0c 85 58 cd 0b 10 	mov    ecx,DWORD PTR [eax*4+0x100bcd58]
10081ee0:	51                   	push   ecx
10081ee1:	8b ce                	mov    ecx,esi
10081ee3:	e8 f8 03 00 00       	call   0x100822e0
10081ee8:	8b ce                	mov    ecx,esi
10081eea:	e8 41 05 00 00       	call   0x10082430
10081eef:	5e                   	pop    esi
10081ef0:	c2 04 00             	ret    0x4
10081ef3:	90                   	nop
10081ef4:	90                   	nop
10081ef5:	90                   	nop
10081ef6:	90                   	nop
10081ef7:	90                   	nop
10081ef8:	90                   	nop
10081ef9:	90                   	nop
10081efa:	90                   	nop
10081efb:	90                   	nop
10081efc:	90                   	nop
10081efd:	90                   	nop
10081efe:	90                   	nop
10081eff:	90                   	nop
10081f00:	81 ec 90 00 00 00    	sub    esp,0x90
10081f06:	53                   	push   ebx
10081f07:	55                   	push   ebp
10081f08:	8b ac 24 9c 00 00 00 	mov    ebp,DWORD PTR [esp+0x9c]
10081f0f:	8b d9                	mov    ebx,ecx
10081f11:	56                   	push   esi
10081f12:	57                   	push   edi
10081f13:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10081f16:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10081f19:	89 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],eax
10081f20:	8b 75 00             	mov    esi,DWORD PTR [ebp+0x0]
10081f23:	99                   	cdq
10081f24:	2b c2                	sub    eax,edx
10081f26:	89 b4 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],esi
10081f2d:	d1 f8                	sar    eax,1
10081f2f:	8b c1                	mov    eax,ecx
10081f31:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
10081f35:	8b 35 1c a0 0d 10    	mov    esi,DWORD PTR ds:0x100da01c
10081f3b:	89 8c 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],ecx
10081f42:	99                   	cdq
10081f43:	2b c2                	sub    eax,edx
10081f45:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
10081f48:	d1 f8                	sar    eax,1
10081f4a:	8d 04 f6             	lea    eax,[esi+esi*8]
10081f4d:	89 8c 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],ecx
10081f54:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10081f58:	8d 14 46             	lea    edx,[esi+eax*2]
10081f5b:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10081f60:	8d 14 96             	lea    edx,[esi+edx*4]
10081f63:	f7 e2                	mul    edx
10081f65:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
10081f6a:	c1 ea 09             	shr    edx,0x9
10081f6d:	2b ca                	sub    ecx,edx
10081f6f:	8d 54 24 10          	lea    edx,[esp+0x10]
10081f73:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10081f77:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
10081f7e:	51                   	push   ecx
10081f7f:	52                   	push   edx
10081f80:	8d 8b d4 00 00 00    	lea    ecx,[ebx+0xd4]
10081f86:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10081f8a:	e8 61 bf fe ff       	call   0x1006def0
10081f8f:	8d 53 2c             	lea    edx,[ebx+0x2c]
10081f92:	b9 1c 00 00 00       	mov    ecx,0x1c
10081f97:	33 c0                	xor    eax,eax
10081f99:	8b fa                	mov    edi,edx
10081f9b:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10081f9d:	81 3d 58 be 11 10 00 	cmp    DWORD PTR ds:0x1011be58,0x400
10081fa4:	04 00 00 
10081fa7:	0f 83 c1 00 00 00    	jae    0x1008206e
10081fad:	be 4a 00 00 00       	mov    esi,0x4a
10081fb2:	b9 57 00 00 00       	mov    ecx,0x57
10081fb7:	b8 20 01 00 00       	mov    eax,0x120
10081fbc:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
10081fc0:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
10081fc4:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
10081fc8:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
10081fcc:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
10081fd0:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
10081fd4:	89 74 24 54          	mov    DWORD PTR [esp+0x54],esi
10081fd8:	89 4c 24 58          	mov    DWORD PTR [esp+0x58],ecx
10081fdc:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
10081fe0:	89 4c 24 68          	mov    DWORD PTR [esp+0x68],ecx
10081fe4:	89 74 24 74          	mov    DWORD PTR [esp+0x74],esi
10081fe8:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
10081fec:	c7 44 24 20 38 00 00 	mov    DWORD PTR [esp+0x20],0x38
10081ff3:	00 
10081ff4:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10081ff8:	c7 44 24 30 90 00 00 	mov    DWORD PTR [esp+0x30],0x90
10081fff:	00 
10082000:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
10082004:	c7 44 24 40 e8 00 00 	mov    DWORD PTR [esp+0x40],0xe8
1008200b:	00 
1008200c:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
10082010:	c7 44 24 50 40 01 00 	mov    DWORD PTR [esp+0x50],0x140
10082017:	00 
10082018:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
1008201c:	c7 44 24 60 98 01 00 	mov    DWORD PTR [esp+0x60],0x198
10082023:	00 
10082024:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
10082028:	c7 44 24 70 f0 01 00 	mov    DWORD PTR [esp+0x70],0x1f0
1008202f:	00 
10082030:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
10082034:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x1ad
1008203b:	ad 01 00 00 
1008203f:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x9
10082046:	09 00 00 00 
1008204a:	c7 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],0xa0
10082051:	a0 00 00 00 
10082055:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x2b
1008205c:	2b 00 00 00 
10082060:	b9 1c 00 00 00       	mov    ecx,0x1c
10082065:	8d 74 24 20          	lea    esi,[esp+0x20]
10082069:	e9 bc 00 00 00       	jmp    0x1008212a
1008206e:	be 6b 00 00 00       	mov    esi,0x6b
10082073:	b9 89 00 00 00       	mov    ecx,0x89
10082078:	b8 e2 01 00 00       	mov    eax,0x1e2
1008207d:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
10082081:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
10082085:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
10082089:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1008208d:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
10082091:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
10082095:	89 74 24 54          	mov    DWORD PTR [esp+0x54],esi
10082099:	89 4c 24 58          	mov    DWORD PTR [esp+0x58],ecx
1008209d:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
100820a1:	89 4c 24 68          	mov    DWORD PTR [esp+0x68],ecx
100820a5:	89 74 24 74          	mov    DWORD PTR [esp+0x74],esi
100820a9:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
100820ad:	c7 44 24 20 5c 00 00 	mov    DWORD PTR [esp+0x20],0x5c
100820b4:	00 
100820b5:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
100820b9:	c7 44 24 30 e8 00 00 	mov    DWORD PTR [esp+0x30],0xe8
100820c0:	00 
100820c1:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
100820c5:	c7 44 24 40 74 01 00 	mov    DWORD PTR [esp+0x40],0x174
100820cc:	00 
100820cd:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
100820d1:	c7 44 24 50 00 02 00 	mov    DWORD PTR [esp+0x50],0x200
100820d8:	00 
100820d9:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
100820dd:	c7 44 24 60 8c 02 00 	mov    DWORD PTR [esp+0x60],0x28c
100820e4:	00 
100820e5:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
100820e9:	c7 44 24 70 18 03 00 	mov    DWORD PTR [esp+0x70],0x318
100820f0:	00 
100820f1:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
100820f5:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x2a9
100820fc:	a9 02 00 00 
10082100:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0xf
10082107:	0f 00 00 00 
1008210b:	c7 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],0x100
10082112:	00 01 00 00 
10082116:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x43
1008211d:	43 00 00 00 
10082121:	b9 1c 00 00 00       	mov    ecx,0x1c
10082126:	8d 74 24 20          	lea    esi,[esp+0x20]
1008212a:	8b fa                	mov    edi,edx
1008212c:	8d 43 30             	lea    eax,[ebx+0x30]
1008212f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10082131:	b9 07 00 00 00       	mov    ecx,0x7
10082136:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
10082139:	8b 70 fc             	mov    esi,DWORD PTR [eax-0x4]
1008213c:	03 f2                	add    esi,edx
1008213e:	89 70 fc             	mov    DWORD PTR [eax-0x4],esi
10082141:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
10082144:	8b 38                	mov    edi,DWORD PTR [eax]
10082146:	83 c0 10             	add    eax,0x10
10082149:	03 fa                	add    edi,edx
1008214b:	49                   	dec    ecx
1008214c:	89 78 f0             	mov    DWORD PTR [eax-0x10],edi
1008214f:	75 e5                	jne    0x10082136
10082151:	81 3d 58 be 11 10 00 	cmp    DWORD PTR ds:0x1011be58,0x400
10082158:	04 00 00 
1008215b:	73 16                	jae    0x10082173
1008215d:	b8 60 00 00 00       	mov    eax,0x60
10082162:	be 07 00 00 00       	mov    esi,0x7
10082167:	bf 49 01 00 00       	mov    edi,0x149
1008216c:	b9 2f 00 00 00       	mov    ecx,0x2f
10082171:	eb 14                	jmp    0x10082187
10082173:	b8 aa 00 00 00       	mov    eax,0xaa
10082178:	be 12 00 00 00       	mov    esi,0x12
1008217d:	bf ef 01 00 00       	mov    edi,0x1ef
10082182:	b9 3d 00 00 00       	mov    ecx,0x3d
10082187:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1008218b:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10082191:	c1 e1 02             	shl    ecx,0x2
10082194:	c1 e9 0a             	shr    ecx,0xa
10082197:	8b d1                	mov    edx,ecx
10082199:	03 55 00             	add    edx,DWORD PTR [ebp+0x0]
1008219c:	f7 d9                	neg    ecx
1008219e:	03 c2                	add    eax,edx
100821a0:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100821a4:	a1 1c a0 0d 10       	mov    eax,ds:0x100da01c
100821a9:	8d 0c 4f             	lea    ecx,[edi+ecx*2]
100821ac:	8d 14 85 00 00 00 00 	lea    edx,[eax*4+0x0]
100821b3:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100821b8:	f7 e2                	mul    edx
100821ba:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
100821bd:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100821c1:	c1 ea 09             	shr    edx,0x9
100821c4:	03 c2                	add    eax,edx
100821c6:	03 f0                	add    esi,eax
100821c8:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100821cc:	f7 da                	neg    edx
100821ce:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
100821d2:	8d 0c 50             	lea    ecx,[eax+edx*2]
100821d5:	8d 54 24 10          	lea    edx,[esp+0x10]
100821d9:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
100821dd:	8b 8b a4 00 00 00    	mov    ecx,DWORD PTR [ebx+0xa4]
100821e3:	52                   	push   edx
100821e4:	e8 67 c4 fe ff       	call   0x1006e650
100821e9:	81 3d 58 be 11 10 00 	cmp    DWORD PTR ds:0x1011be58,0x400
100821f0:	04 00 00 
100821f3:	73 26                	jae    0x1008221b
100821f5:	8d 83 a8 00 00 00    	lea    eax,[ebx+0xa8]
100821fb:	b9 37 00 00 00       	mov    ecx,0x37
10082200:	8b f8                	mov    edi,eax
10082202:	ba 07 00 00 00       	mov    edx,0x7
10082207:	be 26 00 00 00       	mov    esi,0x26
1008220c:	89 0f                	mov    DWORD PTR [edi],ecx
1008220e:	b9 2f 00 00 00       	mov    ecx,0x2f
10082213:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
10082216:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
10082219:	eb 24                	jmp    0x1008223f
1008221b:	8d 83 a8 00 00 00    	lea    eax,[ebx+0xa8]
10082221:	b9 65 00 00 00       	mov    ecx,0x65
10082226:	8b f8                	mov    edi,eax
10082228:	ba 12 00 00 00       	mov    edx,0x12
1008222d:	be 40 00 00 00       	mov    esi,0x40
10082232:	89 0f                	mov    DWORD PTR [edi],ecx
10082234:	b9 3d 00 00 00       	mov    ecx,0x3d
10082239:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
1008223c:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
1008223f:	89 4f 0c             	mov    DWORD PTR [edi+0xc],ecx
10082242:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10082248:	8b 7d 00             	mov    edi,DWORD PTR [ebp+0x0]
1008224b:	8b 30                	mov    esi,DWORD PTR [eax]
1008224d:	8d 14 8d 00 00 00 00 	lea    edx,[ecx*4+0x0]
10082254:	c1 ea 0a             	shr    edx,0xa
10082257:	03 d7                	add    edx,edi
10082259:	8b bb ac 00 00 00    	mov    edi,DWORD PTR [ebx+0xac]
1008225f:	03 f2                	add    esi,edx
10082261:	89 30                	mov    DWORD PTR [eax],esi
10082263:	a1 1c a0 0d 10       	mov    eax,ds:0x100da01c
10082268:	8d 0c 85 00 00 00 00 	lea    ecx,[eax*4+0x0]
1008226f:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10082274:	f7 e1                	mul    ecx
10082276:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
10082279:	8b ab b0 00 00 00    	mov    ebp,DWORD PTR [ebx+0xb0]
1008227f:	c1 ea 09             	shr    edx,0x9
10082282:	03 d0                	add    edx,eax
10082284:	03 fa                	add    edi,edx
10082286:	89 bb ac 00 00 00    	mov    DWORD PTR [ebx+0xac],edi
1008228c:	8b 15 18 a0 0d 10    	mov    edx,DWORD PTR ds:0x100da018
10082292:	5f                   	pop    edi
10082293:	5e                   	pop    esi
10082294:	8d 04 95 00 00 00 00 	lea    eax,[edx*4+0x0]
1008229b:	c1 e8 0a             	shr    eax,0xa
1008229e:	f7 d8                	neg    eax
100822a0:	d1 e0                	shl    eax,1
100822a2:	03 e8                	add    ebp,eax
100822a4:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100822a9:	89 ab b0 00 00 00    	mov    DWORD PTR [ebx+0xb0],ebp
100822af:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
100822b5:	5d                   	pop    ebp
100822b6:	8d 14 8d 00 00 00 00 	lea    edx,[ecx*4+0x0]
100822bd:	f7 e2                	mul    edx
100822bf:	8b 83 b4 00 00 00    	mov    eax,DWORD PTR [ebx+0xb4]
100822c5:	c1 ea 09             	shr    edx,0x9
100822c8:	f7 da                	neg    edx
100822ca:	d1 e2                	shl    edx,1
100822cc:	03 c2                	add    eax,edx
100822ce:	89 83 b4 00 00 00    	mov    DWORD PTR [ebx+0xb4],eax
100822d4:	5b                   	pop    ebx
100822d5:	81 c4 90 00 00 00    	add    esp,0x90
100822db:	c2 04 00             	ret    0x4
100822de:	90                   	nop
100822df:	90                   	nop
100822e0:	51                   	push   ecx
100822e1:	53                   	push   ebx
100822e2:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
100822e6:	56                   	push   esi
100822e7:	83 fb 08             	cmp    ebx,0x8
100822ea:	8b f1                	mov    esi,ecx
100822ec:	75 31                	jne    0x1008231f
100822ee:	8b 8e a4 00 00 00    	mov    ecx,DWORD PTR [esi+0xa4]
100822f4:	6a 01                	push   0x1
100822f6:	6a 00                	push   0x0
100822f8:	e8 83 c4 fe ff       	call   0x1006e780
100822fd:	8b 8e a4 00 00 00    	mov    ecx,DWORD PTR [esi+0xa4]
10082303:	6a ff                	push   0xffffffff
10082305:	68 00 d0 10 10       	push   0x1010d000
1008230a:	e8 a1 72 ff ff       	call   0x100795b0
1008230f:	c7 86 b8 00 00 00 00 	mov    DWORD PTR [esi+0xb8],0x0
10082316:	00 00 00 
10082319:	5e                   	pop    esi
1008231a:	5b                   	pop    ebx
1008231b:	59                   	pop    ecx
1008231c:	c2 04 00             	ret    0x4
1008231f:	8b 86 a0 00 00 00    	mov    eax,DWORD PTR [esi+0xa0]
10082325:	85 c0                	test   eax,eax
10082327:	74 0f                	je     0x10082338
10082329:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008232f:	50                   	push   eax
10082330:	8b 11                	mov    edx,DWORD PTR [ecx]
10082332:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10082338:	57                   	push   edi
10082339:	53                   	push   ebx
1008233a:	e8 01 d5 f9 ff       	call   0x1001f840
1008233f:	89 86 a0 00 00 00    	mov    DWORD PTR [esi+0xa0],eax
10082345:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008234a:	8d 93 2f 09 00 00    	lea    edx,[ebx+0x92f]
10082350:	8b 08                	mov    ecx,DWORD PTR [eax]
10082352:	52                   	push   edx
10082353:	50                   	push   eax
10082354:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008235a:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10082360:	83 c4 0c             	add    esp,0xc
10082363:	8b f8                	mov    edi,eax
10082365:	8b 01                	mov    eax,DWORD PTR [ecx]
10082367:	6a ff                	push   0xffffffff
10082369:	57                   	push   edi
1008236a:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10082370:	8b 8e a4 00 00 00    	mov    ecx,DWORD PTR [esi+0xa4]
10082376:	50                   	push   eax
10082377:	e8 34 72 ff ff       	call   0x100795b0
1008237c:	8b 8e a4 00 00 00    	mov    ecx,DWORD PTR [esi+0xa4]
10082382:	6a 00                	push   0x0
10082384:	6a 01                	push   0x1
10082386:	e8 f5 c3 fe ff       	call   0x1006e780
1008238b:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10082391:	57                   	push   edi
10082392:	8b 11                	mov    edx,DWORD PTR [ecx]
10082394:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008239a:	8b 1c 9d dc cb 0b 10 	mov    ebx,DWORD PTR [ebx*4+0x100bcbdc]
100823a1:	5f                   	pop    edi
100823a2:	83 fb ff             	cmp    ebx,0xffffffff
100823a5:	75 10                	jne    0x100823b7
100823a7:	c7 86 b8 00 00 00 00 	mov    DWORD PTR [esi+0xb8],0x0
100823ae:	00 00 00 
100823b1:	5e                   	pop    esi
100823b2:	5b                   	pop    ebx
100823b3:	59                   	pop    ecx
100823b4:	c2 04 00             	ret    0x4
100823b7:	8b 1c 9d 90 c4 11 10 	mov    ebx,DWORD PTR [ebx*4+0x1011c490]
100823be:	8d 54 24 08          	lea    edx,[esp+0x8]
100823c2:	89 9e b8 00 00 00    	mov    DWORD PTR [esi+0xb8],ebx
100823c8:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
100823ce:	b8 10 00 00 00       	mov    eax,0x10
100823d3:	52                   	push   edx
100823d4:	8d 54 24 14          	lea    edx,[esp+0x14]
100823d8:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100823dc:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100823e0:	8b 01                	mov    eax,DWORD PTR [ecx]
100823e2:	52                   	push   edx
100823e3:	53                   	push   ebx
100823e4:	ff 50 28             	call   DWORD PTR [eax+0x28]
100823e7:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100823eb:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100823ef:	89 86 bc 00 00 00    	mov    DWORD PTR [esi+0xbc],eax
100823f5:	89 8e c0 00 00 00    	mov    DWORD PTR [esi+0xc0],ecx
100823fb:	c7 86 c4 00 00 00 00 	mov    DWORD PTR [esi+0xc4],0x0
10082402:	00 00 00 
10082405:	c7 86 c8 00 00 00 00 	mov    DWORD PTR [esi+0xc8],0x0
1008240c:	00 00 00 
1008240f:	89 86 cc 00 00 00    	mov    DWORD PTR [esi+0xcc],eax
10082415:	89 8e d0 00 00 00    	mov    DWORD PTR [esi+0xd0],ecx
1008241b:	5e                   	pop    esi
1008241c:	5b                   	pop    ebx
1008241d:	59                   	pop    ecx
1008241e:	c2 04 00             	ret    0x4
10082421:	90                   	nop
10082422:	90                   	nop
10082423:	90                   	nop
10082424:	90                   	nop
10082425:	90                   	nop
10082426:	90                   	nop
10082427:	90                   	nop
10082428:	90                   	nop
10082429:	90                   	nop
1008242a:	90                   	nop
1008242b:	90                   	nop
1008242c:	90                   	nop
1008242d:	90                   	nop
1008242e:	90                   	nop
1008242f:	90                   	nop

*/
void TeamBriefWidget::UpdateBriefing() {
    // TODO: Implement UpdateBriefing
}

