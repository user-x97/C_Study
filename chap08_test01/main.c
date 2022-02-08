/***********************************************
** 조건문
***********************************************/

#include <stdio.h> // 전처리기

void main(void) // main 함수
{
	int data = 3; // 변수 선언 및 초기화
	printf("> data : %d\n", data);

	if (data > 3) // 조건문
	{
		printf("> data는 3보다 큰 수입니다.\n");
		printf("> 3보다 클 때 다른 일 계속 처리\n");
	}
	else if (data == 3) // 조건문 2
	{
		printf("> data는 3입니다.\n");
	}
	else // 예외 처리
	{
		printf("> data는 3보다 작습니다.\n");
		printf("> 3보다 작을 때는 오류이기 때문, 예외 처리\n");
	}

	printf("> 조건문 종료\n");

	int sum = 0;
	sum = (data >= 3) ? 1 : 0; // 조건문의 로직이 하나일 때, 조건수식 연산자(3항 연산자)
	/*
	if (data >= 3) sum = 1;
	else sum = 0;
	*/
	printf("%d\n", sum);
}

/*
	data = 1 는 오류가 나지 않음	---->	1 == data 로 쓰는 습관
*/