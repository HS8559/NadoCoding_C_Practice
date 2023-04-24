#include <stdio.h>
#include <time.h>

int main_04Condition(void)
{
	//int age = 19;

	//if (age >= 20)
	//	printf("성인입니다.\n");
	//else
	//	printf("미성년자입니다.\n");

	//printf("\n\n      === break문 ===\n");
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i == 7)
	//	{
	//		printf("나머지 학생들은 귀가하세요.\n");
	//		break;
	//	}
	//	printf("%2d번 학생은 발표 준비를 하세요.\n", i);
	//}

	//printf("\n\n      === continue문 ===\n");
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i == 7)
	//	{
	//		printf("   %d번 학생은 아파서 귀가했습니다.\n", i);
	//		continue;
	//	}
	//	printf("%2d번 학생은 발표 준비를 하세요.\n", i);
	//}

	//printf("\n\n      === 난수 ===\n");
	//srand(time(NULL));
	//int ran[5] = { 0,0,0,0,0 };

	//for (int i = 0; i < 5; i++)
	//{
	//	ran[i] = rand() % 5;
	//	printf("rad[%d]의 값은 : %d\n", i, ran[i]);
	//}

	printf("\n\n      === switch문 ===\n");
	srand(time(NULL));
	int sw;
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 시도\n", i);
		sw = rand() % 10;
		switch (sw % 2)
		{
			case 0:
				printf("   %d 는 짝수입니다.\n", sw);
				break;
			case 1:
				printf("   %d 는 홀수입니다.\n", sw);
				break;
		}
	}

	return 0;
}