/*
#include <stdio.h>
#include <stdlib.h>

struct list
{
	int kor;
	int eng;
	int math;
	int sum;
	double avg;
};

struct total
{
	int kor;
	int eng;
	int math;
	double avg;
};

int main()
{
	struct list *data;
	struct total ss={0};
	int i,c;
		
	printf("몇 명의 학생입니까? : ");
	scanf("%d", &c);
	printf ("------------------------------------------\n");
	data = (struct list *)malloc(c*sizeof(struct list));
	
	for(i=0; i<c; i++)
	{
		printf("%d번째 학생의 국,영,수 점수는 ? ", i+1);
		scanf("%d %d %d", &data[i].kor, &data[i].eng, &data[i].math);
		data[i].sum = (data[i].kor)+(data[i].eng)+(data[i].math);
		data[i].avg = (data[i].sum) / 3.0;
		
		
		ss.kor=ss.kor+data[i].kor;
		ss.eng=ss.eng+data[i].eng;
		ss.math=ss.math+data[i].math;
	}
	
	
	printf ("------------------------------------------\n");
	for (i=0; i<c; i++)
	{
		printf("%d번째 학생의 점수 총합은 %d, 평균은 %.1lf 입니다.\n", i+1, data[i].sum, data[i].avg);
	}
	
	
	printf ("-------------------------------------------\n");
	ss.avg=ss.kor / 5.0;
	printf("국어의 총합은 : %d, 평균은 : %.1lf\n", ss.kor, ss.avg);
	ss.avg=ss.eng / 5.0;
	printf("영어의 총합은 : %d, 평균은 : %.1lf\n", ss.eng, ss.avg);
	ss.avg=ss.math / 5.0;
	printf("수학의 총합은 : %d, 평균은 : %.1lf\n", ss.math, ss.avg);
	
	
	free(data);
		
	
	return 0;
}

*/
