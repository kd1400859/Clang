#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));    //�������������@���s���̎���
	
	rand();
	
	kazu = rand();     //0~32767�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
}
