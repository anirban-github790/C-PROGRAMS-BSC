#include<stdio.h>
#include<process.h>
void main(int argc,char *argv[])
{
	FILE *fp1,*fp2,*fp3;
	char ch;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
	fp3=fopen(argv[3],"w");
	if(fp1==NULL||fp2==NULL)
	{
		printf("No such file\n");
		exit(0);
	}
	if(argc!=4)
	{
		printf("four arguments\n");
		exit(0);
	}
	while((ch=getc(fp1))!=EOF)
	{
		fprintf(fp3,"%c",ch);
	}
	printf("\n");
	while((ch=getc(fp2))!=EOF)
	{
		fprintf(fp3,"%c",ch);
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
