#include<stdio.h>
#include<stdlib.h>

struct day {
	int yy;
	int mm;
	int dd;
};

struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile student[5] = {
		{"a-sa-",{2000,1,1}, "A"},
		{"b-sa-",{2000,2,1}, "B"},
		{"c-sa-",{2000,3,1}, "A"},
		{"d-sa-",{2000,4,1}, "O"},
		{"e-sa-",{2000,2,1}, "AB"},
	};
	struct profile * p;
	p = student;
	int i;

	for (i = 0; i < 5; i++) {
		if (p->birth.mm==2) {
			//strcmpは二つの値の大小を判別
			printf("%sーー%d年%d月%d日生まれ\n",
				p->name,
				p->birth.yy, p->birth.mm, p->birth.dd,
				p->blood);
		}
		p++;
	}
}