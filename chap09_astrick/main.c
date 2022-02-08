/*************************************
** for문 실습 - 별표찍기
*************************************/

#include <stdio.h>

void main(void)
{
	for (size_t i = 1; i <= 5; i++)
	{
		for (size_t j = 1; j <= 6-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}