#include<stdio.h>
#include<process.h>
#include<string.h>
#define true 1
#define false 0
void main()
{
	FILE *fp1,*fp2;
	char ch[10];
	int i,flag,v1,v2,j;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("no such file exists\n");
		exit(0);
	}
	while((fscanf(fp1,"%s",ch))!=EOF)
	{
		flag=false;
		j=strlen(ch);
	//	printf("len=%d\n",j);
		for(i=0;i<j;i++)
		{
			if((ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')&&(ch[i+1]=='a'||ch[i+1]=='e'||ch[i+1]=='i'||ch[i+1]=='o'||ch[i+1]=='u'))
		//	if(ch[i]=='a' && ch[i+1]=='a')
			{
				v1=i;
				v2=i+1;
			/*	printf("v1=%d\n",v1);
				printf("v2=%d\n",v2);
				printf("ch[v1]=%c\n",ch[v1]);
				printf("ch[v2]=%c\n",ch[v2]);*/
				flag=true;
				break;
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
