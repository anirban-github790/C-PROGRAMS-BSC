#include<stdio.h>
#include<process.h>
#define true 1
#define false 0
void createheap(int a[],int n);
void removemax(int a[],int i);
void main()
{
	int a[20],n,i,j,flag,lc,rc,t;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	createheap(a,n);
}
void createheap(int a[],int n)
{
	int b[20],i=1,j=0,x=0,t=0;
	while(i<=n)
	{
		x=a[i];
		b[i]=x;
		j=i;
		while(j>1)
		{
			if(b[j]>b[j/2])
			{
				t=b[j];
				b[j]=b[j/2];
				b[j/2]=t;
				j=j/2;
			}
			else
				j=1;
		}
		i++;
	}
	printf("i=%d",i);
	printf("The array after create heap is\n");
	for(j=1;j<i;j++)
		printf("%d  ",b[j]);
	removemax(b,i-1);
}
void removemax(int a[],int i)
{
	int t,j;
	t=a[i];
	a[i]=a[1];
	a[1]=t;
	printf("\nThe array after remove max is\n");
	for(j=1;j<=i;j++)
		printf("%d  ",a[j]);
}
