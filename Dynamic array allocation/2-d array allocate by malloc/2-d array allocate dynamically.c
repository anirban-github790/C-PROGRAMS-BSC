#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **p,m,n,i,j;
	printf("Enter the row:");
	scanf("%d",&m);
	printf("Enter the column:");
	scanf("%d",&n);
	p=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
	{
		p[i]=(int*)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
		printf("\n");
	}
	printf("The array is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",p[i][j]);
		}
		printf("\n");
	}
}
