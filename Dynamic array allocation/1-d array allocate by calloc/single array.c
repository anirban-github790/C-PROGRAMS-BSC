#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the data\n");
	a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The data is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
