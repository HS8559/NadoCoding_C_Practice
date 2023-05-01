#include <stdio.h>
#include <stdlib.h>

int drinkArray[3][4];
char *drinkName[12];

void initDrinkArray();
void initDrinkName();
void printDrink();
void selectDrink(int select);

int main_08SelfCheck(void)
{
	initDrinkArray();
	initDrinkName();

	while (1)
	{
		int select = 0;
		printDrink();

		printf("\n              ��ǰ ��ȣ�� �Է��ϼ��� : ");
		scanf_s("%d", &select);

		if (select > 12 || select < 1)
		{
			printf("\n\n �߸��� ��ǰ ��ȣ�� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			exit(0);
		}
		else
		{
			selectDrink(select);
			exit(0);
		}
	}


	return 0;
}

void initDrinkArray()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			drinkArray[i][j] = 0;
		}
	}
}

void initDrinkName()
{
	drinkName[0] = "����";
	drinkName[1] = "Ŀ��";
	drinkName[2] = "�ֽ�";
	drinkName[3] = "ź������";

	drinkName[4] = "ĭĨ";
	drinkName[5] = "�ź�Ĩ";
	drinkName[6] = "����Ĩ";
	drinkName[7] = "����Ĩ";

	drinkName[8] = "��Ÿ��";
	drinkName[9] = "���ڹ���";
	drinkName[10] = "�����";
	drinkName[11] = "������";
}

void printDrink()
{
	printf("====================== ��ǰ ��� ======================\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
				printf("%2d. %-10s", j + 1, drinkName[j]);
			if (i == 1)
				printf("%2d. %-10s", j + 5, drinkName[j+4]);
			if (i == 2)
				printf("%2d. %-10s", j + 9, drinkName[j+8]);
		}
		printf("\n");
	}
	printf("======================================================\n");
}

void selectDrink(int select)
{
	printf("\n%2d�� ��ǰ '%s'��(��) �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n", select, drinkName[select - 1]);
}