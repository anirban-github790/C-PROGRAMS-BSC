#include<stdio.h>
void main()
{
	int a[3][3],at[3][3],i,j,k=0,l=0;
	printf("Enter the data in the 2-d array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			at[k][l++]=a[i][j];
		}
		k++;
		l=0;
	}
	printf("The transporse array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",at[i][j]);
		}
		printf("\n");
	}
}
