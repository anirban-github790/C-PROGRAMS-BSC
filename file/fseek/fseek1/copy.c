#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
//	int n;
//	printf("Enter the number:");
//	scanf("%d",&n);
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
//	fseek(fp1,9,SEEK_CUR);
//	fseek(fp1,-5,SEEK_END);
	fseek(fp1,8,SEEK_SET);
	fseek(fp1,6,SEEK_CUR);
	while((ch=getc(fp1))!=EOF)
	{
		fprintf(fp2,"%c",ch);
	}
//	fseek(fp1,0,SEEK_SET);
	//rewind(fp1);
/*	while((ch=fgetc(fp1))!=EOF)
	{
		printf("%c",ch);
	}*/
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
	rename("copy.txt","paste.txt");
	//remove("copy.txt");
}
