#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����(����,0~100������ �Է�)�� �Է� �޾� �򰡸� ����غ���.
// 90~100 : A
// 70~89 : B
// 40~69: C
// 0~39 : D
//�� ���� (�������� : ��) ��ø�� �̿��ϱ�

int main(void) {
	int num;;
	scanf("%d", &num);
	
	if(num>=90&&100>=num) {
		printf("%s\n", "A");
	}
	else if (num>=70 && 89>=num) {
		printf("%s\n", "B");
	}
	else if (num>=40 && 69>= num) {
		printf("%s\n", "C");
	}
	else if (num >= 0 && 39 >= num) {
		printf("%s\n", "D");
	}
	return 0;
}