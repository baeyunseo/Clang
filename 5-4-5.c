#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ���� ������ �Է� �޾� 2,3,5 �� � ���� ���� ���������� �ش� ���ĺ��� ����Ѵ�
// ����� �� ���� ����;
int main(void) {
	int gra;
	scanf("%d", &gra);

	if (gra % 2 == 0 && gra % 3 == 0 && gra % 5 == 0) {
		printf("A");
	}
	else if(gra % 2 == 0 && gra % 3 == 0){
		printf("B");
}
	else if (gra % 2 == 0 && gra % 5 == 0) {
		printf("C");
	}
	else if (gra % 3 == 0 && gra % 5 == 0) {
		printf("D");
	}
	else if ((gra % 2==0) + (gra % 3==0) + (gra % 5==0) == 1) {
		printf("E");
	}
	else if ((gra % 2==0) + (gra % 3==0) + (gra % 5==0) == 0) {
		printf("N");
	}

	return 0;
	}