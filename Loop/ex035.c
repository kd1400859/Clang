#include<stdio.h>
main()
{
	int num, j=0;
	
	while (1) {
		printf("数を入れて:");
		scanf("%d", &num);
		if (num == -999)break;
		j = num + j;
	}
	printf("合計=%d",j);
}