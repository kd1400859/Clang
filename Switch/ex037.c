#include<stdio.h>
main()
{
	char en;
	printf("���Z�q������");
	scanf("%c", &en);

	switch (en)
	{
	case '+':
		printf("���Z�ł�\n");
		break;
	case '-':
		printf("���Z�ł�\n");
		break;
	case '*':
		printf("��Z�ł�\n");
		break;
	case '/':
		printf("���Z�ł�\n");
		break;
	case '%':
		printf("���܂�ł�\n");
		break;
	default:
		printf("���̑��ł�\n");
		break;
	}
}