//�X�^�[�g�n�_
#define SX 1
#define SY 1

//�S�[���n�_
#define GX 8
#define GY 1

//���H�f�[�^
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;

void DroawMaze(void);

//���C���֐��i�G���g���|�C���g�j
main()
{
	//�����̏�Ԃ�\��
	system("cls");
	printf("�����̏�Ԃ�\��\n");
	DrawMaze(-1, -1);
	printf("�uEnter�v�L�[�F�������s\n");
	getch;

	susumu(SX, SY);

	//
	system("cls");
	printf("�Ō�̏�Ԃ�\��\n");
	DrawMaze(-1, -1);
}

//���H�`��֐�
void DroawMaze(void) {
	int i, j;
	for(i=0;i<7;i++)
}