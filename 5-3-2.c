#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 두 개의 양의 정수 N과M을 입력 받는다. 두 수의 제곱관계 출력
// 제곱 관계가 아닌 경우 none 출력
//N과 M사이에 대소 관계는 정해진 바 없다.
int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	if(n*n==m) {
		printf("%d*%d=%d", n, n, n*n);
	}
	else if (m * m == n) {
		printf("%d*%d=%d", m, m, m * m);
	}
	else {
		printf("none");
	}
	return 0;
}