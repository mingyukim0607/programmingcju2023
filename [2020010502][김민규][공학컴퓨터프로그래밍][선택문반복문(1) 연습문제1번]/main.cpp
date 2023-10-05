#include<stdio.h>

int main(void)
{
	// 정수값 설정
	int year, month, day, res, ans;

	//입력값 설정
	printf("출생연도 입력하세요 : "); 
	scanf("%d", &year);

	printf("출생월입력하세요:");
	scanf("%d", &month);

	printf("출생날 입력하세요 : ");
	scanf("%d", &day);

	//(출생년도) - (월) + (일)
	res = year - month + day;

	//결과값 마지막 자리 판단
	ans = res % 10;

	//If문 결과 출력
	if (ans == 0)
	{
		printf("very good\n");
	}
	else
	{
		printf("soso\n");
	}

	return 0;

}