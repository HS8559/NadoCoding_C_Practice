#include <stdio.h>

void sumAll(int grade[]);
void meanAll(int grade[]);

int main_06SelfCheck(void)
{
	printf("=== 5 ������ ������ ��� ���ϱ� ===\n");
	printf("\n\n=== �� ������ ������ �Է��ϼ��� ===\n");
	int grade[5] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� ������ ���� : ", i + 1);
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
	printf("\n\n=== 5 ������ ������ : %d, ", sum);
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

	printf("����� : %.2f �Դϴ� ===\n", mean);
}