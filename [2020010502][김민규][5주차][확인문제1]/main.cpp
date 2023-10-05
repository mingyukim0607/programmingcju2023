#include<stdio.h>

int main(void)
{
	int size;

	printf("가슴둘레를 입력하세요 :");
	scanf("%d", &size);

	if (size <= 90)
	{
	size = 'S';
	}

	else if ((size >= 90) && (size <= 100))
	{
	size = 'M';
	}
	else
	{
	size = 'L';
	}

	printf("사이즈느 %c입니다.\n", size);
	return 0;
}
