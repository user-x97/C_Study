/**************************************************
** switch ��
**************************************************/
#include <stdio.h>

void main(void)
{
	int score = 86;
	char grade = 'A';

	switch (score/10)
	{
	case 10: // break�� ���� ��� �Ʒ��� ���� ����ȴ�.
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

	printf("����� ������ %d��, ������ %c�Դϴ�.\n", score, grade);
}