//ex018.c �L���X�g
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	//printf("���v=%d  ����=%.2f", d, d / 3.0);
	printf("���v=%d  ����=%.2f", d, (float)d / 3); //�L���X�g
}