#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int v,n,s=0,p=-1;
	printf("enter the octal number:");
	scanf("%d",&n);
	while(n>0)
	{
		v=n%10;
		p++;
		s=s+(v*pow(8,p));
		n=n/10;
	}
	printf("the decimal number is %d:",s);
	getch();
}
