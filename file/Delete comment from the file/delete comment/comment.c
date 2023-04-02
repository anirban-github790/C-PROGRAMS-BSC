#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	int v=0,t=0,t1=0,v1=0;
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		v++;
		if(ch=='/')
		{
			t=v;
			break;
		}
	}
//	printf("v=%d\n",v);
	v=0;
	rewind(fp1);
	while((ch=fgetc(fp1))!=EOF)
	{
		v++;
		if(ch=='/')
		{
			t1=v;
		}
	}
//	printf("t1=%d\n",t1);
	v=0;
	rewind(fp1);
	while((ch=fgetc(fp1))!=EOF)
	{
		v++;
		if(v==t)
		{
			putc(' ',fp2);
		}
		if(v<t||v>t1)
		{
			putc(ch,fp2);
		}	
	}
	fclose(fp1);
	fclose(fp2);
	printf("Done\n");
}
