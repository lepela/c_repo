#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x;
	scanf("%d", &x);

	/*if (x > 0)
		printf("positive1\n");
		printf("positive2\n");
		printf("positive3\n");
	printf("always!");*/

	/*if (x % 3 == 0) 
	{
		printf("%d = %d + %d\n", x, 3, x / 3);
	}

	if (x % 5 == 0)
	{
		printf("%d = %d + %d\n", x, 5, x / 5);
	}

	if (x % 7 == 0)
	{
		printf("%d = %d + %d\n", x, 7, x / 7);
	}*/

	/*if (x > 0)
	{
		printf("양수");
		if (x % 2 == 0) 
		{
			printf("짝수");
		}
	}*/

	// 교재의 조건 + 1일보다 작거나 31일보다 크거나 경우. 잘못된 입력이라고 출력
	int range = 0;
	if (x >= 1 && x <= 31) {
		range = 1;
	}
	x %= 7; // x = x % 7 순환
	if(range) {
		if (x == 0 /*일요일*/ || x == 6 /*토요일*/) {
			printf("주말\n");
			if (x == 0) {
				printf("일요일");
			}
			if (x == 6) {
				printf("토요일");
			}
		}
		//if (!(x == 0 /*일요일*/ || x == 6 /*토요일*/)) {
		else {
			printf("주중\n");
		}
	}
	//if (!range) {
	else {
		printf("잘못된 입력\n");
	}


	// else : 단독사용 불가, 반드시 종속 if가 존재해야함.
}