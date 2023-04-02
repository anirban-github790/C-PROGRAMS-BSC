#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("Enter the input:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int (*p)[3]=a;
	printf("%d\n",a[0]);
	printf("%d\n",*a+1);
}
