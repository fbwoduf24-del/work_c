/*
#include <stdio.h>

//연산 함수 +, -, *, /
int add(int i, int j); 
int bb(int i, int j); 
int dd(int i, int j); 
double averge(double i, double j); 

// 입력 함수, 첫번째수, 두번째수, 부호, 종료키 
int one(void); //연산할 첫번째 입력 함수 선언 
int two(void); //연산할 두번째 입력 함수 선언
char go(void); //부호 입력 함수 선언 


// +,-,* 조건 확인 함수 
int ac(char ch, int a, int b);

// 나누기 전용 처리 함수 
double ad(char ch, double a, double b);

// 모니터 출력되는 함수 
void aaa(char ch, int a, int b, int c, double cc);
/////////////////////////////////////////////////////////////////








int main()
{
	int a,b,c;
	double cc;
	char ch;
	
	while(1)
	{
		a = one(); //입력받을 첫번째 값 함수 출력하여 a에 저장 
		b = two(); //입력받을 두번째 값 함수 출력하여 b에 저장
		ch = go(); //입력받을 부호 출력하여 ch에 저장 

		
		if (ch=='s') //부호값이 s이면 종료 
		{
			break;
		}
		else if (ch=='/') //실수형 처리 함수  
		{
			cc=ad(ch,a,b);
			aaa(ch,a,b,c,cc);
		}
		else if(ch=='+'||ch=='-'||ch=='*') //정수형 +,-,* 처리 함수 
		{
			c=ac(ch,a,b);
			aaa(ch,a,b,c,cc);
		} 
		else //그 외에 입력값 경고 메시지 
		{
			printf("부호 입력은 +,-,*,/,s외에는 입력하지 마세요!!! \n\n");
		}
	}
	return 0;	
}












/////부호 확인 함수 

double ad(char ch, double a, double b)
{
	double cc;
	cc=averge(a,b);
	return cc;
}

int ac(char ch, int a, int b)
{
	int c;
	if (ch=='+')
	{
		c=add(a,b);  
	}
	else if (ch=='-')
	{
		c=bb(a,b);
	}
	else if (ch=='*')
	{
		c=dd(a,b);
	}
	return c;
}


////////////모니터 출력 처리 함수 
void aaa(char ch, int a, int b, int c, double cc)
{

	if (ch=='/')
	{
		printf("%d %c %d = %.2lf\n\n", a, ch, b, cc);
	}
	else
	{
		printf("%d %c %d = %d\n\n", a, ch, b, c);
	}
	return;	
}


////////입력처리 함수 
int one(void) 
{
	int a;
	
	printf("1번째 값 입력 ");
	scanf("%d", &a);
	
	return a;
}

int two(void) //입력함수 
{
	int b;
	
	printf("2번째 값 입력 ");
	scanf("%d", &b);
	
	return b;
}

char go(void)
{
	char ch;
	
	printf("부호 입력 (s입력시에는 종료) ");
	scanf(" %c", &ch);
	
	return ch;
}


/////////////// 연산처리 함수 
int add(int i, int j)
{
	int ss=0;
	ss=i+j;
	return ss;
}

int bb(int i, int j)
{
	int ss=0;
	ss=i-j;
	return ss;
}

double averge(double i, double j)
{
	double ss=0;
	ss=i/j;
	return ss;
}

int dd(int i, int j)
{
	int ss=0;
	ss=i*j;
	return ss;
}
*/
