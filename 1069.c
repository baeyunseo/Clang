#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 5�� 3�� [����1] �ǽ� ���ǹ� : ������ �Է¹޾� ������ ����϶�.
/*0�� �̸��̸� cold, indoor ���
0�� �̻��̸鼭 40�� �̸��̸� moderate, outdoor���
40�� �̻��̸� hot,indoor ���*/

int main(void) {
	int t;
	scanf("%d", &t);
	if(t<0) {
		printf("cold, indoor");
	}
	else if (t >= 0 && t < 40) {
		printf("moderate, outdoor");
	}
	else if (t >= 40) {
		printf("hot, indoor");
	}

	return 0;
}