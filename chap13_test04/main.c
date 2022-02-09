// 포인터 활용

#include <stdio.h>

void swap(int* const a, int* const b) // const는 수정이 불가능하게 만듦
{
	int temp = 0;	// temp = 0, a = 95, b = 6
	temp = *a;		// temp = 95, a = 95, b = 6
	*a = *b;		// temp = 95, a = 6, b = 6
	*b = temp;		// temp = 95, a = 6, b = 95
}

void main(void)
{
	int start = 95, end = 6;
	printf("\n<before>\nstart : %d, end : %d\n", start, end);
	swap(&start, &end);
	printf("\n<after>\nstart : %d, end : %d\n", start, end);
}