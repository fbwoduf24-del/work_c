#include <stdio.h>

int main()
{
	FILE *fp;
	char str[]="banana";
	int i;
	
	fp=fopen("a.txt", "w");
	if (fp==NULL)
	{
		printf("파일 실패");
		return 1; 
	}
	
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	
	fclose(fp);
	return 0;
}
