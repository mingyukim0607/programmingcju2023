#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10     //�ִ� ��ϰ��� �л���
#define MAX_SEATS 10        //�ִ� �ڸ���
#define MIN_SEATS 1         //�ּ� �ڸ���

int i;
int seat_number;    //�ڸ� ��ȣ
int num_students;   //�л���

// �л�����
struct Student
{
    char name[50];          // �̸�
    int student_id;         // �й� 
    int seat_number;        // �ڸ���ȣ
};

// 1.����ϱ�
void register_Student(struct Student* students, int* num_students)
{
    do
    {
        //�ڸ� ��� ������ �Է�
        printf("����� �ڸ� ��ȣ�� �Է��ϼ��� (%d���� %d����): ", MIN_SEATS, MAX_SEATS);
        scanf("%d", &seat_number);
    } while (seat_number < MIN_SEATS || seat_number > MAX_SEATS);

    // �̸�, �й� �Է�
    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", students[*num_students].name);
    printf("�й��� �Է��ϼ���: ");
    scanf("%d", &students[*num_students].student_id);

    //�Է��� �л��� �ڸ� ��ȣ ����
    //�Է¹���.seat_number�� seat_number�� �Ҵ�. 
    students[*num_students].seat_number = seat_number;

    printf("%s��, %d�� �ڸ��� ��ϵǾ����ϴ�.\n", students[*num_students].name, students[*num_students].seat_number);

    // ��� �л� �� +1
    (*num_students)++;
}

// 2.����ϱ�
void checkout_Student(struct Student* students, int* num_students)
{
    
    int student_id;
    printf("�й��� �Է��ϼ���: ");
    scanf("%d", &student_id);

    // ��ϵ� �л� ����ŭ �ݺ�
    for (int i = 0; i < *num_students; i++)
    {
        // �Է��� �й�(students[i].student_id)�� �Էµ� �й��� ���ϰ� ��ġ�� 
        if (students[i].student_id == student_id)
        {
            printf("%s��, %d�� �ڸ����� ����ϼ̽��ϴ�.\n", students[i].name, students[i].seat_number);

            // ���� ��� ó�� ���� �л� ������ �������� �ִ� �л� ������ ����� �ǹ�
            students[i] = students[*num_students - 1];

            // ������ �л� ������ �ʱ�ȭ
            students[*num_students - 1].name[0] = '\0';
            students[*num_students - 1].student_id = 0;
            students[*num_students - 1].seat_number = 0;

            // ��ϵ� �л� �� ����
            (*num_students)--;
        }
    }
}

// 3. �ڸ� Ȯ��
void print_SeatStatus(const struct Student* students, int num_students)
{
    printf("���� �ڸ� ��Ȳ:\n");

    for (int i = 0; i < num_students; i++)
    {
        printf("%d�� �ڸ�: %s�� (%d)\n", students[i].seat_number, students[i].name, students[i].student_id);
    }
}

//main �Լ�
int main(void)
{
    struct Student students[MAX_STUDENTS];
    int num_students = 0;
    int choice;

    printf("û�ִ��б� ������ �ڽ����Դϴ�.\n");
    while (1)
    {
        printf("-----------------------------------\n");
        printf("1. ����ϱ�\n2. ����ϱ�\n3. �ڸ� Ȯ��\n4. ����\n");
        printf("����: ");
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
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        default:
            printf("���� ���Դϴ�. �ٽ� �����ϼ���.\n");
        }
    }
    return 0;
}
