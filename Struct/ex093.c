#include<stdio.h>

struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main() {
	struct syohin_data syohin[3] = {
		"����҂�",30,5,
		"��������",50,2 ,
		"�ӂł΂�",500,3 };
	struct syohin_data *p;
	int i;
	for (i = 0; i < 3; i++) {
		p = &syohin[i];
		printf(" ���i���F%s\t", p->name);
		printf(" �P �� �F%4d\t", p->tanka);
		printf(" �� �� �F%4d\t", p->kosuu);
		printf(" �� �z �F\\%4d\n", p->tanka * p->kosuu);
	}
}