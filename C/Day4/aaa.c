/*
#include <stdio.h>


int main()
{
	int a,b,c,cc;
	double aa,bb,ccc;
	char ch;
	
	printf("계산기 프로그램입니다.\n");
	printf("첫번째 입력값은? ");
	scanf("%d", &a);
	printf("두번째 입력값은? ");
	scanf("%d", &b);
	aa=a;
	bb=b;
	printf("부호는? ");
	scanf(" %c", &ch); // 
	
	if (ch=='+') 
	{
		c=a+b;
		printf("%d %c %d = %d", a,ch,b,c);
	}
	else if (ch=='-')
	{
		c=a-b;
		printf("%d %c %d = %d", a,ch,b,c);
	}
	else if (ch=='*')
	{
		c=a*b;
		printf("%d %c %d = %d", a,ch,b,c);
	}
	else if (ch=='/')
	{
		c=a/b;
		cc=a%b;
		ccc=aa/bb;
		printf("%d %c %d = 결과값은 %.2lf 몫은 %d 나머지는 %d", a,ch,b,ccc,c,cc);
	}
	else
	{
		printf("서식에 안맞는 부호 입력 했음");
	}

/*
	switch (ch)
	{
		case '+':
			c = a + b;
			printf("%d %c %d = %d", a,ch,b,c);
			break;
		case '-':
			c = a - b;
			printf("%d %c %d = %d", a,ch,b,c);
			break;
		case '*':
			c = a * b;
			printf("%d %c %d = %d", a,ch,b,c);
			break;
		case '/':
			c = a / b;
			cc = a % b;
			ccc = aa / bb;
			printf("%d %c %d = 결과값은 %.2lf 몫은 %d 나머지는 %d", a,ch,b,ccc,c,cc);
			break;
		default:
			printf("//서식에 안맞는 값 입력//");
			break; 
	}

		return 0;

}
*/
