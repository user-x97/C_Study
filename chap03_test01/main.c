/*------------------------------------------------------------
						자료형 연습
------------------------------------------------------------*/

#include <stdio.h>	// 표준 입출력 전처리

void main(void)		// 파란색 단어는 예약어
{
	signed char temperature;	// 부호가 있는 1Byte
	temperature = -2;

	printf("%d\n", temperature);

	unsigned char age;
	age = 50;

	printf("%d\n", age);		// 선택할 필요 없이 바로 복사
}