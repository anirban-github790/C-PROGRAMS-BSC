#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("encript.txt","r");
	fp2=fopen("decript.txt","w");
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		fprintf(fp2,"%c",ch-1);//decription is done here
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
