#include<stdio.h>

enum BitState
{
	Base		= 0,		//0000 0000 通常状態
	Poison		= 1 << 0,	//0000 0001 毒状態
	Sleep		= 1 << 1,	//0000 0010 眠り状態
	Paralyses	= 1 << 2,	//0000 0100 麻痺状態
	Burn		= 1 << 3,	//0000 1000 火傷状態
	AtkUp		= 1 << 4,	//0001 0000 攻撃力アップ状態
	AtkDown		= 1 << 5	//0010 0000 攻撃力ダウン状態
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
	printf("*****現在の状態*****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s&Sleep) {
		printf("眠り\n");
	}
	if (s&Paralyses) {
		printf("麻痺\n");
	}
	if (s&Burn) {
		printf("火傷\n");
	}
	if (s&AtkUp) {
		printf("攻撃力↑\n");
	}
	if (s&AtkDown) {
		printf("攻撃力↓\n");
	}
	if (s == Base) {
		printf("通常状態\n");
	}
	printf("********************\n");
}

void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("どの状態にしますか？\n");
		printf("1:毒　2:睡眠　3:麻痺　4:火傷　5:攻撃力↑　6:攻撃力↓　0:終了>");
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
		printf("どの状態を解除しますか？\n");
		printf("1:毒　2:睡眠　3:麻痺　4:火傷　5:攻撃力↑　6:攻撃力↓　0:終了>");
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
