//�Լ� �����
#include <stdio.h>

int sum(int x, int y)
{
	int result = x + y;
	return result; // ����� ��ȯ
}

void main(void)
{
	int a = 45, b = 20;
	int sum_result = 0;

	sum_result = sum(a, b); // �Լ� ȣ��
	printf("a�� b�� ���� %d�Դϴ�.\n", sum_result);
}