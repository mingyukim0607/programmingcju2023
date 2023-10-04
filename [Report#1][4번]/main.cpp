#include<stdio.h>

int main(void)
{
	// 정수 설정
	// pay = 투입한 금액, cost =물건값 , change = 잔돈
	int pay;
	int cost;
	int change;

	//입력값 설정 
	printf("투입한 금액: ");
	scanf("%d", &pay);
	printf("물건값:");
	scanf(" %d", &cost);

	//잔돈 공식
	(change = pay - cost);

	printf("1000원: %d장\n", change / 1000);
	change = change % 1000;
	printf("500원: %d장\n", change / 500);
	change = change % 500;
	printf("100원: %d장\n", change / 100);
	change = change % 100;

	return 0;
}