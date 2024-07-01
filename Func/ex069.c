#include<stdio.h>
main()
{
	int num;
	int sum=0;   //sum=con=0;でもできる
	int cnt=0;

	printf("整数：");

	while (scanf("%d", &num) != EOF) {
		//scanfで入力した時点で１がはいり、EOFではない
		sum += num;
		printf("整数：");
		cnt++;
		//平均用のカウント
	}
	printf("合計 = %d\t平均 = %.2f\n", sum, (float)sum / cnt);
	//                                       キャスト
}