//20201237 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange(int);
int main(void) {
	printf("20201237 ������\n");

	int num1;
	printf("�� �ڸ� ����:");
	scanf("%d", &num1);
	exchange(num1);
}

/* void exchange(int n1) {
	int hun=n1/100;
	int ten=n1%10;
	int one;

	if (hun<0) {
		printf("%d%d+%d%d%d",ten,one,)
	}
} */