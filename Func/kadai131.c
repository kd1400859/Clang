#include<stdio.h>
main()
{
	char ch;
	char dumy[256];
	printf("文字(^zで終了):");
	ch = getchar();
	while (ch != EOF)
	{
		putchar(ch);
		putchar('\n');
		gets(dumy);
		printf("文字(^zで終了):");
		ch = getchar();
	}
}

