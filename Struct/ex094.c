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
		printf("%d���O����́F",i+1);
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d %d %d",
			&p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^����́F");
		scanf("%s", p->blood);
		p++;
		printf("\n");
	}
	p = &data;

	for (int i = 0; i < 2; i++) {
		if (strcmp (p->blood, "A") == 0|| strcmp(p->blood, "a") == 0) {
			//strcmp�͓�̒l�̑召�𔻕�
			printf("%s�[�[%d�N%d��%d�����܂�\n", 
				p->name,
				p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}
		/*if (strcmp(p->blood, "a") == 0) {
			printf("%s�[�[%d�N%d��%d�����܂�\n",
				p->name,
				p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}*/
		p++;
	}
}