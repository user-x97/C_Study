#include <stdio.h>
#include "function.h"

void main(void)
{
	//int result; // main �Լ� �������� result 
	result = sum(5, 3);
	printf("result ���� %d\n", result);
}

int sum(int x, int y)
{
	//int result = 0; // sum �Լ� �������� result 
	result = x + y;
	//return result;
}