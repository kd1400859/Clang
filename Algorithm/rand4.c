#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un;

	srand(time(0));

	rand();

	un = rand() % 5 + 1;

	printf("あなたの運勢は ");
	for (int i = 0; i < un; i++) {
		printf("*");
	}
	printf(" です\n");
}