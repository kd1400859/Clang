#include<stdio.h>
main()
{
	int num, i = 0;

	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &num);

	while (i < 11) {
		printf("%d+%d=%d\n", num, i, num + i);
		i++;
	}
}