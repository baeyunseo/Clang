#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�Է� �� �� �������� ¦���� ����ϴ� ���α׷�
int main(void) {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if (a % 2 == 0) {
		printf("%d\n", a); // T�� �� ���, F�̸� �׳� �Ѿ
	}
	if (b % 2 == 0) {
		printf("%d\n", b);
	}
	if (c % 2 == 0) {
		printf("%d\n", c);

		return 0;
	}
}