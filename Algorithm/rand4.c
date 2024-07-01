#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un;

	srand(time(0));

	rand();

	un = rand() % 5 + 1;

	printf("Ç†Ç»ÇΩÇÃâ^ê®ÇÕ ");
	for (int i = 0; i < un; i++) {
		printf("*");
	}
	printf(" Ç≈Ç∑\n");
}