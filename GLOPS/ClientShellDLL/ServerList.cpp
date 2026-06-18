#include "ServerList.h"

// 0x10062310: ServerList::Update
/*
10062310:	56                   	push   esi
10062311:	57                   	push   edi
10062312:	8b f1                	mov    esi,ecx
10062314:	bf 01 00 00 00       	mov    edi,0x1
10062319:	89 be 34 13 00 00    	mov    DWORD PTR [esi+0x1334],edi
1006231f:	e8 2c 5b 00 00       	call   0x10067e50
10062324:	8b 8e 18 13 00 00    	mov    ecx,DWORD PTR [esi+0x1318]
1006232a:	8b 40 54             	mov    eax,DWORD PTR [eax+0x54]
1006232d:	51                   	push   ecx
1006232e:	89 86 38 13 00 00    	mov    DWORD PTR [esi+0x1338],eax
10062334:	e8 37 0a 04 00       	call   0x100a2d70
10062339:	83 c4 04             	add    esp,0x4
1006233c:	8d 8e 1c 13 00 00    	lea    ecx,[esi+0x131c]
10062342:	e8 a9 cd 01 00       	call   0x1007f0f0
10062347:	8b 86 14 13 00 00    	mov    eax,DWORD PTR [esi+0x1314]
1006234d:	c7 86 14 13 00 00 ff 	mov    DWORD PTR [esi+0x1314],0xffffffff
10062354:	ff ff ff 
10062357:	83 f8 ff             	cmp    eax,0xffffffff
1006235a:	74 0e                	je     0x1006236a
1006235c:	8b ce                	mov    ecx,esi
1006235e:	e8 ed 5a 00 00       	call   0x10067e50
10062363:	8b 10                	mov    edx,DWORD PTR [eax]
10062365:	8b c8                	mov    ecx,eax
10062367:	ff 52 74             	call   DWORD PTR [edx+0x74]
1006236a:	6a 00                	push   0x0
1006236c:	8b ce                	mov    ecx,esi
1006236e:	e8 ed 29 01 00       	call   0x10074d60
10062373:	8b 86 38 13 00 00    	mov    eax,DWORD PTR [esi+0x1338]
10062379:	57                   	push   edi
1006237a:	3b c7                	cmp    eax,edi
1006237c:	75 1c                	jne    0x1006239a
1006237e:	8b 86 18 13 00 00    	mov    eax,DWORD PTR [esi+0x1318]
10062384:	68 0a 70 00 00       	push   0x700a
10062389:	68 00 70 00 00       	push   0x7000
1006238e:	57                   	push   edi
1006238f:	50                   	push   eax
10062390:	e8 9b f2 03 00       	call   0x100a1630
10062395:	83 c4 14             	add    esp,0x14
10062398:	eb 0f                	jmp    0x100623a9
1006239a:	8b 8e 18 13 00 00    	mov    ecx,DWORD PTR [esi+0x1318]
100623a0:	51                   	push   ecx
100623a1:	e8 9a ef 03 00       	call   0x100a1340
100623a6:	83 c4 08             	add    esp,0x8
100623a9:	8b ce                	mov    ecx,esi
100623ab:	8b f8                	mov    edi,eax
100623ad:	e8 ce 05 00 00       	call   0x10062980
100623b2:	85 ff                	test   edi,edi
100623b4:	74 4a                	je     0x10062400
100623b6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100623bc:	53                   	push   ebx
100623bd:	68 48 01 00 00       	push   0x148
100623c2:	68 30 cb 0d 10       	push   0x100dcb30
100623c7:	8b 11                	mov    edx,DWORD PTR [ecx]
100623c9:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
100623cf:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100623d4:	8b 8e 18 13 00 00    	mov    ecx,DWORD PTR [esi+0x1318]
100623da:	57                   	push   edi
100623db:	51                   	push   ecx
100623dc:	8b 18                	mov    ebx,DWORD PTR [eax]
100623de:	e8 fd 09 04 00       	call   0x100a2de0
100623e3:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
100623e9:	50                   	push   eax
100623ea:	57                   	push   edi
100623eb:	68 04 cb 0d 10       	push   0x100dcb04
100623f0:	68 7c 5d 0c 10       	push   0x100c5d7c
100623f5:	52                   	push   edx
100623f6:	ff 93 28 01 00 00    	call   DWORD PTR [ebx+0x128]
100623fc:	83 c4 1c             	add    esp,0x1c
100623ff:	5b                   	pop    ebx
10062400:	5f                   	pop    edi
10062401:	5e                   	pop    esi
10062402:	c3                   	ret
10062403:	90                   	nop
10062404:	90                   	nop
10062405:	90                   	nop
10062406:	90                   	nop
10062407:	90                   	nop
10062408:	90                   	nop
10062409:	90                   	nop
1006240a:	90                   	nop
1006240b:	90                   	nop
1006240c:	90                   	nop
1006240d:	90                   	nop
1006240e:	90                   	nop
1006240f:	90                   	nop
10062410:	53                   	push   ebx
10062411:	55                   	push   ebp
10062412:	56                   	push   esi
10062413:	8b f1                	mov    esi,ecx
10062415:	57                   	push   edi
10062416:	c7 86 34 13 00 00 01 	mov    DWORD PTR [esi+0x1334],0x1
1006241d:	00 00 00 
10062420:	e8 2b 5a 00 00       	call   0x10067e50
10062425:	8b 40 54             	mov    eax,DWORD PTR [eax+0x54]
10062428:	89 86 38 13 00 00    	mov    DWORD PTR [esi+0x1338],eax
1006242e:	8b 86 28 13 00 00    	mov    eax,DWORD PTR [esi+0x1328]
10062434:	85 c0                	test   eax,eax
10062436:	75 04                	jne    0x1006243c
10062438:	33 d2                	xor    edx,edx
1006243a:	eb 19                	jmp    0x10062455
1006243c:	8b 8e 2c 13 00 00    	mov    ecx,DWORD PTR [esi+0x132c]
10062442:	2b c8                	sub    ecx,eax
10062444:	b8 95 20 4f 09       	mov    eax,0x94f2095
10062449:	f7 e9                	imul   ecx
1006244b:	c1 fa 03             	sar    edx,0x3
1006244e:	8b ca                	mov    ecx,edx
10062450:	c1 e9 1f             	shr    ecx,0x1f
10062453:	03 d1                	add    edx,ecx
10062455:	85 d2                	test   edx,edx
10062457:	7e 35                	jle    0x1006248e
10062459:	33 ff                	xor    edi,edi
1006245b:	8b da                	mov    ebx,edx
1006245d:	8b 86 28 13 00 00    	mov    eax,DWORD PTR [esi+0x1328]
10062463:	03 c7                	add    eax,edi
10062465:	83 38 00             	cmp    DWORD PTR [eax],0x0
10062468:	75 1b                	jne    0x10062485
1006246a:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
1006246d:	6a 01                	push   0x1
1006246f:	6a 01                	push   0x1
10062471:	83 c0 04             	add    eax,0x4
10062474:	52                   	push   edx
10062475:	50                   	push   eax
10062476:	8b 86 18 13 00 00    	mov    eax,DWORD PTR [esi+0x1318]
1006247c:	50                   	push   eax
1006247d:	e8 ee f6 03 00       	call   0x100a1b70
10062482:	83 c4 14             	add    esp,0x14
10062485:	81 c7 dc 00 00 00    	add    edi,0xdc
1006248b:	4b                   	dec    ebx
1006248c:	75 cf                	jne    0x1006245d
1006248e:	8b 8e 18 13 00 00    	mov    ecx,DWORD PTR [esi+0x1318]
10062494:	51                   	push   ecx
10062495:	e8 e6 09 04 00       	call   0x100a2e80
1006249a:	8b e8                	mov    ebp,eax
1006249c:	83 c4 04             	add    esp,0x4
1006249f:	33 ff                	xor    edi,edi
100624a1:	85 ed                	test   ebp,ebp
100624a3:	7e 3e                	jle    0x100624e3
100624a5:	8b 96 18 13 00 00    	mov    edx,DWORD PTR [esi+0x1318]
100624ab:	57                   	push   edi
100624ac:	52                   	push   edx
100624ad:	e8 8e 09 04 00       	call   0x100a2e40
100624b2:	83 c4 08             	add    esp,0x8
100624b5:	8b d8                	mov    ebx,eax
100624b7:	6a 01                	push   0x1
100624b9:	6a 01                	push   0x1
100624bb:	53                   	push   ebx
100624bc:	e8 2f ea 03 00       	call   0x100a0ef0
100624c1:	83 c4 04             	add    esp,0x4
100624c4:	50                   	push   eax
100624c5:	53                   	push   ebx
100624c6:	e8 05 ea 03 00       	call   0x100a0ed0
100624cb:	83 c4 04             	add    esp,0x4
100624ce:	50                   	push   eax
100624cf:	8b 86 18 13 00 00    	mov    eax,DWORD PTR [esi+0x1318]
100624d5:	50                   	push   eax
100624d6:	e8 95 f6 03 00       	call   0x100a1b70
100624db:	83 c4 14             	add    esp,0x14
100624de:	47                   	inc    edi
100624df:	3b fd                	cmp    edi,ebp
100624e1:	7c c2                	jl     0x100624a5
100624e3:	5f                   	pop    edi
100624e4:	5e                   	pop    esi
100624e5:	5d                   	pop    ebp
100624e6:	5b                   	pop    ebx
100624e7:	c3                   	ret
100624e8:	90                   	nop
100624e9:	90                   	nop
100624ea:	90                   	nop
100624eb:	90                   	nop
100624ec:	90                   	nop
100624ed:	90                   	nop
100624ee:	90                   	nop
100624ef:	90                   	nop

*/
void ServerList::Update() {
    // TODO: Implement Update
}

// 0x100632c0: ServerList::SaveFavourites
/*
100632c0:	55                   	push   ebp
100632c1:	56                   	push   esi
100632c2:	8b f1                	mov    esi,ecx
100632c4:	e8 57 78 00 00       	call   0x1006ab20
100632c9:	68 a8 3d 0d 10       	push   0x100d3da8
100632ce:	68 d4 cb 0d 10       	push   0x100dcbd4
100632d3:	e8 d8 13 04 00       	call   0x100a46b0
100632d8:	8b e8                	mov    ebp,eax
100632da:	83 c4 08             	add    esp,0x8
100632dd:	85 ed                	test   ebp,ebp
100632df:	75 36                	jne    0x10063317
100632e1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100632e7:	68 13 03 00 00       	push   0x313
100632ec:	68 30 cb 0d 10       	push   0x100dcb30
100632f1:	8b 01                	mov    eax,DWORD PTR [ecx]
100632f3:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
100632f9:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100632fe:	68 8c cb 0d 10       	push   0x100dcb8c
10063303:	68 7c 5d 0c 10       	push   0x100c5d7c
10063308:	50                   	push   eax
10063309:	8b 08                	mov    ecx,DWORD PTR [eax]
1006330b:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10063311:	83 c4 0c             	add    esp,0xc
10063314:	5e                   	pop    esi
10063315:	5d                   	pop    ebp
10063316:	c3                   	ret

*/
void ServerList::SaveFavourites() {
    // TODO: Implement SaveFavourites
}

// 0x10063380: ServerList::LoadFavourites
/*
10063380:	83 ec 30             	sub    esp,0x30
10063383:	53                   	push   ebx
10063384:	55                   	push   ebp
10063385:	56                   	push   esi
10063386:	57                   	push   edi
10063387:	8b f9                	mov    edi,ecx
10063389:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
1006338d:	8d b7 14 14 00 00    	lea    esi,[edi+0x1414]
10063393:	8b ce                	mov    ecx,esi
10063395:	e8 86 3f 00 00       	call   0x10067320
1006339a:	85 c0                	test   eax,eax
1006339c:	76 0f                	jbe    0x100633ad
1006339e:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100633a1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100633a4:	50                   	push   eax
100633a5:	51                   	push   ecx
100633a6:	8b ce                	mov    ecx,esi
100633a8:	e8 a3 44 00 00       	call   0x10067850
100633ad:	68 68 ac 0d 10       	push   0x100dac68
100633b2:	68 d4 cb 0d 10       	push   0x100dcbd4
100633b7:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
100633bb:	e8 f0 12 04 00       	call   0x100a46b0
100633c0:	8b e8                	mov    ebp,eax
100633c2:	33 db                	xor    ebx,ebx
100633c4:	83 c4 08             	add    esp,0x8
100633c7:	3b eb                	cmp    ebp,ebx
100633c9:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
100633cd:	75 3b                	jne    0x1006340a
100633cf:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100633d5:	68 e6 02 00 00       	push   0x2e6
100633da:	68 30 cb 0d 10       	push   0x100dcb30
100633df:	8b 11                	mov    edx,DWORD PTR [ecx]
100633e1:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
100633e7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100633ec:	68 10 cc 0d 10       	push   0x100dcc10
100633f1:	68 7c 5d 0c 10       	push   0x100c5d7c
100633f6:	50                   	push   eax
100633f7:	8b 08                	mov    ecx,DWORD PTR [eax]
100633f9:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100633ff:	83 c4 0c             	add    esp,0xc
10063402:	5f                   	pop    edi
10063403:	5e                   	pop    esi
10063404:	5d                   	pop    ebp
10063405:	5b                   	pop    ebx
10063406:	83 c4 30             	add    esp,0x30
10063409:	c3                   	ret

*/
void ServerList::LoadFavourites() {
    // TODO: Implement LoadFavourites
}

