#include<stdio.h>
void main()
{
	int a[5],i,j,temp;
	printf("Enter the data\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=1;i<5;i++,j++)
	{
		if(a[i]>a[j])
			temp=a[i];
		else
			temp=a[j];
	}
	printf("The maximum number is %d",temp);
}
