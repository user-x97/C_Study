/*************************************
** 반복문 for
*************************************/
#include <stdio.h>

void main(void)
{
	int sum = 0;

	for (size_t i = 0; i < 100000; i++)
	{
		sum += i; // sum = sum + i;
	}

	printf("합계 sum = %d\n", sum);
}