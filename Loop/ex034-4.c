#include<stdio.h>
main()
{
	int num, i, j, sp;  //sp　スペース
	                    //j　 *の個数
	printf("数は？");
	scanf("%d", &num);
	i = 0;
	do{	
		sp = 0;
		do{
			printf(" ");
			sp++;
		} while (sp<num-i );  //iの値が2週目から変わる
		j = 0;                 //num-1 num-2となる
		do{
			printf("*");
			j++;
		}while(j<=i);
		printf("\n");
		i++;
		
	}while (i < num);
}