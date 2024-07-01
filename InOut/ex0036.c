#include<stdio.h>
main()
{
	int su1, su2;
	printf("®”1H");
	scanf("%d", &su1);
	printf("®”2H");
	scanf("%d", &su2);

	if (su1 > su2) {
		printf("‘å‚«‚¢");
	}
	else {
		if (su1 < su2) {
			printf("¬‚³‚¢");
		}
		else {
			printf("“¯‚¶");
		}
	}
}
