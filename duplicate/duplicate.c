#include<stdio.h>
void main()
{
	int a[30],i,j,k,l,n;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the data for array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j,l=j+1;k<n;k++,l++)
				{
					a[k]=a[l];
				}
				n=n-1;
			}
		}
	}
	i=0;
	j=1;
	if(a[i]==a[j])
	{
		k=j;
		l=j+1;
		a[k]=a[l];
		n=n-1;
	}
	printf("size=%d",n);
	printf("The array is\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
