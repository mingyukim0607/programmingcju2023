#include <stdio.h>

int main(void)
{
    int n = 10;  // �Է��� ���� ����
    double values[10];
    double sum = 0.0;
    double sum_of_squares = 0.0;



    // �� �Է� �� ���� ���
    for (int i = 0; i < n; i++)
    {
        printf("10���� ���� �Է��ϼ���:");
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    // ��� ���
    double average = sum / n;

    // �л� �� ǥ������ ���
    double variance = 0.0;
    double std_deviation = 0.0;

    for (int i = 0; i < n; i++)
    {
        double deviation = values[i] - average;
        sum_of_squares += deviation * deviation;
    }

    variance = sum_of_squares / n;
    std_deviation = variance;

    // ��� ���
    printf("����: %.2lf\n", sum);
    printf("���: %.2lf\n", average);
    printf("�л�: %.2lf\n", variance);
    printf("ǥ������: %.2lf\n", std_deviation);

    return 0;
}