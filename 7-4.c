#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ϳ��� ���ڸ� �Է� �޾Ƽ� ������ ������ �Ǻ�
//����� ���� : �Էµ� ���ڰ� �ް�, ���� �Ǻ��Ͽ� ��ȯ (����)

int FindChartype(char let);
int main(void) {
	char letter; //�Է� ���� ���� ����
	int res; //��� �� ����

	printf("���ڸ� �Է��ϼ���");
	scanf("%c", &letter);
	
	res = FindChartype(letter);
	
	if (res == 1) {
		printf("�����̽� ����");
	}
	else if (res == 2) {
		printf("�� ����");
	}
	else if (res == 3) {
		printf("���� ����");
	}
	else if (res == 4) {
		printf("���ĺ� �� ����");
	}
	else if (res == 0) {
		printf("�Ϲݹ���");
	}

	return 0;
}
int FindChartype(char let) {
	
	if (let == 32) { //�����̽� ������ �� 1�� ��ȯ
		return 1;
	}
	else if (let == 9) { //�� ������ ���
		return 2;
	}
	else if (let == 10) { //���� ����
		return 3;
	}
	else if (('a' <= let && let <= 'z') || ('A' <= let && let <= 'Z') || ('0' <= let && let <= '9')){  //���ĺ� �� ���� [48-57 ����]
		return 4; //�Ǵ����� ǥ��
	}
	else { //�Ϲ� ����
		return 0;
	}
}