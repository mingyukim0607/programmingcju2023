#include<stdio.h>

int rec_func(int n);				//�Լ� ����

int main(void)
{
	int a = 0;
	a = rec_func(10);
	printf("%d\n", a);

	return 0;
}

int rec_func(int n)
{
	if (n == 0)						// if �� n==0�Ͻ� �ٽ� n���� ���ư�
	{
		return n;					// �̶��� return 0; �̹Ƿ� �Լ� ���� 	
	}
	n = n + rec_func(n - 1);		//10~1���� ���ϴ� ���ȣ�� �Լ�
	return n;
}

