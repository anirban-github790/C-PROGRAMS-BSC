#include<stdio.h>
void display(char*);
void main()
{
	char c[20];
	printf("Enter the NAME:");
	scanf("%s",c);
	display(c);
}
void display(char*p)
{
	printf("%s\n",p);
    while(*p!='\0')
    {
    	printf("%c",*p);
    	p++;
	}
}
