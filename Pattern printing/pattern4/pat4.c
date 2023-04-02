#include<stdio.h>
void main()
{
	int n,line,cha,k=1;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(cha=1;cha<=line;cha++,k++)
		{
			printf("%d\t",k);
		}
		printf("\n");
	}
}
