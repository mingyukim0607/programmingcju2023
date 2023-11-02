#include<stdio.h>

int main(void)
{
	// 정수값 설정
	int i;
	int j;
	int res{};
		
		// 값입력 반복문
		for (i = 0; i < 5; i++)
		{
			printf("값을 입력하세요 : ");
			scanf("%d", &j);
			res += j;
		}

		//시민, 범죄사 구별 if문

		if (res % 5 == 3)
		{
			printf("범죄자, suspect");
		}
		else
		{
			printf("시민, Citizen");
		}

	return 0;
}