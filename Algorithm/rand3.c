#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k;

	srand(time(0));

	rand();

	k = rand() % 101 + 1;

	if (k <= 30) {
		printf("‰ïS‚ÌˆêŒ‚\n");
	}
	else {
		printf("’ÊíUŒ‚\n");
	}
}