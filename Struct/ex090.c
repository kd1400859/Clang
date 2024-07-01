#include<stdio.h>

struct syohin_data {
	char name[20];
	int tanka;
};

main() {
	struct syohin_data syohin;
	struct syohin_data* p;

	p = &syohin;
	printf("¤•i–¼");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n".p->name);
	printf("p->tanka = %d\n", p->tanka);
	printf("syohin.name = %s\n",syohin.mame);
	printf("syohin.name = %d\n", syohin.name);
}