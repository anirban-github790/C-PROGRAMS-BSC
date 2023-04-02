#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{
	FILE *fp1,*fp2;
	char ch[30];
	fp1=fopen("in.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	else
	{
	while((fscanf(fp1,"%[^\n]s",ch))!=EOF)
	{
		fgetc(fp1);
		if(strlen(ch)>=10)
		{
			fprintf(fp2,"%s",ch);
		}
	}
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
