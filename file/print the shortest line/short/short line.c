#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{
	FILE *fp;
	char ch[30],ch1[30];
	int v;
	fp=fopen("input.txt","r");
	if(fp==NULL)
	{
		printf("No such file\n");
		exit(0);
	}
	else
	{
		fscanf(fp,"%[^\n]s",ch);
		fgetc(fp);
		v=strlen(ch);
		while((fscanf(fp,"%[^\n]s",ch))!=EOF)
		{
			fgetc(fp);
			if(v>strlen(ch))
			{
				v=strlen(ch);
				strcpy(ch1,ch);
			}
		}
		printf("The shortest line is:");
		printf("%s",ch1);
	}
	fclose(fp);
}
