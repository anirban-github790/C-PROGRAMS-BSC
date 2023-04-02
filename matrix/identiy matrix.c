#include<stdio.h>
void main()
{
	int a[4][4],i,j,c0=0,c1=0,c3=0,c4=0;
	printf("Enter the data\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The matrix is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		if(a[i][i]==1)
			c0=1;
		else
			c1=1;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i!=j)
			{
				if(a[i][j]==0)
					c3=1;
				else
					c4=1;
			}
		}
	}
	if(c0==1 && c1==0 && c3==1 && c4==0)
		printf("The matrix is identity matrix\n");
	else
		printf("The matrix is not identity matrix\n");
}
