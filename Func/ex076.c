#include<stdio.h>
void sumavg(int s1, int s2, int* sum, float* avg);

main() {
	int s1, s2, sum;
	float avg;
	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d", &s1, &s2);

	sumavg(s1, s2, &sum, &avg);

	printf("‡Œv‚Í = %d\t•½‹Ï‚Í = %.2f\n", sum, avg);
}

void sumavg(int s1,int s2,int* sum,float * avg) {
	*sum = s1 + s2;
	*avg = (float)*sum / 2;
	return;
}