#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{
	FILE *fp;
	char ch[30],ch1[40];
	int v=999999999;
	fp=fopen("input.txt","r");
	if(fp==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	else
	{
		while((fscanf(fp,"%[^\n]s",ch))!=EOF)
		{
			fgetc(fp);
			if(v>strlen(ch))
			{
				v=strlen(ch);
				strcpy(ch1,ch);
			}
		}
	}
	printf("The shortest line\n");
	printf("%s",ch1);
	fclose(fp);
}
