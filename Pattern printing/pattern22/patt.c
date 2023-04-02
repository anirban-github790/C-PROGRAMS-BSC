#include<stdio.h>
void main()
{
	int n,line,cha,bla;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(bla=1;bla<=n-line;bla++)
		{
			printf(" ");
		}
		for(cha=1;cha<=2*line-1;cha++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(line=n-1;line>=1;line--)
	{
		for(bla=1;bla<=n-line;bla++)
		{
			printf(" ");
		}
		for(cha=1;cha<=2*line-1;cha++)
		{
			printf("*");
		}
		printf("\n");
	}
}
