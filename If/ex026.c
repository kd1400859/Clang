#include<stdio.h>
main()
{
	int mo;
	
	printf("月を入力:");
	scanf("%d", mo);
	if (mo == 2)
	{
		printf("最終日は28日です\n");
	}
	else 
	{
		if (mo == 4 || mo == 6 || mo == 9 || mo == 11)
		{
			printf("最終日は30日です\n");
		}
		else 
		{
			printf("最終日は31日です\n");
		}
	}

	
	