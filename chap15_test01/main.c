// 배열과 포인터 관계

#include <stdio.h>

void main(void)
{
	char data[5] = { 0, }; // 변수 초기화 습관
	data[1] = 5;

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ", data[i]);
	}
}