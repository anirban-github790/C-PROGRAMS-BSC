#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int x,y,sum;
	if(argc!=3)
	{
		printf("Enter exactly two number\n");
		exit(0);
	}
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	sum=x+y;
	printf("sum=%d",sum);
}
