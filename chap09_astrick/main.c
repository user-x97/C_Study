/*************************************
** for�� �ǽ� - ��ǥ���
*************************************/

#include <stdio.h>

void main(void)
{
	for (size_t i = 1; i <= 5; i++)
	{
		for (size_t j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}