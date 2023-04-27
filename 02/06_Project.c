#include <stdio.h>
#include <time.h>

void selectBottle(int comb);

int main_06Project(void)
{
	srand(time(NULL));
	int medi = rand() % 4; // 약을 담을 병 선택
	int prevComb = 0; // 이전에 조한한 병의 개수
	int nowComb = 0; // 이번에 조합할 병의 개수

	int answer = 0; // 유저 입력
	int count = 1; // 시도 횟수

	printf("\n===       약이 들어있는 병 찾기       ===\n");

	for (int i = 0; i < 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 }; // 빈 병
		do {
			nowComb = rand() % 2 + 2;
		} while (nowComb == prevComb);
		prevComb = nowComb;

		int isIncluded = 0; // 포함 여부 ( 포함 : 1 )

		for (int j = 0; j < nowComb; j++)
		{
			int selectB = rand() % 4; // 선택된 병

			if (bottle[selectB] == 0)
			{
				bottle[selectB] = 1;
				if (selectB == medi)
					isIncluded = 1;
			}
			else
			{
				j--;
			}

		}

		printf("\n========================================\n");
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d ", k + 1);
		}
		printf("\n     === 약의 효과를 확인합니다 ===\n");

		if (isIncluded == 1)
			printf("\n\n===   성공 ! 약이 포함되어 있습니다!   ===\n");
		else
			printf("\n\n=== 실패 ! 약이 포함되어 있지 않습니다 ===\n");

		printf("\n ... 계속 하려면 아무 키나 누르세요 ...\n");
		printf("\n========================================\n");
		getchar();
	}

	printf("\n\n=== 약은 몇번 병에 있을까요? ===\n");
	scanf_s("%d", &answer);

	if (answer == medi + 1)
		printf("\n\n=== 정답입니다! ===\n");
	else
		printf("\n\n=== 오답입니다! 정답은 %d 번 입니다! ===\n", medi);
	return 0;
}

void selectBottle(int comb)
{
	for (int i = 0; i < 4; i++)
	{

	}
}