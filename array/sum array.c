#include<stdio.h>
#define size1 n
#define size2 v
void main()
{
int n,v,a[size1][size1],b[size2][size2],i,j;
printf("Enter the size of the first 2-d array:");
scanf("%d",&n);
printf("Enter the size of the second 2-d array:");
scanf("%d",&v);
printf("Enter the information of first matrix\n");
for(i=0;i<size1;i++)
	{
		for(j=0;j<size1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the information of second matrix\n");
	for(i=0;i<size2;i++)
	{
		for(j=0;j<size2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("The first matrix is\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is\n");
	for(i=0;i<size2;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
