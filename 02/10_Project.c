#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 10000

int main_10Project(void)
{
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c;

	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13)
		{
			password[i] = '\0';
			break;
		}
		else
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}
	
	printf("\n\n=== ��й�ȣ Ȯ�� �� ===\n");
	if (strcmp(password, "skehzheld") == 0)
	{
		printf("=== ��й�ȣ Ȯ�� �Ϸ� ===\n");
		char *fileName = "D:\\secretdiary.txt";
		FILE *file = fopen(fileName, "a+b");
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n ������ �ۼ��ϼ���. (���� : EXIT �Է�)\n\n");

		while (1)
		{
			scanf("%[^\n]", contents);
			getchar();

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �ۼ��� �����մϴ�.\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else
	{
		printf("====== ��й�ȣ�� Ʋ�Ƚ��ϴ� ======");
		printf("=== ����ϱ� �ۼ��� �����մϴ�. ===");
		exit(0);
	}

	return 0;
}