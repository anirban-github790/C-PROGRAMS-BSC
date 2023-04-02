#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,s=0;
	printf("Enter the data into the 1st array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the data into the 2nd array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("The 1st array is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("The 2nd array is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			c[i][j]=s;
			s=0;
		}
	}
	printf("The 3rd array is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
