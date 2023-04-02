#include<stdio.h>
#include<math.h>
float f(int x,int y)
{
	float s;
	s=(x+y);
	return(s);
}
void main()
{
	float x0,y0,xn,h,k1,k2,k,y1;
	printf("Enter the initial value of y0:");
	scanf("%f",&y0);
	printf("Enter the initial value of x0:");
	scanf("%f",&x0);
	printf("Enter the step length:");
	scanf("%f",&h);
	printf("Enter the avlue of x at whichy is found:");
	scanf("%f",&xn);
	printf("Value of x\tValue of y\n");
	do
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+h,y0+k1);
		k=(k1+k2)/2;
		y1=y0+k;
		printf("%f\t%f\n",x0,y0);
		y0=y1;
		x0=x0+h;
	}while(x0<=xn);
	printf("The value of y is %f",y1);
}
