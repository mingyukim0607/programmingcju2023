#include<stdio.h>

int main(void)
{
	//5 x 6 배열 설정 
	int ary[5][6] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	int i,j;

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 5; j++)
			{
				ary[4][j] += ary[i][j];			//첫 번째 열의 합
				ary[i][5] += ary[i][j];			//첫 번째 행의 합
				ary[4][5] += ary[i][j];			//1부터 20까지의 합
			}
	}

	// 각 배열의 자료형 출력
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}