#include <stdio.h>

int main_02project(void)
{
	char name[256];
	int age;
	float weight;
	double height;
	char crime[256];

	printf("\n\n === ������ �ʿ��� ���� ���� ===\n\n");
	printf("   �� ��  : ");
	scanf_s("%s", name, sizeof(name));

	printf("   �� ��  : ");
	scanf_s("%d", &age);

	printf("   ������ : ");
	scanf_s("%f", &weight);

	printf("     Ű   : ");
	scanf_s("%lf", &height);

	printf("   ���˸� : ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n\n === ���� ���� ���� Ȯ�� ===\n\n");
	printf("   �� ��  : %s\n", name);
	printf("   �� ��  : %d\n", age);
	printf("   ������ : %.2f\n", weight);
	printf("     Ű   : %.2lf\n", height);
	printf("   ���˸� : %s\n", crime);

	return 0;
}