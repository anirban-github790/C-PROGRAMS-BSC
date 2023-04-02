#include<stdio.h>
#include<process.h>
void main()
{
	int a[4][4],i,j,k,c1=0,c0=0;
	printf("Enter the data:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The 2-d array is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}//Degree of vertex calculation
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]==0)
				c0=0;
			else
				c1=1;
		}
		if(c0==0 && c1==0)
			printf("The vertex %d is isolated vertex\n",i);
		c0=0;
		c1=0;
	}//found self loop
	for(i=0;i<4;i++)
	{
		if(a[i][i]==1)
			printf("The vertex %d has a self loop\n");
	}//checking parallel edge which can not represented adjacency matrix
	for(j=0,k=j+1;j<4;j++,k++)
	{
		for(i=0;i<4;i++)
		{
			if(a[i][j]==a[i][k])
				c1=0;
			else
				c0=1;
		}
		if(c1==0 && c0==0)
			printf("The parallel edge at %d and %d which can not represented adjacency matrix\n",j,k);
		c1=0;
		c0=0;
	}
}
