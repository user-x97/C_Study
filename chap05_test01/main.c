/*-----------------------------------------------------------
                         �Լ� �����
-----------------------------------------------------------*/
// #: ��ó����
#include <stdio.h>
#include "main.h"

#define MAX_COUNT 3 // ��� ����
#define PI 3.141592
#define POW_VALUE(a) a*a // ��ũ���Լ�, �ζ����Լ�

int main(void)
{
	int a = 45, b = 20;
	int sum_result = 0;

	sum_result = sum(a, b); // �Լ� ȣ��
	printf("> a�� b�� ���� %d�Դϴ�.\n", sum_result);

	// return 0;

	sum_result = sum(-2, -27); // �Լ� ȣ��
	printf("> -2�� -27�� ���밪 ���� %d�Դϴ�.\n", sum_result);

	printf("%d\n", MAX_COUNT);
	printf("%d\n", POW_VALUE(5));

	return 0; // ��������:0
}


int sum(int x, int y)
{
	if (x < 0) x = x * -1; // ���밪
	if (y < 0) y = y * -1;

	int result = x + y;
	return result; // �Լ� ���� ����, ����� ��ȯ
}