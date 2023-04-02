#include<stdio.h>
#define true 1
#define false 0
void bubblesort(int a[],int n);
void main()
{
	int a[20],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	bubblesort(a,n);
	printf("The modified bubble sort is\n");
	for(i=1;i<=n;i++)
		printf("%d  ",a[i]);
}
void bubblesort(int a[],int n)
{
	int flag=true,v,j,k,i=1;
	while(i<=n && flag==true)
	{
		flag=false;
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>=a[j])
			{
				v=a[i];
				a[i]=a[j];
				a[j]=v;
				flag=true;
			}
		}
		i++;
		for(k=1;k<=n;k++)
			printf("%d  ",a[k]);
		printf("\n");
	}
}
