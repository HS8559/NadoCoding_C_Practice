#include <stdio.h>

int main_04Self-Check(void)
{
	int cf;
	int sw;

	printf("�ֹ��Ͻ� Ŀ���� ������ �Է����ּ��� : ");
	scanf_s("%d", &cf);
	printf("�ֹ��Ͻ� ������ġ�� ������ �Է����ּ��� : ");
	scanf_s("%d", &sw);

	printf("\n\n�ֹ��Ͻ� �޴��� �� �ݾ��� ");
	if (cf == 0)
	{
		printf("%d", 6000 * sw);
	}
	else if (sw == 0)
	{
		printf("%d", 4500 * cf);
	}
	else if (cf != 0 && sw !=0)
	{
		printf("%d", 3500 * cf + 6000 * sw);
	}
	printf("���Դϴ�.\n");

	return 0;
}