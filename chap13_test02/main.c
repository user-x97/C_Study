#include <stdio.h>

void main(void)
{
	short birthday = 1042;
	short* ptr;
	ptr = &birthday;

	printf("\nbirthday ������ ũ��\t: %d\n", sizeof(birthday));
	printf("birthday ������ �ּ�\t: %p\n", &birthday);
	printf("birthday ������ ��\t: %d\n\n", birthday);
	printf("ptr ������ ũ�� \t: %d\n", sizeof(ptr));
	printf("ptr ������ �ּ� \t: %p\n", &ptr);
	printf("ptr ������ �� \t\t: %d\n", *ptr);
}