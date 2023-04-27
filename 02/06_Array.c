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
	////	printf("�迭 arr �� %d ��° ��� : %d\n", i+1, arr[i]);
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
	printf("\n\n���� ���� letter�� �� : %c\n", letter);

	char word[] = "PowerShell";

	printf("\n\n=== ��ҷ� ���ڿ� ��� ===\n");
	printf("���ڿ� ���� word�� �� : ");
	//for (int i = 0; i < sizeof(word); i++)
	//{
	//	printf("%c", word[i]);
	//	if (i == 9)
	//		printf("\n");
	//}
	//printf("%d\n", sizeof(word));
	printCArray(word, sizeof(word));

	printf("\n\n=== ���ڿ� ��ü�� ��� ===\n");
	printf("���ڿ� ���� word�� �� : %s\n", word);

	ToAscii(word, sizeof(word));

	return 0;
}

void printArray(int *pArray, int element)
{
	printf("\n\n=== printArray ===\n");
	//for (int i = 0; i < element; i++)
	//{
	//	printf("�迭 arr �� %d ��° ��� : %d\n", i+1, pArray[i]);
	//}

	//printf("\n");

	for (int i = 0; i < element; i++)
	{
		printf("�迭 arr �� %2d �ε��� �� : %2d", i, pArray[i]);
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
	//	printf("�迭 arr �� %d ��° ��� : %d\n", i+1, pArray[i]);
	//}

	//printf("\n");

	for (int i = 0; i < element; i++)
	{
		printf("�迭 arr �� %2d �ε��� �� : %.4f", i, pArray_f[i]);
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