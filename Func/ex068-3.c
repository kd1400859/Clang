#include<stdio.h>
main()
{
	int c;   //getchar�֐��́u���͏I���v�̏ꍇ��EOF(-1)��߂�l�Ƃ��ĕԂ�����
	
	//�A���P�������͂̒�΃p�^�[��
	while ((c=getchar())!=EOF){  //= ��� !=�@�̕����D��x������
		putchar(c);
	}
	//���̓o�b�t�@���N���A����Ă��Ȃ�����A���͕������J��Ԃ��o�͂����
}