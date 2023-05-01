#include <stdio.h>

typedef struct {
	int id;
	char *title;
	int available;
} BOOK;

BOOK books[4];

void initBooks();
void printBooks();
void changeBookInfo(int selectedBook);

int main_09SelfCheck(void)
{
	initBooks();

	while (1)
	{
		int selectedBook = 0;

		printBooks();

		printf("대여/반납하실 도서의 번호를 입력해주세요(종료 : -1) : ");
		scanf_s("%d", &selectedBook);
		if (selectedBook == -1)
			exit(0);
		else if (selectedBook > 4 || selectedBook < 1)
		{
			printf("잘못된 입력입니다. 다시 입력해주세요.\n");
			continue;
		}
		changeBookInfo(selectedBook);
	}

	return 0;
}

void initBooks()
{
	books[0].id = 01;
	books[0].title = "해리포터";
	books[0].available = 1;

	books[1].id = 02;
	books[1].title = "원피스";
	books[1].available = 1;

	books[2].id = 03;
	books[2].title = "나루토";
	books[2].available = 1;

	books[3].id = 04;
	books[3].title = "회로이론";
	books[3].available = 1;
}

void printBooks()
{
	printf("\n\n========= 도서 목록 =========\n");
	for (int i = 0; i < 4; i++)
	{
		printf("       도서번호 : %02d\n", books[i].id);
		printf("       도서이름 : %s\n", books[i].title);
		printf("       대출정보 : %d\n\n", books[i].available);
	}
}

void changeBookInfo(int selectedBook)
{
	if (books[selectedBook - 1].available == 1)
	{
		books[selectedBook - 1].available = 0;
		printf("'%s'의 대출이 완료 되었습니다.\n", books[selectedBook - 1].title);
	}
	else
	{
		books[selectedBook - 1].available = 1;
		printf("'%s'의 반납이 완료 되었습니다.\n", books[selectedBook - 1].title);
	}
}