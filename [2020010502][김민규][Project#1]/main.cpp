#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 준비
char player1[15];
int in1, in2;
int restart;


// 가위바위보 판단 기준 공식
int judge_rockpapersissors()
{

    // 비길시
    if ((in1 == 1 && in2 == 1) || (in1 == 2 && in2 == 2) || (in1 == 3 && in2 == 3))
    {
        printf("비김.");
    }

    //이길시
    else if ((in1 == 1 && in2 == 3) || (in1 == 2 && in2 == 1) || (in1 == 3 && in2 == 2))
    {
        printf("우승.");
    }

    //패배시
    else if ((in1 == 1 && in2 == 2) || (in1 == 2 && in2 == 3) || (in1 == 3 && in2 == 1))
    {
        printf("패배");
    }

    return 0;
}


//무작위 숫자 만들기(이부분은 인터넷 도움 받음) 
int randomnumber()
{
    srand(time(NULL));
    in2 = (rand() % 3) + 1;
    return 0;
}


int computer_turn()
{
    //무작위 숫자에서 1,2,3이 나올시 가위바위보 판단
    if (in2 == 1)
    {
        printf("가위(1)");
    }
    else if (in2 == 2)
    {
        printf("바위(2)");
    }
    else if (in2 == 3)
    {
        printf("보(3)");
    }

    printf("\n\n\n");
    printf("결과:");

    return 0;
}


int main(void)
{
    do
    {
        //플레이어 이름 입력
        printf("안녕하십니까.\n가위바위보 게임입니다.\n플레이어 이름을 입력하세요 : ");
        scanf("%s", &player1);

        //룰 설명
        printf("\n%s님 게임 규칙을 설명드리겠습니다.\n가위(1),바위(2),보(3)입니다\n\n", player1);
        printf("게임을 시작하겠습니다.\n\n");

        //플레이어 가위바위보 고르기 
        printf("\n%s님 가위바위보 중에 하나를 고르세요.\n입력:", player1);
        scanf("%d", &in1);

        // 컴퓨터 무작위 숫자 생성
        randomnumber();

        //컴퓨터 가위바위보 판단 
        printf("\n");
        printf("컴퓨터 차례:");

        computer_turn();

        //플레이어와 컴퓨터의 가위바위보 판단
        judge_rockpapersissors();

        printf("\n\n");

        //게임 재시작 판단
        printf("게임을 다시하시겠습니까? [YES(1)/NO(2)] : ");
        scanf("%d", &restart);

        while (1)
        {
            if (restart == 1)
            {
                printf("게임을 다시 실행합니다.\n");
                break;
            }
            else if (restart == 2)
            {
                printf("게임을 종료합니다.\n");
                return 0;
            }
        }

        printf("==============================================");
        printf("\n\n");


    } while (1); //게임 재시작

   return 0;
}