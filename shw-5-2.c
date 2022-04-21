//3시 27분 시작
//20201237 배윤서
//만원짜리 지폐로 3개의 메뉴 주문, 1. 총 금액, 잔액 계산 출력
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Menupick(int);
void sum(int,int,int);
int main(void) {
	printf("1.떡라면 2. 김밥 3. 떡볶이 4. 튀김 5. 콜라\n 메뉴3개 고르셈\n");

	int menu1, menu2, menu3; //메뉴 입력
	int m1, m2, m3;// 결과 변수
	scanf("%d %d %d", &menu1, &menu2, &menu3);
	m1 = Menupick(menu1);
	m2 = Menupick(menu2);
	m3 = Menupick(menu3);

	sum(m1, m2, m3); //함수 호출만 하세요. 앞에 void 쓰지 마시길.


	return 0;
}

int Menupick(int enter) {
	if (enter == 1) {
		return 5000; //떡볶이
	}
	else if (enter == 2) {
		return 2500;
	}
	else if (enter == 3) {
		return 2000;
	}
	else if (enter == 4) {
		return 1500;
	}
	else if (enter == 5) {
		return 1000;
	}

}

void sum(int s1, int s2, int s3) {
	int num;
	num = s1 + s2 + s3;

	if (num <= 10000) {
		printf("Total:%d\nChange:%d\n",num,10000 - num);
	}
	else if (num > 10000) {
		printf("Total:%d\nInsufficient Money\n", num);
	}
}

// 3시 51분 다품