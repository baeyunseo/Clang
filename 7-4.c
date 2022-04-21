#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//하나의 문자를 입력 받아서 문자의 종류를 판별
//사용자 정의 : 입력된 문자값 받고, 종류 판별하여 반환 (조건)

int FindChartype(char let);
int main(void) {
	char letter; //입력 받은 문자 저장
	int res; //결과 값 저장

	printf("문자를 입력하세요");
	scanf("%c", &letter);
	
	res = FindChartype(letter);
	
	if (res == 1) {
		printf("스페이스 문자");
	}
	else if (res == 2) {
		printf("탭 문자");
	}
	else if (res == 3) {
		printf("개행 문자");
	}
	else if (res == 4) {
		printf("알파벳 및 숫자");
	}
	else if (res == 0) {
		printf("일반문자");
	}

	return 0;
}
int FindChartype(char let) {
	
	if (let == 32) { //스페이스 문자일 때 1로 반환
		return 1;
	}
	else if (let == 9) { //탭 문자인 경우
		return 2;
	}
	else if (let == 10) { //개행 문자
		return 3;
	}
	else if (('a' <= let && let <= 'z') || ('A' <= let && let <= 'Z') || ('0' <= let && let <= '9')){  //알파벳 및 숫자 [48-57 숫자]
		return 4; //또는으로 표시
	}
	else { //일반 문자
		return 0;
	}
}