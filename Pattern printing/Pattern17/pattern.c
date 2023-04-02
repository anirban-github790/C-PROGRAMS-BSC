#include<stdio.h>
void main()
{
	int line,space,n,i,j;
	printf("Enter the number of line:");
	scanf("%d",&n);
	for(line=n,j=1;line>=1;line--)
	{
		for(space=1;space<=n-line;space++)
		{
			printf(" ");
		}
		for(i=1;i<=2*line-1;i++)
		{
			printf("%d",j);
		}
		printf("\n");
		j++;
	}
}
