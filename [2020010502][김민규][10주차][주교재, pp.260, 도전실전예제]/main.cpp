#include<stdio.h>
#define MAX 80

int main(void)
{
	//���ڿ� ����
	char str[MAX];
	char temp[MAX];
	int count = 0;

	//���ڿ� �Է�
	printf("���� �Է� : ");
	gets_s(str);

	//��ҹ��� ��ȯ
	for (int i = 0; i < str[i]; i++)
	{
		// str[i] ���ڿ� �� A~Z���� ������ 
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			//A~Z ���� �ƽ�Ű �ڵ尪 65~90
			//a~z ���� �ƽ�Ű �ڵ尪 97~122 
			//���ĺ��� �빮�ڸ� +32 ���� �ҹ��� ��ȯ
			str[i] = str[i] + 32;

			//��ȯ�� �� ��ŭ ����
			count++;
		}
	}

	//����� ���
	printf("�مR ���� : %s\n",str);
	printf("�مR ���� �� : %d\n", count);

	return 0;
}