#include <stdio.h>

int main(void)
{
	int floor = 5;

	printf("=== 피라미드 쌓기 ===\n");
	printf("쌓아 올릴 피라미드의 층 수 를 입력하시오 : ");
	scanf_s("%d", &floor);

	printf("\n\n=== %d층 피라미드 쌓기 ===\n", floor);

	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor-i ; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i*2 ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}