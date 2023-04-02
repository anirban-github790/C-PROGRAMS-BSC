#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[20];
	int i=0;
	printf("Enter any name:");
	scanf("%s",ch);
	while(ch[i]!='\0')
	{
		i++;
	}
	printf("The total charecter in string is %d",i);
	getch();
}
