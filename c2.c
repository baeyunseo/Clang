//20201237 ������
#define _CRT_SECURE_NO_WARNINGS
#define SUN "���۶�"
#define RAIN "���"
#define SNOW "���"
#include <stdio.h>

char PrepareOuting(char w);
int main(void) {
	
	PrepareOuting();
	
}

char PrepareOuting(char wh) {
	int num; //�й�
	char whe; //���� ���� s(���۶�)r(���)w(���) //�������� ����ũ
	char res;

	printf("�й�?");
	scanf("%d", &num);
	printf("����?(s,r,w)");
	scanf("%c ", &whe);

	/*if (wh == 's') {
	
		printf("%d��, ����ũ�� %s�� ì�⼼��", num,SUN);
	}
	else if (wh == 'r') {
		return RAIN;
	}
	else if (wh == 'w') {
		return SNOW;
	}
	*/
}