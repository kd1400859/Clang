#include<stdio.h>
main()
{
	int score = 0;
	int max_score;
	char ch, name[20];
	char max_name[20];
	FILE* fp;
	//score.txtからの読み込み処理
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name,&max_score);
	fclose(fp);


	printf("最高得点　名前:%s　スコア:%d\n", max_name, max_score);
	printf("プレイヤーの名前：");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア:%d('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e')break;
		score++;
	}

	if (score > max_score)
	{
		//ファイル書き込み処理
		//ファイルのオープン
		fp = fopen("score.txt", "w");
		//ファイルのnameとscoreの書き込み
		fprintf(fp, "%s\n%d\n", name, score);
		//ファイルのクローズ
		fclose(fp);
		printf("ハイスコア更新\n");
	}
}