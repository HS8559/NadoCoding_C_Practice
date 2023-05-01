#include <stdio.h>

void square(int *arrPtr[]);

int main_07SelfCheck(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *arrPtr = &arr;

	printf("배열 arr의 요소 : {");
	for (int i = 0; i < 10; i++)
	{
		printf("%3d ", arr[i]);

		if (i==9)
		{
			printf("}\n");
		}
	}

	square(arr);

	printf("\n\n======================= square 함수 =======================\n");
	printf("배열 arr의 요소 : {");
	for (int i = 0; i < 10; i++)
	{
		printf("%3d ", arr[i]);

		if (i == 9)
		{
			printf("}\n");
		}
	}

	return 0;
}

void square(int *arrPtr)
{
	for (int i = 0; i < 10; i++)
	{
		if (arrPtr[i] % 2 == 0)
		{
			arrPtr[i] *= arrPtr[i];
		}
	}
}