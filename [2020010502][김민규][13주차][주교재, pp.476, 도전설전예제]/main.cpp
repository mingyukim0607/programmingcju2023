#include<stdio.h>
#include<string.h>	//strcmp ����ϱ� ���� <string.h> ������� ����

//swap ����Ʈ ����
void swap(const char* data_type, void* vp1, void* vp2);

int main(void)
{
	int age1, age2;
	double height1, height2;

	printf("ù ��° ����� ���̿� Ű �Է� :");
	scanf_s("%d%lf",&age1,&height1);

	printf("�� ��° ����� ���̿� Ű �Է� :");
	scanf_s("%d%lf", &age2, &height2);

	swap("int", &age1, &age2);					//int�� ���� age1,age2�� ���� �ٲܶ�
	swap("double", &height1, &height2);			//double�� ���� age1,age2�� ���� �ٲܶ�

	printf("ù ��° ����� ���̿� Ű : %d,%.1lf\n", age1, height1);
	printf("�� ��° ����� ���̿� Ű : %d,%.1lf\n", age2, height2);

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

	// *(int*)vp1 -> (int*)vp1 ���� void* vp1�� int* vp1�� �ٲ۴���
	// �տ� *�� �ٿ� �����͸� �̿��� swap�� �����ϵ��� �Ѵ�.

	else if (strcmp(data_type, "double") == 0)
	{
		double  temp;

		temp = *(double*)vp1;
		*(double*)vp1 = *(double*)vp2;
		*(double*)vp2 = temp;
	}
}