#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **a,n,i,j,m;
	printf("Enter the size of row:");
	scanf("%d",&n);
	printf("Enter the size of the column:");
	scanf("%d",&m);
	a=(int**)calloc(n,sizeof(int));
	printf("Enter the data\n");
	for(i=0;i<n;i++)
	{
		a[i]=(int*)calloc(m,sizeof(int));
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The data is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

