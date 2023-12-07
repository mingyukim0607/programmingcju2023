#include<stdio.h>
#include<string.h>

#define MAX 80

int main(void)
{
	//문자열 설정
	char str1[MAX], str2[MAX];
	char temp[MAX];

	//문자열 입력
	printf("두 문자열 입력 : ");
	scanf("%s %s", str1, str2);
	printf("바꾸기 전 : %s,%s\n", str1, str2);

	
	strcpy(temp,str1 );				//temp 배열에 str1 배열의 문자열 대입
	strcpy(str1,str2 );				//str1 배열에 str2 배열의 문자열 대입
	strcpy(str2,temp );				//str2 배열에 temp 배열의 문자열 대입
	
	//결과값 출력
	printf("바꾼 후 : %s,%s\n", str1, str2);
	return 0;
}