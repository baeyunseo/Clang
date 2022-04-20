#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//5개의 정수를 입력 받아, 양수인 수들의 합을 구하는 프로그램을 작성

int pm(int);
int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int A = pm(a); 
	int B = pm(b);
	int C = pm(c);
	int D = pm(d);
	int E = pm(e);

	printf("%d", A + B + C + D + E);

	return 0;
}
//양수인지 음수인지 판별, 양수만 반환
int pm(enter) {
	if (enter > 0) 	return enter;
	else return 0;
	}
