#include<stdio.h>
#include<process.h>
int binarysearch(int a[],int l,int u,int k);
void main()
{
	int a[10],i=0,loc,j=10,k;
	printf("The array must be sorted\n");
	printf("Enter the data\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Enter the search element:");
	scanf("%d",&k);
	i=0;
	loc=binarysearch(a,i,j,k);
	printf("The location of %d is %d",a[loc],loc+1);
}
int binarysearch(int a[],int l,int u,int k)
{
	int mid;
	if(l>u)
	{
		printf("L is greater than the u");
		exit(0);
	}
	else
	{
		mid=(l+u)/2;
		if(k==a[mid])
		{
			return mid;
		}
		else if(k<a[mid])
			binarysearch(a,l,mid-1,k);
		else
			binarysearch(a,mid+1,u,k);
	}
}
