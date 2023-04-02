#include<stdio.h>
#include<math.h>
void main()
{
	int m,n,a,b,c;
	printf("Enter the value of m and n:");
	scanf("%d%d",&m,&n);
	a=m-n;
	b=2*m*n;
	c=pow(m,2)+pow(n,2);
	if((pow(a,2)+pow(b,2))==pow(c,2))
		printf("It does not follow\n");
	else
		printf("It does follow\n");
}
