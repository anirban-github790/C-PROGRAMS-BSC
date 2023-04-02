#include<stdio.h>
#include<math.h>
float f(float x)
{
	float s;
//	s=1/(1+x);
	s=1/sqrt(1+pow(x,2));
	return s;
}
void main()
{
	int i=0,n;
	float a,b,h,s,x=0,e,o,sum=0;
	printf("Enter the interval:");
	scanf("%d",&n);
	printf("Enter the lower limit:");
	scanf("%f",&a);
	printf("Enter the upper limit:");
	scanf("%f",&b);
	h=(b-a)/n;
	x=a+i*h;
	s=f(a);
	printf("Iteration\tValue of x\tValue of y\n");
	printf("%d\t\t%f\t%f\n",i,x,f(x));
	do
	{
		i++;
		x=a+i*h;
		if(i%2==0)
			e=e+f(x);
		else
			o=o+f(x);
		printf("%d\t\t%f\t%f\n",i,x,f(x));
	}while(i<n-1);
	i++;
	x=a+i*h;
	printf("%d\t\t%f\t%f\n",i,x,f(x));
	s=s+f(x);
	sum=(h/3)*(s+4*o+2*e);
	printf("simpson=%f",sum);
}
