#include<stdio.h>
main()
{
	char ch;
	char dumy[256];
	printf("����(^z�ŏI��):");
	ch = getchar();
	while (ch != EOF)
	{
		putchar(ch);
		putchar('\n');
		gets(dumy);
		printf("����(^z�ŏI��):");
		ch = getchar();
	}
}

