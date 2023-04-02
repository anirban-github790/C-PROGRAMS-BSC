#include<stdio.h>
void main()
{
	int n,line,cha,spa;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=n;line>=1;line--)
	{
		for(spa=1;spa<=n-line;spa++)
		{
			printf(" ");
		}
		for(cha=1;cha<=2*line-1;cha++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(line=2;line<=n;line++)
	{
		for(spa=1;spa<=n-line;spa++)
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
