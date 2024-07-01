#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k[20], i,n;
	char s[21];

	printf("s‚ð“ü—Í");
	scanf("%s", &s[0]);

	srand(time(0));
	rand();

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 5 + 1;
		s[i] = s[i] + k[i];
	}
	printf("%s\n", &s[0]);
	
	for (n = 0; n < i; n++) {
		printf("%d",k[n]);
	}

}