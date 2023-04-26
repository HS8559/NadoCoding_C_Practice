#include <stdio.h>
#include <time.h>

void numP(int num);
int getRandNum(int level);
void showQ(int num1, int num2);
void showR(int count);
void success();
void fail();

int main_05Project(void)
{
	srand(time(NULL));
	int level = 1;

	int num1;
	int num2;
	int answer;
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		num1 = getRandNum(level);
		num2 = getRandNum(level);
		//numP(num1);
		//numP(num2);

		showQ(num1, num2);
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("=== 프로그램을 종료합니다 ===\n");
			break;
		}
		else if (answer == ( num1 * num2 ))
		{
			//printf("\n\n===      정답입니다!      ===\n");
			success();
			count++;
		}
		else if (answer != ( num1 * num2 ))
		{
			//printf("\n\n===      오답입니다!      ===\n");
			//printf("=== 프로그램을 종료합니다 ===\n");
			fail();
			break;
		}

		level++;
		printf("\n");
	}
	showR(count);

	return 0;
}

void numP(int num)
{
	printf("변수의 값은 %d 입니다.\n", num);
}

int getRandNum(int level)
{
	return rand() % 5 * level + 1 * level;
}

void showQ(int num1, int num2)
{
	printf("\n\n=== 문제 : %d X %d 의 값은? ===\n", num1, num2);
	printf("===       종료 : -1       ===\n");
}

void showR(int count)
{
	printf("5문제 중 %d 문제를 맞히셨습니다.\n", count);
}

void success()
{
	printf("\n\n===      정답입니다!      ===\n");
}

void fail()
{
	printf("\n\n===      오답입니다!      ===\n");
	printf("=== 프로그램을 종료합니다 ===\n");
}