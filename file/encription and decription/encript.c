#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	int i=0;
	fp1=fopen("input.txt","r");
	fp2=fopen("encript.txt","w");
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
	//	for(i=1;i<=4;i++)
			fprintf(fp2,"%c",ch+1);//encription is done here
	//	fprintf(fp2,"%c",'\n');
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
