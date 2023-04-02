#include<stdio.h>
#include<process.h>
void main()
{
	FILE*fp1,*fp2;
	char ch1,ch2;
	int count=0;
	fp1=fopen("com.txt","r");
	fp2=fopen("ccom.txt","r");
	if(fp1==NULL)
	{
		printf("No file");
		exit(0);
	}
	if(fp2==NULL)
	{
		printf("No file");
		exit(0);
	}
	do
	{
		ch1=fgetc(fp1);
		ch2=fgetc(fp2);
		if(ch1!=ch2)
		{
		    printf("Two files are not identical\n");
		    printf("The charecter mismatch at %d",++count);
		    exit(0);
	    }
	    count++;
	}while((!feof(fp1)) && (!feof(fp2)));
	printf("Two files are identical\n");
	printf("Done\n");
	fclose(fp1);
	fclose(fp2);
}
