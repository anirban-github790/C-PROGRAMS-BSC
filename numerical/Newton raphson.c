#include<stdio.h>
#include<math.h>
#include<process.h>
float f(float x)
{
	float s;
	s=pow(x,3)-x-4;
	return(s);
}
float df(float x)
{
	float s;
	s=3*pow(x,2)-1;
	return(s);
}
float ddf(float x)
{
	float s;
	s=6*x;
	return(s);
}
void main()
{
	int i=0;//i is the iteraton
	float x0,x1,e;
	printf("Enter the accuracy:");
	scanf("%f",&e);
	printf("Enter the initial guess:");
	scanf("%f",&x0);
	if((f(x0)*ddf(x0))/(df(x0)*df(x0))<1)
		printf("f(x0) is convergent for the initial guess\n");
	else
	{
		printf("f(x0) is not convergent for the initial guess\n");
		exit(0);
	}
	printf("Iteration\tx0\tf(x0)\t\tf'(x0)\ttx1\tf(x1)\n");
	do
	{
		x1=x0-(f(x0)/df(x0));
		printf("%d\t%f\t%f\t%f\t%f\t%f\n",i,x0,f(x0),df(x0),x1,f(x1));
		x0=x1;
		i++;
	}while(fabs(f(x1))>e);
	printf("The root=%f\n",x1);
}
