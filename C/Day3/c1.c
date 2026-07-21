#include <stdio.h>

int main()
{
	int a= 2, b=20;
	
	switch (a)
	{
		case 1:
			b=300;
			break;
		case 2:
			b=200;
		case 3:
			b=100;
			break;
		default:
			b=0;
			break;
	}
	printf("%d",b);

	
	return 0;
}
