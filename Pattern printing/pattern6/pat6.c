#include<stdio.h>
void main()
{
	int n,line,cha;
	printf("enter line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(cha=1;cha<=line;cha++)
		{
			printf("%d",cha%2);
		}
		printf("\n");
	}
}
