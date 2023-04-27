#include <stdio.h>

void printArray(int *pArray, int element);
void printArray_f(float *pArray_f, int element);
void printCArray(char word[], int num);
void ToAscii(char word[], int num);

int main_06Array(void)
{
	//int arr[7] = { 5, 7, 4, 3 };
	//int *pArray = arr;
	////for (int i = 0; i < 4; i++)
	////{
	////	printf("배열 arr 의 %d 번째 요소 : %d\n", i+1, arr[i]);
	////}
	//printArray(pArray, 7);
	////printf("\n\n%d\n", pArray[4]);

	//arr[1] = 10;
	//arr[3] = 45;

	//printArray(pArray, 7);

	//float arr_f[4] = { 1.2f, 2.6f, 34.5f, 4.4356f };
	//float *pArray_f = arr_f;

	//printArray_f(pArray_f, 4);

	char letter = 'A';
	printf("\n\n문자 변수 letter의 값 : %c\n", letter);

	char word[] = "PowerShell";

	printf("\n\n=== 요소로 문자열 출력 ===\n");
	printf("문자열 변수 word의 값 : ");
	//for (int i = 0; i < sizeof(word); i++)
	//{
	//	printf("%c", word[i]);
	//	if (i == 9)
	//		printf("\n");
	//}
	//printf("%d\n", sizeof(word));
	printCArray(word, sizeof(word));

	printf("\n\n=== 문자열 자체를 출력 ===\n");
	printf("문자열 변수 word의 값 : %s\n", word);

	ToAscii(word, sizeof(word));

	return 0;
}

void printArray(int *pArray, int element)
{
	printf("\n\n=== printArray ===\n");
	//for (int i = 0; i < element; i++)
	//{
	//	printf("배열 arr 의 %d 번째 요소 : %d\n", i+1, pArray[i]);
	//}

	//printf("\n");

	for (int i = 0; i < element; i++)
	{
		printf("배열 arr 의 %2d 인덱스 값 : %2d", i, pArray[i]);
		if (pArray[i] == 0)
			printf(" => The Value Maby Dummy Value\n");
		else
			printf("\n");
	}
}

void printArray_f(float *pArray_f, int element)
{
	printf("\n\n=== printArray_f ===\n");
	//for (int i = 0; i < element; i++)
	//{
	//	printf("배열 arr 의 %d 번째 요소 : %d\n", i+1, pArray[i]);
	//}

	//printf("\n");

	for (int i = 0; i < element; i++)
	{
		printf("배열 arr 의 %2d 인덱스 값 : %.4f", i, pArray_f[i]);
		if (pArray_f[i] == 0)
			printf(" => The Value Maby Dummy Value\n");
		else
			printf("\n");
	}
}

void printCArray(char word[], int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%c", word[i]);
		//printf("word[%d]", i);
		//printf("%d", sizeof(word));
	}
	printf("\n");
}

void ToAscii(char word[], int num)
{
	printf("\n\n=== Change Char to ASCII CODE ===\n");
	for (int i = 0; i < num; i++)
	{
		if (word[i] == 0)
			continue;
		printf("%c is %3d in ASCII CODE\n", word[i], word[i]);
	}
}