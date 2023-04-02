#include<stdio.h>
#include<process.h>
void main()
{
	int a[3][3],i=0,j=0,k,m,min,c=1;
	printf("Enter the data:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		min=a[i][0];
		for(j=0;j<3;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
				k=j;
			}
		}
		for(m=0;m<3;m++)
		{
			if(min>a[m][k])
				c++;
		}
		if(c==3)
		{
			printf("It has a saddle point for %d\n",min);
			exit(0);
		}
		c=1;
	}
	printf("It has No saddle point\n");
}
