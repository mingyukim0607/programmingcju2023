#include <stdio.h>

int main(void)
{
	// Roll, Pitch, Yaw�� x,y,z ���� ������ ����
	float roll;
	float pitch;
	float yaw;

	//��ǥ �Է�
	printf("roll������ �Է����ּ��� :");
	scanf("%f", &roll);
	printf("pitch������ �Է����ּ��� :");
	scanf("%f", &pitch);
	printf("yaw������ �Է����ּ��� :");
	scanf("%f", &yaw);


	// �Է°� -180~+180�� ���� ��ȯ ����
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

	//����� ���
	printf(" roll ����: %f\n", roll);
	printf(" pitch ����: %f\n", pitch);
	printf(" yaw ����: %f\n", yaw);

	return 0;
}