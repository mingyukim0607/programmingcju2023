#include<stdio.h>

int main(void)
{
    //������ ����
    int count; 
    int n, i, rest, cnt;

    //�Է°� 
    printf("3,6,9 �����Դϴ�. ���Ͻô� ������ �Է��ϼ���.\n�Է�: ");
    scanf("%d", &count);

    //count ����ŭ �ݺ� 
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
                printf("¦!");
            }
        }

        printf("\n");

    }

    return 0;

}