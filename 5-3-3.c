#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//5���� ������ �Է� �޾�, ����� ������ ���� ���ϴ� ���α׷��� �ۼ�

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
//������� �������� �Ǻ�, ����� ��ȯ
int pm(enter) {
	if (enter > 0) 	return enter;
	else return 0;
	}
