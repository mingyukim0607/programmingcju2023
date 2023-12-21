#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//숫자 개수 입력 받기 
	int i;
	int count;
	int* arr;
	int sum = 0;

	//n번 실수 입력 
	printf("1부터 n까지의 합, n 입력 : ");
	scanf("%d", &count);

	//동적 메모리 할당 
	arr = (int*)malloc(count * sizeof(int));

	//1~n번째 정수값 입력  
	for (i = 0; i < count; i++)
	{
		printf("%d번째 정수값 입력: ", (i + 1));
		scanf("%d", arr + i);

		sum += *(arr + i);
	}


	//결과 출력 
	printf("합: %d \n", sum);

	//메모리 해제
	free(arr);

	return 0;
}