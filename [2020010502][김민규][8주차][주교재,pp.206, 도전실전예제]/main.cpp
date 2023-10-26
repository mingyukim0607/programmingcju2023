#include<stdio.h>

int rec_func(int n);				//함수 선언

int main(void)
{
	int a = 0;
	a = rec_func(10);
	printf("%d\n", a);

	return 0;
}

int rec_func(int n)
{
	if (n == 0)						// if 문 n==0일시 다시 n으로 돌아감
	{
		return n;					// 이때는 return 0; 이므로 함수 종료 	
	}
	n = n + rec_func(n - 1);		//10~1까지 더하는 재귀호출 함수
	return n;
}

