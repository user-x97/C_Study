// �޸� �����Ҵ�

#include <stdio.h>
#include <malloc.h>

void main(void)
{
	char* p_name;
	p_name = (char*)malloc(10); // (char) 10 ���� �� �����

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