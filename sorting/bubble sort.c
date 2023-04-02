#include<stdio.h>
void main()
{
	int a[20],i,j,n,temp;
	printf("Enter the size if an array:");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The bubble sort is\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}
