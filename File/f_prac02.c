#include<stdio.h>
main()
{
	int score = 0;
	int max_score;
	char ch, name[20];
	char max_name[20];
	FILE* fp;
	//score.txt����̓ǂݍ��ݏ���
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name,&max_score);
	fclose(fp);


	printf("�ō����_�@���O:%s�@�X�R�A:%d\n", max_name, max_score);
	printf("�v���C���[�̖��O�F");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')break;
		score++;
	}

	if (score > max_score)
	{
		//�t�@�C���������ݏ���
		//�t�@�C���̃I�[�v��
		fp = fopen("score.txt", "w");
		//�t�@�C����name��score�̏�������
		fprintf(fp, "%s\n%d\n", name, score);
		//�t�@�C���̃N���[�Y
		fclose(fp);
		printf("�n�C�X�R�A�X�V\n");
	}
}