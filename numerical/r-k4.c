#include<stdio.h>
float f(float x,float y)
{
	float p;
//	p=x+y;
	p=x*y;
	return p;
}
void main()
{
	float h,x0,y0,xn,s1,s2,s3,s4,s,y1;
	printf("Enter the step size:");
	scanf("%f",&h);
	printf("Enter the initial value of x:");
	scanf("%f",&x0);
	printf("Enter the initial value of y:");
	scanf("%f",&y0);
	printf("At where the value of y is find:");
	scanf("%f",&xn);
	printf("Valu of x\tValue of y\n");
	do
	{
		s1=h*f(x0,y0);
		s2=h*f(x0+(h/2),y0+(s1/2));
		s3=h*f(x0+(h/2),y0+(s2/2));
		s4=h*f(x0+h,y0+s3);
		s=(s1+2*s2+2*s3+s4)/6;
		y1=y0+s;
		printf("%f\t%f\n",x0,y0);
		y0=y1;
		x0=x0+h;
	}while(x0<=xn);
}
