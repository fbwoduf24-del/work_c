/*
#include <stdio.h>

int *sum(int a, int b);

int main()
{
	int *a; //포인터 변수 선언 
	
	a=sum(10, 20); //주소를 반환하는 sum 함수의 결과값을 포인터 a에 대입 
	printf("%d", *a); //반환된 sum 결과값을 포인터 a를 통해 간접 출력 
	
}

int *sum(int a, int b) //정수 a,b를 입력받아 결과값을 주소로 돌려주는 함수 
{
	static int s; //함수가 종료되어도 값을 유지하는 정적 변수 선언 
	s=a+b; //입력받은 값을 s에 저장 
	
	return &s; //결과값을 주소로 돌려줌 
}
*/
