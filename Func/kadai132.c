#include<stdio.h>
main()
{
	int num;
	int cnt, sum;
	cnt = sum = 0;
	printf("����(^z�ŏI��):");
	
	while (scanf("%d", &num) != EOF)
	{
		printf("%d\n", num);
		sum += num;
		cnt++;
		printf("����(^z�ŏI��):");
	}
	
	printf("���v=%d\n����=%.2f\n", sum, (float)sum / cnt);
}