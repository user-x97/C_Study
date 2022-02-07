/*-----------------------------------------------------------
                         함수 만들기
-----------------------------------------------------------*/
// #: 전처리기
#include <stdio.h>
#include "main.h"

#define MAX_COUNT 3 // 상수 선언
#define PI 3.141592
#define POW_VALUE(a) a*a // 매크로함수, 인라인함수

int main(void)
{
	int a = 45, b = 20;
	int sum_result = 0;

	sum_result = sum(a, b); // 함수 호출
	printf("> a와 b의 합은 %d입니다.\n", sum_result);

	// return 0;

	sum_result = sum(-2, -27); // 함수 호출
	printf("> -2와 -27의 절대값 합은 %d입니다.\n", sum_result);

	printf("%d\n", MAX_COUNT);
	printf("%d\n", POW_VALUE(5));

	return 0; // 정상종료:0
}


int sum(int x, int y)
{
	if (x < 0) x = x * -1; // 절대값
	if (y < 0) y = y * -1;

	int result = x + y;
	return result; // 함수 종료 선언, 결과값 반환
}