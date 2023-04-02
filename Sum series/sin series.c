#include<stdio.h>
#include<math.h>
void main()
{
	int n,x,od=1,f,j,i;
	float sum=0.0;
	printf("Enter the number:");
	scanf("%d%d",&n,&n);
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=od;j++)
		{
			f=f*j;
		}
		sum=sum+(pow(-1,i-1)*pow(x,od))/f;
		od=od+2;
	}
	printf("Sum=%f",sum);
}
