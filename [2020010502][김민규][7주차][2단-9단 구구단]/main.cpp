#include<stdio.h>

int main(void)
{
	// ������ ����
	int i;
	int j;

	printf("2~9�ܱ��� �Է�:  ");
	scanf("%d", &i);
	
	// 2~9�� �� �� �Է½�
	if (i==1 || i >= 10)
	{
		printf("���� �ٽ� �Է��ϼ���");
	}

	else
	//���� �� �ݺ���
	for (j = 1; j <= 9; j++)
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}

	return 0;
}