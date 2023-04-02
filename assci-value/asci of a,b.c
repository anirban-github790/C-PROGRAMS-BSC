#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='a';
	while(ch<='z')
	{
		printf("%c=%d\n",ch,ch);
		ch++;
	}
	getch();
}
