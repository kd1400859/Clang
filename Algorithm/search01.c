#include<stdio.h>
main()
{
	int s, i, data[] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("探索値は？");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
			break;
		}
	}
	
	if (i >= 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("data[%d]にあった\n", i);
	}
}