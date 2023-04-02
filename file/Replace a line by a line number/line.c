#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch[30],ch1[30];
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	int n,v;
	printf("Enter the line which will place:");
	scanf("%[^\n]s",ch1);
	fflush(stdin);
	printf("Enter the line which will replace:");
	scanf("%d",&n);
	if(fp1==NULL)
	{
		printf("no file\n");
		exit(0);
	}
	else
	{
		while((fscanf(fp1,"%[^\n]s",ch))!=EOF)
		{
			fgetc(fp1);
			v++;
			if(v==n)
			{
				fprintf(fp2,"%s\n",ch1);
			}
			else
			{
				fprintf(fp2,"%s\n",ch);
			}
		}
	}
	fclose(fp1);
	fclose(fp2);
	printf("Done\n");
}
