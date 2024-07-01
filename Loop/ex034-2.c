#include<stdio.h>
main()
{
	int  i,a;
	printf("数は？");
	scanf("%d", &i);
	
	do {
		a = 1;
		do {　　　　　　　　　//*の5回ループ
			printf("*");
			a++;
		} while (a <= 5);
		printf("\n");
		
		i--;

	} while (i >= 1);
}