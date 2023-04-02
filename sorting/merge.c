#include<stdio.h>
#include<math.h>
void mergesort(int a[],int l,int r);
void merge(int a[],int l,int mid,int r);
void main()
{
	int a[30],n,l;
	printf("Enter the size within 30:");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(l=1;l<=n;l++)
	{
		scanf("%d",&a[l]);
	}
	l=0;
	mergesort(a,l,n);
	printf("The array after merge sort is\n");
	for(l=1;l<=n;l++)
	{
		printf("%d  ",a[l]);
	}
}
void mergesort(int a[],int l,int r)
{
	int mid;
	if(l<r)
	{
		mid=floor((l+r)/2);
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
void merge(int a[],int l,int mid,int r)
{
	int i,j,k,c[30];
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=r)
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	if(i<=mid && j>r)
	{
		while(i<=mid)
			c[k++]=a[i++];
	}
	if(i>mid && j<=r)
	{
		while(j<=r)
			c[k++]=a[j++];
	}
	for(i=l;i<=r;i++)
		a[i]=c[i];
}
