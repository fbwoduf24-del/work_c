#include <stdio.h>

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
void print_menu();
void add_member();
void print_all_member();
void search_member();
void update_member();
void delete_member();

struct member
{
	int num;
	char name[30];
	char sex[30];
	char age[30];
	char phone[30];	
};

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

void print_menu()
{
	printf("\n");
	printf("=====================================\n");
	printf("1. 회원등록\n");
	printf("2. 회원 전체 조회\n");
	printf("3. 회원 검색\n");
	printf("4. 회원 정보 수정\n");
	printf("5. 회원 삭제\n");
	printf("6. 종료\n");
}

void add_member()
{
	struct member data;
		
	FILE *fp;
	fp=fopen("member.txt", "a+");
	if (fp==NULL)
	{
		printf("파일 열기에 실패");
		return; 
	}
	
	printf ("회원 정보를 입력하세요 \n");
	printf ("회원 번호를 입력하세요 : ");
	scanf("%d", &data.num);
	printf ("회원 이름을 입력하세요 : ");
	scanf("%s", data.name);
	printf ("회원 성별을 입력하세요 : ");
	scanf("%s", data.sex);
	printf ("회원 나이를 입력하세요 : ");
	scanf("%s", data.age);
	printf ("회원 전화번호를 입력하세요 : ");
	scanf("%s", data.phone);
	
	fprintf(fp, "%d %s %s %s %s\n", data.num, data.name, data.sex, data.age, data.phone);
	fclose(fp);
}

void print_all_member()
{
	int a;
	struct member data;
	FILE *fp;
	fp=fopen("member.txt", "r");
	if (fp==NULL)
	{
		printf("파일 열기에 실패");
		return; 
	}
	
	while (1)
	{
		a=fscanf(fp, "%d %s %s %s %s", &data.num, data.name, data.sex, data.age, data.phone);
		
		if (a==EOF)
		{
			break;			
		}
		printf("%d %s %s %s %s\n", data.num, data.name, data.sex, data.age, data.phone);
	}
	fclose(fp);
}

void search_member()
{
	int num;
	int a;
	struct member data={0};
	
	printf("검색할 회원번호를 입력해 주세요 : ");
	scanf("%d", &num);
	
	FILE *fp;
	fp=fopen("member.txt", "r");
	if (fp==NULL)
	{
		printf("파일 열기에 실패");
		return; 
	}
	
	while (1)
	{
		a=fscanf(fp, "%d %s %s %s %s", &data.num, data.name, data.sex, data.age, data.phone);
		
		if (a==EOF)
		{
			printf ("등록된 회원중에 없는 회원 번호입니다.\n");
			break;			
		}
		
		if (num==data.num)
		{
			printf("회원을 찾았습니다 회원 정보를 출력하겠습니다.\n");
			printf("%d %s %s %s %s\n", data.num, data.name, data.sex, data.age, data.phone);
			break;
		}
	}
	fclose(fp);
}
