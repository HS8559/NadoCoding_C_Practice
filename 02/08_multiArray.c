#include <stdio.h>

int main_08MultiArray(void)
{
	int arr[5] = { 0, 1 ,2 ,3 ,4 };

	printf("1차원 배열 arr[5]의 요소 : \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%2d ", arr[i]);
		if (i == 4)
		{
			printf("\n\n");
		}
	}

	int arr2[2][5] = {
		{ 0, 1, 2, 3, 4 } ,
		{ 5, 6, 7, 8, 9 }
	};
	printf("2차원 배열 arr2[2][5]의 요소 : \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", arr2[i][j]);
			if (j == 4)
			{
				printf("\n");
			}
		}
	}
	printf("\n");

	arr2[1][3] = 99;
	arr2[0][2] = 88;
	printf("2차원 배열 arr2[2][5]의 요소 : \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", arr2[i][j]);
			if (j == 4)
			{
				printf("\n");
			}
		}
	}
	printf("\n");

	int arr3[5][2] = {
		{ 1, 2 },
		{ 3, 4 },
		{ 5, 6 }
	};
	printf("2차원 배열 arr3[5][2]의 요소 : \n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%2d ", arr3[i][j]);
			if (j == 1)
				printf("\n");
		}
	}
	printf("\n");

	int arr4[3][2][4] = {
		{
			{ 1, 2, 3, 4 },
			{ 5, 6, 7, 8 }
		},
		{
			{ 9, 10, 11, 12 },
			{ 13, 14, 15, 16 }
		},
		{
			{ 17, 18, 19, 20 },
			{ 21, 22, 23, 24 }
		},
	};
	printf("2차원 배열 arr4[3][2][4]의 요소 : \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				printf("%2d ", arr4[i][j][k]);
				if (k == 3)
					printf("\n");
			}
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}