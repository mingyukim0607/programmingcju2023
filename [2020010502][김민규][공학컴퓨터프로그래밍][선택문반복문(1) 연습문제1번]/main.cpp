#include<stdio.h>

int main(void)
{
	// ������ ����
	int year, month, day, res, ans;

	//�Է°� ����
	printf("������� �Է��ϼ��� : "); 
	scanf("%d", &year);

	printf("������Է��ϼ���:");
	scanf("%d", &month);

	printf("����� �Է��ϼ��� : ");
	scanf("%d", &day);

	//(����⵵) - (��) + (��)
	res = year - month + day;

	//����� ������ �ڸ� �Ǵ�
	ans = res % 10;

	//If�� ��� ���
	if (ans == 0)
	{
		printf("very good\n");
	}
	else
	{
		printf("soso\n");
	}

	return 0;

}