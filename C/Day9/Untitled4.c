
#include <stdio.h>

int main()
{
	int a[3][4]={0}; //3행 4열 2차원 배열 선언 
	int i,j;
	int total;
	double avg;
	char ch;
	int aa=0;
	
	for (i=0; i<3; i++) //2차원 배열 a의 행의 반복문 
	{
		printf("점수를 입력하세요 : ");

		for (j=0; j<4; j++) //2차원 배열 a의 열의 반복문 
		{
			scanf("%d", &a[i][j]); 
		}  
		while (1)
		{
			ch=getchar();
			if (ch=='/n')
			{
				break;
			}
			else
			{
				printf("이상한 거");
			}
		}

	}

	
	printf ("\n");
	for (i=0; i<3; i++)
	{
		printf ("\n");
		for (j=0; j<4; j++)
		{
			printf ("%d ", a[i][j]);
		}
	} 
	
	
	return 0;
}

