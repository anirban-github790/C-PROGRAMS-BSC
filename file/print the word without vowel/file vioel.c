#include<stdio.h>
#include<process.h>
#define true 1
#define false 0
void main()
{
	FILE *fp1,*fp2;
	char ch[30],ch1[30];
	int i,j=0,flag;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	else
	{
		while((fscanf(fp1,"%s",ch))!=EOF)
		{
			for(i=0;ch[i]!='\0';i++)
			{
				if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u')
				{
					flag=true;
					ch1[j++]=ch[i];
				}
			}
			j=0;
			if(flag==true)
				fprintf(fp2,"%s ",ch1);
			flag=false;
		}
	}
	fclose(fp1);
	fclose(fp2);
	printf("Done\n");
}
