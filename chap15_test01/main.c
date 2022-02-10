// 배열과 포인터 관계

#include <stdio.h>

void main(void)
{
	char data[5] = { 0, }; // 변수 초기화 습관
	data[1] = 5;
	*(data + 2) = 15;

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", data[i]);
	}

	printf("\n");

	for (size_t i = 0; i < 5; i++)
	{
		printf("%p\n", &data[i]);
		printf("%p\n", (data + i));
		printf("%d\n", *(data + i));
	}
}

// 배열은 []를 생략하면 주소를 나타냄
// 암호화?