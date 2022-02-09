// 배열 연습

#include <stdio.h>

void main(void)
{
	printf("배열연습\n");

	short student[20] = { 0, };

	student[0] = 90;
	student[1] = 97;
	student[2] = 88;
	student[3] = 66;
	student[4] = 54;
	student[5] = 78;
	student[6] = 92;
	student[7] = 10;
	student[8] = 60;
	student[9] = 70;

	for (size_t i = 0; i < 20; i++)
	{
		printf("student[%2d] 점수 : %3d\n", i, student[i]);
	}

	printf("성적입력 끝\n");
}