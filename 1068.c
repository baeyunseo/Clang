#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//점수(정수,0~100까지만 입력)를 입력 받아 평가를 출력해보자.
// 90~100 : A
// 70~89 : B
// 40~69: C
// 0~39 : D
//평가 기준 (점수범위 : 평가) 중첩을 이용하기

int main(void) {
	int num;;
	scanf("%d", &num);
	
	if(num>=90&&100>=num) {
		printf("%s\n", "A");
	}
	else if (num>=70 && 89>=num) {
		printf("%s\n", "B");
	}
	else if (num>=40 && 69>= num) {
		printf("%s\n", "C");
	}
	else if (num >= 0 && 39 >= num) {
		printf("%s\n", "D");
	}
	return 0;
}