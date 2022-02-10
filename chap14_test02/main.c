//입력 scanf 연습

#include <stdio.h>	

void main(void)
{
	int data = 0;
	printf("[0]: ");
	int result1 = scanf("%d", &data); // 배열은 & 생략
	printf("데이터의 값 = %d\n\n", data);

	char data2[32];
	printf("[1]: ");
	int result2 = scanf("%s", data2);
	printf("데어터의 값 = %s\n\n", data2);

	int num1, num2, num3;
	printf("[2]: ");
	int result3 = scanf("%o %d %x", &num1, &num2, &num3);
	printf("입력결과 : %d\n", result2);
	printf("입력값 : %d %d %d\n", num1, num2, num3);
}