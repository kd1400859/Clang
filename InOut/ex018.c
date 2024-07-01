//ex018.c キャスト
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("整数を3個入力:");
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	//printf("合計=%d  平均=%.2f", d, d / 3.0);
	printf("合計=%d  平均=%.2f", d, (float)d / 3); //キャスト
}