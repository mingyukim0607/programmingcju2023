#include<stdio.h>
int main(void)
{
	int age, chest;
	char size;
	printf("나이를 입력해주세요 : ")
	,scanf("%d", &age);
	printf("가슴둘레를 입력해주세요 : ")
	,scanf("%d", &chest);

	if (age < 20)
	{
		if (chest < 85) size = 'S';
		else if (chest < 95) size = 'M';
		else size = 'L';
	}
	else
	{
		if (chest < 90) size = 'S';
		else if (chest < 100) size = 'M';
		else size = 'L';
	}
	printf("사이즈는 %c입니다.\n", size);
	return 0;
}