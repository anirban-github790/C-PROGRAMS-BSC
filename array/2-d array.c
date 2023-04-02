#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5][3],i,j;
	printf("Enter the data for the 2-d array:");
	for(i=0;i<5;i++)
	{
	scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
    }
    for(i=0;i<5;i++)
	{
	printf("%d%d%d\n",a[i][0],a[i][1],a[i][2]);
    }
    printf("The address of 0th element=%u\n",a[0]); 
	printf("The address of 0th element=%u\n",a[0+1]);
	printf("The address of 0th element=%u\n",a[1]);
	printf("The address of 0th element=%d\n",a[0]); 
	printf("The address of 0th element=%d\n",a[0+1]);
	printf("The address of 0th element=%d\n",a[1]);
}
