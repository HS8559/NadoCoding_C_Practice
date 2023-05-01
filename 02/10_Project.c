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

	printf("'비밀일기'에 오신 것을 환영합니다.\n");
	printf("비밀번호를 입력하세요 : ");

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
	
	printf("\n\n=== 비밀번호 확인 중 ===\n");
	if (strcmp(password, "skehzheld") == 0)
	{
		printf("=== 비밀번호 확인 완료 ===\n");
		char *fileName = "D:\\secretdiary.txt";
		FILE *file = fopen(fileName, "a+b");
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n 내용을 작성하세요. (종료 : EXIT 입력)\n\n");

		while (1)
		{
			scanf("%[^\n]", contents);
			getchar();

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀일기 작성을 종료합니다.\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else
	{
		printf("====== 비밀번호가 틀렸습니다 ======");
		printf("=== 비밀일기 작성을 중지합니다. ===");
		exit(0);
	}

	return 0;
}