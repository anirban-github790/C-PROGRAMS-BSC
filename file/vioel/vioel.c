#include<stdio.h>
#include<process.h>
void main()
{
	FILE*fp;
	fp=fopen("voiel.txt","w");
	char ch;
	int count=0;
	if(fp==NULL)
	{
		printf("No such file exists\n");
		exit(1);
	}
	else
	{
		printf("Enter any name:");
	    while((ch=getchar())!=EOF)
	    {
	    	fprintf(fp,"%c",ch);
		}
		printf("Writing is complete\n");
		fclose(fp);
	}
	fp=fopen("voiel.txt","r");
	if(fp==NULL)
	{
		printf("No such file exists\n");
		exit(1);
	}
	else
	{
		while((ch=getc(fp))!=EOF)
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				count++;
			}
		}
		printf("The number of vioel is %d",count);
		fclose(fp);
	}
}
/*void main()
{
	FILE*fp;
	char ch;
	int count;
	fp=fopen("vioel.txt","r");
	if(fp==NULL)
	{
		printf("No file\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)//getc is equal to fgetc that is (getc=fgetc)
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		    count++;
	}
	printf("vioel=%d",count);
	fclose(fp);
}*/
