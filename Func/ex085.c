//#include<stdio.h>
//char str_cat(char *a, char *b);
//
//main() {
//	char a[256], b[256],c[256];
//	printf("�z��a;");
//	scanf("%s", a);
//	printf("�z��b;");
//	scanf("%s", b);
//
//	c = str_cat(*a, *b);
//	printf("%s", c);
//}
//
//char str_cat(char* a, char* b) {
//	char ab[256];
//	int i, j;
//
//	for ( i = 0; a[i] != '\0';i++) {
//		ab[i] = a[i];
//	}
//	for ( j = 0, ab[i]--; b[j] != '\0';j++) {
//		ab[i] =  b[j];
//	}
//	return ab[256];
//}

#include<stdio.h>
void str_cat(char* s1, char* s2);

main() {
	char a[256], b[256];
	printf("�z��a;");
	gets(a);
	printf("�z��b;");
	gets(b);
	str_cat(a, b);
	printf("�z��a:%s\n", a);
}

void str_cat(char* s1, char* s2) {
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2+j); i++,j++);
	return;
}