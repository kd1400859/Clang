#include<stdio.h>
main()
{
	int s, i, data[] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("’Tõ’l‚ÍH");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
			break;
		}
	}
	
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("data[%d]‚É‚ ‚Á‚½\n", i);
	}
}