#include<stdio.h>
struct syohin_data {
	char name[20];//3.�������w������
	int tanka;
};

void display3(struct syohin_data* syohin);

main()
{
	int a = 10;					//4.�P�V�S���������Ă�
	struct syohin_data syohin = { "��������",50 };//2.�����̂Ȃ���

	display3(&syohin);
	//syohin_data�̃A�h���X��n��
}

void display3(struct syohin_data* syohin//�����̎w��������)
{
	printf("%s\t%d", syohin -> name, syohin ->tanka);
	//->�@1.�|���^���w��������̃A�h���X
	//printf("%s\t%d", (*syohin).name, (*syohin).tanka);
}
