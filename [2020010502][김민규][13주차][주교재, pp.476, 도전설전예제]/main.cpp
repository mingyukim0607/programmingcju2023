#include<stdio.h>
#include<string.h>	//strcmp 사용하기 위해 <string.h> 헤더파일 실행

//swap 포인트 설정
void swap(const char* data_type, void* vp1, void* vp2);

int main(void)
{
	int age1, age2;
	double height1, height2;

	printf("첫 번째 사람의 나이와 키 입력 :");
	scanf_s("%d%lf",&age1,&height1);

	printf("두 번째 사람의 나이와 키 입력 :");
	scanf_s("%d%lf", &age2, &height2);

	swap("int", &age1, &age2);					//int형 변수 age1,age2의 값을 바꿀때
	swap("double", &height1, &height2);			//double형 변수 age1,age2의 값을 바꿀때

	printf("첫 번째 사람의 나이와 키 : %d,%.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d,%.1lf\n", age2, height2);

	return 0;
}


void swap(const char* data_type, void* vp1, void* vp2)
{
	if (strcmp(data_type,"int") == 0)			
	{
		int temp;

		temp = *(int*)vp1;
		*(int*)vp1 = *(int*)vp2;
		*(int*)vp2 = temp;
	}

	// *(int*)vp1 -> (int*)vp1 으로 void* vp1을 int* vp1로 바꾼다음
	// 앞에 *을 붙여 포인터를 이용한 swap을 구현하도록 한다.

	else if (strcmp(data_type, "double") == 0)
	{
		double  temp;

		temp = *(double*)vp1;
		*(double*)vp1 = *(double*)vp2;
		*(double*)vp2 = temp;
	}
}