#include<stdio.h>
int select_min(int a[],int l,int r);
void main()
{
	int a[30],n,i,j,temp;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		j=select_min(a,i,n);
		if(i!=j)
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	printf("The after selection sort is\n");
	for(i=1;i<=n;i++)
		printf("%d  ",a[i]);
}
int select_min(int a[],int l,int r)
{
	int loc,i,min;
	min=a[l];
	loc=l;
	for(i=l+1;i<=r;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			loc=i;
		}
	}
	return loc;
}
