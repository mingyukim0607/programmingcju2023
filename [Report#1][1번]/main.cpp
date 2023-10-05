#include <stdio.h>

int main(void)
{
	// Roll, Pitch, Yaw를 x,y,z 정수 값으로 설정
	float roll;
	float pitch;
	float yaw;

	//좌표 입력
	printf("roll각도를 입력해주세요 :");
	scanf("%f", &roll);
	printf("pitch각도를 입력해주세요 :");
	scanf("%f", &pitch);
	printf("yaw각도를 입력해주세요 :");
	scanf("%f", &yaw);


	// 입력값 -180~+180도 범위 변환 공식
	while (roll < -180)
		roll += 360;

	while (roll > 180)
		roll -= 360;


	while (pitch < -180)
		pitch += 360;

	while (pitch > 180)
		pitch -= 360;


	while (yaw < -180)
		yaw += 360;

	while (yaw > 180)
		yaw -= 360;

	//결과값 출력
	printf(" roll 각도: %f\n", roll);
	printf(" pitch 각도: %f\n", pitch);
	printf(" yaw 각도: %f\n", yaw);

	return 0;
}