#include<stdio.h>
#define Sol_Num 3

typedef struct {
	char wname[20];
	int bullet;
	float atk;
}weapon;

typedef struct {
	char name[20];
	int hp;
	weapon wpn;
}soldier;

void SetInfo(soldier* s, char* filename);
void Display(soldier* s);

main()
{
	soldier sols[Sol_Num];
	SetInfo(sols, "file04.txt");
	Display(sols);
}

void SetInfo(soldier* s, char* filename) 
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num;i++) {
			fscanf(fp, "%s%d%s%d%f",(s+i)->name, &(s+i)->hp, (s+i)->wpn.wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("�ǂݍ��݃G���[\n");
		return;
	}
}

void Display(soldier* s)
{
	int i;
	for (i = 0; i < Sol_Num;i++) {
		printf("���O:%s �̗�:%d\n���햼:%s �c�e��:%d �U����:%.2f\n",(s+i) ->name, (s+i)->hp, (s+i)->wpn.wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
}