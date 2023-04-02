#include<stdio.h>
#include<process.h>
void main()
{
	FILE*fp1,*fp2;
	char ch,ch1='s';
	fp1=fopen("replace.txt","r");
	fp2=fopen("freplace.txt","w");
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
	while((ch=fgetc(fp1))!=EOF)
	{
		if(ch==ch1)
		    fprintf(fp2,"%c",'a');
		else
		    fprintf(fp2,"%c",ch);
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
