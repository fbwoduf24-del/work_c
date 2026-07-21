/*
#include <stdio.h>

void input(int *pa, int count);
void print(int *pa, int count);

int main()
{
	int a[5];
	int count;
	
	count = sizeof(a)/sizeof(a[0]);
	
	input(a, count);
	printf("\n");
	printf("당신이 입력한 번호는 \n");
	print(a, count);
	
	return 0;
}

void input(int *pa, int count)
{
	int i,j;
	int a;
	
	for(i=0; i<count; i++)
	{
		
		printf("번호 입력 : ");
		scanf("%d", &pa[i]);
		
		for (j=0; j<i; j++)
		{
			if (pa[i]==pa[j])
			{
				printf("같은 번호가 있습니다.\n");
				i--;
			}
						
		}
	}
}

void print(int *pa, int count)
{
	int i; 
	for (i=0; i<count; i++)
	{
		printf("%d ", pa[i]);
	}
}
*/
