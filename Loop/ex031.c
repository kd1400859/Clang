#include<stdio.h>
main()
{
	int sum=0, i;
	for (i=1; i <= 10; i++) {
		sum = sum + i;
		printf("1から%dまでの和=%d\n", i, sum);
		
	}
}