#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	int v;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		if(ch=='/')
		{
			v=ftell(fp1);
			fseek(fp1,v+1,SEEK_SET);
			while(!feof(fp1))
			{
				ch=fgetc(fp1);
				if(ch=='/')
				{
					break;
				}
			}
			putc(' ',fp2);
		}
		else
			putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	printf("Done\n");
}
