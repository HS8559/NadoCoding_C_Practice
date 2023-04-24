#include <stdio.h>

int main_04Self-Check(void)
{
	int cf;
	int sw;

	printf("주문하실 커피의 수량을 입력해주세요 : ");
	scanf_s("%d", &cf);
	printf("주문하실 샌드위치의 수량을 입력해주세요 : ");
	scanf_s("%d", &sw);

	printf("\n\n주문하신 메뉴의 총 금액은 ");
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
	printf("원입니다.\n");

	return 0;
}