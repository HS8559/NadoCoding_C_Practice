#include <stdio.h>

void moviehourCal(int min);
int hourCal(int min);
int minCal(int min);
void showHour(int hour, int min);

int main_05SelfCheck(void)
{
	int min = 0;
	int hour = 0;

	while (1)
	{
		printf("영화의 상영 시간을 입력하세요(분, 종료 : -1) : ");
		scanf_s("%d", &min);
		if (min == -1)
		{
			printf("\n\n === 종료합니다 ===");
			break;
		}
		//moviehourCal(min);

		hour = hourCal(min);
		min = minCal(min);
		showHour(hour, min);

	}

	return 0;
}

void moviehourCal(int min)
{
	printf("\n\n=== 영화의 상영시간은 : %d시 %d분 입니다 ===\n\n", min / 60, min % 60);
}

int hourCal(int min)
{
	return min / 60;
}

int minCal(int min)
{
	return min % 60;
}

void showHour(int hour, int min)
{
	printf("\n\n=== 영화의 상영시간은 : %d시 %d분 입니다 ===\n\n", hour, min);
}