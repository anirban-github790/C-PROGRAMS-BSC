#include<stdio.h>
#include<math.h>
float f(float x)
{
	float s;
	s=pow(x,3)-x-4;
	return(s);
}
void main()
{
	int k=0;//iteration
	float x0,x1,x2,e;
	printf("Enter the accuracy:");
	scanf("%f",&e);
	do
	{
		printf("Enter the value of x0:");
		scanf("%f",&x0);
		printf("Enter the value of x1:");
		scanf("%f",&x1);
	}while(f(x0)*f(x1)>0);
	printf("iteration\tx0\t\tx1\t\tx2\t\t\tf(x2)\n");
	do
	{
		x2=x0-((f(x0)*(x1-x0))/(f(x1)-f(x0)));
		printf("%d\t%f\t%f\t%f\t\%f\n",k,x0,x1,x2,f(x2));
		if(f(x2)<0)
			x0=x2;
		else
			x1=x2;
		k++;
	}while(fabs(f(x2))>e);
	printf("The root is %f",x2);
}
