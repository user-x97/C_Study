// ���� ��� �迭 ���

#include <stdio.h>
#define MAX_COUNT 5

void main(void)
{
	int num[MAX_COUNT] = { 0, }, count = 0, sum = 0;

	while (count < MAX_COUNT)
	{
		printf("���ڸ� �Է��ϼ���(9999�Է� �� ����) : ");
		scanf_s("%d", num + count);

		if (num[count] == 9999) break;

		count++;
	}

	for (int i = 0; i < count; i++)
	{
		if (i > 0) printf(" + ");
		printf("%d", num[i]);
		sum += num[i];
	}

	printf(" = %d�Դϴ�.\n", sum);
}