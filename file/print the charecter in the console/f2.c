#include<stdio.h>
#include<process.h>
void main()
{
	FILE*fp1,*fp2;
	char ch;
	fp1=fopen("copy.txt","r");
	if(fp1==NULL)
	{
		printf("No file");
		exit(1);
	}
	while((ch=getc(fp1))!=EOF)
	{
		printf("%c",ch);
	}
	printf("DONE");
	fclose(fp1);
}
