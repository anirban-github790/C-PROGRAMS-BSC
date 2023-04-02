#include<stdio.h>
void main()
{
	int a[5],i,j,n,k;
	printf("Enter the data\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter which data will delete:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(a[i]==n)
		{
			for(j=i,k=i+1;j<5;j++)
			{
				a[j]=a[k];
			}
		}
	}
	printf("the new array is\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
}
