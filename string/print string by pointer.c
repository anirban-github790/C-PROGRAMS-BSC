#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[20];
	char*ptr;
	printf("Enter any name:");
	scanf("%s",ch);
	ptr=ch;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	getch();
}
