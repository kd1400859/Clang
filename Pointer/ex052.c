#include<stdio.h>
main()
{
	int a = 100, b = 200,w;
	int* p_a = &a, * p_b = &b;

	printf("���s�O�Fa=%d \tb=%d\n", a, b);

	w = *p_a;
	*p_a = *p_b;
	*p_b = w;

	printf("���s��Fa=%d\tb=%d\n", a, b);
	printf("&a=%d\t&b=%d\t&c=%d\n", &a, &b, &w);
	printf("p_a=%d \tp_b=%d\t", p_a, p_b);
}