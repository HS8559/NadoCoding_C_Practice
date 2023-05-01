#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int level;
int arrayFish[6];
int *cursor;

void initData();
void printFishes();
void decreaseWater(long prevElapsedTime);
int checkFishAlive();

int main_07Project(void)
{
	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;

	int num;
	initData();

	cursor = arrayFish;

	startTime = clock();

	while (1)
	{
		//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printFishes();

		printf("몇 번 어항에 물을 주시겠습니까?");
		scanf_s("%d", &num);

		if (num < 1 || num>6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		totalElapsedTime = ( clock() - startTime ) / CLOCKS_PER_SEC;
		printf("\n======== 총 경과 시간 : %ld 초 ========\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("======= 최근 경과 시간 : %ld 초 =======\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] <= 0)
		{
			printf("\n%d 번 어항의 물고기는 이미 죽었습니다. 물을 주지 않습니다.\n", num);
		}
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("\n%d 번 어항에 물을 줍니다.\n", num);
			cursor[num - 1] += 2;
		}

		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("\n=== 레벨업! %d 레벨에서 %d 레벨로 업그레이드 ===\n", level - 1, level);

			if (level == 5)
			{
				printf("\n\n 축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다.\n");
				exit(0);
			}
		}

		if (checkFishAlive() == 0) // 소괄호 잊지 말 것
		{
			printf("\n\n 모든 물고기가 죽었습니다. 게임을 종료합니다.\n");
			exit(0);
		}
		else
		{
			printf("\n살아있는 물고기가 아직 존재합니다.\n");
		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData()
{
	level = 1;
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;
	}
}

void printFishes()
{
	printf("\n\n=========== 어항의 물 높이 ===========\n");
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n");
	printf("======================================\n");
}

void decreaseWater(long prevElapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= ( level * 3 * (int) prevElapsedTime );
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}