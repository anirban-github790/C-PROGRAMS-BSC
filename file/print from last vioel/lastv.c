#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch[10],ch1;
	int c=0,v;
	printf("Enter the text name:");
	gets(ch);
	fp1=fopen(ch,"r");
	fp2=fopen("output.txt","w");
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	while((ch1=fgetc(fp1))!=EOF)
	{
		c++;
		if(ch1=='\n')
			c++;
		if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u'||ch1=='A'||ch1=='E'||ch1=='I'||ch1=='O'||ch1=='U')
		{
			v=c;
		}
	}
	fseek(fp1,v,SEEK_SET);
	while((ch1=fgetc(fp1))!=EOF)
	{
		fprintf(fp2,"%c",ch1);
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
