#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//세 과목에 대한 각 점수를 입력 받아 그에 대한 학점을 출력하라

/*한 과목의 점수를 입력받는 함수*/
int InputScore(void);

char GetGrade(int, int, int);

int main(void) {
	int s1, s2, s3; //입력을 저장할 int 변수
	s1 = InputScore();
	s2 = InputScore();
	s3 = InputScore();
	char res = GetGrade(s1, s2, s3); //결과를 저장할 변수

	printf("최종 학점은 %c입니다.\n", res);

	return 0;
}

// 0~100 사이의 정수만 반환, 아니면 -1 출력
int InputScore(void) {
	int score1; // 입력받은 데이터 저장 변수
	
	scanf("%d", &score1);

	if (score1 >= 0 && score1 <= 100) {
		return score1;
	}
	else {
		return -1;
	}
}

// 3과목 점수에 대한 최종 학점 계산후 문자형 반환
char GetGrade(int s1, int s2, int s3) {
	double grade = (s1 + s2 + s3) / 3.0; // 점수 계산 값은 double형 변수
	if (grade >= 90) {
		return 'A'; //반환값이 문자형 char로 반환
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
