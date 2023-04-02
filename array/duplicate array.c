#include<stdio.h>
void main()
{
	int a[20],i,j,k,l,n;
	printf("Array must be in the sorted order\n");
	printf("Enter the size of the array within 20:");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=1;i<n;i++,j++)
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
	printf("The size of the array is %d\n",n);
	printf("The duplicate array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
