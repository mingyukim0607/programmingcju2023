#include<stdio.h>

int main(void)
{
	// ������ ����
	int i;
	int j;
	int res{};
		
		// ���Է� �ݺ���
		for (i = 0; i < 5; i++)
		{
			printf("���� �Է��ϼ��� : ");
			scanf("%d", &j);
			res += j;
		}

		//�ù�, ���˻� ���� if��

		if (res % 5 == 3)
		{
			printf("������, suspect");
		}
		else
		{
			printf("�ù�, Citizen");
		}

	return 0;
}