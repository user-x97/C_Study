// 메모리 동적할당

#include <stdio.h>
#include <malloc.h>

void main(void)
{
	char* p_name;
	p_name = (char*)malloc(10); // (char) 10 개의 방 만들기

	if (p_name != NULL)
	{
		printf("Your name : ");
		gets(p_name);

		printf("Hi, %s\n", p_name);

		free(p_name); // malloc ------> free
	}
	else
	{
		printf("Memory allow failed");
	}
}