#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�� ���� ���� �� ������ �Է� �޾� �׿� ���� ������ ����϶�

/*�� ������ ������ �Է¹޴� �Լ�*/
int InputScore(void);

char GetGrade(int, int, int);

int main(void) {
	int s1, s2, s3; //�Է��� ������ int ����
	s1 = InputScore();
	s2 = InputScore();
	s3 = InputScore();
	char res = GetGrade(s1, s2, s3); //����� ������ ����

	printf("���� ������ %c�Դϴ�.\n", res);

	return 0;
}

// 0~100 ������ ������ ��ȯ, �ƴϸ� -1 ���
int InputScore(void) {
	int score1; // �Է¹��� ������ ���� ����
	
	scanf("%d", &score1);

	if (score1 >= 0 && score1 <= 100) {
		return score1;
	}
	else {
		return -1;
	}
}

// 3���� ������ ���� ���� ���� ����� ������ ��ȯ
char GetGrade(int s1, int s2, int s3) {
	double grade = (s1 + s2 + s3) / 3.0; // ���� ��� ���� double�� ����
	if (grade >= 90) {
		return 'A'; //��ȯ���� ������ char�� ��ȯ
	}
	else if (grade >= 80) {
		return 'B';
	}
	else if (grade >= 70) {
		return 'C';
	}
	else if (grade >= 60) {
		return 'D';
	}
	else {
		return 'F';
	}
}
