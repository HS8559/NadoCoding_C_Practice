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
		printf("���� ���� ����\n");
		return 1;

	}
	
	for (int i = 0; i < 3; i++)
	{
		fscanf(file, "%s %s", word1, word2);
		printf("���� ��'%s'�� �ش��ϴ� ���� �ܾ �Է��ϼ��� : ", word1);
		scanf("%s", answer);
		if (strcmp(answer, word2) == 0)
		{
			printf("\n\n�����Դϴ�!\n\n\n");
		}
		else
		{
			printf("\n\n�����Դϴ�! ������ : '%s'�Դϴ�\n\n\n", word2);
		}

		fclose(file);

	}

	return 0;
}