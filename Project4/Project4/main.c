#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/*srand(time(NULL));
	int dice = rand() % 6 + 1;
	printf("주사위 값 : %d\n", dice);

	double value = (double)rand() / (double)RAND_MAX;
	printf("%17.15f" , value);*/

	// 1. 숫자의 부호를 판단 ("양수", "음수", "0")
	int num = 15;
	printf("%s\n", num > 0 ? "양수" : num < 0 ? "음수" : "0");
	// 2. 정수의 값을 기준으로 3의 배수이면서 5의 배수인지 판단
	printf("%s\n", num % 3 == 0 && num % 5 == 0 ? "3의 배수 이면서 5의 배수" : "3의 배수 이면서 5의 배수가 아님");
	// 3. 정수 세개를 기준으로 최대값 출력

	int num1 = 10;
	int num2 = 30;
	int num3 = 20;

	int max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;

	printf("최대값 : %d\n", max);

	// 4. 두개의 정수의 차이를 항상 양수로 표현
	// ex) 10 30 >>> 20    // 30 10 >>> 20
	int result = num1 - num2;
	printf("%d\n", result < 0 ? -result : result);

	// 5. 두 변수의 값을 교환
	printf("num1 : %d, num2 : %d\n", num1, num2);
	int tmp = num2;
	num2 = num1;
	num1 = tmp;
	printf("num1 : %d, num2 : %d\n", num1, num2);
}