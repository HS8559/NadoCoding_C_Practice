#include <stdio.h>

int main_03Loop(void)
{
	int a = 1;
	printf("변수 a의 값은 : %d\n", a);
	a += 1;
	printf("변수 a += 1 의 값은 : %d\n", a);
	a -= 1;
	printf("변수 a -= 1 의 값은 : %d\n", a);
	a++;
	printf("변수 a++의 값은 : %d\n", a);
	a--;
	printf("변수 a--의 값은 : %d\n", a);

	printf("\n\n === for문 ===\n");
	for (int i = 0; i < 10; i++)
	{
		printf("변수 i의 값은 : %d(반복 횟수 : %d)\n",i, i+1);
	}

	printf("\n\n === while문 ===\n");
	int i = 0;
	while (i < 10)
	{
		printf("변수 i의 값은 : %d(반복 횟수 : %d)\n", i, i + 1);
		i++;
	}

	i = 0;
	printf("\n\n=== do while문 ===\n");
	do
	{
		printf("변수 i의 값은 : %d(반복 횟수 : %d)\n", i, i + 1);
		i++;
	} while (i < 10);

	printf("\n\n=== 이중 중첩문 ===\n");
	printf("   === 구구단 ===\n");
	for (int i = 1; i < 10; i++)
	{

		for (int j = 1; j <= 9; j++)
		{
			printf("%2d  X %2d = %2d   ",j, i, i*j);
		}
		printf("\n");
	}

	printf("\n\n === 배열 ===\n");
	int arr[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		printf("배열 arr의 %d 인덱스 요소의 값 : %d\n", i, arr[i]);
	}

	printf("\n\n === 피라미드 ===\n");
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