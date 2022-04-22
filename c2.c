//20201237 배윤서
#define _CRT_SECURE_NO_WARNINGS
#define SUN "선글라스"
#define RAIN "우산"
#define SNOW "우산"
#include <stdio.h>

char PrepareOuting(char w);
int main(void) {
	
	PrepareOuting();
	
}

char PrepareOuting(char wh) {
	int num; //학번
	char whe; //날씨 정보 s(선글라스)r(우산)w(우산) //공통으로 마스크
	char res;

	printf("학번?");
	scanf("%d", &num);
	printf("날씨?(s,r,w)");
	scanf("%c ", &whe);

	/*if (wh == 's') {
	
		printf("%d님, 마스크와 %s를 챙기세요", num,SUN);
	}
	else if (wh == 'r') {
		return RAIN;
	}
	else if (wh == 'w') {
		return SNOW;
	}
	*/
}