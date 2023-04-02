#include<stdio.h>
void main()
{
	int n,line,cha,bla,spa;
	printf("Enter line:");
	scanf("%d",&n);
	spa=1;
	for(line=n;line>=1;line--)
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
		else
		{
			for(cha=1;cha<=2*line-1;cha++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
