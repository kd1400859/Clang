#include<stdio.h>
main()
{
	int i,s, d[11] = {10,5,30,77,16,3,47,29,37,33};

	printf("�T���ls�����");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; d[i] != s; i++);
	if (d[i] == d[10]) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("%d", i);
	}
}
