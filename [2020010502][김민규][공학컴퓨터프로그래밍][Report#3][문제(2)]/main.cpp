#include<stdio.h>
#define ROW 2	//Row ��
#define COL 2	//Column ��
#define END_MATRIX 0 // 0�Ͻ� ���α׷� ����


float matrix[ROW][COL];
float inverse_matrix[ROW][COL];
float det;		//Determinant ���� 
int i, j;

//��� �Է� �Լ� 
int input_matrix(void);
//��� ��� �Լ� 
int output_matrix(void);

//��� �Է� �Լ� 
int input_matrix(void)
{
	for (i = 0; i < ROW; i++)
	{
		printf("<%d�� �Է�>\n", i + 1);
		for (j = 0; j < COL; j++)
		{
			printf("%d�� �Է�:", j + 1);
			scanf("%f", (*(matrix + i) + j));		// matrix +i ��° ���� ������ / �Է�(scanf)
		}
		printf("\n");
	}

	return 0;
}

//��� ��� �Լ�
int output_matrix(void)
{
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%.2f  ", *(*(inverse_matrix + i) + j));		//matrix+ i��° �࿡ j��° ���� �����Ϳ� ��ġ�� �� / ���(printf) 
		}

		printf("\n\n");
	}

	return 0;
}



int main(void)
{
	//��ü �ݺ�
	while (1)
	{
	//��� �Է� �Լ�
	input_matrix();

	det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

	// �������� ������ 
	if (det == END_MATRIX)
	{
		printf(" ������� �������� �ʽ��ϴ�. \n");
		return 0;
	}
	
	//���Լ� ����
	inverse_matrix[0][0] = matrix[1][1] / det;
	inverse_matrix[0][1] = -matrix[0][1] / det;
	inverse_matrix[1][0] = -matrix[1][0] / det;
	inverse_matrix[1][1] = matrix[0][0] / det;

	//��� ��� ��� 
	output_matrix();
	}
}