#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{
	FILE*fp1,*fp2;
	char ch[10],ch1[10]="the",ch2[10]="an",ch3[10]="a",ch4;
	int the,a,an;
	fp1=fopen("give.txt","r");
	fp2=fopen("filereplace.txt","w");
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
	while((fscanf(fp1,"%s",ch))!=EOF)
	{
		the=strcmp(ch,ch1);
		an=strcmp(ch,ch2);
		a=strcmp(ch,ch3);
		if(the==0)
			fprintf(fp2,"%s","rthe");
		else if(an==0)
			fprintf(fp2,"%s","ran");
		else if(a==0)
			fprintf(fp2,"%s","ra");
		else
			fprintf(fp2,"%s",ch);
		if(ch4=' ')
			fprintf(fp2,"%c",ch4);
	}
	printf("Done");
	fclose(fp1);
	fclose(fp2);
}
