#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10     //최대 등록가능 학생수
#define MAX_SEATS 10        //최대 자리수
#define MIN_SEATS 1         //최소 자리수

int i;
int seat_number;    //자리 번호
int num_students;   //학생수

// 학생정보
struct Student
{
    char name[50];          // 이름
    int student_id;         // 학번 
    int seat_number;        // 자리번호
};

// 1.등록하기
void register_Student(struct Student* students, int* num_students)
{
    do
    {
        //자리 어디 앉을지 입력
        printf("등록할 자리 번호를 입력하세요 (%d부터 %d까지): ", MIN_SEATS, MAX_SEATS);
        scanf("%d", &seat_number);
    } while (seat_number < MIN_SEATS || seat_number > MAX_SEATS);

    // 이름, 학번 입력
    printf("이름을 입력하세요: ");
    scanf("%s", students[*num_students].name);
    printf("학번을 입력하세요: ");
    scanf("%d", &students[*num_students].student_id);

    //입력한 학생의 자리 번호 설정
    //입력받은.seat_number를 seat_number에 할당. 
    students[*num_students].seat_number = seat_number;

    printf("%s님, %d번 자리에 등록되었습니다.\n", students[*num_students].name, students[*num_students].seat_number);

    // 등록 학생 수 +1
    (*num_students)++;
}

// 2.퇴실하기
void checkout_Student(struct Student* students, int* num_students)
{
    
    int student_id;
    printf("학번을 입력하세요: ");
    scanf("%d", &student_id);

    // 등록된 학생 수만큼 반복
    for (int i = 0; i < *num_students; i++)
    {
        // 입력한 학번(students[i].student_id)과 입력된 학번을 비교하고 일치시 
        if (students[i].student_id == student_id)
        {
            printf("%s님, %d번 자리에서 퇴실하셨습니다.\n", students[i].name, students[i].seat_number);

            // 현재 퇴실 처리 중인 학생 정보를 마지막에 있는 학생 정보로 덮어쓰는 의미
            students[i] = students[*num_students - 1];

            // 마지막 학생 정보를 초기화
            students[*num_students - 1].name[0] = '\0';
            students[*num_students - 1].student_id = 0;
            students[*num_students - 1].seat_number = 0;

            // 등록된 학생 수 감소
            (*num_students)--;
        }
    }
}

// 3. 자리 확인
void print_SeatStatus(const struct Student* students, int num_students)
{
    printf("현재 자리 현황:\n");

    for (int i = 0; i < num_students; i++)
    {
        printf("%d번 자리: %s님 (%d)\n", students[i].seat_number, students[i].name, students[i].student_id);
    }
}

//main 함수
int main(void)
{
    struct Student students[MAX_STUDENTS];
    int num_students = 0;
    int choice;

    printf("청주대학교 도서관 자습실입니다.\n");
    while (1)
    {
        printf("-----------------------------------\n");
        printf("1. 등록하기\n2. 퇴실하기\n3. 자리 확인\n4. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);
        printf("-----------------------------------\n");

        switch (choice)
        {
        case 1:
            register_Student(students, &num_students);
            break;
        case 2:
            checkout_Student(students, &num_students);
            break;
        case 3:
            print_SeatStatus(students, num_students);
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("없는 값입니다. 다시 선택하세요.\n");
        }
    }
    return 0;
}
