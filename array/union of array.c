#include<stdio.h>
void main()
{
	int a[5],b[5],c[10],i,j,k,l,m;
	printf("Enter the data for the 1st array\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter the data for the 2nd array\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	for(i=0;i<5;i++)
		c[k++]=a[i];
	for(i=0;i<5;i++)
		c[k++]=b[i];
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(c[i]==c[j])
			{
				for(m=j,l=j+1;m<k;m++,l++)
				{
					c[m]=c[l];
				}
				k=k-1;
			}
		}
	}
	for(i=0,j=i+1;i<k;i++,j++)
	{
		if(c[i]==c[j])
		{
			m=j;
			l=j+1;
			c[m]=c[l];
			k=k-1;
		}
	}
	printf("The union is\n");
	for(i=0;i<k;i++)
	printf("%d\n",c[i]);
}
