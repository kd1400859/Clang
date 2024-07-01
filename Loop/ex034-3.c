#include<stdio.h>
main()
{
	int  i, a, b;
	printf("”‚ÍH");
	scanf("%d", &i);
	b = 1;
	do {
		a = 1;
		do {
			printf("*");			
			a++;
		} while (a <= b);
		printf("\n");
		b++;
		i--;

	} while (i >= 1);
}
