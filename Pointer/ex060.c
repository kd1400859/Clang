#include<stdio.h>
main()
{
	char data[] = "Language";
	char ch,*p_data;
	int i;

	int flg = 0;  //�����l��0�ɂ��邱�ƂŁA������Ȃ������Ƃ����ׂĂ��U�ɂł���

	printf("data [] = %s\n", data);

	printf("���������́H");
	scanf("%c", &ch);

	printf("�������ʂ́A");

	for (i = 0,p_data=data; *(p_data+i) != '\0'; i++) {
		//�����A�O�ɂ��邽��p_data��i�������Ă���Ȃ��悤���Ƃ肾���Ă���
		if (*(p_data+i) == ch) {
			printf("%d ", i + 1);
			//���������������ꍇ
			flg = 1;
		}
	}
	if (flg == 1) {
		printf("�����ڂł�\n");
	}
	else {
		printf("������܂���ł���\n");
	}

}