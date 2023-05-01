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
	//printf("          변수 A의 값 : %2d, 주소 : %d\n", A, &A);
	//printf("          변수 B의 값 : %2d, 주소 : %d\n", B, &B);
	//printf("          변수 C의 값 : %2d, 주소 : %d\n", C, &C);


	//printf("\n\n=== 포인터 변수로 값, 주소 출력 ===\n");
	//int *pVar;
	//pVar = &A;
	//printValueAdress(pVar);
	//pVar = &B;
	//printValueAdress(pVar);
	//pVar = &C;
	//printValueAdress(pVar);

	//printf("\n\n=== 포인터 변수의 값에 3 곱하기 ===\n");
	//pVar = &A;
	//mul3ValueAdress(pVar);
	//pVar = &B;
	//mul3ValueAdress(pVar);
	//pVar = &C;
	//mul3ValueAdress(pVar);

	//printf("\n\n=== 변수의 값, 주소 출력 ===\n");
	//printf("          변수 A의 값 : %2d, 주소 : %d\n", A, &A);
	//printf("          변수 B의 값 : %2d, 주소 : %d\n", B, &B);
	//printf("          변수 C의 값 : %2d, 주소 : %d\n", C, &C);

	//int *pVar2;
	//printf("\n\n=== 다른 포인터 변수로 값, 주소 출력 ===\n");
	//pVar2 = &A;
	//printValueAdress2(pVar2);
	//pVar2 = &B;
	//printValueAdress2(pVar2);
	//pVar2 = &C;
	//printValueAdress2(pVar2);

	//printf("\n\n=== 다른 포인터 변수의 값에 3 곱하기 ===\n");
	//pVar2 = &A;
	//mul3ValueAdress2(pVar2);
	//pVar2 = &B;
	//mul3ValueAdress2(pVar2);
	//pVar2 = &C;
	//mul3ValueAdress2(pVar2);

	//printf("\n\n=== 변수의 값, 주소 출력 ===\n");
	//printf("          변수 A의 값 : %2d, 주소 : %d\n", A, &A);
	//printf("          변수 B의 값 : %2d, 주소 : %d\n", B, &B);
	//printf("          변수 C의 값 : %2d, 주소 : %d\n", C, &C);

	//printf("\n\n=== 포인터 변수의 값, 주소 출력 ===\n");
	//printf("          포인터 변수 pVAr의 주소  : %d\n", &pVar);
	//printf("          포인터 변수 pVar2의 주소 : %d\n", &pVar2);

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
	//printf("arr의 값 : %d, 주소 : %d\n", arr, &arr);
	//printf("arr[0]의 값 : %8d, 주소 : %d\n", arr[0], &arr[0]);
	//printf("arr의 실제 값 : %6d\n", *arr);

	//int num1 = 10;
	//int num2 = 20;
	//printf("       변수 num1의 값 : %2d, 주소 : %d\n", num1, &num1);
	//printf("       변수 num2의 값 : %2d, 주소 : %d\n", num2, &num2);

	//swap(num1, num2);
	//printf("\n\n==========         swap 함수         ==========\n");
	//printf("       변수 num1의 값 : %2d, 주소 : %d\n", num1, &num1);
	//printf("       변수 num2의 값 : %2d, 주소 : %d\n", num2, &num2);

	//swap_addr(&num1, &num2);
	//printf("\n\n==========       swap_addr 함수       ==========\n");
	//printf("       변수 num1의 값 : %2d, 주소 : %d\n", num1, &num1);
	//printf("       변수 num2의 값 : %2d, 주소 : %d\n", num2, &num2);

	srand(time(NULL));
	int arrC[5] = { 1, 2, 3, 4, 5 };
	printArrC(arrC, 5);

	changeArr(arrC);
	printArrC(arrC, 5);

	return 0;
}

void printValueAdress(int *pVar)
{
	printf("포인터 변수 pVar의 값 : %2d, 주소 : %d\n", *pVar, pVar);
}

void mul3ValueAdress(int *pVar)
{
	*pVar *= 3;
	printf("포인터 변수 pVar의 값 : %2d, 주소 : %d\n", *pVar, pVar);
}

void printValueAdress2(int *pVar2)
{
	printf("포인터 변수 pVar2의 값 : %2d, 주소 : %d\n", *pVar2, pVar2);
}

void mul3ValueAdress2(int *pVar2)
{
	*pVar2 *= 3;
	printf("포인터 변수 pVar의 값 : %2d, 주소 : %d\n", *pVar2, pVar2);
}

void printArr(int arr[], int num)
{
	printf("        배열 arr의 요소 : ");
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
	printf("포인터 변수 pArr의 요소 : ");
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
	//printf("       변수 num1의 값 : %2d, 주소 : %d\n", num1, &num1);
	//printf("       변수 num2의 값 : %2d, 주소 : %d\n", num2, &num2);
}

void swap_addr(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	//printf("       변수 num1의 값 : %d\n", *num1);
	//printf("       변수 num2의 값 : %d\n", *num2);
}

void printArrC(int arrC[], int num)
{
	printf("        배열 arrC의 요소 : ");
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