#include <stdio.h>

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
