//����3�o�[�W����
#include<stdio.h>
main()
{
	char k;
	int su1,su2,su3,s;
	
	printf("���������:");
	scanf("%c", &k);

	printf("���������:");
	scanf("%d%d%d", &su1,&su2,&su3);

	switch (k)
	{
	case'd':
	case'D':
		//�ő�l�����߂�
		s = su1;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
		printf("�ő�l��%d�ł�\n", s);
		break;
	
	case 's':
	case 'S':
		//�ŏ��l�����߂�
		s = su1;
		if (s > su2) { s = su2; }
		if (s > su3) { s = su3; }
		printf("�ŏ��l��%d�ł�\n", s);
		break;
	
	case'g':
	case'G':
		//���v�����߂�
		printf("���v��%d�ł�\n", su1 + su2+su3);
		break;
	
	case 'h':
	case 'H':
		//���ς����߂�
		printf("���ς�%.2f�ł�\n",(su1 + su2+su3) / 3.0);
		break;
	
	default:
		printf("�G���[�ł�\n");
		break;
	}
}