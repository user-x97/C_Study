//표준 입출력

#include <stdio.h>

void main(void)
{
	/*putchar(65);
	printf("\n");
	puts("Hello World!");
	printf("Hello World!\n");
	printf("%s\n", "Hello World!");*/

	while (1)
	{
		printf("INPUT: ");
		int input_data = getchar();
		rewind(stdin);

		printf("----------> %c\n\n", input_data);

		if (input_data == 113) break;

		char input_s[10];
		gets(input_s);
		printf("입력값 : %s\n", input_s);
	}
}