#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �غ�
char player1[15];
int in1, in2;
int restart;


// ���������� �Ǵ� ���� ����
int judge_rockpapersissors()
{

    // ����
    if ((in1 == 1 && in2 == 1) || (in1 == 2 && in2 == 2) || (in1 == 3 && in2 == 3))
    {
        printf("���.");
    }

    //�̱��
    else if ((in1 == 1 && in2 == 3) || (in1 == 2 && in2 == 1) || (in1 == 3 && in2 == 2))
    {
        printf("���.");
    }

    //�й��
    else if ((in1 == 1 && in2 == 2) || (in1 == 2 && in2 == 3) || (in1 == 3 && in2 == 1))
    {
        printf("�й�");
    }

    return 0;
}


//������ ���� �����(�̺κ��� ���ͳ� ���� ����) 
int randomnumber()
{
    srand(time(NULL));
    in2 = (rand() % 3) + 1;
    return 0;
}


int computer_turn()
{
    //������ ���ڿ��� 1,2,3�� ���ý� ���������� �Ǵ�
    if (in2 == 1)
    {
        printf("����(1)");
    }
    else if (in2 == 2)
    {
        printf("����(2)");
    }
    else if (in2 == 3)
    {
        printf("��(3)");
    }

    printf("\n\n\n");
    printf("���:");

    return 0;
}


int main(void)
{
    do
    {
        //�÷��̾� �̸� �Է�
        printf("�ȳ��Ͻʴϱ�.\n���������� �����Դϴ�.\n�÷��̾� �̸��� �Է��ϼ��� : ");
        scanf("%s", &player1);

        //�� ����
        printf("\n%s�� ���� ��Ģ�� ����帮�ڽ��ϴ�.\n����(1),����(2),��(3)�Դϴ�\n\n", player1);
        printf("������ �����ϰڽ��ϴ�.\n\n");

        //�÷��̾� ���������� ���� 
        printf("\n%s�� ���������� �߿� �ϳ��� ������.\n�Է�:", player1);
        scanf("%d", &in1);

        // ��ǻ�� ������ ���� ����
        randomnumber();

        //��ǻ�� ���������� �Ǵ� 
        printf("\n");
        printf("��ǻ�� ����:");

        computer_turn();

        //�÷��̾�� ��ǻ���� ���������� �Ǵ�
        judge_rockpapersissors();

        printf("\n\n");

        //���� ����� �Ǵ�
        printf("������ �ٽ��Ͻðڽ��ϱ�? [YES(1)/NO(2)] : ");
        scanf("%d", &restart);

        while (1)
        {
            if (restart == 1)
            {
                printf("������ �ٽ� �����մϴ�.\n");
                break;
            }
            else if (restart == 2)
            {
                printf("������ �����մϴ�.\n");
                return 0;
            }
        }

        printf("==============================================");
        printf("\n\n");


    } while (1); //���� �����

   return 0;
}