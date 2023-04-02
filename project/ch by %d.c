#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[10];
	int i;
	printf("Enter the string:\n");
	scanf("%s",ch);
	printf("The string is\n");
	for(i=0;ch[i]!='\0';i++)
	{
		printf("%d",ch[i]-48);
	}
	getch();
}
