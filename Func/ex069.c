#include<stdio.h>
main()
{
	int num;
	int sum=0;   //sum=con=0;�ł��ł���
	int cnt=0;

	printf("�����F");

	while (scanf("%d", &num) != EOF) {
		//scanf�œ��͂������_�łP���͂���AEOF�ł͂Ȃ�
		sum += num;
		printf("�����F");
		cnt++;
		//���ϗp�̃J�E���g
	}
	printf("���v = %d\t���� = %.2f\n", sum, (float)sum / cnt);
	//                                       �L���X�g
}