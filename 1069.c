//�� ���ڷ� ������ �ٸ��� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void gradeTest(char g);
int main(void) {
	char grade; //�Է� ���� ����
	scanf("%c", &grade);
	gradeTest(grade);

	return 0;
}

void gradeTest(int g) {
	switch (g) {
	case 'A':
		printf("best!!!"); break;
	case 'B':
		"good!!"; break;
	case 'C':
		printf("run!"); break;
	case 'D':
		printf("slowly~"); break;
	default: printf("what?"); break;
	}
}