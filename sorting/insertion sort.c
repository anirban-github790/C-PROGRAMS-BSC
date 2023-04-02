#include<stdio.h>
void insertionsort(int a[],int n);
void main()
{
	int a[30],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	a[0]=-999999;//Assign with a very small element
	printf("Enter the data\n");
	for(i=1;i<n;i++)
		scanf("%d",&a[i]);
	insertionsort(a,n);
	printf("The insertion sort is\n");
	for(i=1;i<n;i++)
		printf("%d  ",a[i]);
}
void insertionsort(int a[],int n)
{
	int ptr,temp,k;
	for(k=1;k<n;k++)
	{
		temp=a[k];
		ptr=k-1;
		while(temp<a[ptr])
		{
			a[ptr+1]=a[ptr];
			ptr=ptr-1;
		}
		a[ptr+1]=temp;//Insert a element in proper place that is why it is clled insertion sort
	}
}
