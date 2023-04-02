#include<stdio.h>
#include<process.h>
void main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch,ch1;
	int c=0,v=0,t=0;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	if(argc!=3)
	{
		printf("It need three arguments\n");
		exit(0);
	}
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	while((ch=getc(fp1))!=EOF)
	{
		c++;
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='I')
		{
			v=c;
			break;
		}
	}
	rewind(fp1);
	c=0;
	while((ch=getc(fp1))!=EOF)
	{
		c++;
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='I')
		{
			t=c;
			ch1=ch;
		//	printf("t=%d\n",t);
		}
	}
//	printf("t=%d",t);
//	c=0;
	rewind(fp1);
	fseek(fp1,v,SEEK_SET);
	c=v;
	while((ch=fgetc(fp1))!=EOF)
	{
		c++;
		if(c==t && ch==ch1)
		{
		//	fputc(ch,fp2);
		//	printf("It\n");
			printf("Done\n");
			exit(0);
		}
		putc(ch,fp2);
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
