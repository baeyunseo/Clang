#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//입력 된 세 정수에서 짝수만 출력하는 프로그램
int main(void) {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if (a % 2 == 0) {
		printf("%d\n", a); // T일 때 출력, F이면 그냥 넘어감
	}
	if (b % 2 == 0) {
		printf("%d\n", b);
	}
	if (c % 2 == 0) {
		printf("%d\n", c);

		return 0;
	}
}