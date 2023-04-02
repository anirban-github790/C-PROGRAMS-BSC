#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp;
	char ch;
	int count=0;
	fp=fopen("b.txt","r");
	if(fp==NULL)
	{
		printf("No file");
		exit(1);
	}
	while((ch=getc(fp))!=EOF)
	{
		if(ch=='a' || ch=='A')
		    count++;
	}
	printf("count=%d",count);
	fclose(fp);
}
