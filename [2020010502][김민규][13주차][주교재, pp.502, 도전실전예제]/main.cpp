#include<stdio.h>
#include<stdlib.h>				//동적활동을 위한 헤더파일

int main(void)
{
	int num;
	int* ap;
	int i, j, cnt = 0;

	printf("> 양수 입력 :");
	scanf("%d", &num);


	//*ap 포인터 자료형
	//malloc 동적할당함수
	ap = (int*)malloc((num - 1) * sizeof(int));		

	if (ap == NULL)			//실패시 NULL 리턴
	{
		printf("메모리 부족...\n");
		exit(1);
	}

	for (i = 0; i < (num - 1); i++)
	{
		ap[i] = i + 2;
	}
	i = 0;
	while (1)
	{
		while ((ap[i] == 0) && (i < (num - 2)))
		{
			i++;
		}

		if (i == (num - 2)) break;
		for (j = i + 1; j < (num - 1); j++)
		{
			if ((ap[j] % ap[i]) == 0)
			{
				ap[j] = 0;
			}
		}
		i++;
	}
	for (i = 0; i < (num - 1); i++)
	{
		if (ap[i] != 0)
		{
			printf("%5d", ap[i]);
		}
		else
		{
			printf("%5c", 'X');
		}
		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}

	free(ap);			//ap 메모리 포인터 해제 

	return 0;
}