#include <stdio.h>
#include <time.h>

int arrayAnimal[4][5];
int checkAnimal[4][5];
char *animalName[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();

int main_08Project(void)
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();
	
	int failCount = 0;

	while (1)
	{
		int select1 = 0;
		int select2 = 0;

		//printAnimals();
		printQuestion();
		printf("\n   ������ ī�带 2�� ������ : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			printf("������ ī�带 �����ϼ̽��ϴ�. �ٽ� �������ּ���.\n");
			continue;
		}
		if (select1 >= 20 || select2 >= 20)
			continue;

		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);
		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if (( checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0 )
			&& ( arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y] ))
		{
			printf("\n\n ����! : %s �߰�!\n", animalName[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf("\n\n ����! (Ȥ��, �̹� �߰ߵ� ī��)\n");
			if (select1 < select2)
			{
				printf("%2d : %s\n", select1, animalName[arrayAnimal[firstSelect_x][firstSelect_y]]);
				printf("%2d : %s\n", select2, animalName[arrayAnimal[secondSelect_x][secondSelect_y]]);
			}
			else
			{
				printf("%2d : %s\n", select2, animalName[arrayAnimal[secondSelect_x][secondSelect_y]]);
				printf("%2d : %s\n", select1, animalName[arrayAnimal[firstSelect_x][firstSelect_y]]);
			}
			printf("\n\n");

			failCount++;
		}

		if (foundAllAnimals() == 1)
		{
			printf("\n\n �����մϴ�! ��� ������ �� ã�ҽ��ϴ�!\n");
			printf("�� %d ���� �õ��� �ϼ̽��ϴ�.\n", failCount);

			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	animalName[0] = "�����";
	animalName[1] = "������";
	animalName[2] = "�ڳ���";
	animalName[3] = "�ź���";
	animalName[4] = "�ٶ���";

	animalName[5] = "�ڻԼ�";
	animalName[6] = "����";
	animalName[7] = "�����";
	animalName[8] = "��踻";
	animalName[9] = "ȣ����";
}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20;
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x)
{
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5;
}

void printAnimals()
{
	printf("\n================= ���� ==================\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", animalName[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n=========================================\n\n");
}

void printQuestion()
{
	printf("\n================= ���� ==================\n\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", animalName[arrayAnimal[i][j]]);
			}
			else
			{
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
				return 0;
		}
	}

	return 1;
}