#include<stdio.h>
main()
{
	char s[1000];
	int i;

	printf("�Í���������");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}
	printf("�����ςݕ�����%s", &s[0]);
}