// 동적메모리 할당

#include <stdio.h>
#include <malloc.h>

void main(void)
{
	int* p_num_list;
	int count = 0, sum = 0, limit = 0;

	printf("최대 개수 입력 : ");
	scanf_s("%d", &limit);
	// 사용자가 입력한 개수만큼 동적메모리 할당

	p_num_list = (int*)malloc(sizeof(int) * limit);

	while (count < limit)
	{
		printf("숫자 입력(9999시 종료) : ");
		scanf_s("%d", p_num_list + count);

		if (*(p_num_list + count) == 9999) break;

		count++;
	}

	for (int i = 0; i < limit; i++)
	{
		if (i > 0) printf(" + ");
		printf("%d", *(p_num_list + i));
		sum += *(p_num_list + i);
	}
	printf(" = %d\n", sum);
	free(p_num_list); // 무조건
}
//youneedawiki
//app/page
//1yPRgg_mUgRdESRqhEbJrTzF3bDWphoPC