#include<stdio.h>
void main()
{
	char ch[10];
	int i;
	printf("Enter the string with special charecter:");//mean $,@ etc
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>=97 && ch[i]<=122)
		printf("The charecter is small letter\n");
		else if(ch[i]>=65 && ch[i]<=90)
		printf("The charecter is capital letter\n");
		else
		printf("The charecter is special\n");
	}
}
