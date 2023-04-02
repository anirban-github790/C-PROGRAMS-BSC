#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	float s;
	s=(y-x)/(y+x);
	return(s);
}
void main()
{
	float x0,y0,h,xn,y1;
	printf("Enter the initial value of y0:");
	scanf("%f",&y0);
	printf("Enter the initial value of x0:");
	scanf("%f",&x0);
	printf("Enter the step size:");
	scanf("%f",&h);
	printf("Enter the value of x at which y is requred:");
	scanf("%f",&xn);
	printf("Value of x\tValue of y\n");
	do
	{
		printf("%f\t%f\n",x0,y0);
		y1=y0+h*f(x0,y0);
		x0=x0+h;
		y0=y1;
	}while(x0<xn);
	printf("The value of y is:%f",y1);
}
