#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���� 1�� �Է� �Ǿ�����, ���� ��, Ȧ�� ¦�� ����غ���. (��ø �̿�)
//0�� �Էµ��� �ʴ´ٴ� ����.
int main(void) {
	int a;
	scanf("%d", &a);

	if (a > 0) //�Է°��� ����϶�
	{	printf("plus\n");//����� ���
		if (a % 2 == 0) /* Ȧ¦ ���� */
		{
			printf("even\n");/* ¦�� */
		}
		else
		{
			printf("odd\n"); /*�׷��� ������ Ȧ�� */
		}
		
	}
	else
	{
		printf("minus\n"); //�ƴϸ� -�� ���
		if (a % 2 == 0) /* Ȧ¦ ���� */
		{
			printf("even\n");/* ¦�� */
		}
		else
		{
			printf("odd\n"); /*�׷��� ������ Ȧ�� */
		}

	}
	

	return 0;
}