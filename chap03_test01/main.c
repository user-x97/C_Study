/*------------------------------------------------------------
                         �ڷ��� ����
------------------------------------------------------------*/

#include <stdio.h> // ǥ�� ����� ��ó��

void main(void) // �Ķ��� �ܾ�� �����
{
	printf("\n ������\n\n");

	/*signed*/ char temperature; // ��ȣ�� �ִ� 1Byte
	temperature = -2;
	printf(" %d\n", temperature);

	unsigned char age;
	age = 50;
	printf(" %d\n", age); // ������ �ʿ� ���� �ٷ� ����

	/*signed*/ short int dday; // 2 Byte
	dday = -20;
	printf(" %d\n", dday);

	unsigned short int seconds;
	seconds = 35000;
	printf(" %d\n", seconds);

	/*signed*/ long int money; // 4 Byte
	money = 7000000;
	printf("%d\n", money);

	unsigned long int time_seconds;
	time_seconds = 1453100624;
	printf("%d\n", time_seconds);

	printf("\n �Ǽ���\n\n");

	float pi; // 4 Byte
	pi = 3.141592654f;
	printf(" float %2.9f\n", pi); // ǥ������ ������ �Ѿ�� �߸��� ���� ���´�.

	double dpi; // 8 Byte
	dpi = 3.141592654;
	printf(" double %2.9f\n", dpi);

}