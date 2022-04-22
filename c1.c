//20201237배윤서
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159265
void VSphere(int);
int main(void) {
	printf("20201237 배윤서\n");

	int r;
	printf("구의 반지름은?\n");
	scanf("%d", &r);
	VSphere(r);

}

void VSphere(int radious) {
	double v;

	if (radious < 0) {
		printf("오류: 반지름은 양수로 입력하세요!\n");
	}
	else if (radious > 0) {
		v = 4.0 / 3.0 * PI * radious * radious * radious;
		printf("반지름이 %d인 구의 부피는%.3lf",radious, v);
	}

}


