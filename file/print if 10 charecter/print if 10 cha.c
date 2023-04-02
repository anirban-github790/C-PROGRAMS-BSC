#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	int c=0;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("No such file exists\n");
	}
	else
	{
		while((ch=fgetc(fp1))!=EOF)
		{
			c++;
		}
	}
	rewind(fp1);
	if(c>=10)
	{
		while((ch=fgetc(fp1))!=EOF)
		{
			putc(ch,fp2);
		}
	}
	else
	{
		printf("The charecter are not above 10\n");
		exit(0);
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
