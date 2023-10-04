#include <stdio.h>

int main(void)
{
	// Roll, Pitch, Yaw를 x,y,z 정수 값으로 설정
	float x;
	float y;
	float z;

	//좌표 입력
	printf("x좌표를 입력해주세요 :");
	scanf("%f", &x);
	printf("y좌표를 입력해주세요 :");
	scanf("%f", &y);
	printf("z좌표를 입력해주세요 :");
	scanf("%f", &z);


	// 입력값 -180~+180도 범위 변환 공식
	while (x < -180)
		x += 360;

	while (x > 180)
		x -= 360;


	while (y < -180)
		y += 360;

	while (y > 180)
		y -= 360;


	while (z < -180)
		z += 360;

	while (z > 180)
		z -= 360;

	//결과값 출력
	printf(" roll 각도: %f\n", x);
	printf(" pitch 각도: %f\n", y);
	printf(" yaw 각도: %f\n", z);

	return 0;
}