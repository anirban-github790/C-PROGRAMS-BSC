#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch[30],ch1[30],ch2[30],ch3;
	int v;
	printf("Replace line:");
	scanf("%[^\n]s",ch1);
	printf("Place line:");
	scanf("%[^\n]s",ch2);
	fp1=fopen("data.txt","r");
	fp2=fopen("replace.txt","w");
	if(fp1==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	if(fp2==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	else
	{
		while((fscanf(fp1,"%[^\n]s",ch))!=EOF)
		{
			v=strcmp(ch1,ch);
			if(v==0)
				fprintf(fp2,"%s",ch2);
			else
				fprintf(fp2,"%s",ch);
			if(ch3=' ')
				fprintf(fp2,"%c",ch3);
		}
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
