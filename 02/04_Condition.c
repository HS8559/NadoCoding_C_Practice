#include <stdio.h>
#include <time.h>

int main_04Condition(void)
{
	//int age = 19;

	//if (age >= 20)
	//	printf("�����Դϴ�.\n");
	//else
	//	printf("�̼������Դϴ�.\n");

	//printf("\n\n      === break�� ===\n");
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i == 7)
	//	{
	//		printf("������ �л����� �Ͱ��ϼ���.\n");
	//		break;
	//	}
	//	printf("%2d�� �л��� ��ǥ �غ� �ϼ���.\n", i);
	//}

	//printf("\n\n      === continue�� ===\n");
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i == 7)
	//	{
	//		printf("   %d�� �л��� ���ļ� �Ͱ��߽��ϴ�.\n", i);
	//		continue;
	//	}
	//	printf("%2d�� �л��� ��ǥ �غ� �ϼ���.\n", i);
	//}

	//printf("\n\n      === ���� ===\n");
	//srand(time(NULL));
	//int ran[5] = { 0,0,0,0,0 };

	//for (int i = 0; i < 5; i++)
	//{
	//	ran[i] = rand() % 5;
	//	printf("rad[%d]�� ���� : %d\n", i, ran[i]);
	//}

	printf("\n\n      === switch�� ===\n");
	srand(time(NULL));
	int sw;
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �õ�\n", i);
		sw = rand() % 10;
		switch (sw % 2)
		{
			case 0:
				printf("   %d �� ¦���Դϴ�.\n", sw);
				break;
			case 1:
				printf("   %d �� Ȧ���Դϴ�.\n", sw);
				break;
		}
	}

	return 0;
}