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
		printf("��ȭ�� �� �ð��� �Է��ϼ���(��, ���� : -1) : ");
		scanf_s("%d", &min);
		if (min == -1)
		{
			printf("\n\n === �����մϴ� ===");
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
	printf("\n\n=== ��ȭ�� �󿵽ð��� : %d�� %d�� �Դϴ� ===\n\n", min / 60, min % 60);
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
	printf("\n\n=== ��ȭ�� �󿵽ð��� : %d�� %d�� �Դϴ� ===\n\n", hour, min);
}