#include<stdio.h>
//�v���g�^�C�v�錾
int gokei(int a, int b, int c);
float heikin(int a, int b, int c);

//�G���g���|�C���g
int main(void) {
	int a, b, c;

	printf("�������R����");
	scanf("%d%d%d", &a, &b, &c);

	printf("���v�� = %d\n���ς� = %.2f\n", gokei(a, b, c), heikin(a, b, c));

	return 0;
}

int gokei(int a, int b, int c) 
{
	return a+b+c;
}

float heikin(int a, int b, int c) 
{
	return (float)gokei(a,b,c)/3;
}