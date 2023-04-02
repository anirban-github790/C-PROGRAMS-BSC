#include<stdio.h>
#include<conio.h>
int count(char*);
void main()
{
char ch[20];
int len;
printf("Enter any name:");
scanf("%s",ch);
len=count(ch);
printf("The length is %d",len);
getch();	
}
int count(char*ch1)
{
	int var=0;
	while(*ch1!='\0')
	{
		var++;
		ch1++;
	}
	return(var);
}
