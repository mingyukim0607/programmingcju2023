#include<stdio.h>

void input_nums(int* lotto_nums);		//�迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto_nums);		//�迭�� ����� ���� ����ϴ� �Լ�

int main(void)
{
	int lotto_nums[10];			//�ζ� ��ȣ�� ������ �迭

	input_nums(lotto_nums);		//�Է� �Լ� ȣ��
	print_nums(lotto_nums);		//��� �Լ� ȣ��

	return 0;
}

void input_nums(int* lotto_nums)
{
	int num;
	int i, j;
	int dup;			//�ߺ��Ǵ� ����

	for (i = 0; i < 10; i++)
	{
		printf("��ȣ�Է� :");
		scanf("%d", &num);
		dup = 0;						//�ߺ�����(dup) �ʱⰪ 0
		for (j = 0; j < i; j++)
		{
			if (num == lotto_nums[j])	//�迭�� �ڷ���(num)�� ���� ���
			{
				dup = 1;
				break;					//�ߺ�����(dup) 1�� �Ǹ鼭 �ݺ��� ���´�
			}
		}
		if (!dup)						//�ߺ�����(dup)�� 0�� ���
		{
			lotto_nums[i] = num;
		}
		else							//�ߺ�����(dup)�� 1�� ���(��, ���� ���� ���� ���) 
		{
			printf("������ȣ�� �ֽ��ϴ�\n");
			i--;
		}
		
	}
}

void print_nums(int* lotto_nums) 
{
	int i;

	printf("�ζ� ��ȣ :");
	
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", lotto_nums[i]);			//�迭�� �Է¹޴� �ڷ��� ���
	}
}
