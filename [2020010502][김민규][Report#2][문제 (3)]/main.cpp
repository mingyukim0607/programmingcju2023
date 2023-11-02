#include<stdio.h>

int main(void)
{
    //정수값 설정
    int count; 
    int n, i, rest, cnt;

    //입력값 
    printf("3,6,9 게임입니다. 원하시는 갯수를 입력하세요.\n입력: ");
    scanf("%d", &count);

    //count 수만큼 반복 
    for (n = 1; n <= count; n++) 
    {

        i = n;
        cnt = 0;

        while (i) 
        {
            rest = i % 10;

            if (rest % 3 == 0 && rest != 0) 
            {
                cnt++;
            }
            i /= 10;
        }

        if (cnt == 0) printf("%d", n);

        else 
        {
            for (i = 0; i < cnt; i++)
            {
                printf("짝!");
            }
        }

        printf("\n");

    }

    return 0;

}