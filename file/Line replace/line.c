#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{
	char ch[30],ch1[30],ch2[30],ch3;
	FILE *fp1,*fp2;
	fp1=fopen("input.txt","r");
	fp2=fopen("o.txt","w");
	printf("Enter the replace line:");
	fflush(stdin);
	scanf("%[^\n]s",ch1);
	printf("Enter the place line:");
	fflush(stdin);
	scanf("%[^\n]s",ch2);
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
		if((strcmp(ch,ch1))==0)
		{
			fprintf(fp2,"%s\n",ch2);
		}
		else
		{
			fprintf(fp2,"%s\n",ch);
		}
	}
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
	fp1=fopen("input.txt","w");
	fp2=fopen("o.txt","r");
	while((ch3=fgetc(fp2))!=EOF)
	{
		fprintf(fp1,"%c",ch3);
	}
	fclose(fp1);
	fclose(fp2);
}

