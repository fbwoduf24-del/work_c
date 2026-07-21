#include <stdio.h>
#include <string.h>

int main()
{
	int a[3]={10,20,30};
	int *pa;
	int i;
	pa=a;
	pa[3]=80;
	printf("배열의 값 : %d\n ", pa[3]);
	printf("배열의 값 : %d\n ", a[3]);
	return 0;
}

