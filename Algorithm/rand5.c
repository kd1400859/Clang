#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i;

	srand(time(0));

	rand();

	i = rand() % 300 + 1;

	for (int j = 0; j < 100; j++) {
		rand();

		i = rand() % 300 + 1;

		printf("%03d\n", i);
	}
}