#include<stdio.h>
#include<string.h>

#define MAX 80

int main(void)
{
	//���ڿ� ����
	char str1[MAX], str2[MAX];
	char temp[MAX];

	//���ڿ� �Է�
	printf("�� ���ڿ� �Է� : ");
	scanf("%s %s", str1, str2);
	printf("�ٲٱ� �� : %s,%s\n", str1, str2);

	
	strcpy(temp,str1 );				//temp �迭�� str1 �迭�� ���ڿ� ����
	strcpy(str1,str2 );				//str1 �迭�� str2 �迭�� ���ڿ� ����
	strcpy(str2,temp );				//str2 �迭�� temp �迭�� ���ڿ� ����
	
	//����� ���
	printf("�ٲ� �� : %s,%s\n", str1, str2);
	return 0;
}