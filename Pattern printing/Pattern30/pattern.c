#include<stdio.h>
void main()
{
	int line,spa,bla=1,cha,n;
	printf("Enter the line:");
	scanf("%d",&n);
	for(line=1;line<=n-1;line++,bla=bla+2);
	bla=bla-2;
	for(line=1;line<=n;line++)
	{
		if(line!=n)
		{
			for(cha=1;cha<=line;cha++)
			{
				printf("*");
			}
			for(spa=1;spa<=bla;spa++)
			{
				printf(" ");
			}
			for(cha=1;cha<=line;cha++)
			{
				printf("*");
			}
			bla=bla-2;
			printf("\n");
		}
		else
		{
			for(line=1;line<=2*n-1;line++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	spa=1;
	for(line=n-1;line>=1;line--)
	{
		if(line!=n)
		{
			for(cha=1;cha<=line;cha++)
		 	{
				printf("*");
			}
			for(bla=1;bla<=spa;bla++)
			{
				printf(" ");
			}
			for(cha=1;cha<=line;cha++)
			{
				printf("*");
			}
			printf("\n");
			spa=spa+2;
		}
	}
}
