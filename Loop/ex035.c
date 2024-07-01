#include<stdio.h>
main()
{
	int num, j=0;
	
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &num);
		if (num == -999)break;
		j = num + j;
	}
	printf("‡Œv=%d",j);
}