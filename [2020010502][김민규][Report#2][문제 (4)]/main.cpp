#include<stdio.h>
// �߷°��ӵ�(G) 9.8 ����
#define G 9.8

int main(void)
{
	// double��
	double height = 100;
	double time;

	//�������� �ð� ���
	time = ((2 * height) / G);

	//����� ���
	printf("������ 100m ������ �������� 1kg ��Ʋ���� �������� ��Ų��.\n���鿡 �����ϴ� �ð�: %2lf sec �̴�", time);

	return 0;
}