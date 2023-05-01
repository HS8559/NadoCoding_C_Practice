#include <stdio.h>
#include <time.h>

typedef struct {
	char *name;
	int age;
	char *character;
	int level;
} CAT;

int collection[5] = { 0, 0, 0, 0, 0 };

CAT cats[5];

void initCats();
void printCat(int selected);
int checkCollection();

int main_09Project(void)
{
	srand(time(NULL));

	initCats();

	while (1)
	{
		printf("아무키를 눌러 고양이를 확인하세요\n");
		getchar();

		int selected = rand() % 5;
		printCat(selected);
		collection[selected] = 1;

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}
	}
	return 0;
}

void initCats()
{
	cats[0].name = "떼껄룩";
	cats[0].age = 1;
	cats[0].character = "온순";
	cats[0].level = 1;

	cats[1].name = "식빵";
	cats[1].age = 4;
	cats[1].character = "배고픔";
	cats[1].level = 2;

	cats[2].name = "점박이";
	cats[2].age = 3;
	cats[2].character = "예민";
	cats[2].level = 5;

	cats[3].name = "네로";
	cats[3].age = 6;
	cats[3].character = "수다쟁이";
	cats[3].level = 4;

	cats[4].name = "치즈";
	cats[4].age = 2;
	cats[4].character = "활발";
	cats[4].level = 3;
}

void printCat(int selected)
{
	printf("\n\n=== 이 고양이의 집사가 되었습니다 ===\n");
	printf("이름     : %s\n", cats[selected].name);
	printf("나이     : %d\n", cats[selected].age);
	printf("성격     : %s\n", cats[selected].character);
	//pritnf("레벨     : %d\n", cats[selected].level);
	printf("레벨     : ");
	
	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n\n");
}

int checkCollection()
{
	int collectAll = 1;

	printf("\n\n============= 현재 보유한 고양이 목록 =============\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)
		{
			printf("%10s", "<빈 박스>");
			collectAll = 0;
		}
		else
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n=============================================\n");

	if (collectAll)
	{
		printf("\n\n 축하합니다! 모든 고양이를 다 모았습니다. 프로그램을 종료합니다\n");
	}

	return collectAll;
}