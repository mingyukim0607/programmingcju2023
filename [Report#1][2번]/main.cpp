#include<stdio.h>

int main(void)
{
	//x = ��(month) ������ ���� ����
	int x;

	//�Է°� ����
	printf("������ ���Ͻô� ���� �Է����ּ���:");
	scanf("%d", &x);

	//&&(and) ����Ͽ� ���� ���� ����
	if (x >= 1 && x <= 3)

		printf("���Դϴ�");

	else if (x >= 4 && x <= 6)

		printf("�����Դϴ�");

	else if (x >= 7 && x <= 9)

		printf("�����Դϴ�");

	else if (x >= 10 && x <= 12)

		printf("�ܿ��Դϴ�");

	//1~12�� �� �޷� �Է½� Ʋ���� ����
	else
		printf("�������� �ʴ� ���Դϴ�.");



	return 0;

}