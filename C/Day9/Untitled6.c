/*
#include <stdio.h>

void print(char **pps, int cnt);

int main()
{
	char *ptr[4] = {"eagle", "tiger", "lion", "squirrel"};
	int count;
	

	count = sizeof(ptr) / sizeof(ptr[0]);
	printf("%d %d\n", sizeof(ptr), sizeof(ptr[0]));
	print(&ptr, count);
	
	return 0;
} 

void print(char **pps, int cnt)
{
	int i;
	
	for (i=0; i<cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}
*/
