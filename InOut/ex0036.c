#include<stdio.h>
main()
{
	int su1, su2;
	printf("整数1？");
	scanf("%d", &su1);
	printf("整数2？");
	scanf("%d", &su2);

	if (su1 > su2) {
		printf("大きい");
	}
	else {
		if (su1 < su2) {
			printf("小さい");
		}
		else {
			printf("同じ");
		}
	}
}
