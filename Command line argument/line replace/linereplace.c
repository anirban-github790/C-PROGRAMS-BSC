#include<stdio.h>
#include<process.h>
#include<string.h>
void main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch[30],ch1[30],ch2[30],ch3;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	printf("Enter the replace line:");
	fflush(stdin);
	scanf("%[^\n]s",ch1);
	printf("Enter the place line:");
	fflush(stdin);
	scanf("%[^\n]s",ch2);
	if(argc!=3)
	{
		printf("Ot needed three arguments\n");
		exit(0);
	}
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	while((fscanf(fp1,"%[^\n]s",ch))!=EOF)
	{
		fgetc(fp1);
		if(strcmp(ch,ch1)==0)
			fprintf(fp2,"%s\n",ch2);
		else
			fprintf(fp2,"%s\n",ch);
	}
	printf("Done");
	fclose(fp1);
	fclose(fp2);
}
