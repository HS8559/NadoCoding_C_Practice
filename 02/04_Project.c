#include <stdio.h>
#include <time.h>

int main_04Project(void)
{
	srand(time(NULL));
	int answer = rand() % 100+1; // 1~100
	int userAnswer;
	int count = 0;

	printf("\n\n ===   ���� ������   ===\n");
	printf("\n\n === ���� Ƚ�� : 5�� ===\n");

	for (int i = 0; i < 5; i++)
	{
		printf("\n������ �Է��ϼ��� : ");
		scanf_s("%d", &userAnswer);
		count += 1;
		
		if (userAnswer == answer)
		{
			printf("\n\n === �����Դϴ�! ������ �����մϴ�! ===\n");
			printf("=== �õ� Ƚ�� : %d �� ===\n", count);
			break;
		}
		else if (userAnswer != answer && count == 5)
		{
			printf("\n\n === ���� Ƚ���� ��� ����ϼ̽��ϴ�! ������ �����մϴ�! ===\n");
			printf(" === ������ %d �Դϴ�! ===\n", answer);
			break;
		}
		else if (userAnswer > answer)
		{
			printf("\n\n �����Դϴ�! DOWN!��\n");
			printf("���� Ƚ�� : %d\n", 5 - count);
		}
		else if (userAnswer < answer)
		{
			printf("\n\n �����Դϴ�! UP!��\n");
			printf("���� Ƚ�� : %d\n", 5 - count);
		}
		printf("-------------------------------------\n");
	}

	return 0;
}