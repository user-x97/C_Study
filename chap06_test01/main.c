/*************************
** printf 예제
*************************/
#include <stdio.h>

void main(void)
{
	int data1 = 3, data2 = 5;

	printf("%d, %f\n", data1, (float)data2); // 캐스팅(형변환)

	int step = 5, value = 3 * step;
	printf("3 * %d = %d\n", step, value);
	
	printf("65의 아스키값은 %c 입니다.\n", 65);

	float PI = 3.141592f;
	printf("PI는 %.2f 입니다.\n", PI);

	int data3 = 10, data4 = 017, data5 = 0xff;
	printf("%d, %o, %x\n", data3, data4, data5);
	printf("%d, %d, %d\n", data3, data4, data5);
}