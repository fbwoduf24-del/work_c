/*
#include <Stdio.h>

void input(double *pa, int size);
void sum(double *pa, int size);


int main()
{
	double ary[5]; //실수형 배열 선언 
	
	int size;
	
	size = sizeof(ary)/sizeof(ary[0]); //배열의 개수 구하기 
	
	input(ary, size);  //ary[0] 주소 및 배열 개수 입력과 input 함수 호출 
	
	sum(ary, size); //ary[0] 주소 및 배열 개수 입력과 sum 함수 호출 
	
	return 0;
}

void input(double *pa, int size) //ary[0] 주소를 포인터 변수로 입력 받음 
{
	int i;
	
	printf("%d과목 점수를 입력하세요 \n", size);
	
	for (i=0; i<size; i++)
	{
		if (i==0)
		{
			printf("국어 : ");
		}
		else if(i==1)
		{
			printf("영어 : ");
		}
		else if(i==2)
		{
			printf("수학 : ");
		}
		else if(i==3)
		{
			printf("사회 : ");
		} 
		else if(i==4)
		{
			printf("과학 : ");
		}  
		scanf("%lf", &pa[i]); //포인터 변수 pa를 통해 a[]배열에 값 입력
	} 
	printf("\n"); 
}

void sum(double *pa, int size)
{
	int i;
	double sum, avg;
	
	for (i=0; i<size; i++)
	{
		sum = sum + pa[i];	
	}
	avg = sum / size;
	printf("총점은 : %.2lf, 평균은 : %.2lf", sum, avg);
	
}

*/
