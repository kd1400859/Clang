#include<stdio.h>
main()
{
	int c;   //getchar関数は「入力終了」の場合にEOF(-1)を戻り値として返すため
	
	//連続１文字入力の定石パターン
	while ((c=getchar())!=EOF){  //= より !=　の方が優先度が高い
		putchar(c);
	}
	//入力バッファがクリアされていないから、入力文字が繰り返し出力される
}