// 포인터 연습

#include <stdio.h>

void test(short);

void main(void)
{
	short tips = 5;
	test(&tips);
	printf("%d", tips);
}

void test(short* ptr)
{
	short soft = 0;
	soft = *ptr;

	*ptr = (*ptr * 30);
}