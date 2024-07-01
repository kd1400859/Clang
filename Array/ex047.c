#include<stdio.h>
main()
{
	int j,i;
	float x[3][2],gokei;

	for (j = 0; j < 3; j++) {
		for (gokei = 0, i = 0; i < 2; i++) {
			printf("x[%d][%d]=",j,i);
			scanf("%f", &x[j][i]);
			gokei += x[j][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n",j, gokei / 2);
	}
}