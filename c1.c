//20201237������
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159265
void VSphere(int);
int main(void) {
	printf("20201237 ������\n");

	int r;
	printf("���� ��������?\n");
	scanf("%d", &r);
	VSphere(r);

}

void VSphere(int radious) {
	double v;

	if (radious < 0) {
		printf("����: �������� ����� �Է��ϼ���!\n");
	}
	else if (radious > 0) {
		v = 4.0 / 3.0 * PI * radious * radious * radious;
		printf("�������� %d�� ���� ���Ǵ�%.3lf",radious, v);
	}

}


