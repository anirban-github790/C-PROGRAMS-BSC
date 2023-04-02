#include<stdio.h>
void main()
{
	int a[10],b[10],i,j=0,v,k;
	printf("Enter the data\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]==1)
			b[j++]=a[i];
		else
		{
			for(k=2;k<=a[i]-1;k++)
		 	{
		 		if(a[i]%k==0)
					break;
			}
			if(k==a[i] && k!=2)
				b[j++]=a[i];
		}
	}
	printf("The twins array is\n");
	for(i=0;i<j;i++)
		printf("%d  ",b[i]);
	printf("\n");
	i=0;
	while(i<j)
	{
		printf("{%d %d}",b[i],b[i+1]);
		i=i+2;
	}
}
