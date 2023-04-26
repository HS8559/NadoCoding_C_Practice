#include <stdio.h>
#include <time.h>

void numPrint(int num);
int numSum(int *num);
int newNum();
void paramPass(int num1, int num2);
int addF(int num1, int num2);
int subF(int num1, int num2);
int mulF(int num1, int num2);
int divF(int num1, int num2);

int main_fuction(void)
{
	srand(time(NULL));

	int num = rand() % 10 + 1;

	numPrint(num);

	num += 1;
	numPrint(num);

	num -= 2;
	numPrint(num);

	num *= 5;
	numPrint(num);

	printf("\n\n==========================\n");
	numSum(&num);
	printf("%d\n", num);
	numPrint(num);

	printf("\n\n==========================\n");
	int func = newNum();
	numPrint(func);
	paramPass(num, func);

	printf("\n\n==========================\n");
	int num1 = newNum();
	int num2 = newNum();
	numPrint(num1);
	numPrint(num2);

	int result = addF(num1, num2);
	numPrint(result);

	result = subF(num1, num2);
	numPrint(result);

	result = mulF(num1, num2);
	numPrint(result);

	result = divF(num1, num2);
	numPrint(result);

	return 0;
}

void numPrint(int num)
{
	printf("������ ���� %d �Դϴ�.\n", num);
}

int numSum(int *num)
{
	num += 20;
	return num;
}

int newNum()
{
	return rand() % 5 + 1;
}

void paramPass(int num1, int num2)
{
	//printf("변수의 값은 %d, %d 입니다.", num1, num2);
	numPrint(num1);
	numPrint(num2);
}

int addF(int num1, int num2)
{
	return num1 + num2;
}

int subF(int num1, int num2)
{
	return num1 - num2;
}

int mulF(int num1, int num2)
{
	return num1 * num2;
}

int divF(int num1, int num2)
{
	return num1 / num2;
}