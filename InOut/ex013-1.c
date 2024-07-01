#include<stdio.h>
main()
{
	char a = '5', b = '6';
	printf("%c~%c=%d\n", a, b, (a-0x30)*(b-0x30));
}
char c='a', d='b'