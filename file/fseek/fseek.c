#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	char line[80];
	FILE *fp;
	fp=fopen("fse.txt","w");
	if(fp=NULL)
	{
		printf("no file exists\n");
		exit(0);
	}
	fputs("Hi!welcome to the team of zuropic",fp);
	fgets(line,80,fp);
	printf("Before fseek %s",line);
	fseek(fp,10,SEEK_SET);
	fflush(fp);
	fgets(line,80,fp);
	printf("%s",line);
	fseek(fp,-5,SEEK_CUR);
	fgets(line,80,fp);
	printf("%s",line);
	fseek(fp,-8,SEEK_END);
	fgets(line,80,fp);
	printf("%s",line);
	fclose(fp);
	getch();
}
