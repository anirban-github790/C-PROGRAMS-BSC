#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,j,k,t,v,n,m;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the data:\n");
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The array is:\n");
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		m=a[i][1];
		v=i;
		for(j=1;j<n;j++)
		{
			if(m<=a[i][j])
			{
				m=a[i][j];
				k=j;
			}
		}
	//	printf("m=%d\n",m);
		for(t=1;t<=n;t++)
		{
			b[k][t]=a[v][t];
		}
	}
	printf("The array after pivoting is\n");
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
