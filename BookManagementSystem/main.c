#pragma comment (lib, "libmysql.lib") // �ܺ� ���̺귯�� �߰� https://downloads.mysql.com/archives/c-c/

#include <Winsock2.h>				// ����
#include <stdio.h>					// ���Ĵٵ� �����
#include <stdlib.h>					// ���̺귯��
#include <Windows.h>				// ������ -----> System �Լ�
#include <my_global.h>				// MySQL
#include <mysql.h>	
#include <string.h>					// ���ڿ�
#include <locale.h>					// ����

#define mysqlip		"127.0.0.1"		// DB ���ӿ� IP
#define port		3306			// ��Ʈ��ȣ
#define username	"root"			// ID
#define password	""				// PW
#define schema		"bms"			// DB �̸�

typedef struct bookInfo
{
	int id;
	char title[100];
	char writer[100];
	char genre[50];
	char release_date[15];
	int pages;
	char company[50];
	int price;
} book;								// Ÿ�Ը�

void insert_book(MYSQL*, book*);	// å ���� �Է�
void display_books(MYSQL*);			// å ���� ��ü��ȸ
void update_book(MYSQL*, book*);	// å ���� ����
void delete_book(MYSQL*, book*);	// å ���� ����

/*---------------------------------------------------------------------------------*/	// main
int main(void)
{
	//printf("MySQL info : %s\n", mysql_get_client_info());

	setlocale(LC_ALL, "Korean");	// �ѱ��� ���� �� -----> ������ ����
	
	MYSQL* conn;
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat;					// ������ ���� ����
	unsigned int num_fields;
	unsigned long* lengths;

	book mybook;
	int input;

	int i = 0;
	conn = mysql_init(NULL);		// conn �ʱ�ȭ

	mysql_real_connect(conn, mysqlip, username, password, schema, port, NULL, 0);

	if (conn == NULL)
	{
		printf("���� ����%s\n", mysql_error(conn));
		return EXIT_FAILURE;
	}
	//printf("���� ����!\n");

	while (1)
	{
		system("cls");				// �ܼ�ȭ�� Ŭ����

		printf("��������������������������������������������������������\n");
		printf("�� å ���� ���α׷� (v 1.0) ��\n");
		printf("��������������������������������������������������������\n");
		printf(" 1. å ��ȸ\n");
		printf(" 2. å �Է�\n");
		printf(" 3. å ����\n");
		printf(" 4. å ����\n");
		printf(" 0. ���α׷� ����\n\n");
		printf(" �Է� > ");
		scanf("%d", &input);
		rewind(stdin);

		switch (input)
		{
		case 1:						// ������ ���
			system("cls");

			display_books(conn);
			system("pause");
			break;

		case 2:						// ������ �Է�
			system("cls");

			insert_book(conn, &mybook);
			system("pause");
			break;

		case 3:						// ������ ����
			system("cls");

			update_book(conn, &mybook);
			system("pause");
			break;

		case 4:						// ������ ����
			system("cls");

			delete_book(conn, &mybook);
			system("pause");
			break;

		case 0:						// ���α׷� ����
		default:
			printf("���α׷��� ����Ǿ����ϴ�.\n");
			mysql_close(conn);
			return EXIT_SUCCESS;
			break;
		}
	}
	return EXIT_SUCCESS;			// return 0;
}

/*---------------------------------------------------------------------------------*/	// display
void display_books(MYSQL* conn)
{
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat;
	unsigned int num_fields;
	unsigned long* lengths;

	query_stat = mysql_query(conn, "SELECT * FROM books_info");
	if (query_stat != 0)
	{
		printf("���� ���� : %s\n", mysql_error(conn));
		mysql_close(conn);			// ���� ����
		return EXIT_FAILURE;
	}

	result = mysql_store_result(conn);
	num_fields = mysql_num_fields(result);
	while (row = mysql_fetch_row(result))
	{
		for (int i = 0; i < num_fields; i++)
		{
			printf("[%s] ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	}
}

/*---------------------------------------------------------------------------------*/	// insert
void insert_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };

	printf("å �̸�(�ʼ�) : ");
	gets(book->title);

	printf("���� �� : ");
	gets(book->writer);

	printf("�� �� : ");
	gets(book->genre);

	printf("������(ex 2022-01-01) : ");
	gets(book->release_date);

	printf("��������(ex 200) : ");
	scanf("%d", &book->pages);			// ���ϰ� ���

	sprintf(query,						// ������ ���ڿ��� ��������
		"INSERT INTO books_info\
		(\
			title,\
			writer,\
			genre,\
			release_date,\
			pages\
			)\
		VALUES\
		(\
			'%s',\
			'%s',\
			'%s',\
			'%s',\
			%d\
		)\
	", book->title, book->writer, book->genre, book->release_date, book->pages);

	if (mysql_query(conn, query) != 0)
	{
		printf("�Է¿��� : %s\n", mysql_error(conn));
	}
}

/*---------------------------------------------------------------------------------*/	// update
void update_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat;
	unsigned int num_fields;
	unsigned long* lengths;

	display_books(conn);
	printf("\n");

	printf("������ å��ȣ �Է� : ");
	scanf("%d", &book->id);
	rewind(stdin);

	sprintf(query, "SELECT * FROM books_info WHERE id = %d", book->id);

	query_stat = mysql_query(conn, query);
	if (query_stat != 0)
	{
		printf("���� ���� : %s\n", mysql_error(conn));
		mysql_close(conn);			// ���� ����
		return EXIT_FAILURE;
	}

	system("cls");

	printf("���� ����\n");
	result = mysql_store_result(conn);
	num_fields = mysql_num_fields(result);
	while (row = mysql_fetch_row(result))
	{
		for (int i = 0; i < num_fields; i++)
		{
			printf("[%s] ", row[i] ? row[i] : "NULL");
		}
		printf("\n\n");
	}

	rewind(stdin);
	// ������ �Է�
	printf("å �̸�(�ʼ�) : ");
	gets(book->writer);

	printf("���� �� : ");
	gets(book->writer);

	printf("�� �� : ");
	gets(book->genre);

	// ���� ����
	sprintf(query,
		"UPDATE books_info\
		SET\
		title = '%s',\
		writer = '%s',\
		genre = '%s'\
		WHERE id = %d\
		", book->title, book->writer, book->genre, book->id);

	if (mysql_query(conn, query) != 0)
	{
		printf("�������� : %s\n", mysql_error(conn));
	}

	/*printf("���� ����\n");
	result = mysql_store_result(conn);
	num_fields = mysql_num_fields(result);
	while (row = mysql_fetch_row(result))
	{
		for (int i = 0; i < num_fields; i++)
		{
			printf("[%s] ", row[i] ? row[i] : "NULL");
		}
		printf("\n\n");
	}*/
}

/*---------------------------------------------------------------------------------*/	// delete
void delete_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };

	display_books(conn);
	printf("\n");

	printf("������ å��ȣ �Է� : ");
	scanf("%d", &book->id);
	rewind(stdin);

	// printf("���� �����Ͻðڽ��ϱ�(y/n)? ");

	sprintf(query,
		"DELETE FROM books_info WHERE id = %d", book->id);

	if (mysql_query(conn, query) != 0)
	{
		printf("�������� : %s\n", mysql_error(conn));
	}
}