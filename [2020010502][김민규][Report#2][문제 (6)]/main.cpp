#include <stdio.h> 

int i, j, n;
int size;

// 마름모 크기 설정 함수 
int draw_diamond(int size)
{
    // 마름모 윗부분 
    for (i = 1; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //마름모 아랫부분
    for (i = n; i >= 0; i--)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


int main(void)
{
    //입력값 설정
    printf("마름모의 크기를 입력하시오: ");
    scanf("%d", &n);

    //마름모 크기 함수 
    draw_diamond(size);
    return 0;
}

