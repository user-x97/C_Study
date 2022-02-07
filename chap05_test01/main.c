//함수 만들기
#include <stdio.h>

int sum(int x, int y)
{
	int result = x + y;
	return result; // 결과값 반환
}

void main(void)
{
	int a = 45, b = 20;
	int sum_result = 0;

	sum_result = sum(a, b); // 함수 호출
	printf("a와 b의 합은 %d입니다.\n", sum_result);
}