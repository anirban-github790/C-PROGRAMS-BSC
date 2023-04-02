#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp;
	char ch;
	int count;
	fp=fopen("a.txt","w");
	if(fp==NULL)
	{
		printf("No such file exist");
		exit(1);
	}
	printf("Enter the name:\n");
	while((ch=getchar())!=EOF)
	{
		fprintf(fp,"%c",ch);
	}
	fclose(fp);
	fp=fopen("a.txt","r");
	if(fp==NULL)
	{
		printf("No such file exist");
		exit(1);
	}
	while((ch=getc(fp))!=EOF)
	{
	    count++;
    }
    printf("count=%d",count);
    fclose(fp);
}
