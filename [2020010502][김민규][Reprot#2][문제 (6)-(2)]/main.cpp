#include<stdio.h>

int main(void)
{
    // ���̰� �Է�
    int n, i, j;
    printf("���̸� �Է��Ͻÿ� : ");
    scanf_s("%d", &n);

    // i���� ����
    for (i = 0; i < n; i++)
    {

        // j=" "(����) ����
        for (j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        // �ﰢ���� ������ش�.
        for (j = 0; j < i * 2 + 1; j++)
        { 
            printf("*");
        }

        //������ 
        printf("\n");
    }
    return 0;
}
