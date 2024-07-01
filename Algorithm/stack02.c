//スタート地点
#define SX 1
#define SY 1

//ゴール地点
#define GX 8
#define GY 1

//迷路データ
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;

void DroawMaze(void);

//メイン関数（エントリポイント）
main()
{
	//初期の状態を表示
	system("cls");
	printf("初期の状態を表示\n");
	DrawMaze(-1, -1);
	printf("「Enter」キー：処理続行\n");
	getch;

	susumu(SX, SY);

	//
	system("cls");
	printf("最後の状態を表示\n");
	DrawMaze(-1, -1);
}

//迷路描画関数
void DroawMaze(void) {
	int i, j;
	for(i=0;i<7;i++)
}