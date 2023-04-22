#include <stdio.h>

int main_basic(void)
{
	int age = 20;
	float height = 173.1234567f;
	double weight = 63.1234567;

	printf("���̴� : %d\n", age);
	printf("int ���� ũ��� : %d Byte\n\n", sizeof(int));

	printf("Ű�� : %f\n", height);
	printf("Ű�� : %.1f      (�Ҽ��� �Ʒ� ù° �ڸ�)\n", height);
	printf("Ű�� : %.2f     (�Ҽ��� �Ʒ� ��° �ڸ�)\n", height);
	printf("Ű�� : %.3f    (�Ҽ��� �Ʒ� ��° �ڸ�)\n", height);
	printf("Ű�� : %.4f   (�Ҽ��� �Ʒ� ��° �ڸ�)\n", height);
	printf("Ű�� : %.5f  (�Ҽ��� �Ʒ� �ټ�° �ڸ�)\n", height);
	printf("Ű�� : %.6f (�Ҽ��� �Ʒ� ����° �ڸ�)\n", height);
	printf("Ű�� : %.7f(�Ҽ��� �Ʒ� �ϰ�° �ڸ�)\n", height);
	printf("float ���� ũ��� : %d Byte\n\n", sizeof(float));

	printf("�����Դ� : %lf\n", weight);
	printf("�����Դ� : %.1lf      (�Ҽ��� �Ʒ� ù° �ڸ�)\n", weight);
	printf("�����Դ� : %.2lf     (�Ҽ��� �Ʒ� ��° �ڸ�)\n", weight);
	printf("�����Դ� : %.3lf    (�Ҽ��� �Ʒ� ��° �ڸ�)\n", weight);
	printf("�����Դ� : %.4lf   (�Ҽ��� �Ʒ� ��° �ڸ�)\n", weight);
	printf("�����Դ� : %.5lf  (�Ҽ��� �Ʒ� �ټ�° �ڸ�)\n", weight);
	printf("�����Դ� : %.6lf (�Ҽ��� �Ʒ� ����° �ڸ�)\n", weight);
	printf("�����Դ� : %.7lf(�Ҽ��� �Ʒ� �ϰ�° �ڸ�)\n", weight);
	printf("double ���� ũ��� : %d Byte\n\n", sizeof(double));

	const int CNT = 20;
	printf("��� CNT�� �� : %d\n\n", CNT);
	//CNT = 40; // Error �߻�

	int input_int;
	printf("���� input_int�� ������ ��(����)�� �Է��ϼ��� : ");
	scanf_s("%d", &input_int);
	printf("���� input_int�� �����Ͻ� ��(����)�� '%d' �Դϴ�.\n\n", input_int);

	char input_str[256];
	printf("���� input_str�� ������ ��(���ڿ�)�� �Է��ϼ��� : ");
	scanf_s("%s", input_str, sizeof(input_str));
	printf("���� input_str�� �����Ͻ� ��(���ڿ�)�� '%s' �Դϴ�.\n\n", input_str);

	return 0;
}