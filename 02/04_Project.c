#include <stdio.h>
#include <time.h>

int main_04Project(void)
{
	srand(time(NULL));
	int answer = rand() % 100+1; // 1~100
	int userAnswer;
	int count = 0;

	printf("\n\n ===   숫자 맞히기   ===\n");
	printf("\n\n === 제한 횟수 : 5번 ===\n");

	for (int i = 0; i < 5; i++)
	{
		printf("\n정답을 입력하세요 : ");
		scanf_s("%d", &userAnswer);
		count += 1;
		
		if (userAnswer == answer)
		{
			printf("\n\n === 정답입니다! 게임을 종료합니다! ===\n");
			printf("=== 시도 횟수 : %d 번 ===\n", count);
			break;
		}
		else if (userAnswer != answer && count == 5)
		{
			printf("\n\n === 제한 횟수를 모두 사용하셨습니다! 게임을 종료합니다! ===\n");
			printf(" === 정답은 %d 입니다! ===\n", answer);
			break;
		}
		else if (userAnswer > answer)
		{
			printf("\n\n 오답입니다! DOWN!▽\n");
			printf("남은 횟수 : %d\n", 5 - count);
		}
		else if (userAnswer < answer)
		{
			printf("\n\n 오답입니다! UP!△\n");
			printf("남은 횟수 : %d\n", 5 - count);
		}
		printf("-------------------------------------\n");
	}

	return 0;
}