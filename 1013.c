#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 입력된 문자 순서 바꾸기
int main(void) {
	char a, b;
	scanf("%c %c", &a, &b);
	printf("%c %c", b, a);

	return 0;
}