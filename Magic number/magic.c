#include<stdio.h>
#include<conio.h>
void magic(int);
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	magic(n);
} 
void magic(int x)
{
	int r,s=0;
	while(x>0)
	{
		r=x%10;
		x=x/10;
		s=s+r;
	}
	if(s>9)
	magic(s);
	else if(s==1)
	printf("the number is magic");
	else
	printf("the number is not magic");
}
