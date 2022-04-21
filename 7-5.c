//20201237 배윤서
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void readNum(int);

int main(void) {
	int num; //입력받은 정수 저장 
	// 세자리 숫자를 따로 받기 위해 char 변수 사용
	printf("세 자리수의 정수를 입력하세요");
	scanf("%d", &num);
	void readNum(num);
}

void readNum(int enter) {
	//정수형이니까!!!!!! 소수점 빼!!!!!!!!!!
	switch (enter / 100) {
	case 1: if(enter/10%10==)
		printf("one"); break;

	}