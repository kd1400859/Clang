#include<stdio.h>
main()
{
	int score = 0;
	char ch, name[20];
	FILE* fp;
	printf("�v���C���[�̖��O�F");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')break;
		score++;
	}

	//�t�@�C���������ݏ���
	//�t�@�C���̃I�[�v��
	fp = fopen("score.txt","w");
	//�t�@�C����name��score�̏�������
	fprintf(fp, "%s\n%d\n", name, score);
	//�t�@�C���̃N���[�Y
	fclose(fp);
}