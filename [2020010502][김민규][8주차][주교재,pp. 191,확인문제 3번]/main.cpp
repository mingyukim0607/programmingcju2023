#include<stdio.h>

double centi_to_meter(int cm)		//�Լ� ����
{
	double meter;					//�ʿ��� ���� ����
	meter = cm / 100.0;				//�Ű����� cm�� ���� m������ ȯ��
	return meter;					//ȯ��� �� ��ȯ
}

int main(void)
{
	double res;						//�Լ��� ��ȯ���� ������ ����
	res = centi_to_meter(187);		//�Լ� ȣ��, ��ȯ���� res�� ����
	printf("%.2lfm\n", res);		//��ȯ�� res�� �� ���

	return 0;
}

