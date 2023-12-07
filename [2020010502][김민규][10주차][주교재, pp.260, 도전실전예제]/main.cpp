#include<stdio.h>
#define MAX 80

int main(void)
{
	//문자열 설정
	char str[MAX];
	char temp[MAX];
	int count = 0;

	//문자열 입력
	printf("문장 입력 : ");
	gets_s(str);

	//대소문자 변환
	for (int i = 0; i < str[i]; i++)
	{
		// str[i] 문자열 중 A~Z까지 있을시 
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			//A~Z 까지 아스키 코드값 65~90
			//a~z 까지 아스키 코드값 97~122 
			//알파벳이 대문자면 +32 더해 소문자 변환
			str[i] = str[i] + 32;

			//변환한 수 만큼 증가
			count++;
		}
	}

	//결과값 출력
	printf("바꿘 문장 : %s\n",str);
	printf("바꿘 문자 수 : %d\n", count);

	return 0;
}