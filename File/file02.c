#include<stdio.h>
main() {
	FILE* fp;
	int lv, hp;
	char c,str[256], equip[100];
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("�����P:%s\n", str);
	
	fscanf(fp, "%s", str);
	printf("�����Q:%s\n", str);

	fscanf(fp, "%s", str);
	printf("�����R:%s\n", str);

	//
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv:%d hp:%d ����:%s\n", lv, hp, equip);
	
	//
	c = fgetc(fp);
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);

	fclose(fp);
}