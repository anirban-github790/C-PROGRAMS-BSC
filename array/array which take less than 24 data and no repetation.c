#include<stdio.h>
#include<process.h>
void main()
{
	int a[10],i,j,temp;
	printf("Enter the value which is less then 24:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>24)
		{
			printf("The value is greater than 24\n");
			exit(0);
		}
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				printf("The same data\n");
				exit(0);
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The array is\n");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
