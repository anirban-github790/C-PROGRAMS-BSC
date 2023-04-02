#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp;
	char ch;
	int b,l,c,w;
	fp=fopen("input.txt","r");
	if(fp==NULL)
	{
		printf("No file\n");
		exit(0);
	}
	else
	{
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' ')
		{
			b++;
			w++;
		}
		if(ch=='\n')
			l++;
		c++;
	}
	}
	printf("line=%d\n",l);
	printf("Charecter=%d\n",c);
	printf("word=%d\n",w+l);
	printf("Space=%d\n",b);
	fclose(fp);
}
