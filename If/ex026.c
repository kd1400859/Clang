#include<stdio.h>
main()
{
	int mo;
	
	printf("�������:");
	scanf("%d", mo);
	if (mo == 2)
	{
		printf("�ŏI����28���ł�\n");
	}
	else 
	{
		if (mo == 4 || mo == 6 || mo == 9 || mo == 11)
		{
			printf("�ŏI����30���ł�\n");
		}
		else 
		{
			printf("�ŏI����31���ł�\n");
		}
	}

	
	