#include<stdio.h>
void maxmin(int d1, int d2, int d3, int* max, int* min);

main()
{
	int d1, d2, d3, max=0, min=0;
	printf("整数を３つ入力：");
	scanf("%d%d%d", &d1, &d2, &d3);

	maxmin(d1, d2, d3, &max, &min);

	printf("最大値 = %d\t最小値 = %d\n", max, min);
}

void maxmin(int d1, int d2, int d3, int* max, int* min) {
	/*if (d1 > d2) {
		if(d2>d3){
			*max = d1;
			*min = d3;
		}
		else {
			*max = d1;
			*min = d2;
		}
	}
	if (d2 > d3) {
		if (d3 > d1) {
			*max = d2;
			*min = d1;
		}
		else {
			*max = d1;
			*min = d3;
		}

	}
	if (d3 > d1) {
		if (d1 > d2) {
			*max = d3;
			*min = d2;
		}
		else {
			*max = d3;
			*min = d2;
		}

	}*/
	//   　真 と 偽　　真のとき　　　　　　　偽のとき　　　　　
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*min = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);

}