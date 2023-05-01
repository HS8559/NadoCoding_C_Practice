#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main_10file(void)
{
	//char line[MAX];
	//FILE *file = fopen("D:\\iCloudDrive\\01 DEV\\00 Study\\01 나도코딩의 C언어 입문\\00 Source Code\\NadoCoding_C\\text1.txt", "wb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//fputs("fputs를 이용하여 문자열 작성하기\n", file);
	//fputs("작성이 잘 되었는지 확인하기\n", file);

	//fclose(file);

	//FILE *file2 = fopen("D:\\iCloudDrive\\01 DEV\\00 Study\\01 나도코딩의 C언어 입문\\00 Source Code\\NadoCoding_C\\text2.txt", "rb");
	//if (file2 == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//while (fgets(line, MAX, file2) != NULL)
	//{
	//	printf("%s", line);
	//}

	//fclose(file2);

	int num[6] = { 0, 0, 0, 0, 0, 0 };
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];

	FILE *file3 = fopen("D:\\iCloudDrive\\01 DEV\\00 Study\\01 나도코딩의 C언어 입문\\00 Source Code\\NadoCoding_C\\text3.txt", "wb");

	if (file3 == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	//fprintf(file3, "%s %d %d %d %d %d %d\n", "추첨 번호", 1, 2, 3, 4, 5, 6);
	//fprintf(file3, "%s %d\n", "보너스 번호", 7);

	fscanf(file3, "%s %d %d %d %d %d %d\n", str1,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1,
		num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file3, "%s %d\n", str2, &bonus);
	printf("%s %d\n", str2,	bonus);

	fclose(file3);

	return 0;
}