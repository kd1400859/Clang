#include<stdio.h>
main()
{
	char k;
	int su1,su2;
	
	printf("���������:");
	scanf("%c", &k);

	printf("���������:");
	scanf("%d%d", &su1,&su2);

	switch (k)
	{
	case'd':
	case'D':
		if (su1>su2) {
			printf("�ő�l��%d�ł�\n", su1);
		}
		else {
			printf("�ő�l��%d�ł�\n", su2);
		}
		break;
	case 's':
	case 'S':
		if (su1 > su2) {
			printf("�ŏ��l��%d�ł�\n", su2);
		}
		else {
			printf("�ŏ��l��%d�ł�\n", su1);
		}
		break;
	case'g':
	case'G':
		printf("���v��%d�ł�\n", su1 + su2);
		break;
	case 'h':
	case 'H':
		printf("���ς�%.2f�ł�\n",(su1 + su2) / 2.0);
		break;
	default:
		printf("�G���[�ł�\n");
		break;
	}
}