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
	int i;
	float y1,x1,h,e;
	printf("Enter the what value of y will found:");
	scanf("%f",&e);
	printf("Enter the value of h which is step length:");
	scanf("%f",&h);
	printf("Enter the initial value of x that is y(x):");
	scanf("%f",&x1);
	printf("Enter the initial value of y that is y(x):");
	scanf("%f",&y1);
	printf("Iteration\tx(n+1)\tf(x,y)\ty1\n");
	do
	{
		x1=x1;
		y1=y1;
		y1=y1+h*f(x1,y1);
		printf("%d\t%f\t%f\t%f\n",i,x1,f(x1,y1),y1);
		x1=x1+h;
		i++;
	}while(x1<e);
	printf("The y(%f) is %f",e,y1);
}
