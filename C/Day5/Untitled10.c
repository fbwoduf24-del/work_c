#include <stdio.h>

int main()
{
	int score[5];
	int i;
	int total=0;
	double avg;
	int count;
	
	count = sizeof(score) / sizeof(score[0]);
	
	for (i=0; i<count; i++)
	{
		scanf("%d", &score[i]);
	}
	
	for (i=0; i<count; i++)
	{
		total = total + score[i];
	}
	avg = total/count;
	
	for (i=0; i<count; i++)
	{
		printf("%5d\n", score[i]);
	}
	printf("\n");
	
	printf("ЦђБе : %.1lf\n", avg);
	
	
	return 0;
}
