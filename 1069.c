#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 5장 3절 [문제1] 실습 조건문 : 정수를 입력받아 다음을 출력하라.
/*0도 미만이면 cold, indoor 출력
0도 이상이면서 40도 미만이면 moderate, outdoor출력
40도 이상이면 hot,indoor 출력*/

int main(void) {
	int t;
	scanf("%d", &t);
	if(t<0) {
		printf("cold, indoor");
	}
	else if (t >= 0 && t < 40) {
		printf("moderate, outdoor");
	}
	else if (t >= 40) {
		printf("hot, indoor");
	}

	return 0;
}