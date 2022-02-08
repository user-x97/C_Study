/***********************************
** 날짜 테스트(중첩 if문)
***********************************/
#include <stdio.h>

void main(void)
{
	int year = 2021, month = 12, day = 31;
	day++;

	if (day > 31) // 'if' 입력 후 Tab - intellisence
	{
		month++;
		day = 1;

		if (month > 12)
		{
			year++;
			month = 1;
		}
	}

	printf("%d년 %d월 %d일\n",
		year, month, day); // 코드가 길어질 경우 Enter
}