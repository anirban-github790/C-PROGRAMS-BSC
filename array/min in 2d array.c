#include<stdio.h>
void main()
{
	int a[3][3],i,j,min;
	printf("Enter the data\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	min=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(min>a[i][j])
				min=a[i][j];
		}
	}
	printf("the min=%d",min);
}
