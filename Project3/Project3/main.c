#include <stdio.h>
#pragma	warning(disable:4996)

int main(void) 
{
	// ���ڸ� �ϳ� �Է¹޾� �� ���� ������ ���� ���� Ȯ��
	// var, scanf
	//char ch;
	//printf("���ڸ� �ϳ� �Է��ϼ��� > ");
	//scanf("%c", &ch);

	// 1 + 3 * 2

	/*printf("%c\n", ch);
	printf("%d\n", ch);
	printf("%d\n", 'A');*/
	//printf("%d", ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');

	//printf("%c", 5 > 10 ? 'A' : 'B');

	int x = 10;
	x = x + 5;
	x += 5;
	//x = x % 7;
	x %= 7;
	x++;
	++x;
	x = x++ + ++x;
	//printf("x : %d\n", x);
	int y = 1e3;
	// 

	// long int 8byte : -2^63 ~ 2^63 - 1
	// double 8byte : 5e-320 ~ 1.6e308

	int a, b, c;
	printf("���ڸ� ���� ������ �������� �Է� > ");
	scanf("%d %d %d", &a, &b, &c);
	float avg = (float)(a + b + c) / 3.f;
	printf("%f", avg);

	return 0;
}
