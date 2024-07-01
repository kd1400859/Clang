//数字3つバージョン
#include<stdio.h>
main()
{
	char k;
	int su1,su2,su3,s;
	
	printf("処理を入力:");
	scanf("%c", &k);

	printf("整数を入力:");
	scanf("%d%d%d", &su1,&su2,&su3);

	switch (k)
	{
	case'd':
	case'D':
		//最大値を求める
		s = su1;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
		printf("最大値は%dです\n", s);
		break;
	
	case 's':
	case 'S':
		//最小値を求める
		s = su1;
		if (s > su2) { s = su2; }
		if (s > su3) { s = su3; }
		printf("最小値は%dです\n", s);
		break;
	
	case'g':
	case'G':
		//合計を求める
		printf("合計は%dです\n", su1 + su2+su3);
		break;
	
	case 'h':
	case 'H':
		//平均を求める
		printf("平均は%.2fです\n",(su1 + su2+su3) / 3.0);
		break;
	
	default:
		printf("エラーです\n");
		break;
	}
}