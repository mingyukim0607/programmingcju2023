#include<stdio.h>

int main(void)
{
	// ���� ����
	// pay = ������ �ݾ�, cost =���ǰ� , change = �ܵ�
	int pay;
	int cost;
	int change;

	//�Է°� ���� 
	printf("������ �ݾ�: ");
	scanf("%d", &pay);
	printf("���ǰ�:");
	scanf(" %d", &cost);

	//�ܵ� ����
	(change = pay - cost);

	printf("1000��: %d��\n", change / 1000);
	change = change % 1000;
	printf("500��: %d��\n", change / 500);
	change = change % 500;
	printf("100��: %d��\n", change / 100);
	change = change % 100;

	return 0;
}