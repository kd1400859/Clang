#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*main()
{
	int i, j;

	printf("何を出しますか？");
	scanf("%d",&i);

	srand(time(0));
	rand();

	j = rand() % 3 ;

	switch(i){
	case 1:
		printf("プレイヤーはグーを出しました\n");
		break;
	case 2:
		printf("プレイヤーはチョキを出しました\n");
		break;
	case 3:
		printf("プレイヤーはパーを出しました\n");
		break;
	default:
		break;
	
	}
	switch (j) {
	case 0:
		printf("コンピュータはグーを出しました\n");
		break;
	case 1:
		printf("コンピュータはチョキを出しました\n");
		break;
	case 2:
		printf("コンピュータはパーを出しました\n");
		break;
	default:
		break;

	}
	if (i == j) {
		printf("あいこです。\n");
	}
	if (i == 1) {
		if (j == 1)printf("プレイヤーの勝ちです\n");
		if(j==2)printf("コンピューターの勝ちです\n");
	}
	if (i == 2) {
		if (j == 0)printf("コンピューターの勝ちです\n");
		if(j==2)printf("プレイヤーの勝ちです\n");
	}
	if (i == 3) {
		if (j == 0)printf("プレイヤーの勝ちです\n");
		if(j==1)printf("コンピューターの勝ちです\n");
	}
	
}*/
main()
{
	(player-cpu )%3 →  0:割り切れたら勝ち
		                1:あいこ
		                 それ以外は負け

}