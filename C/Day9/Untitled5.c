/*
#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main()
{
	char *pa="success"; //포인트 변수에 상수문자열 입력 
	char *pb="failure";
	char *pp;
		
	printf("pa -> %s, pb -> %s\n", pa, pb); //포인트 변수 주소 대로 출력 
	

	swap_ptr(&pa, &pb); //상수 문자열이 저장된 주소를 갖고 있는 포인트 변수의 주소를 보내줌 

	printf("pa -> %s, pb -> %s\n", pa, pb);
		
	return 0;
}

void swap_ptr(char **ppa, char **ppb) //원본문자열이 저장된 주소를 갖고 있는 
{                                     //포인터 변수의 주소를 입력받음. 
	char *pt;
	//**ppt는 원본문자열이 저장된 주소를 가진 포인터변수의 주소를 가진다. 
	pt=*ppa; 
	*ppa=*ppb; //포인터변수의 저장된 주소를 바꿔준다.  
	*ppb=pt; //포인터변수가 자신이 가진 주소를 바꾸는 과정 
}
*/
