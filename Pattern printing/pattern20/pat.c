#include<stdio.h>
void main()
{
	int n,line,cha;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(cha=1;cha<=line;cha++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(line=n-1;line>=1;line--)
	{
		for(cha=1;cha<=line;cha++)
		{
			printf("*");
		}
		printf("\n");
	}
}
