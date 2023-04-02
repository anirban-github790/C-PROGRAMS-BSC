#include<stdio.h>
#include<conio.h>
void main()
{
	char ch1[20],ch2[20];
	int i,j;
	printf("Enter any name of 1st string:");
	fflush(stdin);
	scanf("%s",ch1);
	printf("Enter any name of 2st string:");
	fflush(stdin);
	scanf("%s",ch2);
	for(i=0;ch1[i]!='\0';i++);
	ch1[i++]=' ';
	for(j=0;ch2[j]!='\0';j++)
	{
		ch1[i]=ch2[j];
		i++;
	}
	ch1[i]='\0';
	printf("The string is %s",ch1);
	getch();
}
