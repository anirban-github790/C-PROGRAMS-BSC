#include<stdio.h>
#include<string.h>
#include<process.h>
int main()
{
	FILE*fp1,*fp2;
	char ch[10],ch1[10]="some",ch2;
	int v;
	fp1=fopen("read.txt","r");
	fp2=fopen("replace.txt","w");
	if(fp1==NULL)
	{
		printf("No file");
		exit(0);
	}
	if(fp2==NULL)
	{
		printf("No file");
		exit(0);
	}
	while((fscanf(fp1,"%s",ch))!=EOF)
	{
		v=strcmp(ch,ch1);
	    if(v==0)
		    {
			    fprintf(fp2,"%s","find");
			}
		else
		{
			fprintf(fp2,"%s",ch);
	    }
	    if(ch2=' ')
	    {
	    	fprintf(fp2,"%c",ch2);
		}
	}
	printf("Done");
	fclose(fp1);
	fclose(fp2);
}
