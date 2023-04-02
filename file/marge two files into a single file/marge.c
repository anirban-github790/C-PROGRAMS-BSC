#include<stdio.h>
#include<process.h>
void main()
{
	FILE*fp1,*fp2,*fp3;
	char ch;
	fp1=fopen("input1.txt","r");
	fp2=fopen("input2.txt","r");
	fp3=fopen("output.txt","w");
	if(fp1==NULL||fp2==NULL||fp3==NULL)
	{
		printf("No such file file exists\n");
		exit(1);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		putc(ch,fp3);
	}
	putc(' ',fp3);
	while((ch=fgetc(fp2))!=EOF)
	{
		putc(ch,fp3);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	printf("The marging is completed");
}
