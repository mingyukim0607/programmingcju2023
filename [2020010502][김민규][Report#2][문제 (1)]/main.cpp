#include<stdio.h>

// ������ ���� 
int a, b;
int big, small, m, g, gcm, lcm;

//�ִ����� �ּҰ���� �Լ� 
int find_GCD_LCM(int a)
{
	// if��
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

	//�ִ����� ����
	while (1)
	{
		m = big / small;
		g = big % small;

		// g==0 �� �� �ִ����� �� Ȯ��  
		if (g == 0)
		{
			break;
		}

		big = small;
		small = g;
	}

	//�ִ�����, �ּҰ���� ����� ���� 
	gcm = small;
	lcm = (a * b) / gcm;

	return 0;
}

//main �Լ� 
int main(void)
{
	printf("�� ������ �Է��ϼ��� :\n");
	scanf("%d %d", &a, &b);

	//�����
	find_GCD_LCM(a);
	{
		printf("�ִ�����(GCM) = %d\n", gcm);
		printf("�ּҰ����(LCM) = %d\n", lcm);
	}

	return 0;
}