//練習　未完成
#include<stdio.h>
main()
{
	float su1, su2,su3,su4;
	printf("1つ目の実数\n2つ目の実数\n3つ目の実数\n"); //別々に書いたほうが良き
	scanf("%f%f%f", &su1, &su2,&su3);
	su4 = su1 + su2 + su3;
	printf("合計=%.2f 平均=%.2f\n", su4, su4 / 3);
}