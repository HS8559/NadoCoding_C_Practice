#include <stdio.h>

int main_basic(void)
{
	int age = 20;
	float height = 173.1234567f;
	double weight = 63.1234567;

	printf("나이는 : %d\n", age);
	printf("int 형의 크기는 : %d Byte\n\n", sizeof(int));

	printf("키는 : %f\n", height);
	printf("키는 : %.1f      (소수점 아래 첫째 자리)\n", height);
	printf("키는 : %.2f     (소수점 아래 둘째 자리)\n", height);
	printf("키는 : %.3f    (소수점 아래 셋째 자리)\n", height);
	printf("키는 : %.4f   (소수점 아래 네째 자리)\n", height);
	printf("키는 : %.5f  (소수점 아래 다섯째 자리)\n", height);
	printf("키는 : %.6f (소수점 아래 여섯째 자리)\n", height);
	printf("키는 : %.7f(소수점 아래 일곱째 자리)\n", height);
	printf("float 형의 크기는 : %d Byte\n\n", sizeof(float));

	printf("몸무게는 : %lf\n", weight);
	printf("몸무게는 : %.1lf      (소수점 아래 첫째 자리)\n", weight);
	printf("몸무게는 : %.2lf     (소수점 아래 둘째 자리)\n", weight);
	printf("몸무게는 : %.3lf    (소수점 아래 셋째 자리)\n", weight);
	printf("몸무게는 : %.4lf   (소수점 아래 넷째 자리)\n", weight);
	printf("몸무게는 : %.5lf  (소수점 아래 다섯째 자리)\n", weight);
	printf("몸무게는 : %.6lf (소수점 아래 여섯째 자리)\n", weight);
	printf("몸무게는 : %.7lf(소수점 아래 일곱째 자리)\n", weight);
	printf("double 형의 크기는 : %d Byte\n\n", sizeof(double));

	const int CNT = 20;
	printf("상수 CNT의 값 : %d\n\n", CNT);
	//CNT = 40; // Error 발생

	int input_int;
	printf("변수 input_int에 저장할 값(정수)을 입력하세요 : ");
	scanf_s("%d", &input_int);
	printf("변수 input_int에 저장하신 값(정수)은 '%d' 입니다.\n\n", input_int);

	char input_str[256];
	printf("변수 input_str에 저장할 값(문자열)을 입력하세요 : ");
	scanf_s("%s", input_str, sizeof(input_str));
	printf("변숫 input_str에 저장하신 값(문자열)은 '%s' 입니다.\n\n", input_str);

	return 0;
}