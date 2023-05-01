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
	gameInfo1.name = "임게도나";
	gameInfo1.year = 2023;
	gameInfo1.price = 10000;
	gameInfo1.company = "니퍼컴도나";
	//printf("== 게임 출시 정보 ==\n");
	//printf("  게 임 명  : %s\n", gameInfo1.name);
	//printf("  출시년도  : %d\n", gameInfo1.year);
	//printf("  가    격  : %d\n", gameInfo1.price);
	//printf("  회 사 명  : %s\n", gameInfo1.company);
	//printf("\n");

	struct GameInfo gameInfo2 = { "나도게임", 2023, 20000, "나도컴퍼니" };
	//printf("== 게임 출시 정보 ==\n");
	//printf("  게 임 명  : %s\n", gameInfo2.name);
	//printf("  출시년도  : %d\n", gameInfo2.year);
	//printf("  가    격  : %d\n", gameInfo2.price);
	//printf("  회 사 명  : %s\n", gameInfo2.company);
	//printf("\n");

	struct GameInfo gameArray[2] = {
		{ "임게로드필", 2021, 50000, "로드필" },
		{ "필드로게임", 2021, 90000, "필드로" }
	};

	//struct GameInfo *gamePtr = &gameInfo1;
	//printf("== 게임 출시 정보 ==\n");
	//printf("  게 임 명  : %s\n", (*gamePtr).name);
	//printf("  출시년도  : %d\n", (*gamePtr).year);
	//printf("  가    격  : %d\n", (*gamePtr).price);
	//printf("  회 사 명  : %s\n", (*gamePtr).company);
	//printf("\n");

	//struct GameInfo *gamePtr2 = &gameInfo2;
	//printf("== 게임 출시 정보 ==\n");
	//printf("  게 임 명  : %s\n", gamePtr2->name);
	//printf("  출시년도  : %d\n", gamePtr2->year);
	//printf("  가    격  : %d\n", gamePtr2->price);
	//printf("  회 사 명  : %s\n", gamePtr2->company);
	//printf("\n");

	struct GameInfo *gamePtr3 = &gameArray;
	//printf("== 게임 출시 정보 ==\n");
	//printf("  게 임 명  : %s\n", gamePtr3[0].name);
	//printf("  출시년도  : %d\n", gamePtr3[0].year);
	//printf("  가    격  : %d\n", gamePtr3[0].price);
	//printf("  회 사 명  : %s\n", gamePtr3[0].company);
	//printf("\n");
	//printf("== 게임 출시 정보 ==\n");
	//printf("  게 임 명  : %s\n", gamePtr3[1].name);
	//printf("  출시년도  : %d\n", gamePtr3[1].year);
	//printf("  가    격  : %d\n", gamePtr3[1].price);
	//printf("  회 사 명  : %s\n", gamePtr3[1].company);
	//printf("\n");

	gameInfo1.friendGame = &gameInfo2;
	printf("== 연관 업체 게임 출시 정보 ==\n");
	printf("  게 임 명  : %s\n", gameInfo1.friendGame->name);
	printf("  출시년도  : %d\n", gameInfo1.friendGame->year);
	printf("  가    격  : %d\n", gameInfo1.friendGame->price);
	printf("  회 사 명  : %s\n", gameInfo1.friendGame->company);
	printf("\n");

	GAME_INFO game1 = { "LOL", 2013, 0, "RiotGames" };
	printf("== 게임 출시 정보 ==\n");
	printf("  게 임 명  : %s\n", game1.name);
	printf("  출시년도  : %d\n", game1.year);
	printf("  가    격  : %d\n", game1.price);
	printf("  회 사 명  : %s\n", game1.company);
	printf("\n");

	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3;
	실수 실수변수 = 3.14f;
	printf("정수변수 : %d, 실수변수 : %.2f\n", 정수변수, 실수변수);

	GAME_INFO 서든어택 = { "SuddenAttack", 2000, 0, "NEXON" };
	printf("\n");

	printf("== 게임 출시 정보 ==\n");
	printf("  게 임 명  : %s\n", 서든어택.name);
	printf("  출시년도  : %d\n", 서든어택.year);
	printf("  가    격  : %d\n", 서든어택.price);
	printf("  회 사 명  : %s\n", 서든어택.company);
	printf("\n");

	return 0;
}