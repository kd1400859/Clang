/*
#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	
	cnt = 0;
	while (str[cnt] != '\0'){
		cnt++;
	}
	printf("文字列:%s\n", &str[0]);
	printf("文字数は %d 文字\n", cnt);
}
*/
#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	
	for (cnt = 0; str[cnt]; cnt++);
		//空だよ
	
	printf("文字列:%s\n", &str[0]);
	printf("文字数は %d 文字\n", cnt);
}
