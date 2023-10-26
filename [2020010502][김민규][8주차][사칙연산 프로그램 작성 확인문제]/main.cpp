#include<stdio.h>

//덧셈 함수
int sum(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}

//뺄셈 함수
int sub(int x, int y)
{
	int sub;
	sub = x - y;
	return sub;
}

//곱셈 함수
int mul(int x, int y)
{
	int mul;
	mul = x * y;
	return mul;
}

//나눗셈 함수
int div(int x, int y)
{
	int div;
	div = x / y;
	return div;
}

//나머지 연산 함수
int lef(int x, int y)
{
	int lef;
	lef = x % y;
	return lef;
}


int main(void)
{
	//정수값 x,y 설정
	int x, y;

	//입력값 받기
	printf("사칙연산 프로그램입니다.\n\n첫번째, 정수값 입력 :");
	scanf("%d", &x);
	printf("두번째, 정수값을 입력 :");
	scanf("%d",&y);

	// 결과값 출력
	printf("\n<결과값>\n");
	printf("덧셈 : %d + %d = =%d\n", x, y, sum(x, y));
	printf("뺄셈 : %d - %d = =%d\n", x, y, sub(x, y));
	printf("곱셉 : %d * %d = =%d\n", x, y, mul(x, y));
	printf("나눗셈 : %d / %d = =%d\n", x, y, div(x, y));
	printf("나머지 연산 : %d / %d =%d\n", x, y, lef(x, y));

	return 0;

}