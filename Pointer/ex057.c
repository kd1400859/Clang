#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };

	int* p_tbl, i,k;

	p_tbl = tbl[0];

	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");

	for (k = 0; k < 3; k++) {
		for (i = 0; i < 3; i++) {
			printf("%d\t", *p_tbl++);
		}
		printf("\n");
	}
}