#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp;
	char ch,ch1[20];
	int c=0;
	printf("Enter the name of the file:");
	scanf("%s",ch1);
	fp=fopen(ch1,"r");
	if(fp==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			if(ch=='.')
				c++;
		}
	}
	printf("The number of line is %d\n",c);
	fclose(fp);
	printf("Done\n");
}
