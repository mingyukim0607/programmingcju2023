#include<stdio.h>

void swap(double *pa, double *pb);									// 두 실수를 바꾸는 함수
void line_up(double *maxp, double *midp, double *minp);				//함수 선언

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 :");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)			//매개변수로 포인터 선언
{
	double temp;							//교환을 위한 임시 변수

	temp = *pa;								//temp에 pa가 가리키는 변수의 값 저장
	*pa = *pb;								//pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
	*pb = temp;								//pb가 가리키는 변수에 temp 값 저장
}

void line_up(double *maxp, double *midp, double *minp)
{
	if (*maxp < *midp)swap(maxp, midp);
	if (*maxp < *minp)swap(maxp, minp);
	if (*midp < *minp)swap(midp, minp);
}

