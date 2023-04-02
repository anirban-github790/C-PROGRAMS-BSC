#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	char ch1[10],ch2[10];
	int i,j;
	printf("Enter the first:");
	scanf("%s",ch1);
	printf("Enter the second:");
	scanf("%s",ch2);
	for(i=0,j=0;ch1[i]!='\0';i++,j++)
	{
		if(ch1[i]!=ch2[j])
			{
				printf("The difference of %c-%c=%d\n",ch1[i],ch2[j],ch1[i]-ch2[j]);
				exit(1);
			}
	}
	printf("The string are same\n");
}
