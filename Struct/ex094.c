#include<stdio.h>
#include<stdlib.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data;
	struct profile *p;
	p = &data;
	for (int i = 0; i < 2; i++) {
		printf("%d名前を入力：",i+1);
		scanf("%s", p->name);
		printf("生年月日を空白で区切って入力：");
		scanf("%d %d %d",
			&p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力：");
		scanf("%s", p->blood);
		p++;
		printf("\n");
	}
	p = &data;

	for (int i = 0; i < 2; i++) {
		if (strcmp (p->blood, "A") == 0|| strcmp(p->blood, "a") == 0) {
			//strcmpは二つの値の大小を判別
			printf("%sーー%d年%d月%d日生まれ\n", 
				p->name,
				p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}
		/*if (strcmp(p->blood, "a") == 0) {
			printf("%sーー%d年%d月%d日生まれ\n",
				p->name,
				p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}*/
		p++;
	}
}