// �迭�� ������ ����

#include <stdio.h>

void main(void)
{
	char data[5] = { 1,2,3,4,5 };
	int sum = 0;
	char* p = data; // &data[0];

	for (size_t i = 0; i < 5; i++)
	{
		// sum += data[i];
		sum += *(p + i);
	}

	printf("1~5 �հ�� %d�Դϴ�.\n", sum);
}