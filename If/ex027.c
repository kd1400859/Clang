#include<stdio.h>
main()
{
	char ch;
	
	printf("���������:");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
		if (ch >= 'A' && ch <= 'Z') {
			printf("�ϊ������%c\n", ch + 0x20);
		}
		else {
			printf("�ϊ������%c\n", ch - 0x20);
		}
	}
	else {
		printf("�G���[�ł�\n");
	}
}