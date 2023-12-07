#include<stdio.h>

void swap(double *pa, double *pb);									// �� �Ǽ��� �ٲٴ� �Լ�
void line_up(double *maxp, double *midp, double *minp);				//�Լ� ����

int main(void)
{
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� :");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)			//�Ű������� ������ ����
{
	double temp;							//��ȯ�� ���� �ӽ� ����

	temp = *pa;								//temp�� pa�� ����Ű�� ������ �� ����
	*pa = *pb;								//pa�� ����Ű�� ������ pb�� ����Ű�� ������ �� ����
	*pb = temp;								//pb�� ����Ű�� ������ temp �� ����
}

void line_up(double *maxp, double *midp, double *minp)
{
	if (*maxp < *midp)swap(maxp, midp);
	if (*maxp < *minp)swap(maxp, minp);
	if (*midp < *minp)swap(midp, minp);
}

