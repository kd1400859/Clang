#include<stdio.h>

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
void Display(soldier s);
main()
{
	soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);
}

void SetInfo(soldier* s, char* filename) 
{
	FILE* fp;
	fp = fopen(filename, "r");
	fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.wname, &s->wpn.bullet, &s->wpn.atk);
	fclose(fp);
}

void Display(soldier s)
{
	printf("–¼‘O:%s ‘Ì—Í:%d\n•Ší–¼:%s c’e”:%d UŒ‚—Í:%.2f\n", s.name, s.hp, s.wpn.wname, s.wpn.bullet, s.wpn.atk);
}