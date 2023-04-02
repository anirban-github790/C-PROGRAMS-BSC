#include<stdio.h>
#include<process.h>
#define true 1
#define false 0
void main()
{
	FILE *fp1,*fp2;
	char ch[30],ch1[30];
	int i=0,j=0,k=0,flag;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	else
	{
		while((fscanf(fp1,"%[^\n]s",ch))!=EOF)
		{
			fgetc(fp1);
			for(i=0;ch[i]!='\0';i++)
			{
				if(ch[i]=='/'&&ch[i+1]=='/')
					break;
				else
				{
					fprintf(fp2,"%c",ch[i]);
					flag=true;
				}
			}
			if(flag==true)
			{
				fputc(' ',fp2);
				fputc('\n',fp2);
			}
			flag=false;
		}
	}
	fclose(fp1);
	fclose(fp2);
	printf("Done\n");
}
