#include<stdio.h>
// 중력가속도(G) 9.8 설정
#define G 9.8

int main(void)
{
	// double문
	double height = 100;
	double time;

	//자유낙하 시간 계산
	time = ((2 * height) / G);

	//결과값 출력
	printf("영수가 100m 높이의 절벽에서 1kg 케틀벨을 자유낙하 시킨다.\n지면에 도달하는 시간: %2lf sec 이다", time);

	return 0;
}