#include<stdio.h>
main()
{
	char ch;
	
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
		if (ch >= 'A' && ch <= 'Z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", ch + 0x20);
		}
		else {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", ch - 0x20);
		}
	}
	else {
		printf("ƒGƒ‰[‚Å‚·\n");
	}
}