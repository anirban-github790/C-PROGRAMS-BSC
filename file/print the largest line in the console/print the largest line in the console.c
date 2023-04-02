#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{
	FILE *fp;
	char ch[30],ch1[30];
	int v=0;
	fp=fopen("largest.txt","r");
	if(fp==NULL)
	{
		printf("no such file exists\n");
		exit(0);
	}
	while((fscanf(fp,"%[^\n]s",ch))!=EOF)
	{
		fgetc(fp);
		if(strlen(ch)>v)
		{
			v=strlen(ch);
			strcpy(ch1,ch);
		}
	}
	printf("%s",ch1);
	fclose(fp);
}
