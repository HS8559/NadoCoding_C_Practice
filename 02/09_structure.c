#include <stdio.h>

struct GameInfo {
	char *name;
	int year;
	int price;
	char *company;

	struct GameInfo *friendGame;
};

typedef struct {
	char *name;
	int year;
	int price;
	char *company;
} GAME_INFO;

int main_09Structure(void)
{
	struct GameInfo gameInfo1;
	gameInfo1.name = "�ӰԵ���";
	gameInfo1.year = 2023;
	gameInfo1.price = 10000;
	gameInfo1.company = "�����ĵ���";
	//printf("== ���� ��� ���� ==\n");
	//printf("  �� �� ��  : %s\n", gameInfo1.name);
	//printf("  ��ó⵵  : %d\n", gameInfo1.year);
	//printf("  ��    ��  : %d\n", gameInfo1.price);
	//printf("  ȸ �� ��  : %s\n", gameInfo1.company);
	//printf("\n");

	struct GameInfo gameInfo2 = { "��������", 2023, 20000, "�������۴�" };
	//printf("== ���� ��� ���� ==\n");
	//printf("  �� �� ��  : %s\n", gameInfo2.name);
	//printf("  ��ó⵵  : %d\n", gameInfo2.year);
	//printf("  ��    ��  : %d\n", gameInfo2.price);
	//printf("  ȸ �� ��  : %s\n", gameInfo2.company);
	//printf("\n");

	struct GameInfo gameArray[2] = {
		{ "�ӰԷε���", 2021, 50000, "�ε���" },
		{ "�ʵ�ΰ���", 2021, 90000, "�ʵ��" }
	};

	//struct GameInfo *gamePtr = &gameInfo1;
	//printf("== ���� ��� ���� ==\n");
	//printf("  �� �� ��  : %s\n", (*gamePtr).name);
	//printf("  ��ó⵵  : %d\n", (*gamePtr).year);
	//printf("  ��    ��  : %d\n", (*gamePtr).price);
	//printf("  ȸ �� ��  : %s\n", (*gamePtr).company);
	//printf("\n");

	//struct GameInfo *gamePtr2 = &gameInfo2;
	//printf("== ���� ��� ���� ==\n");
	//printf("  �� �� ��  : %s\n", gamePtr2->name);
	//printf("  ��ó⵵  : %d\n", gamePtr2->year);
	//printf("  ��    ��  : %d\n", gamePtr2->price);
	//printf("  ȸ �� ��  : %s\n", gamePtr2->company);
	//printf("\n");

	struct GameInfo *gamePtr3 = &gameArray;
	//printf("== ���� ��� ���� ==\n");
	//printf("  �� �� ��  : %s\n", gamePtr3[0].name);
	//printf("  ��ó⵵  : %d\n", gamePtr3[0].year);
	//printf("  ��    ��  : %d\n", gamePtr3[0].price);
	//printf("  ȸ �� ��  : %s\n", gamePtr3[0].company);
	//printf("\n");
	//printf("== ���� ��� ���� ==\n");
	//printf("  �� �� ��  : %s\n", gamePtr3[1].name);
	//printf("  ��ó⵵  : %d\n", gamePtr3[1].year);
	//printf("  ��    ��  : %d\n", gamePtr3[1].price);
	//printf("  ȸ �� ��  : %s\n", gamePtr3[1].company);
	//printf("\n");

	gameInfo1.friendGame = &gameInfo2;
	printf("== ���� ��ü ���� ��� ���� ==\n");
	printf("  �� �� ��  : %s\n", gameInfo1.friendGame->name);
	printf("  ��ó⵵  : %d\n", gameInfo1.friendGame->year);
	printf("  ��    ��  : %d\n", gameInfo1.friendGame->price);
	printf("  ȸ �� ��  : %s\n", gameInfo1.friendGame->company);
	printf("\n");

	GAME_INFO game1 = { "LOL", 2013, 0, "RiotGames" };
	printf("== ���� ��� ���� ==\n");
	printf("  �� �� ��  : %s\n", game1.name);
	printf("  ��ó⵵  : %d\n", game1.year);
	printf("  ��    ��  : %d\n", game1.price);
	printf("  ȸ �� ��  : %s\n", game1.company);
	printf("\n");

	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3;
	�Ǽ� �Ǽ����� = 3.14f;
	printf("�������� : %d, �Ǽ����� : %.2f\n", ��������, �Ǽ�����);

	GAME_INFO ������� = { "SuddenAttack", 2000, 0, "NEXON" };
	printf("\n");

	printf("== ���� ��� ���� ==\n");
	printf("  �� �� ��  : %s\n", �������.name);
	printf("  ��ó⵵  : %d\n", �������.year);
	printf("  ��    ��  : %d\n", �������.price);
	printf("  ȸ �� ��  : %s\n", �������.company);
	printf("\n");

	return 0;
}