/*------------------------------------------------------------
                         자료형 연습
------------------------------------------------------------*/

#include <stdio.h> // 표준 입출력 전처리

void main(void) // 파란색 단어는 예약어
{
	printf("\n 정수형\n\n");

	/*signed*/ char temperature; // 부호가 있는 1Byte
	temperature = -2;
	printf(" %d\n", temperature);

	unsigned char age;
	age = 50;
	printf(" %d\n", age); // 선택할 필요 없이 바로 복사

	/*signed*/ short int dday; // 2 Byte
	dday = -20;
	printf(" %d\n", dday);

	unsigned short int seconds;
	seconds = 35000;
	printf(" %d\n", seconds);

	/*signed*/ long int money; // 4 Byte
	money = 7000000;
	printf("%d\n", money);

	unsigned long int time_seconds;
	time_seconds = 1453100624;
	printf("%d\n", time_seconds);

	printf("\n 실수형\n\n");

	float pi; // 4 Byte
	pi = 3.141592654f;
	printf(" float %2.9f\n", pi); // 표현가능 범위를 넘어서면 잘못된 값이 나온다.

	double dpi; // 8 Byte
	dpi = 3.141592654;
	printf(" double %2.9f\n", dpi);

}