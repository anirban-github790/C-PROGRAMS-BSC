#include<stdio.h>
#include<conio.h>
void concat(char*,char*);
void main()
{
char ch1[20],ch2[20];
printf("Enter any string for 1st array");
scanf("%s",ch1);
printf("Enter any string for 2st array");
scanf("%s",ch2);
concat(ch1,ch2);
printf("The new string is %s",ch1);
getch();		
}
void concat(char*p,char*s)
{
	while(*p!='\0')
	{
		p++;
	}
	while(*s!='\0')
	{
		*p=*s;
		p++;
		s++;
	}
	*p='\0';
}
