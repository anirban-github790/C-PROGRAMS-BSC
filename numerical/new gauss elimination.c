#include<stdio.h>
void main()
{
	float a[10][10],u,x,y,z;
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
	for(k=1;k<=n;k++)
	{
		if(a[k][k]==0)
		{
			printf("Division by 0 erreo\n");
			break;
		}
		for(i=k+1;i<n;i++)
		{
			u=a[i][k]/a[k][k];
			for(j=k;j<=n;j++)
			{
				a[i][j]=a[i][j]-u*a[k][j];
			}
		}
	}
	z=(a[3][4])/a[3][3];
	y=(a[2][4]-z*a[2][3])/a[2][2];
	x=(a[1][4]-z*a[1][3]-y*a[1][2])/a[1][1];
	printf("x=%f\n",x);
	printf("y=%f\n",y);
	printf("z=%f\n",z);
}
