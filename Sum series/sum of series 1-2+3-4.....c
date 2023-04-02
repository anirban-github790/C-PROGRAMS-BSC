#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the number of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(-1,i-1)*i;
	}
	printf("The sum of the series=%d",sum);
}
