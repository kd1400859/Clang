#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b, * w;

	printf("é¿çsëOÅFa=%d \tb=%d\n", *p_a, *p_b);
	printf("&a=%d\t*p_a=%d\n", a, *p_a);
	printf("&b=%d\t*p_b=%d\n", b, *p_b);


	p_a = &b;
	p_b = &a;

	/*w = p_a;
	p_a = p_b;
	p_b = w;*/

	printf("*p_a=%d \t*p_b=%d\n", *p_a, *p_b);
	printf("&a=%d\t*p_a=%d\n", a, *p_a);
	printf("&b=%d\t*p_b=%d\n", b, *p_b);
}
