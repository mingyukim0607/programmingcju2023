#include <stdio.h> 

int i, j, n;
int size;

// ������ ũ�� ���� �Լ� 
int draw_diamond(int size)
{
    // ������ ���κ� 
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

    //������ �Ʒ��κ�
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
    //�Է°� ����
    printf("�������� ũ�⸦ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    //������ ũ�� �Լ� 
    draw_diamond(size);
    return 0;
}

