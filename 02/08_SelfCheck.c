#include <stdio.h>
#include <stdlib.h>

int drinkArray[3][4];
char *drinkName[12];

void initDrinkArray();
void initDrinkName();
void printDrink();
void selectDrink(int select);

int main_08SelfCheck(void)
{
	initDrinkArray();
	initDrinkName();

	while (1)
	{
		int select = 0;
		printDrink();

		printf("\n              상품 번호를 입력하세요 : ");
		scanf_s("%d", &select);

		if (select > 12 || select < 1)
		{
			printf("\n\n 잘못된 상품 번호를 입력하셨습니다. 프로그램을 종료합니다.\n");
			exit(0);
		}
		else
		{
			selectDrink(select);
			exit(0);
		}
	}


	return 0;
}

void initDrinkArray()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			drinkArray[i][j] = 0;
		}
	}
}

void initDrinkName()
{
	drinkName[0] = "우유";
	drinkName[1] = "커피";
	drinkName[2] = "주스";
	drinkName[3] = "탄산음료";

	drinkName[4] = "칸칩";
	drinkName[5] = "거북칩";
	drinkName[6] = "감자칩";
	drinkName[7] = "고구마칩";

	drinkName[8] = "안타볼";
	drinkName[9] = "초코버섯";
	drinkName[10] = "가재깡";
	drinkName[11] = "씨리얼";
}

void printDrink()
{
	printf("====================== 상품 목록 ======================\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
				printf("%2d. %-10s", j + 1, drinkName[j]);
			if (i == 1)
				printf("%2d. %-10s", j + 5, drinkName[j+4]);
			if (i == 2)
				printf("%2d. %-10s", j + 9, drinkName[j+8]);
		}
		printf("\n");
	}
	printf("======================================================\n");
}

void selectDrink(int select)
{
	printf("\n%2d번 상품 '%s'을(를) 선택하셨습니다. 프로그램을 종료합니다.\n", select, drinkName[select - 1]);
}