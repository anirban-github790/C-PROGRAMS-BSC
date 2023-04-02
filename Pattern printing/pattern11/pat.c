#include<stdio.h>
void main()
{
	int n,line,cha,spa,k=1;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(spa=1;spa<=n-line;spa++)
		{
			printf(" ");
		}
		for(cha=1;cha<=line;cha++,k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
