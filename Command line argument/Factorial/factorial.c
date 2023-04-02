#include<stdio.h>
#include<process.h>
void main(int argc,char *argv[])
{
	int a,s=1,i;
	a=atoi(argv[1]);
	for(i=1;i<=a;i++)
	{
		s=s*i;
	}
	printf("Factorial=%d",s);
}
