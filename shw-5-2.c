//3�� 27�� ����
//20201237 ������
//����¥�� ����� 3���� �޴� �ֹ�, 1. �� �ݾ�, �ܾ� ��� ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Menupick(int);
void sum(int,int,int);
int main(void) {
	printf("1.����� 2. ��� 3. ������ 4. Ƣ�� 5. �ݶ�\n �޴�3�� ����\n");

	int menu1, menu2, menu3; //�޴� �Է�
	int m1, m2, m3;// ��� ����
	scanf("%d %d %d", &menu1, &menu2, &menu3);
	m1 = Menupick(menu1);
	m2 = Menupick(menu2);
	m3 = Menupick(menu3);

	sum(m1, m2, m3); //�Լ� ȣ�⸸ �ϼ���. �տ� void ���� ���ñ�.


	return 0;
}

int Menupick(int enter) {
	if (enter == 1) {
		return 5000; //������
	}
	else if (enter == 2) {
		return 2500;
	}
	else if (enter == 3) {
		return 2000;
	}
	else if (enter == 4) {
		return 1500;
	}
	else if (enter == 5) {
		return 1000;
	}

}

void sum(int s1, int s2, int s3) {
	int num;
	num = s1 + s2 + s3;

	if (num <= 10000) {
		printf("Total:%d\nChange:%d\n",num,10000 - num);
	}
	else if (num > 10000) {
		printf("Total:%d\nInsufficient Money\n", num);
	}
}

// 3�� 51�� ��ǰ