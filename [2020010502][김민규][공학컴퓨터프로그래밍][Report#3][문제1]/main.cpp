#include <stdio.h>
#include <string.h>			//strcmp 사용하기 위한 헤더파일 

#define MAX 12
#define WORD_LIMIT 100


int main(void)
{

	char word[WORD_LIMIT];
	int input_num[MAX] = { 232, 244, 878, 817, 754, 351, 481, 137, 115, 253, 986, 236 };		//정렬할 배열 
	int i, j, temp = 0;
	int input_num_size = sizeof(input_num) / sizeof(int);

	printf("정렬(sort)을 수행하는 프로그램입니다.\n");
	printf("숫자: 총 12개 / 232, 244, 878, 817, 754, 351, 481, 137, 115, 253, 986, 236\n");
	printf("오름차순을 원하시면 '오름'을 입력. / 내림차순을 원하시면 '내림' 입력. \n");
	scanf("%s", word);


	//오름차순
	if (strcmp(word, "오름") == 0)
	{
		for (i = 0; i < input_num_size; i++)
		{
			for (j = 0; j < (input_num_size - 1) - i; j++)	//가장 큰 원소를 제외하고 비교하는 범위.
			{
				if (input_num[j] > input_num[j + 1])		//현재 원소와 다음 원소와 비교. 클시 위치 교환
				{
					temp = input_num[j];
					input_num[j] = input_num[j + 1];
					input_num[j + 1] = temp;
				}
			}
		}

	}


	//내림차순
	else if (strcmp(word, "내림") == 0)
	{
		for (i = 0; i < input_num_size; i++)
		{
			for (j = 0; j < (input_num_size - 1) - i; j++)	//가장 작은 원소를 제외하고 비교하는 범위.
			{
				if (input_num[j] < input_num[j + 1])		//현재 원소와 다음 원소와 비교. 작을시 위치 교환.
				{
					temp = input_num[j];
					input_num[j] = input_num[j + 1];
					input_num[j + 1] = temp;
				}
			}
		}
	}

	//그 외 입력시
	else
	{
		printf("잘못 입력하셨습니다. 다시 입력하세요.");
		return 0;
	}

	//결과값 출력 
	printf("결과:\n ");
	for (i = 0; i < input_num_size; i++)
	{
		printf("%5d", input_num[i]);
	}
	return 0;
}