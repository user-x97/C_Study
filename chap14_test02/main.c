//�Է� scanf ����

#include <stdio.h>	

void main(void)
{
	int data = 0;
	printf("[0]: ");
	int result1 = scanf("%d", &data); // �迭�� & ����
	printf("�������� �� = %d\n\n", data);

	char data2[32];
	printf("[1]: ");
	int result2 = scanf("%s", data2);
	printf("�������� �� = %s\n\n", data2);

	int num1, num2, num3;
	printf("[2]: ");
	int result3 = scanf("%o %d %x", &num1, &num2, &num3);
	printf("�Է°�� : %d\n", result2);
	printf("�Է°� : %d %d %d\n", num1, num2, num3);
}