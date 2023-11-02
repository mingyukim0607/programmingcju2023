#include <stdio.h>

int main(void) 
{
    int i, count;

    // 첫번째, 둘째 항 값
    int t1 = 0, t2 = 1;

    // 다음항 값(3번째 항부터 다음항까지)
    int nextTerm = t1 + t2;

    // n번째 값 입력 받기 
    printf("피보나치 수열은 첫째 및 둘쨰항이 1이며 그 뒤의 모든 항은 바로 앞 두 항의 합인 수열입니다.\nn번째 입력값(n정수): ");
    scanf("%d", &count);

    // printf문, 1,2번째 항 출력 (고정값)
    printf("피보나치 수열(Fibonacci Series): %d, %d, ", t1, t2);

    // for문, 다음항 출력 공식 (3번째 항~, 변수)
    for (i = 3; i <= count; ++i) 
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}