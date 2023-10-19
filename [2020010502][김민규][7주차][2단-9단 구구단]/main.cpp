#include<stdio.h>

int main(void)
{
	// 정수값 설정
	int i;
	int j;

	printf("2~9단까지 입력:  ");
	scanf("%d", &i);
	
	// 2~9단 외 값 입력시
	if (i==1 || i >= 10)
	{
		printf("값을 다시 입력하세요");
	}

	else
	//곱할 값 반복문
	for (j = 1; j <= 9; j++)
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}

	return 0;
}