#include <stdio.h>
#include <string.h>			//strcmp ����ϱ� ���� ������� 

#define MAX 12
#define WORD_LIMIT 100


int main(void)
{

	char word[WORD_LIMIT];
	int input_num[MAX] = { 232, 244, 878, 817, 754, 351, 481, 137, 115, 253, 986, 236 };		//������ �迭 
	int i, j, temp = 0;
	int input_num_size = sizeof(input_num) / sizeof(int);

	printf("����(sort)�� �����ϴ� ���α׷��Դϴ�.\n");
	printf("����: �� 12�� / 232, 244, 878, 817, 754, 351, 481, 137, 115, 253, 986, 236\n");
	printf("���������� ���Ͻø� '����'�� �Է�. / ���������� ���Ͻø� '����' �Է�. \n");
	scanf("%s", word);


	//��������
	if (strcmp(word, "����") == 0)
	{
		for (i = 0; i < input_num_size; i++)
		{
			for (j = 0; j < (input_num_size - 1) - i; j++)	//���� ū ���Ҹ� �����ϰ� ���ϴ� ����.
			{
				if (input_num[j] > input_num[j + 1])		//���� ���ҿ� ���� ���ҿ� ��. Ŭ�� ��ġ ��ȯ
				{
					temp = input_num[j];
					input_num[j] = input_num[j + 1];
					input_num[j + 1] = temp;
				}
			}
		}

	}


	//��������
	else if (strcmp(word, "����") == 0)
	{
		for (i = 0; i < input_num_size; i++)
		{
			for (j = 0; j < (input_num_size - 1) - i; j++)	//���� ���� ���Ҹ� �����ϰ� ���ϴ� ����.
			{
				if (input_num[j] < input_num[j + 1])		//���� ���ҿ� ���� ���ҿ� ��. ������ ��ġ ��ȯ.
				{
					temp = input_num[j];
					input_num[j] = input_num[j + 1];
					input_num[j + 1] = temp;
				}
			}
		}
	}

	//�� �� �Է½�
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.");
		return 0;
	}

	//����� ��� 
	printf("���:\n ");
	for (i = 0; i < input_num_size; i++)
	{
		printf("%5d", input_num[i]);
	}
	return 0;
}