#include<stdio.h>
#include<math.h>
float f(float x)
{
	float s;
	s=1/(1+x);
//	s=exp(-x)+x;
	return(s);
}
void main()
{
	int n;
	float x0,xn,h,s,sum,result;
	printf("Enter the steps:");
	scanf("%d",&n);
	printf("Enter the lower limit:");
	scanf("%f",&x0);
	printf("Enter the upper limit:");
	scanf("%f",&xn);
	h=(xn-x0)/n;
	s=f(x0)+f(xn);
	do
	{
		printf("x0=%f\ty=%f\n",x0,f(x0));
		x0=x0+h;
		sum=sum+f(x0);
	}while(x0<xn);
	result=(h/2)*(s+2*sum);
	printf("The result=%f",result);
}
