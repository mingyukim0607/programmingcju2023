#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//���� ���� �Է� �ޱ� 
	int i;
	int count;
	int* arr;
	int sum = 0;

	//n�� �Ǽ� �Է� 
	printf("1���� n������ ��, n �Է� : ");
	scanf("%d", &count);

	//���� �޸� �Ҵ� 
	arr = (int*)malloc(count * sizeof(int));

	//1~n��° ������ �Է�  
	for (i = 0; i < count; i++)
	{
		printf("%d��° ������ �Է�: ", (i + 1));
		scanf("%d", arr + i);

		sum += *(arr + i);
	}


	//��� ��� 
	printf("��: %d \n", sum);

	//�޸� ����
	free(arr);

	return 0;
}