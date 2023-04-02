#include<stdio.h>
#include<process.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k=0,l=0,m=0,ar,ac,br,bc,s=0;
	printf("Enter the row of the array a:");
	scanf("%d",&ar);
	printf("Enter the column of the array a:");
	scanf("%d",&ac);
	printf("Enter the row of the array b:");
	scanf("%d",&br);
	printf("Enter the column of the array b:");
	scanf("%d",&bc);
	if(ac!=br)
	{
		printf("The array is not in the same order\n");
		exit(0);
	}
	else
	{
		printf("Entert the data of array a\n");
		for(i=0;i<ar;i++)
		{
			for(j=0;j<ac;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Entert the data of array b\n");
		for(i=0;i<br;i++)
		{
			for(j=0;j<bc;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	}
	printf("The array a is\n");
	for(i=0;i<ar;i++)
		{
			for(j=0;j<ac;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	printf("The array b is\n");
	for(i=0;i<br;i++)
		{
			for(j=0;j<bc;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++)
		{
			for(k=0;k<bc;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			c[i][j]=s;
			s=0;
		}
	}
	printf("The multiply array is\n");
	for(k=0;k<i;k++)
	{
		for(l=0;l<j;l++)
		{
			printf("%d ",c[k][l]);
		}
		printf("\n");
	}
}
