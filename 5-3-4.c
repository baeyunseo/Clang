#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 문자 한 개 입력 받고, 대문자는 소문자로, 소문자는 대문자로 출력
// 입력 값이 영문자가 아닌 경우 none으로 출력

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