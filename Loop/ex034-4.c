#include<stdio.h>
main()
{
	int num, i, j, sp;  //sp�@�X�y�[�X
	                    //j�@ *�̌�
	printf("���́H");
	scanf("%d", &num);
	i = 0;
	do{	
		sp = 0;
		do{
			printf(" ");
			sp++;
		} while (sp<num-i );  //i�̒l��2�T�ڂ���ς��
		j = 0;                 //num-1 num-2�ƂȂ�
		do{
			printf("*");
			j++;
		}while(j<=i);
		printf("\n");
		i++;
		
	}while (i < num);
}