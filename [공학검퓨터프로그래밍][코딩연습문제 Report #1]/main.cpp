#include <stdio.h>

int main(void)
{
	// Roll, Pitch, Yaw�� x,y,z ���� ������ ����
	float x;
	float y;
	float z;

	//��ǥ �Է�
	printf("x��ǥ�� �Է����ּ��� :");
	scanf("%f", &x);
	printf("y��ǥ�� �Է����ּ��� :");
	scanf("%f", &y);
	printf("z��ǥ�� �Է����ּ��� :");
	scanf("%f", &z);


	// �Է°� -180~+180�� ���� ��ȯ ����
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

	//����� ���
	printf(" roll ����: %f\n", x);
	printf(" pitch ����: %f\n", y);
	printf(" yaw ����: %f\n", z);

	return 0;
}