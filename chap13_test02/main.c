#include <stdio.h>

void main(void)
{
	short birthday = 1028;
	short* ptr; // ������ ����
	ptr = &birthday; // birthday ���� �ּ� ����

	printf("\nbirthday ������ ũ��\t: %d\n", sizeof(birthday));
	printf("birthday ������ �ּ�\t: %p\n", &birthday);
	printf("birthday ������ ��\t: %d\n\n", birthday);
	printf("ptr ������ ũ�� \t: %d\n", sizeof(ptr)); // 32 bit ---> 4 Byte
	printf("ptr ������ �ּ� \t: %p\n", &ptr); // ptr �ּ�
	printf("ptr ����� �ּ� \t: %p\n", ptr); // ��� �ּ�
	printf("ptr ����� �� \t\t: %d\n", *ptr);

	*ptr = 2048;
	printf("\nptr ����� �� \t\t: %d\n", *ptr);

	short* ptr2;
	ptr2 = (short*)0x00EFF7AC;
	printf("%x", *ptr2);
}