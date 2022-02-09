// 배열 연습

#include <stdio.h>

void main(void)
{
	char temp[2][3] = { {1, 2, 3},
						{4, 5, 6} };

	printf("2차원 배열\n");

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (i == 0) printf("%d ", j-1);
			if (i == 0) printf("%d ", j-1);
			else if (j == 0) printf("%d ", i-1);
			else printf("%d ", temp[i-1][j-1]);
		}
		printf("\n");
	}
}