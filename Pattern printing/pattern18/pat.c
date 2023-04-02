#include<stdio.h>
void main()
{
	int n,line,cha,k=1,spa;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(spa=1;spa<=n-line;spa++)
		{
			printf(" ");
		}
		for(cha=1;cha<=line;cha++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}
