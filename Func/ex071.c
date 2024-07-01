#include<stdio.h>

int gokei(int a, int b, int c);
float heikin(int a, int b, int c);

int main(void) {
	int a, b, c,sum;
	float ave;
	printf("®”‚ğ‚R‚Â“ü—Í");
	scanf("%d%d%d", &a, &b, &c);

	sum = gokei(a, b, c);
	ave = heikin(a, b, c);

	printf("‡Œv‚Í = %d\n•½‹Ï‚Í = %.2f\n", sum, ave);

	return 0;
}

int gokei(int a, int b, int c) {
	int sum;
	sum = a + b + c;
	return sum;
}

float heikin(int a, int b, int c) {
	float ave;
	ave = (float)(a + b + c) / 3;
	return ave;
}