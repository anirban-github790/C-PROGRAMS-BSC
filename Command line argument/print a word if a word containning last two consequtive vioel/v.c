#include<stdio.h>
#include<process.h>
#include<string.h>
#define true 1
#define false 0
void main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch[10];
	int i,flag,v1,v2,j;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	if(fp1==NULL)
	{
		printf("no such file exists\n");
		exit(0);
	}
	while((fscanf(fp1,"%s",ch))!=EOF)
	{
		flag=false;
		j=strlen(ch);
		for(i=0;i<j;i++)
		{
			if((ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')&&(ch[i+1]=='a'||ch[i+1]=='e'||ch[i+1]=='i'||ch[i+1]=='o'||ch[i+1]=='u'))
			{
				v1=i;
				v2=i+1;
				flag=true;
			}
		}
		if(flag==true)
		{
			for(i=0;i<j;i++)
			{
				if(i!=v1 && i!=v2)
					fprintf(fp2,"%c",ch[i]);
			}
		}
		else
			fprintf(fp2,"%s",ch);
		fprintf(fp2,"%c",' ');
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
