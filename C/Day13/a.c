/*
#include <stdio.h>

int main()
{
	FILE *ifp, *ofp;
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;
	
	ifp = fopen("a.txt", "r");
	if (ifp==NULL)
	{
		printf("읽기 실패");
		return 1;
	}
	
	ofp=fopen("b.txt", "w");
	if (ifp==NULL)
	{
		printf("읽기 실패");
		return 1;
	}

	while (1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
		if (res == EOF)
		{
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s %d %.1lf\n", name, total, avg);
	}
	
	fclose(ifp);
	fclose(ofp);
	
	return 0;
}
*/
