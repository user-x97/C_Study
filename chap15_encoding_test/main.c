#include <stdio.h>

void encode(int*);

void main(void)
{
	int num = 71321351;
	char* ptr = &num;
	
	for (size_t i = 0; i < 3; i++)
	{
		printf("num : %d\tHEX : %08x\tAddr : %p\n", num, num, &num);
		printf("*ptr : %02x\tptr : %p\n", *ptr, ptr);
		printf("*ptr : %02x\tptr : %p\n", *(ptr + 1), ptr + 1);
		printf("*ptr : %02x\tptr : %p\n", *(ptr + 2), ptr + 2);
		printf("*ptr : %02x\tptr : %p\n\n", *(ptr + 3), ptr + 3);

		encode(&num);
	}
}

void encode(int* Addr)
{
	char* ptr = Addr;
	char temp = *ptr;

	*(ptr) = *(ptr + 3);
	*(ptr + 3) = temp;
}

// *Addr [b1][68][de][3a] 4 Byte