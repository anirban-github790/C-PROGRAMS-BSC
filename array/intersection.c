#include<stdio.h>
void main()
{
	int a[5],b[5],c[5],i,j,k;
	printf("Entre data for 1st array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entre data for 2nd array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				c[k++]=a[i];
			}
		}
	}
	printf("The intersection\n");
	for(i=0;i<k;i++)
	{
		printf("%d\n",c[i]);
	}
}
