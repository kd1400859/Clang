#include<stdio.h>
//プロトタイプ宣言
int add(int a, int b);

//エントリポイント
main()
{
	int a, b, kotae;
	printf("整数２つ入力:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は %d です\n", kotae);
}

//関数addの記述
int add(int a, int b);
{
	int ans;
	ans = a + b;
	riturn ans;
}