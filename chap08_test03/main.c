/**************************************************
** switch 문
**************************************************/
#include <stdio.h>

void main(void)
{
	int score = 86;
	char grade = 'A';

	switch (score/10)
	{
	case 10: // break가 없을 경우 아래와 같이 실행된다.
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}

	printf("당신의 점수는 %d점, 학점은 %c입니다.\n", score, grade);
}