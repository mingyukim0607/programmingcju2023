#include<stdio.h>

int main(void)
{
	int size;

	printf("�����ѷ��� �Է��ϼ��� :");
	scanf("%d", &size);

	if (size <= 90)
	{
	size = 'S';
	}

	else if ((size >= 90) && (size <= 100))
	{
	size = 'M';
	}
	else
	{
	size = 'L';
	}

	printf("������� %c�Դϴ�.\n", size);
	return 0;
}
