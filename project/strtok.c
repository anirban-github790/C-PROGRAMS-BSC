#include<stdio.h>
#include<string.h>
void main()
{
	char line[20]="Hi.How.Are.You";
	char s[]=".";
	char *ptr;
	ptr=strtok(line,s);
	while(ptr!=NULL)
	{
		printf("%s\n",ptr);
		ptr=strtok(NULL,s);
	}
}
