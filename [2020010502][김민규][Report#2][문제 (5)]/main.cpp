#include <stdio.h>

int main(void)
{
    int n = 10;  // 입력할 값의 개수
    double values[10];
    double sum = 0.0;
    double sum_of_squares = 0.0;



    // 값 입력 및 총합 계산
    for (int i = 0; i < n; i++)
    {
        printf("10개의 값을 입력하세요:");
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    // 평균 계산
    double average = sum / n;

    // 분산 및 표준편차 계산
    double variance = 0.0;
    double std_deviation = 0.0;

    for (int i = 0; i < n; i++)
    {
        double deviation = values[i] - average;
        sum_of_squares += deviation * deviation;
    }

    variance = sum_of_squares / n;
    std_deviation = variance;

    // 결과 출력
    printf("총합: %.2lf\n", sum);
    printf("평균: %.2lf\n", average);
    printf("분산: %.2lf\n", variance);
    printf("표준편차: %.2lf\n", std_deviation);

    return 0;
}