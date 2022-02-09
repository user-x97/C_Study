// 배열 연습

#include <stdio.h>
#include <string.h>

void main(void)
{
	short student[20] = { 0, };
	int sum = 0;
	float average = 0.0f;
	char data[6] = "Happy";
	char ment[] = "C Programming~";
	char data2[] = "abc";
	char data3[] = "def";
	char result[16];

	printf("배열연습\n");

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

	for (size_t i = 0; i < sizeof(student)/sizeof(short); i++)
	{
		//printf("student[%2d] 점수 : %3d\n", i, student[i]);
		sum += student[i];
	}
	average = sum / (sizeof(student) / sizeof(short));
	
	printf("총합 : %d, 평균 = %.2f\n", sum, average);
	printf("성적입력 끝\n");

	printf("%s\n", data);
	printf("%s\n", ment);
	printf("%d\n", strlen(ment)); // 글자수

	strcpy(result, data2);
	printf("result : %s\n", result);
}