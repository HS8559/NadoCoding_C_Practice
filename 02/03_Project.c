#include <stdio.h>

int main(void)
{
	int floor = 5;

	printf("=== �Ƕ�̵� �ױ� ===\n");
	printf("�׾� �ø� �Ƕ�̵��� �� �� �� �Է��Ͻÿ� : ");
	scanf_s("%d", &floor);

	printf("\n\n=== %d�� �Ƕ�̵� �ױ� ===\n", floor);

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