#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double Difference(double n1, double n2);

int main(void) {
	double num1, num2;
	double res;

	printf("2���� ���ڸ� �Է��ϼ���:");
	scanf("%lf %lf", &num1,&num2);
	res = Difference(num1, num2);
	printf("\n�Է��Ͻ� ������ ū ������ ���� ���� �� ���� %lf�Դϴ�. ", res);
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