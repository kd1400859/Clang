#include<stdio.h>
main()
{
	int d[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int low, mid, high, s;

	printf("�T���ls�����");
	scanf("%d", &s);

	low = 0;
	high = 10;

	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) { break; }
		if (s > mid) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("%d", mid);
	}
}