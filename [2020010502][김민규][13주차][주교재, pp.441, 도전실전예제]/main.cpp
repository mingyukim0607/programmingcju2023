#include<stdio.h>

int main(void)
{
	//5 x 6 �迭 ���� 
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
				ary[4][j] += ary[i][j];			//ù ��° ���� ��
				ary[i][5] += ary[i][j];			//ù ��° ���� ��
				ary[4][5] += ary[i][j];			//1���� 20������ ��
			}
	}

	// �� �迭�� �ڷ��� ���
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