#include <stdio.h>

int main_02project(void)
{
	char name[256];
	int age;
	float weight;
	double height;
	char crime[256];

	printf("\n\n === 조서에 필요한 사항 기입 ===\n\n");
	printf("   이 름  : ");
	scanf_s("%s", name, sizeof(name));

	printf("   나 이  : ");
	scanf_s("%d", &age);

	printf("   몸무게 : ");
	scanf_s("%f", &weight);

	printf("     키   : ");
	scanf_s("%lf", &height);

	printf("   범죄명 : ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n\n === 조서 기입 내용 확인 ===\n\n");
	printf("   이 름  : %s\n", name);
	printf("   나 이  : %d\n", age);
	printf("   몸무게 : %.2f\n", weight);
	printf("     키   : %.2lf\n", height);
	printf("   범죄명 : %s\n", crime);

	return 0;
}