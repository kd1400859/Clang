#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mod_num 3

typedef struct				//Skill�^�\����
{
	char name[20];			//�X�L����
	int type;				//�X�L���̎��
	int use_mp;				//�g�pMP��
	int effect;				//�X�L������
} Skill;

typedef struct				//Spec�^�\����
{
	char name[20];			//���O
	int hp;					//HP
	int atk;				//�U����
	int def;				//�h���
	UINT state;				//���
}Spec;

typedef struct				//Chara�^�\����
{
	Spec sp;				//Spec�\���̕ϐ�
	int maxhp;				//�ő�HP
	int mp;					//MP
	Skill skl[Skil_Num];	//Skill�^�\���̔z��
}Chara;

typedef struct				//Mod�^�\����
{
	Spec sp;				//Spec�^�\���̕ϐ�
	int rate;				//��Ԉُ�U���������[�g%�\�L
}Mob;

enum BitState
{
	Base		= 0,		//0000 0000 �ʏ���
	Poison		= 1 << 0,	//0000 0001 �ŏ��
	Sleep		= 1 << 1,	//0000 0010 ������
	Paralyses	= 1 << 2,	//0000 0100 ��჏��
	Burn		= 1 << 3,	//0000 1000 �Ώ����
	AtkUp		= 1 << 4,	//0001 0000 �U���̓A�b�v���
	AtkDown		= 1 << 5	//0010 0000 �U���̓_�E�����
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main() {
	UINT MyState = Base;
	/*MyState |= (Poison | Sleep);
	mystate |= Poison;
	mystate |= Sleep;*/
	
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s) {
	printf("*****���݂̏��*****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s&Sleep) {
		printf("����\n");
	}
	if (s&Paralyses) {
		printf("���\n");
	}
	if (s&Burn) {
		printf("�Ώ�\n");
	}
	if (s&AtkUp) {
		printf("�U���́�\n");
	}
	if (s&AtkDown) {
		printf("�U���́�\n");
	}
	if (s == Base) {
		printf("�ʏ���\n");
	}
	printf("********************\n");
}

void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�Ł@2:�����@3:��Ⴡ@4:�Ώ��@5:�U���́��@6:�U���́��@0:�I��>");
		scanf("%d", &a);
		if (a == 0)break;
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralyses;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�Ł@2:�����@3:��Ⴡ@4:�Ώ��@5:�U���́��@6:�U���́��@0:�I��>");
		scanf("%d", &a);
		if (a == 0)break;
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralyses;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:
			break;
		}
	}
}
