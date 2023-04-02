#include<stdio.h>
void main()
{
	float a[10][10],u,x[10],s;
	int i,j,k,n;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
	printf("The array is\n");
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%f  ",a[i][j]);
		}
		printf("\n");
	}
	for(k=1;k<=n-1;k++)
	{
		if(a[k][k]==0)
		{
			printf("Division by 0 erreo\n");
			break;
		}
		for(i=k+1;i<=n-1;i++)
		{
			u=a[i][k]/a[k][k];
			for(j=k;j<=n;j++)
			{
				a[i][j]=a[i][j]-u*a[k][j];
			}
		}
	}
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for(i=n-2;i>=0;i--)
	{
		s=0;
		for(j=i+1;j<=n-1;j++)
		{
			s=s+a[i][j]*x[j];
			x[i]=(a[i][n]-s)/a[i][i];
		}
	}
	printf("The solution is\n");
	for(i=1;i<=n;i++)
	{
		printf("%f\n",x[i]);
	}
}
