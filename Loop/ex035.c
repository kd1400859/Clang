#include<stdio.h>
main()
{
	int num, j=0;
	
	while (1) {
		printf("��������:");
		scanf("%d", &num);
		if (num == -999)break;
		j = num + j;
	}
	printf("���v=%d",j);
}