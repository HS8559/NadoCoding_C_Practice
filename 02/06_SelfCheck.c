#include <stdio.h>

void sumAll(int grade[]);
void meanAll(int grade[]);

int main_06SelfCheck(void)
{
	printf("=== 5 과목의 총점과 평균 구하기 ===\n");
	printf("\n\n=== 각 과목의 점수를 입력하세요 ===\n");
	int grade[5] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 과목의 점수 : ", i + 1);
		scanf_s("%d", &grade[i]);
	}

	sumAll(grade);
	meanAll(grade);

	return 0;
}

void sumAll(int grade[])
{
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += grade[i];
	}
	printf("\n\n=== 5 과목의 총점은 : %d, ", sum);
}

void meanAll(int grade[])
{
	int sum = 0;
	float mean = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += grade[i];
	}

	mean = (float) sum / 5;

	printf("평균은 : %.2f 입니다 ===\n", mean);
}