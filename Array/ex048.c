#include<stdio.h>
main()
{
	int i, j, k, sum;
	int a[2][2][3] = { { { 3,4,5 }, { 4,5,6 }}, {{ 2,2,3 }, { 2,5,6 }} };


	for (sum = 0,i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			for (k = 0; k < 3; k++) {
				sum += a[i][j][k];
			}
		}
	}
	printf("‡Œv=%d\n", sum);
}
