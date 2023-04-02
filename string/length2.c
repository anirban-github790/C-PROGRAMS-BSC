#include<stdio.h>
#include<conio.h>
int length(char);
void main()
{
	char ch[7]="kolkata";
	int i;
	for(i=0;i<7;i++)
	{
		length(ch[i]);
	}
	getch();
}
int length(char ch1)
{
printf("%c",ch1);
}
