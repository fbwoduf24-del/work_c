#include <stdio.h>


int main()
{
	int ch;
	int cnt=0, cnt1=0, cnt2=0;
	ch=getchar();
	
	while (ch != 10)
	{
		if ((ch>='a') && (ch<='z'))
		{
			cnt = cnt+1;
		}
		else if ((ch>='A') && (ch<='Z'))
		{
			cnt1=cnt1+1;
		}
		else
		{
			cnt2=cnt2+1;
		}
		ch=getchar();
	}
	printf("%d %d %d", cnt, cnt1, cnt2);
	
	return 0;
}

