// �迭�� ������ ����

#include <stdio.h>

void main(void)
{
	char data[5] = { 0, }; // ���� �ʱ�ȭ ����
	data[1] = 5;
	*(data + 2) = 15;

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", data[i]);
	}

	printf("\n");

	for (size_t i = 0; i < 5; i++)
	{
		printf("%p\n", &data[i]);
		printf("%p\n", (data + i));
		printf("%d\n", *(data + i));
	}
}

// �迭�� []�� �����ϸ� �ּҸ� ��Ÿ��
// ��ȣȭ?