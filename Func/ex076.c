#include<stdio.h>
void sumavg(int s1, int s2, int* sum, float* avg);

main() {
	int s1, s2, sum;
	float avg;
	printf("�������Q���́F");
	scanf("%d%d", &s1, &s2);

	sumavg(s1, s2, &sum, &avg);

	printf("���v�� = %d\t���ς� = %.2f\n", sum, avg);
}

void sumavg(int s1,int s2,int* sum,float * avg) {
	*sum = s1 + s2;
	*avg = (float)*sum / 2;
	return;
}