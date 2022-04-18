#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//입력 된 세 정수에서 홀수, 짝수 출력하기
int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a % 2 == 0) {
		printf("even\n");
	}
		else
	{ printf("odd\n");
	}
	if (b % 2 == 0) {
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}if (c % 2 == 0) {
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}

		return 0;
	
}