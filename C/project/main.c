#include <stdio.h>
#include "member.h"
/* 구조체 member: 회원번호, 이름, 성별, 나이, 전화번호 
	파일 입출력과 구조체를 이용한 회원 관리 프로그램(분할 컴파일) 
	0. 메뉴 출력 : void print_manu()
	1. 회원 등록 : void add_member()
	2. 전체 회원 조회 : void print_all_member()
	3. 회원 번호로 검색 : void search_member()
	4. 회원 정보 수정 : void update_member()
	5. 회원 삭제 : void delete_member()
	6. 종료 
*/


int main()
{
	int choice;
	print_menu();
	while(1)
	{
		printf("\n");
		scanf("%d", &choice);
		if (choice == 0)
		{
			print_menu();	
		}
		else if(choice == 1)
		{
			 add_member();
		}
		else if(choice == 2)
		{
			 print_all_member();
		}
		else if(choice == 3)
		{
			search_member();
		}
	}
	
	
	return 0;
}


