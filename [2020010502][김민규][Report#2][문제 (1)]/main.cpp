#include<stdio.h>

// 정수값 설정 
int a, b;
int big, small, m, g, gcm, lcm;

//최대공약수 최소공배수 함수 
int find_GCD_LCM(int a)
{
	// if문
	if (a > b)
	{
		big = a;
		small = b;
	}
	else
	{
		big = b;
		small = a;
	}

	//최대공약수 공식
	while (1)
	{
		m = big / small;
		g = big % small;

		// g==0 일 시 최대공약수 값 확인  
		if (g == 0)
		{
			break;
		}

		big = small;
		small = g;
	}

	//최대공약수, 최소공배수 결과값 대입 
	gcm = small;
	lcm = (a * b) / gcm;

	return 0;
}

//main 함수 
int main(void)
{
	printf("두 정수를 입력하세요 :\n");
	scanf("%d %d", &a, &b);

	//결과값
	find_GCD_LCM(a);
	{
		printf("최대공약수(GCM) = %d\n", gcm);
		printf("최소공배수(LCM) = %d\n", lcm);
	}

	return 0;
}