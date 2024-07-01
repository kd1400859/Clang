#include <stdio.h>
main()
{
	int a, b, c, ret;
	
	printf("3つの整数を空白で区切って入力:");
	
	ret = scanf("%d%d%d", &a, &b, &c);
	//scanfの戻り値は、データ入力個数　ここでは３
	
	printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);
	printf("整数を入力(Ctrl+Zで終了) a:");
	
	
	while (scanf("%d", &a) != EOF) 
	{ // Ctrl+Zで終了
		printf("a=%d\n", a);
		printf("整数を入力(Ctrl+Zで終了) a:");
	}
}