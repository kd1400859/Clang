
#include<stdio.h>
main()
{
	int num, sum,i;
	printf("”‚ÍH");
	scanf("%d", &num);
	for (sum = 0 ,i= 0; num != -999; i++) {
		sum += num;
		printf("”‚ÍH");
		scanf("%d", &num);
	}
	printf("‡Œv=%d  •½‹Ï=%.2f", sum, (float)sum /i);
}