#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void mergesort(int a[],int l,int r);
void merge(int a[],int l,int mid,int r);
void main()
{
	int i,l=0,r,*p,m;
	p=(int*)malloc(m*sizeof(int));
	printf("Enter the size:");
	scanf("%d",&m);
	printf("Enter the data\n");
	for(i=0;i<m;i++)
		scanf("%d",&p[i]);
	r=m;
	mergesort(p,l,r);
	printf("The array is\n");
	for(i=0;i<m;i++)
		printf("%d  ",p[i]);
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
	int i=l,k=l,j=mid+1,c[20];
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
