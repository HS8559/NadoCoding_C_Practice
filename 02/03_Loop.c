#include <stdio.h>

int main_03Loop(void)
{
	int a = 1;
	printf("���� a�� ���� : %d\n", a);
	a += 1;
	printf("���� a += 1 �� ���� : %d\n", a);
	a -= 1;
	printf("���� a -= 1 �� ���� : %d\n", a);
	a++;
	printf("���� a++�� ���� : %d\n", a);
	a--;
	printf("���� a--�� ���� : %d\n", a);

	printf("\n\n === for�� ===\n");
	for (int i = 0; i < 10; i++)
	{
		printf("���� i�� ���� : %d(�ݺ� Ƚ�� : %d)\n",i, i+1);
	}

	printf("\n\n === while�� ===\n");
	int i = 0;
	while (i < 10)
	{
		printf("���� i�� ���� : %d(�ݺ� Ƚ�� : %d)\n", i, i + 1);
		i++;
	}

	i = 0;
	printf("\n\n=== do while�� ===\n");
	do
	{
		printf("���� i�� ���� : %d(�ݺ� Ƚ�� : %d)\n", i, i + 1);
		i++;
	} while (i < 10);

	printf("\n\n=== ���� ��ø�� ===\n");
	printf("   === ������ ===\n");
	for (int i = 1; i < 10; i++)
	{

		for (int j = 1; j <= 9; j++)
		{
			printf("%2d  X %2d = %2d   ",j, i, i*j);
		}
		printf("\n");
	}

	printf("\n\n === �迭 ===\n");
	int arr[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		printf("�迭 arr�� %d �ε��� ����� �� : %d\n", i, arr[i]);
	}

	printf("\n\n === �Ƕ�̵� ===\n");
	for (int i = 0; i < 5; i++)
	{
		printf("i : %d", i);
		for (int j = 0; j <= i; j++)
		{
			printf("j : %d", j);
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j >= i; j--)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			printf(" ");
		}
		for (int j = 4; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}