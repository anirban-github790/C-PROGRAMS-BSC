#include<stdio.h>
#include<process.h>
void main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch[10];
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	if(argc!=3)
	{
		printf("Exatly three arguments is needed\n");
		exit(0);
	}
	if(fp1==NULL)
	{
		printf("No such file exists\n");
		exit(0);
	}
	while((fscanf(fp1,"%s",ch))!=EOF)
	{
		if(ch[0]=='a'||ch[0]=='e'||ch[0]=='i'||ch[0]=='o'||ch[0]=='u'||ch[0]=='A'||ch[0]=='E'||ch[0]=='I'||ch[0]=='O'||ch[0]=='U')
		{
			fprintf(fp2,"%s",ch);
		}
		fprintf(fp2,"%c",' ');
	}
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
