#include<stdio.h>
main()
{
	int s, i, data[] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("�T���l�́H");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
			break;
		}
	}
	
	if (i >= 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("data[%d]�ɂ�����\n", i);
	}
}