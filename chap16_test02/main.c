// 기존 방식 배열 사용

#include <stdio.h>
#define MAX_COUNT 5

void main(void)
{
	int num[MAX_COUNT] = { 0, }, count = 0, sum = 0;

	while (count < MAX_COUNT)
	{
		printf("숫자를 입력하세요(9999입력 시 종료) : ");
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

	printf(" = %d입니다.\n", sum);
}