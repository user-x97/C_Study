#include <stdio.h>

void main(void)
{
	short birthday = 1028;
	short* ptr; // 포인터 선언
	ptr = &birthday; // birthday 변수 주소 저장

	printf("\nbirthday 변수의 크기\t: %d\n", sizeof(birthday));
	printf("birthday 변수의 주소\t: %p\n", &birthday);
	printf("birthday 변수의 값\t: %d\n\n", birthday);
	printf("ptr 변수의 크기 \t: %d\n", sizeof(ptr)); // 32 bit ---> 4 Byte
	printf("ptr 변수의 주소 \t: %p\n", &ptr); // ptr 주소
	printf("ptr 대상의 주소 \t: %p\n", ptr); // 대상 주소
	printf("ptr 대상의 값 \t\t: %d\n", *ptr);

	*ptr = 2048;
	printf("\nptr 대상의 값 \t\t: %d\n", *ptr);

	short* ptr2;
	ptr2 = (short*)0x00EFF7AC;
	printf("%x", *ptr2);
}