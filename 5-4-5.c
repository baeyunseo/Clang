#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 양의 정수를 입력 받아 2,3,5 중 어떤 수에 의해 나누어질지 해당 알파벳을 출력한다
// 경우의 수 왤케 많음;
int main(void) {
	int gra;
	scanf("%d", &gra);

	if (gra % 2 == 0 && gra % 3 == 0 && gra % 5 == 0) {
		printf("A");
	}
	else if(gra % 2 == 0 && gra % 3 == 0){
		printf("B");
}
	else if (gra % 2 == 0 && gra % 5 == 0) {
		printf("C");
	}
	else if (gra % 3 == 0 && gra % 5 == 0) {
		printf("D");
	}
	else if ((gra % 2==0) + (gra % 3==0) + (gra % 5==0) == 1) {
		printf("E");
	}
	else if ((gra % 2==0) + (gra % 3==0) + (gra % 5==0) == 0) {
		printf("N");
	}

	return 0;
	}