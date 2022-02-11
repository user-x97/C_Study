#pragma comment (lib, "libmysql.lib") // 외부 라이브러리 추가 https://downloads.mysql.com/archives/c-c/

#include <Winsock2.h>				// 소켓
#include <stdio.h>					// 스탠다드 입출력
#include <stdlib.h>					// 라이브러리
#include <Windows.h>				// 윈도우 -----> System 함수
#include <my_global.h>				// MySQL
#include <mysql.h>	
#include <string.h>					// 문자열
#include <locale.h>					// 지역

#define mysqlip		"127.0.0.1"		// DB 접속용 IP
#define port		3306			// 포트번호
#define username	"root"			// ID
#define password	""				// PW
#define schema		"bms"			// DB 이름

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
} book;								// 타입명

void insert_book(MYSQL*, book*);	// 책 정보 입력
void display_books(MYSQL*);			// 책 정보 전체조회
void update_book(MYSQL*, book*);	// 책 정보 수정
void delete_book(MYSQL*, book*);	// 책 정보 삭제

/*---------------------------------------------------------------------------------*/	// main
int main(void)
{
	//printf("MySQL info : %s\n", mysql_get_client_info());

	setlocale(LC_ALL, "Korean");	// 한국어 깨질 때 -----> 로케일 설정
	
	MYSQL* conn;
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat;					// 실행한 쿼리 상태
	unsigned int num_fields;
	unsigned long* lengths;

	book mybook;
	int input;

	int i = 0;
	conn = mysql_init(NULL);		// conn 초기화

	mysql_real_connect(conn, mysqlip, username, password, schema, port, NULL, 0);

	if (conn == NULL)
	{
		printf("연결 오류%s\n", mysql_error(conn));
		return EXIT_FAILURE;
	}
	//printf("연결 성공!\n");

	while (1)
	{
		system("cls");				// 콘솔화면 클리어

		printf("┌──────────────────────────┐\n");
		printf("│ 책 관리 프로그램 (v 1.0) │\n");
		printf("└──────────────────────────┘\n");
		printf(" 1. 책 조회\n");
		printf(" 2. 책 입력\n");
		printf(" 3. 책 수정\n");
		printf(" 4. 책 삭제\n");
		printf(" 0. 프로그램 종료\n\n");
		printf(" 입력 > ");
		scanf("%d", &input);
		rewind(stdin);

		switch (input)
		{
		case 1:						// 데이터 출력
			system("cls");

			display_books(conn);
			system("pause");
			break;

		case 2:						// 데이터 입력
			system("cls");

			insert_book(conn, &mybook);
			system("pause");
			break;

		case 3:						// 데이터 수정
			system("cls");

			update_book(conn, &mybook);
			system("pause");
			break;

		case 4:						// 데이터 삭제
			system("cls");

			delete_book(conn, &mybook);
			system("pause");
			break;

		case 0:						// 프로그램 종료
		default:
			printf("프로그램이 종료되었습니다.\n");
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
		printf("쿼리 오류 : %s\n", mysql_error(conn));
		mysql_close(conn);			// 연결 종료
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

	printf("책 이름(필수) : ");
	gets(book->title);

	printf("저자 명 : ");
	gets(book->writer);

	printf("장 르 : ");
	gets(book->genre);

	printf("출판일(ex 2022-01-01) : ");
	gets(book->release_date);

	printf("페이지수(ex 200) : ");
	scanf("%d", &book->pages);			// 리턴값 경고

	sprintf(query,						// 여러줄 문자열은 역슬래시
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
		printf("입력오류 : %s\n", mysql_error(conn));
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

	printf("수정할 책번호 입력 : ");
	scanf("%d", &book->id);
	rewind(stdin);

	sprintf(query, "SELECT * FROM books_info WHERE id = %d", book->id);

	query_stat = mysql_query(conn, query);
	if (query_stat != 0)
	{
		printf("쿼리 오류 : %s\n", mysql_error(conn));
		mysql_close(conn);			// 연결 종료
		return EXIT_FAILURE;
	}

	system("cls");

	printf("기존 정보\n");
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
	// 수정값 입력
	printf("책 이름(필수) : ");
	gets(book->writer);

	printf("저자 명 : ");
	gets(book->writer);

	printf("장 르 : ");
	gets(book->genre);

	// 쿼리 전송
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
		printf("수정오류 : %s\n", mysql_error(conn));
	}

	/*printf("수정 정보\n");
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

	printf("삭제할 책번호 입력 : ");
	scanf("%d", &book->id);
	rewind(stdin);

	// printf("정말 삭제하시겠습니까(y/n)? ");

	sprintf(query,
		"DELETE FROM books_info WHERE id = %d", book->id);

	if (mysql_query(conn, query) != 0)
	{
		printf("삭제오류 : %s\n", mysql_error(conn));
	}
}