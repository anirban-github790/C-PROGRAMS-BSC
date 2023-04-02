#include<stdio.h>
#define max 4
void main()
{
	int a[max][max],i,j,k,c1=0,c0=0;
	printf("Enter the data:\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The incidence matrix is\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}//degree of a vertex
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			if(a[i][j]==1)
				c1++;
		}
		printf("The degree of a vertex %d is %d\n",i,c1);
		c1=0;
	}//checking self loop which can not represent incidence matrix
	for(i=0;i<max;i++)
	{
		if(a[i][i]==1)
		printf("This matrix has self loop at vertex %d\n",i);
	}//checking isolated vertex
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			if(a[i][j]==0)
				c0=0;
			else
				c1=1;
		}
		if(c0==0 && c1==0)
			printf("The vertex %d is isolated\n",i);
		c0=0;
		c1=0;
	}//checking pendent vertex
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			if(a[i][j]==1)
				c1++;
		}
		if(c1==1)
			printf("The vertex %d is pendent vertex\n",i);
		c1=0;
	}//checking more than two 1 in each column
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			if(a[j][i]==1)
				c1++;
		}
		if(c1>2)
			printf("One edge is incidence on three vertex at vertex %d\n",j);
		c1=0;
	}//checking two edges are parallel or not
	for(i=0,j=i+1;i<max;i++,j++)
	{
		for(k=0;k<max;k++)
		{
			if(a[k][i]==a[k][j])
				c0=0;
			else
				c1=1;
		}
		if(c0==0 && c1==0)
			printf("The %d and %d are parallel edge\n",i,j);
		c0=0;
		c1=0;
	}
}
