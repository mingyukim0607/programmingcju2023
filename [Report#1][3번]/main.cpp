#include<stdio.h>

int main(void)
{
	// year 정수지정
	int year;

	//입력값 지정
	printf("년도를 입력해주세요 : ");
	scanf("%d", &year);

	//윤력 판단 공식
	if ((year % 4 == 0 && year % 400 == 0) || (year % 100 != 0))
		printf("윤년입니다.", year);

	else
		printf("윤년이 아닙니다.", year);

	return 0;
}