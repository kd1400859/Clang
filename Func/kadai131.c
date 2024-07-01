#include<stdio.h>
main()
{
	char ch;
	char dumy[256];
	printf("•¶š(^z‚ÅI—¹):");
	ch = getchar();
	while (ch != EOF)
	{
		putchar(ch);
		putchar('\n');
		gets(dumy);
		printf("•¶š(^z‚ÅI—¹):");
		ch = getchar();
	}
}

