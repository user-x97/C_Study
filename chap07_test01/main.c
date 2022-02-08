/**************************
** ¿¬»êÀÚ
**************************/
#include <stdio.h>

void main(void)
{
	int data1 = 5, data2 = 3, sum = 0;

	printf("%d + %d = %d\n", data1, data2, (data1 + data2));
	printf("%d - %d = %d\n", data1, data2, (data1 - data2));
	printf("%d * %d = %d\n", data1, data2, (data1 * data2));
	printf("%d / %d = %d\n", data1, data2, (data1 / data2));
	printf("%d %% %d = %d\n", data1, data2, (data1 % data2));

	sum = data1++;
	printf("%d\n", sum);
	sum = ++data2;
	printf("%d\n", sum);
}