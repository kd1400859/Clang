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
	printf("������:%s\n", &str[0]);
	printf("�������� %d ����\n", cnt);
}
*/
#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	
	for (cnt = 0; str[cnt]; cnt++);
		//�󂾂�
	
	printf("������:%s\n", &str[0]);
	printf("�������� %d ����\n", cnt);
}
