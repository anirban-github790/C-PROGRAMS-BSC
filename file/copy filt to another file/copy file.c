#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("copy.txt","r");
	fp2=fopen("paste.txt","w");
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(1);
	}
	if(fp2==NULL)
	{
		printf("No such file exists\n");
		exit(1);
	}
	while((ch=getc(fp1))!=EOF)
	{
		fprintf(fp2,"%c",ch);//fprintf and putc is same (fprintf=putc)
		//putc(ch,fp1);
		printf("%c",ch);
	}
	printf("\nDONE");
	fclose(fp1);
	fclose(fp2);
}
