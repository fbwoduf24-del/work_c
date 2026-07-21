#include <stdio.h>

int main()
{
	int a=10;
	int *pa=&a;
	printf("%p %p\n", &a, pa);
	printf("%p\n", pa+1);
	
	int ary1[]={1,2};
	int *pary1=ary1; //ary1 시작 주소 
	printf("%d %d\n", ary1, pary1);
	printf("%d %d\n", ary1+1, pary1+1);
	
	char ary2[]={'a', 'b'}; //
	char *pary2=ary2; //포인터 변수에 배열변수 시작위치 주소를 저장 
	printf("%d %d\n", ary2, pary2); //포인터변수 배열변수 이름자체가 주소 
	printf("%d %d\n", ary2+1, pary2+1);	
	

	
	
	char *a4[2][3];
	char **pa4=a4; 
	printf("%p %p\n", a4, pa4);
	 
	return 0;
}
