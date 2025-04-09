#include <stdio.h>
int main(void)
{
	// 문장이 하나라면 블럭 생략
	//int score = 85;
	//char grade;
	//// 조건
	//// 90이상 A, 80이상 B, 나머지는 F
	//// 90~100 A, 80~89 B, 0~79 F
	//if (score >= 90) { // 90이상
	//	grade = 'A';
	//}
	//// 90미만
	//else if (score >= 80) {
	//	grade = 'B';
	//}
	//else {
	//	grade = 'F';
	//}
	//
	//
	//printf("점수 : %d, 학점 : %c", score, grade);

	//int a = 10, b = 30, c = 20;
	//int max = a;
	//if (max < b) {
	//	max = b;
	//}
	//if (max < c) {
	//	max = c;
	//}
	/*int i = 1;
	while (1 <= 10)
	{
		printf("%d\n", i);
		i++;
	}*/

	int i = 1, n, sum = 0;

	n = 100; // 100
	while (i <= n)
	{
		if (i % 2 == 0)
		{
			sum += i;
			printf("현재의 sum : %d, 현재의 i : %d\n", sum, i);
		}
		i++;
	}
	printf("1부터 %d까지의 합계는 %d\n", n, sum);

	// 현재의 반복문을 기반으로 
	// 1부터 100까지의 짝수의 합을 구하시오.
	// while, if 조합


	// 영대문자를 가로 출력 하시오.
	i = 'A';
	while (i <= 'Z')
	{
		printf("%c", i++);
	}

}