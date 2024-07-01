#include<stdio.h>
main()
{
	char k;
	int su1,su2;
	
	printf("処理を入力:");
	scanf("%c", &k);

	printf("整数を入力:");
	scanf("%d%d", &su1,&su2);

	switch (k)
	{
	case'd':
	case'D':
		if (su1>su2) {
			printf("最大値は%dです\n", su1);
		}
		else {
			printf("最大値は%dです\n", su2);
		}
		break;
	case 's':
	case 'S':
		if (su1 > su2) {
			printf("最小値は%dです\n", su2);
		}
		else {
			printf("最小値は%dです\n", su1);
		}
		break;
	case'g':
	case'G':
		printf("合計は%dです\n", su1 + su2);
		break;
	case 'h':
	case 'H':
		printf("平均は%.2fです\n",(su1 + su2) / 2.0);
		break;
	default:
		printf("エラーです\n");
		break;
	}
}