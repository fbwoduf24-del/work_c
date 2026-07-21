#include <stdio.h>

int main()
{
	int a = 5, b=5;
	int pre, post;
	
	pre =(++a)*3;
	post=(b++)*3;
	
	printf("증감 연산 후 초기값은 a=%d, b=%d\n", a, b);
	printf("전위값 %d, 후위값 %d", pre, post);
	return 0;
}
