#include<stdio.h>
main()
{
	int num, max, min;
	max = 0;
	min = 100;

	printf("����(^z�ŏI��):");

	while (scanf("%d", &num) != EOF)
	{
		printf("%d\n", num);
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
		printf("����(^z�ŏI��):");
	}
	printf("max = %d\nmin = %d\n", max, min);
}