#include<stdio.h>
#include<math.h>
float f(float x)
{
	float s;
//	s=pow(x,3)-x-4;
	s=pow(x,2)-2*x-1;
	return(s);
}
void main()
{
	float e,x0,a,b;
	int k=0;
	printf("Enter the accuracy:");
	scanf("%f",&e);
	do
	{
		printf("Enter the value of which f(x) is -ve:");
		scanf("%f",&a);
		printf("Enter the value of b for the same:");
		scanf("%f",&b);
	}while(f(a)*f(b)>0);
	printf("Iteration\tvalue of a is -ve\tvalue of b is -ve\tx0=(a+b)/2\tf(x0)\t\t|b-a|\n");
	do
	{
		x0=(a+b)/2;
		printf("%d\t\t%f\t\t%f\t\t%f\t%f\t%f\n",k,a,b,x0,f(x0),fabs(b-a));
		if(f(x0)>0)
			b=x0;
		else
			a=x0;
		k=k+1;
	}while(fabs(b-a)>e);
	printf("The root=%4f at iteration %d",x0,k);
}
