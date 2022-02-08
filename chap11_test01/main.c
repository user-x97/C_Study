#include <stdio.h>
#include "function.h"

void main(void)
{
	//int result; // main 함수 지역변수 result 
	result = sum(5, 3);
	printf("result 값은 %d\n", result);
}

int sum(int x, int y)
{
	//int result = 0; // sum 함수 지역변수 result 
	result = x + y;
	//return result;
}