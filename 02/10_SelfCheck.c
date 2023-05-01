#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 10000

int main_10SelfCheck(void)
{
	char word1[MAX];
	char word2[MAX];
	char answer[256];

	FILE *file = fopen("D:\\word.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;

	}
	
	for (int i = 0; i < 3; i++)
	{
		fscanf(file, "%s %s", word1, word2);
		printf("다음 뜻'%s'에 해당하는 영어 단어를 입력하세요 : ", word1);
		scanf("%s", answer);
		if (strcmp(answer, word2) == 0)
		{
			printf("\n\n정답입니다!\n\n\n");
		}
		else
		{
			printf("\n\n오답입니다! 정답은 : '%s'입니다\n\n\n", word2);
		}

		fclose(file);

	}

	return 0;
}