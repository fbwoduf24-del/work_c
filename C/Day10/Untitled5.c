/*
#include <stdio.h>
#define SIZE 5

void input(int *pa, int count);
void output(int *pa, int count);
void averge(int *pa, int count);
void max(int *pa, int count);
void min(int *pa, int count);
void aa(void);


int main()
{
	int menu;
	int c=SIZE;
	int score[c];
	int i;

	
	while(1)
	{
		printf("\n=========학생 성적 관리======================\n");
		printf("1. 점수 입력\n");
		printf("2. 점수 출력\n");
		printf("3. 평균 출력\n");
		printf("4. 최고 점수 출력\n");
		printf("5. 최저 점수 출력\n");
		printf("6. 종료\n");
		printf("선택 -> ");
		scanf("%d", &menu);
		
		if (menu==1)
		{
			input(score, c);
		}
		else if (menu==2)
		{
			output(score, c);
		}
		else if (menu==3)
		{
			averge(score, c);
		}	
		else if (menu==4)
		{
			max(score, c);
		}
		else if (menu==5)
		{
			min(score, c);
		}
		else if (menu==6)
		{
			aa();
			printf ("종료 합니다.\n");
			aa();
			break;
		}
	}
	

	return 0;
}

void input(int *pa, int count)
{
	int i;
	aa();
	printf("점수를 입력하세요 : ");
	for (i=0; i<count; i++)
	{
		scanf("%d", &pa[i]);
	}
	aa();
}

void output(int *pa, int count)
{
	int i;
	
	aa();
	printf("점수를 출력합니다\n");
	for (i=0; i<count; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
	aa();
}

void averge(int *pa, int count)
{
	int i;
	double sum, a;
	
	aa();
	printf("평균을 출력합니다 ");
	for (i=0; i<count; i++)
	{
		sum=sum+pa[i];
	}
	a=sum/count;
	printf("평균값은 %.2lf\n", a);
	aa();
}

void max(int *pa, int count)
{
	int i;
	int a=0;
	aa();
	for (i=0; i<count; i++)
	{
		if (a<pa[i])
		{
			a=pa[i];
		}
	}
	printf("최고 점수는 %d\n", a);
	aa();
}

void min(int *pa, int count)
{
	int i;
	int a=pa[0];
	aa();
	for (i=0; i<count; i++)
	{
		if (a>pa[i])
		{
			a=pa[i];
		}
	}
	printf("최저 점수는 %d\n", a);
	aa();
}

void aa(void)
{
	printf("--------------------------------------------------------------------------\n");

}
*/
