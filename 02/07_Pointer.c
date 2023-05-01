#include <stdio.h>
#include <time.h>

void printValueAdress(int *pVar);
void mul3ValueAdress(int *pVar);
void printValueAdress2(int *pVar2);
void mul3ValueAdress2(int *pVar2);
void printArr(int arr[], int num);
void printpArr(int arr[], int num);
void swap(int num1, int num2);
void swap_addr(int *num1, int *num2);
void printArrC(int arrC[], int num);
void changeArr(int *arrC);

int main_07pointer(void)
{
	//int A = 1;
	//int B = 2;
	//int C = 3;
	//printf("          ���� A�� �� : %2d, �ּ� : %d\n", A, &A);
	//printf("          ���� B�� �� : %2d, �ּ� : %d\n", B, &B);
	//printf("          ���� C�� �� : %2d, �ּ� : %d\n", C, &C);


	//printf("\n\n=== ������ ������ ��, �ּ� ��� ===\n");
	//int *pVar;
	//pVar = &A;
	//printValueAdress(pVar);
	//pVar = &B;
	//printValueAdress(pVar);
	//pVar = &C;
	//printValueAdress(pVar);

	//printf("\n\n=== ������ ������ ���� 3 ���ϱ� ===\n");
	//pVar = &A;
	//mul3ValueAdress(pVar);
	//pVar = &B;
	//mul3ValueAdress(pVar);
	//pVar = &C;
	//mul3ValueAdress(pVar);

	//printf("\n\n=== ������ ��, �ּ� ��� ===\n");
	//printf("          ���� A�� �� : %2d, �ּ� : %d\n", A, &A);
	//printf("          ���� B�� �� : %2d, �ּ� : %d\n", B, &B);
	//printf("          ���� C�� �� : %2d, �ּ� : %d\n", C, &C);

	//int *pVar2;
	//printf("\n\n=== �ٸ� ������ ������ ��, �ּ� ��� ===\n");
	//pVar2 = &A;
	//printValueAdress2(pVar2);
	//pVar2 = &B;
	//printValueAdress2(pVar2);
	//pVar2 = &C;
	//printValueAdress2(pVar2);

	//printf("\n\n=== �ٸ� ������ ������ ���� 3 ���ϱ� ===\n");
	//pVar2 = &A;
	//mul3ValueAdress2(pVar2);
	//pVar2 = &B;
	//mul3ValueAdress2(pVar2);
	//pVar2 = &C;
	//mul3ValueAdress2(pVar2);

	//printf("\n\n=== ������ ��, �ּ� ��� ===\n");
	//printf("          ���� A�� �� : %2d, �ּ� : %d\n", A, &A);
	//printf("          ���� B�� �� : %2d, �ּ� : %d\n", B, &B);
	//printf("          ���� C�� �� : %2d, �ּ� : %d\n", C, &C);

	//printf("\n\n=== ������ ������ ��, �ּ� ��� ===\n");
	//printf("          ������ ���� pVAr�� �ּ�  : %d\n", &pVar);
	//printf("          ������ ���� pVar2�� �ּ� : %d\n", &pVar2);

	//int arr[5] = { 0, 0, 0, 0, 0 };
	//printArr(arr, 5);
	//int *pArr = arr;
	//printpArr(pArr, 5);

	//printf("\n");
	//pArr[0] = 3;
	//pArr[2] = 5;
	//pArr[4] = 7;
	//printArr(arr, 5);
	//printpArr(pArr, 5);

	//printf("\n");
	//printf("arr�� �� : %d, �ּ� : %d\n", arr, &arr);
	//printf("arr[0]�� �� : %8d, �ּ� : %d\n", arr[0], &arr[0]);
	//printf("arr�� ���� �� : %6d\n", *arr);

	//int num1 = 10;
	//int num2 = 20;
	//printf("       ���� num1�� �� : %2d, �ּ� : %d\n", num1, &num1);
	//printf("       ���� num2�� �� : %2d, �ּ� : %d\n", num2, &num2);

	//swap(num1, num2);
	//printf("\n\n==========         swap �Լ�         ==========\n");
	//printf("       ���� num1�� �� : %2d, �ּ� : %d\n", num1, &num1);
	//printf("       ���� num2�� �� : %2d, �ּ� : %d\n", num2, &num2);

	//swap_addr(&num1, &num2);
	//printf("\n\n==========       swap_addr �Լ�       ==========\n");
	//printf("       ���� num1�� �� : %2d, �ּ� : %d\n", num1, &num1);
	//printf("       ���� num2�� �� : %2d, �ּ� : %d\n", num2, &num2);

	srand(time(NULL));
	int arrC[5] = { 1, 2, 3, 4, 5 };
	printArrC(arrC, 5);

	changeArr(arrC);
	printArrC(arrC, 5);

	return 0;
}

void printValueAdress(int *pVar)
{
	printf("������ ���� pVar�� �� : %2d, �ּ� : %d\n", *pVar, pVar);
}

void mul3ValueAdress(int *pVar)
{
	*pVar *= 3;
	printf("������ ���� pVar�� �� : %2d, �ּ� : %d\n", *pVar, pVar);
}

void printValueAdress2(int *pVar2)
{
	printf("������ ���� pVar2�� �� : %2d, �ּ� : %d\n", *pVar2, pVar2);
}

void mul3ValueAdress2(int *pVar2)
{
	*pVar2 *= 3;
	printf("������ ���� pVar�� �� : %2d, �ּ� : %d\n", *pVar2, pVar2);
}

void printArr(int arr[], int num)
{
	printf("        �迭 arr�� ��� : ");
	for (int i = 0; i < num; i++)
	{
		if (i == num-1)
		{
			printf("%d\n", arr[i]);
			break;
		}
		printf("%d, ", arr[i]);
	}
}

void printpArr(int pArr[], int num)
{
	printf("������ ���� pArr�� ��� : ");
	for (int i = 0; i < num; i++)
	{
		if (i == 4)
		{
			printf("%d\n", pArr[i]);
			break;
		}
		printf("%d, ", pArr[i]);
	}
}

void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	//printf("       ���� num1�� �� : %2d, �ּ� : %d\n", num1, &num1);
	//printf("       ���� num2�� �� : %2d, �ּ� : %d\n", num2, &num2);
}

void swap_addr(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	//printf("       ���� num1�� �� : %d\n", *num1);
	//printf("       ���� num2�� �� : %d\n", *num2);
}

void printArrC(int arrC[], int num)
{
	printf("        �迭 arrC�� ��� : ");
	for (int i = 0; i < num; i++)
	{
		if (i == num-1)
		{
			printf("%2d\n", arrC[i]);
			break;
		}
		printf("%2d, ", arrC[i]);
	}
}

void changeArr(int *arrC)
{
	arrC[rand() % 5] = rand() % 50;
	arrC[rand() % 5] = rand() % 50;
	arrC[rand() % 5] = rand() % 50;
}