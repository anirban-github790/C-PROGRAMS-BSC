#include<stdio.h>
void main()
{
	int n,line,cha,bla,k=1;
	printf("Enter line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(bla=1;bla<=n-line;bla++)
		{
			printf(" ");
		}
		for(cha=1;cha<=line;cha++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
