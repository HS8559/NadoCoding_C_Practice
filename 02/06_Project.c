#include <stdio.h>
#include <time.h>

void selectBottle(int comb);

int main_06Project(void)
{
	srand(time(NULL));
	int medi = rand() % 4; // ���� ���� �� ����
	int prevComb = 0; // ������ ������ ���� ����
	int nowComb = 0; // �̹��� ������ ���� ����

	int answer = 0; // ���� �Է�
	int count = 1; // �õ� Ƚ��

	printf("\n===       ���� ����ִ� �� ã��       ===\n");

	for (int i = 0; i < 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 }; // �� ��
		do {
			nowComb = rand() % 2 + 2;
		} while (nowComb == prevComb);
		prevComb = nowComb;

		int isIncluded = 0; // ���� ���� ( ���� : 1 )

		for (int j = 0; j < nowComb; j++)
		{
			int selectB = rand() % 4; // ���õ� ��

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
		printf("\n     === ���� ȿ���� Ȯ���մϴ� ===\n");

		if (isIncluded == 1)
			printf("\n\n===   ���� ! ���� ���ԵǾ� �ֽ��ϴ�!   ===\n");
		else
			printf("\n\n=== ���� ! ���� ���ԵǾ� ���� �ʽ��ϴ� ===\n");

		printf("\n ... ��� �Ϸ��� �ƹ� Ű�� �������� ...\n");
		printf("\n========================================\n");
		getchar();
	}

	printf("\n\n=== ���� ��� ���� �������? ===\n");
	scanf_s("%d", &answer);

	if (answer == medi + 1)
		printf("\n\n=== �����Դϴ�! ===\n");
	else
		printf("\n\n=== �����Դϴ�! ������ %d �� �Դϴ�! ===\n", medi);
	return 0;
}

void selectBottle(int comb)
{
	for (int i = 0; i < 4; i++)
	{

	}
}