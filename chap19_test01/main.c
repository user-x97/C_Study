// ���� �����

#include <stdio.h>

void main(void)
{
	/*FILE* p_file = fopen("test.txt", "at");
	if (p_file != NULL)
	{
		fprintf(p_file, "Hello world!\n");
		short data = 0x0412;
		fprintf(p_file,"%d\n", data);

		fclose(p_file);
		printf("���� ���� ����!");
	}
	else
	{
		printf("test.txt ���Ͽ��� ����!");
	}*/
	char temp[100];
	FILE* p_file = fopen("test.txt", "rt");
	if (NULL != p_file)
	{
		while (EOF != fscanf(p_file, "%s", temp))
		{
			printf("%s\n", temp);
		}
		fclose(p_file);
	}
	else
	{
		printf("���� �б� ����");
	}
}