#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{
	FILE*fp1,*fp2;
	char ch1[20],ch2;
	fp1=fopen("rev.txt","r");
	fp2=fopen("revo.txt","w");
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
	while(fscanf(fp1,"%s",ch1)!=EOF)
	{
		fprintf(fp2,"%s",strrev(ch1));
		if(ch2=' ')
		fprintf(fp2,"%c",ch2);
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
