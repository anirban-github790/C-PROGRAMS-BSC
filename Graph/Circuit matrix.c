#include<stdio.h>
#define max 4
void main()
{
	int a[max][max],i,j,c0=0,c1=0;
	printf("Enter the data\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The circuit matrix is\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}//checking of non-circuit edge
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			if(a[j][i]==0)
				c0=0;
			else
				c1=1;
		}
		if(c0==0 && c1==0)
			printf("The edge %d is non-circuit edge\n",i);
		c0=0;
		c1=0;
	}//number of edge include in the circuit and check also the self loop
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			if(a[i][j]==1)
				c1++;
		}
		if(c1==1)
			printf("There is a selp loop at the row %d\n",i);
		else
			printf("The number of edge in the circuit is %d corresponding to the row %d\n",c1,i);
		c1=0;
	}
}
