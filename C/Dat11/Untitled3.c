/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char temp[80];
	char *name[5];
	char *num[5];
	int *age;
	int i, count;
	int size; 
	
	age = (int*)malloc(5*sizeof(int));
	printf("몇번 반복 할 건가?(1~5) : ");
	scanf("%d", &count);
	if (count > 5)
	{
		printf("초과");
		return 1;
	}
	
	for (i=0; i<count; i++)
	{
		printf ("이름을 입력하세요 : ");
		getchar();
		gets(temp);
		size=strlen(temp);
		name[i]=(char*)malloc(size+1);
		strcpy(name[i], temp);
	
		printf ("나이를 입력하세요 : ");
		getchar();
		scanf("%d", &age[i]);
		
		printf ("전화번호를 입력하세요 : ");
		getchar();
		gets(temp);
		size=strlen(temp)+1;
		num[i]=(char*)malloc(size);
		strcpy(num[i], temp);
	}
	
	for (i=0; i<count; i++)
	{
		printf("이름은 : %s\n", name[i]);
		printf("나이는 : %d\n", age[i]);
		printf("전화번호는 : %s\n", num[i]);
	}
	
	for (i=0; i<count; i++)
	{
		free(name[i]);
		free(num[i]);
	}
	free(age);

	return ;
}
*/
