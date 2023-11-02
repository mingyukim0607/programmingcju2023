#include<stdio.h>

int main(void)
{
    // 길이값 입력
    int n, i, j;
    printf("길이를 입력하시오 : ");
    scanf_s("%d", &n);

    // i열을 설정
    for (i = 0; i < n; i++)
    {

        // j=" "(공백) 설정
        for (j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        // 삼각형을 만들어준다.
        for (j = 0; j < i * 2 + 1; j++)
        { 
            printf("*");
        }

        //다음열 
        printf("\n");
    }
    return 0;
}
