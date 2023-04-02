#include<stdio.h>
void main()
{
	int n,line,bla,cha,k=1;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(bla=1;bla<=n-line;bla++)
		{
			printf(" ");
		}
		for(cha=1;cha<=line;cha++)
		{
			printf("%d",line);
		}
		printf("\n");
	}
}
