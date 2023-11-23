#include<stdio.h>

void input_nums(int* lotto_nums);		//배열에 로또 번호를 입력하는 함수
void print_nums(int* lotto_nums);		//배열에 저장된 값을 출력하는 함수

int main(void)
{
	int lotto_nums[10];			//로또 번호를 저장할 배열

	input_nums(lotto_nums);		//입력 함수 호출
	print_nums(lotto_nums);		//출력 함수 호출

	return 0;
}

void input_nums(int* lotto_nums)
{
	int num;
	int i, j;
	int dup;			//중복되는 변수

	for (i = 0; i < 10; i++)
	{
		printf("번호입력 :");
		scanf("%d", &num);
		dup = 0;						//중복변수(dup) 초기값 0
		for (j = 0; j < i; j++)
		{
			if (num == lotto_nums[j])	//배열와 자료형(num)이 같을 경우
			{
				dup = 1;
				break;					//중복변수(dup) 1로 되면서 반복문 나온다
			}
		}
		if (!dup)						//중복변수(dup)가 0일 경우
		{
			lotto_nums[i] = num;
		}
		else							//중복변수(dup)가 1일 경우(즉, 같은 수가 있을 경우) 
		{
			printf("같은번호가 있습니다\n");
			i--;
		}
		
	}
}

void print_nums(int* lotto_nums) 
{
	int i;

	printf("로또 번호 :");
	
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", lotto_nums[i]);			//배열에 입력받는 자료형 출력
	}
}
