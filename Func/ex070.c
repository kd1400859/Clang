#include<stdio.h>
//�v���g�^�C�v�錾
int add(int a, int b);

//�G���g���|�C���g
main()
{
	int a, b, kotae;
	printf("�����Q����:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v�� %d �ł�\n", kotae);
}

//�֐�add�̋L�q
int add(int a, int b);
{
	int ans;
	ans = a + b;
	riturn ans;
}