
#include<stdio.h>
main()
{
	int num, sum,i;
	printf("数は？");
	scanf("%d", &num);
	for (sum = 0 ,i= 0; num != -999; i++) {
		sum += num;
		printf("数は？");
		scanf("%d", &num);
	}
	printf("合計=%d  平均=%.2f", sum, (float)sum /i);
}