#include<stdio.h>

//���� �Լ�
int sum(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}

//���� �Լ�
int sub(int x, int y)
{
	int sub;
	sub = x - y;
	return sub;
}

//���� �Լ�
int mul(int x, int y)
{
	int mul;
	mul = x * y;
	return mul;
}

//������ �Լ�
int div(int x, int y)
{
	int div;
	div = x / y;
	return div;
}

//������ ���� �Լ�
int lef(int x, int y)
{
	int lef;
	lef = x % y;
	return lef;
}


int main(void)
{
	//������ x,y ����
	int x, y;

	//�Է°� �ޱ�
	printf("��Ģ���� ���α׷��Դϴ�.\n\nù��°, ������ �Է� :");
	scanf("%d", &x);
	printf("�ι�°, �������� �Է� :");
	scanf("%d",&y);

	// ����� ���
	printf("\n<�����>\n");
	printf("���� : %d + %d = =%d\n", x, y, sum(x, y));
	printf("���� : %d - %d = =%d\n", x, y, sub(x, y));
	printf("���� : %d * %d = =%d\n", x, y, mul(x, y));
	printf("������ : %d / %d = =%d\n", x, y, div(x, y));
	printf("������ ���� : %d / %d =%d\n", x, y, lef(x, y));

	return 0;

}