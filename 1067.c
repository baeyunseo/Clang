#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//정수 1개 입력 되었을때, 음과 양, 홀과 짝을 출력해보자. (중첩 이용)
//0은 입력되지 않는다는 가정.
int main(void) {
	int a;
	scanf("%d", &a);

	if (a > 0) //입력값이 양수일때
	{	printf("plus\n");//양수로 출력
		if (a % 2 == 0) /* 홀짝 구분 */
		{
			printf("even\n");/* 짝수 */
		}
		else
		{
			printf("odd\n"); /*그렇지 않으면 홀수 */
		}
		
	}
	else
	{
		printf("minus\n"); //아니면 -로 출력
		if (a % 2 == 0) /* 홀짝 구분 */
		{
			printf("even\n");/* 짝수 */
		}
		else
		{
			printf("odd\n"); /*그렇지 않으면 홀수 */
		}

	}
	

	return 0;
}