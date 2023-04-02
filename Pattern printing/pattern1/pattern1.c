#include<stdio.h>
void main()
{
	int line,cha,n;
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
}
