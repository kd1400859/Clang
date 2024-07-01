#include<stdio.h>
void str_Reverse(char* s1, char* s2);

main() {
	char str1[256];
	char str2[256];

	printf("•¶Žš—ñHF");
	gets(str1);

	str_Reverse(str1,str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}

void str_Reverse(char* s1, char* s2) {
	int i,j;
	
	for (i = 0; *(s1 + i) != '\0'; i++);//•¶Žš—ñ‚Ì’·‚³‚ð”‚¦‚é
	//i--‚ð‚·‚é‚±‚Æ‚É‚æ‚Á‚ÄANULL‚ðœ‚¢‚Ä‚¢‚é
	for (i--, j = 0; i >= 0; i--, j++) {
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';
}