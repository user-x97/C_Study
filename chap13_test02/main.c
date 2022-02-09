#include <stdio.h>

void main(void)
{
	short birthday = 1042;
	short* ptr;
	ptr = &birthday;

	printf("\nbirthday 변수의 크기\t: %d\n", sizeof(birthday));
	printf("birthday 변수의 주소\t: %p\n", &birthday);
	printf("birthday 변수의 값\t: %d\n\n", birthday);
	printf("ptr 변수의 크기 \t: %d\n", sizeof(ptr));
	printf("ptr 변수의 주소 \t: %p\n", &ptr);
	printf("ptr 변수의 값 \t\t: %d\n", *ptr);
}