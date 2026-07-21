#include <stdio.h>

int main()
{
	register int i;
	int sum=0;
	
	for (i=0; i<=10000; i++)
	{
		sum=sum+i;
	}
	
	printf("%d", sum);
	return 0;
}



