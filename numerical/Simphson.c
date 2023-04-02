#include<stdio.h>
#include<math.h>
float f(float x)
{
	float s;
	s=1/(1+x);
//	s=4*x-3*pow(x,2);
	return(s);
}
void main()
{
	int n,i=0;
	float x0,xn,so=0.0,se=0.0,h,s,result;
	printf("Enter the steps:");
	scanf("%d",&n);
	printf("Enter the upper value:");
	scanf("%f",&xn);
	printf("Enter the lower value:");
	scanf("%f",&x0);
	h=(xn-x0)/n;
	s=f(x0)+f(xn);
	printf("Iteration\tValue of x\tValue of y\n");
	printf("%d\t\t%f\t%f\n",i,x0,f(x0));
	do
	{
		x0=x0+h;
		i++;
		if(x0>=xn)
			break;
		else
			so=so+f(x0);
		printf("%d\t\t%f\t%f\n",i,x0,f(x0));
		x0=x0+h;
		i++;
		if(x0>=xn)
			break;
		else
			se=se+f(x0);
		printf("%d\t\t%f\t%f\n",i,x0,f(x0));
	}while(x0<xn);
	result=(h/3)*(s+2*se+4*so);
	printf("The result=%f",result);
}
