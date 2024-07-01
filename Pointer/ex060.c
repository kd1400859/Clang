#include<stdio.h>
main()
{
	char data[] = "Language";
	char ch,*p_data;
	int i;

	int flg = 0;  //初期値を0にすることで、見つからなかったときすべてを偽にできる

	printf("data [] = %s\n", data);

	printf("検索文字は？");
	scanf("%c", &ch);

	printf("検索結果は、");

	for (i = 0,p_data=data; *(p_data+i) != '\0'; i++) {
		//＊が、外にあるためp_dataにiをたしてからないようをとりだしている
		if (*(p_data+i) == ch) {
			printf("%d ", i + 1);
			//文字が見つかった場合
			flg = 1;
		}
	}
	if (flg == 1) {
		printf("文字目です\n");
	}
	else {
		printf("見つかりませんでした\n");
	}

}