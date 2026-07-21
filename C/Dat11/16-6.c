#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile 
{
	int age;
	double height;
};

struct ss 
{
	struct profile pf;
 	int id;
 	double grade;
};


int main()
{
	struct ss yoo;
	
	yoo.pf.age=17;
	yoo.pf.height=170.5;
	yoo.id=315;
	yoo.grade=4.3;
	
	printf("%d\n", yoo.pf.age);
	printf("%.1lf\n", yoo.pf.height);
	printf("%d\n", yoo.id);
	printf("%.1lf\n", yoo.grade);
	
	
	return 0;
}


