/***********************************
** ��¥ �׽�Ʈ(��ø if��)
***********************************/
#include <stdio.h>

void main(void)
{
	int year = 2021, month = 12, day = 31;
	day++;

	if (day > 31) // 'if' �Է� �� Tab - intellisence
	{
		month++;
		day = 1;

		if (month > 12)
		{
			year++;
			month = 1;
		}
	}

	printf("%d�� %d�� %d��\n",
		year, month, day); // �ڵ尡 ����� ��� Enter
}