#include<stdio.h>
main()
{
	char deta[] = "Apple";   //�T�C�Y�̏ȗ�
	int i;                   //���������K�v

	printf("1�������\��\n");
	i = 0;
	while (deta[i] != '\0') {
		printf("%c", deta[i]);
		i++;
	}
	printf("\n������ŕ\��\n");
	printf("%s\n", &deta[0]);
}