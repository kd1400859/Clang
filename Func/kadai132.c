#include<stdio.h>
main()
{
	int num;
	int cnt, sum;
	cnt = sum = 0;
	printf("®”(^z‚ÅI—¹):");
	
	while (scanf("%d", &num) != EOF)
	{
		printf("%d\n", num);
		sum += num;
		cnt++;
		printf("®”(^z‚ÅI—¹):");
	}
	
	printf("‡Œv=%d\n•½‹Ï=%.2f\n", sum, (float)sum / cnt);
}