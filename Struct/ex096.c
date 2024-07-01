#include<stdio.h>
struct syohin_data {
	char name[20];//3.ここを指し示す
	int tanka;
};

void display3(struct syohin_data* syohin);

main()
{
	int a = 10;					//4.ケシゴムが入ってる
	struct syohin_data syohin = { "けしごむ",50 };//2.ここのなかの

	display3(&syohin);
	//syohin_dataのアドレスを渡す
}

void display3(struct syohin_data* syohin//こいつの指し示す先)
{
	printf("%s\t%d", syohin -> name, syohin ->tanka);
	//->　1.ポンタが指し示す先のアドレス
	//printf("%s\t%d", (*syohin).name, (*syohin).tanka);
}
