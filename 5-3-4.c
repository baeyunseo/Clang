#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ���� �� �� �Է� �ް�, �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ���
// �Է� ���� �����ڰ� �ƴ� ��� none���� ���

int main(void) {
	char lang;
	scanf("%c", &lang);
	if (lang >= 'A' && lang <= 'Z') {
		printf("%c", lang+32);
	}
	else if(lang >='a' && lang<='z') {
		printf("%c", lang - 32);
	}
	else {
		printf("none");
	}

	return 0;
}