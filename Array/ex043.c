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
	printf("•¶š—ñ:%s\n", &str[0]);
	printf("•¶š”‚Í %d •¶š\n", cnt);
}
*/
#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	
	for (cnt = 0; str[cnt]; cnt++);
		//‹ó‚¾‚æ
	
	printf("•¶š—ñ:%s\n", &str[0]);
	printf("•¶š”‚Í %d •¶š\n", cnt);
}
