#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �� ���� ���� ���� N��M�� �Է� �޴´�. �� ���� �������� ���
// ���� ���谡 �ƴ� ��� none ���
//N�� M���̿� ��� ����� ������ �� ����.
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