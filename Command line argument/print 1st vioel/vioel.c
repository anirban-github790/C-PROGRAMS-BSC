#include<stdio.h>
#include<process.h>
void main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch;
	int c=0;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	if(argc!=3)
	{
		printf("Three arguments needed\n");
		exit(0);
	}
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		c++;
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			break;
		}
	}
	printf("the position=%d\n",c);
	fseek(fp1,c-1,SEEK_SET);
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
		putchar(ch);
	}
	fclose(fp1);
	fclose(fp2);
}
