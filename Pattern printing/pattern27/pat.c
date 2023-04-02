#include<stdio.h>
void main()
{
	int n,line,cha,bla;
	printf("Enter line:");
	scanf("%d",&n);
	for(line=n;line>=1;line--)
	{
		for(bla=1;bla<=n-line;bla++)
		{
			printf(" ");
		}
		for(cha=1;cha<=line;cha++)
		{
			printf("*");
		}
		printf("\n");
	}
}
