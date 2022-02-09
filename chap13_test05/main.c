// 포인터 주소 연산

#include <stdio.h>

void main(void)
{
	int data = 10000000;
	short* ptr = (short*)&data;
	printf("%d\n", *ptr);
}