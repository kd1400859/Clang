//���K�@������
#include<stdio.h>
main()
{
	float su1, su2,su3,su4;
	printf("1�ڂ̎���\n2�ڂ̎���\n3�ڂ̎���\n"); //�ʁX�ɏ������ق����ǂ�
	scanf("%f%f%f", &su1, &su2,&su3);
	su4 = su1 + su2 + su3;
	printf("���v=%.2f ����=%.2f\n", su4, su4 / 3);
}