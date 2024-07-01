#include<stdio.h>
//プロトタイプ宣言
int gokei(int a, int b, int c);
float heikin(int a, int b, int c);

//エントリポイント
int main(void) {
	int a, b, c;

	printf("整数を３つ入力");
	scanf("%d%d%d", &a, &b, &c);

	printf("合計は = %d\n平均は = %.2f\n", gokei(a, b, c), heikin(a, b, c));

	return 0;
}

int gokei(int a, int b, int c) 
{
	return a+b+c;
}

float heikin(int a, int b, int c) 
{
	return (float)gokei(a,b,c)/3;
}