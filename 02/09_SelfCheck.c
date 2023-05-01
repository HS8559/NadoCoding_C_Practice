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

		printf("�뿩/�ݳ��Ͻ� ������ ��ȣ�� �Է����ּ���(���� : -1) : ");
		scanf_s("%d", &selectedBook);
		if (selectedBook == -1)
			exit(0);
		else if (selectedBook > 4 || selectedBook < 1)
		{
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
			continue;
		}
		changeBookInfo(selectedBook);
	}

	return 0;
}

void initBooks()
{
	books[0].id = 01;
	books[0].title = "�ظ�����";
	books[0].available = 1;

	books[1].id = 02;
	books[1].title = "���ǽ�";
	books[1].available = 1;

	books[2].id = 03;
	books[2].title = "������";
	books[2].available = 1;

	books[3].id = 04;
	books[3].title = "ȸ���̷�";
	books[3].available = 1;
}

void printBooks()
{
	printf("\n\n========= ���� ��� =========\n");
	for (int i = 0; i < 4; i++)
	{
		printf("       ������ȣ : %02d\n", books[i].id);
		printf("       �����̸� : %s\n", books[i].title);
		printf("       �������� : %d\n\n", books[i].available);
	}
}

void changeBookInfo(int selectedBook)
{
	if (books[selectedBook - 1].available == 1)
	{
		books[selectedBook - 1].available = 0;
		printf("'%s'�� ������ �Ϸ� �Ǿ����ϴ�.\n", books[selectedBook - 1].title);
	}
	else
	{
		books[selectedBook - 1].available = 1;
		printf("'%s'�� �ݳ��� �Ϸ� �Ǿ����ϴ�.\n", books[selectedBook - 1].title);
	}
}