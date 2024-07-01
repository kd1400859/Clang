#include<stdio.h>

struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main() {
	struct syohin_data syohin[3] = {
		"えんぴつ",30,5,
		"けしごむ",50,2 ,
		"ふでばこ",500,3 };
	struct syohin_data *p;
	int i;
	for (i = 0; i < 3; i++) {
		p = &syohin[i];
		printf(" 商品名：%s\t", p->name);
		printf(" 単 価 ：%4d\t", p->tanka);
		printf(" 個 数 ：%4d\t", p->kosuu);
		printf(" 金 額 ：\\%4d\n", p->tanka * p->kosuu);
	}
}