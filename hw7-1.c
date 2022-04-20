#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double Difference(double n1, double n2);

int main(void) {
	double num1, num2;
	double res;

	printf("2개의 숫자를 입력하세요:");
	scanf("%lf %lf", &num1,&num2);
	res = Difference(num1, num2);
	printf("\n입력하신 수에서 큰 수에서 작은 수를 뺀 값은 %lf입니다. ", res);
	return 0;
}
double Difference(double n1, double n2) {
	if (n1 < n2) {
		return n2 - n1;
	}
	else if (n1 > n2) {
		return n1 - n2;
	}
}