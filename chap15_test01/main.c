// �迭�� ������ ����

#include <stdio.h>

void main(void)
{
	char data[5] = { 0, }; // ���� �ʱ�ȭ ����
	data[1] = 5;

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ", data[i]);
	}
}