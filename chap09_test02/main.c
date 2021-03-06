/*************************************
** for문 실습 - 구구단
*************************************/

#include <stdio.h>

void main(void)
{
	printf("********************************************************************\n");
	printf("** 구구단\n");
	printf("********************************************************************\n");
	for (size_t i = 2; i < 10; i+=4)
	{
		for (size_t j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				printf("<%d단>\t\t<%d단>\t\t<%d단>\t\t<%d단>\n", i, (i + 1), (i + 2), (i + 3));
			}
			else
			{
				printf("%d x %d = %2d\t%d x %d = %2d\t%d x %d = %2d\t%d x %d = %2d\n",
					i, j, i * j, (i + 1), j, (i + 1) * j, (i + 2), j, (i + 2) * j, (i + 3), j, (i + 3) * j);
			}
		}
		printf("********************************************************************\n");
	}
}