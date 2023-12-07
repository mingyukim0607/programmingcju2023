#include<stdio.h>
#define ROW 2	//Row 행
#define COL 2	//Column 열
#define END_MATRIX 0 // 0일시 프로그램 종료


float matrix[ROW][COL];
float inverse_matrix[ROW][COL];
float det;		//Determinant 약자 
int i, j;

//행렬 입력 함수 
int input_matrix(void);
//행렬 출력 함수 
int output_matrix(void);

//행렬 입력 함수 
int input_matrix(void)
{
	for (i = 0; i < ROW; i++)
	{
		printf("<%d행 입력>\n", i + 1);
		for (j = 0; j < COL; j++)
		{
			printf("%d열 입력:", j + 1);
			scanf("%f", (*(matrix + i) + j));		// matrix +i 번째 행의 포인터 / 입력(scanf)
		}
		printf("\n");
	}

	return 0;
}

//행렬 출력 함수
int output_matrix(void)
{
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%.2f  ", *(*(inverse_matrix + i) + j));		//matrix+ i번째 행에 j번째 열의 포인터에 위치한 값 / 출력(printf) 
		}

		printf("\n\n");
	}

	return 0;
}



int main(void)
{
	//전체 반복
	while (1)
	{
	//행렬 입력 함수
	input_matrix();

	det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

	// 존재하지 않을시 
	if (det == END_MATRIX)
	{
		printf(" 역행렬이 존재하지 않습니다. \n");
		return 0;
	}
	
	//역함수 공식
	inverse_matrix[0][0] = matrix[1][1] / det;
	inverse_matrix[0][1] = -matrix[0][1] / det;
	inverse_matrix[1][0] = -matrix[1][0] / det;
	inverse_matrix[1][1] = matrix[0][0] / det;

	//행렬 결과 출력 
	output_matrix();
	}
}