#include <stdio.h>
#include "member.h"

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

void update_member()
{
	
	
}
