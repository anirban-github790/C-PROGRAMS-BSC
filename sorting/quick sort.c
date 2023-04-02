#include<stdio.h>
int partition(int a[],int l,int r);//prototype of the funtion
void quicksort(int a[],int l,int r);
void main()
{
	int a[9],i,l=0,r=8;
	printf("Enter the data\n");
	for(i=0;i<9;i++)
		scanf("%d",&a[i]);
	quicksort(a,l,r);
	printf("\nThe array after quick sort is\n");
	for(i=0;i<9;i++)
		printf("%d  ",a[i]);
}
void quicksort(int a[],int l,int r)
{
	int p,i;
	if(l<r)
	{
		p=partition(a,l,r);//funtion call
		printf("\nThe steps\n");
		for(i=0;i<9;i++)
			printf("%d  ",a[i]);
		printf("p=%d",p);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}
int partition(int a[],int l,int r)
{
	int loc,v,p;
	loc=l;
	l++;
	while(l<=r)
	{
		while(a[loc]<=a[r] && loc<r)
			r--;
		while(a[loc]>=a[l] && loc<l)
			l++;
		if(l<r)
		{
			v=a[l];
			a[l]=a[r];
			a[r]=v;
		}
	}
	v=a[loc];
	a[loc]=a[r];
	a[r]=v;
	p=r;
	return p;//Here p is the position of the pivotial element
}
