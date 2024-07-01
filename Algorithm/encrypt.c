#include<stdio.h>
main()
{
	char s[1000];
	int i;

	printf("•¶Žš—ñs‚ð“ü—Í");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] + 1;
	}
	printf("%s", &s[0]);
}