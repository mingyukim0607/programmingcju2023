#include<stdio.h>

int main(void)
{
	// year ��������
	int year;

	//�Է°� ����
	printf("�⵵�� �Է����ּ��� : ");
	scanf("%d", &year);

	//���� �Ǵ� ����
	if ((year % 4 == 0 && year % 400 == 0) || (year % 100 != 0))
		printf("�����Դϴ�.", year);

	else
		printf("������ �ƴմϴ�.", year);

	return 0;
}