#include<stdio.h>

int main(void)
{
	//x = 달(month) 임의의 정수 설정
	int x;

	//입력값 설정
	printf("계절을 원하시는 달을 입력해주세요:");
	scanf("%d", &x);

	//&&(and) 사용하여 계절 범위 설정
	if (x >= 1 && x <= 3)

		printf("봄입니다");

	else if (x >= 4 && x <= 6)

		printf("여름입니다");

	else if (x >= 7 && x <= 9)

		printf("가을입니다");

	else if (x >= 10 && x <= 12)

		printf("겨울입니다");

	//1~12월 외 달력 입력시 틀리값 설정
	else
		printf("존재하지 않는 달입니다.");



	return 0;

}