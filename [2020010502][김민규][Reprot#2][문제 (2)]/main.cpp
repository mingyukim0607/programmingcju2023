#include <stdio.h>

int main(void) 
{
    int i, count;

    // ù��°, ��° �� ��
    int t1 = 0, t2 = 1;

    // ������ ��(3��° �׺��� �����ױ���)
    int nextTerm = t1 + t2;

    // n��° �� �Է� �ޱ� 
    printf("�Ǻ���ġ ������ ù° �� �Ѥ����� 1�̸� �� ���� ��� ���� �ٷ� �� �� ���� ���� �����Դϴ�.\nn��° �Է°�(n����): ");
    scanf("%d", &count);

    // printf��, 1,2��° �� ��� (������)
    printf("�Ǻ���ġ ����(Fibonacci Series): %d, %d, ", t1, t2);

    // for��, ������ ��� ���� (3��° ��~, ����)
    for (i = 3; i <= count; ++i) 
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}