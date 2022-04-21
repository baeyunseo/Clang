#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �� ���� ���� �Է� �ޱ�, �� ���� ��� ������ ���� ��� ��� \n, �ּ� �ִ� ���

char GradeCount(int,int,int); //��� ���� �Լ�
int MinCount(int, int, int); //�ּ�
int MaxCount(int, int, int); //�ִ�

int main(void) {
	int score1,score2,score3; //���� �Է� ����
	int grade; //���� ���
	int min;
	int max;
	 //�ִ밪 <- ����!!!!!!!!!!!!!!
	//�ּҰ� <- ����!!!!!!!!!!!!!!

	scanf("%d %d %d", &score1, &score2, &score3);

	grade = GradeCount(score1,score2,score3);
	min = MinCount(score1, score2, score3);
	max = MaxCount(score1, score2, score3);
	printf("%c\nmax: %d\nmin: %d\n", grade,max,min);
}

char GradeCount(int s1,int s2,int s3) {
	int mean = (s1 + s2 + s3) / 3.0;
	if (mean >= 90) {
		return 'A';
	}
	else if (mean >= 80) {
		return 'B';
	}
	else if (mean >= 70) {
		return 'C';
	}
	else if (mean >= 60) {
		return 'D';
	}
	else {
		return 'F';
	}
}

int MinCount(int m1, int m2, int m3) {

	if (m1 < m2) {
		if (m1<m3)
		return m1;
	}
	else if (m2 < m1) {
		if (m2<m3)
		return m2;
	}
	else if (m3 < m1) {
		if (m3 < m2)
			return m3;
	}
}

int MaxCount(int m1, int m2, int m3) {
	if (m1 > m2) {
		if (m1 > m3)
			return m1;
	}
	else if (m2 > m1) {
		if (m2 > m3)
			return m2;
	}
	else if (m3 > m1) {
		if (m3 > m2)
			return m3;
	}
}
