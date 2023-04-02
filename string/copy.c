#include<stdio.h>
#include<conio.h>
void main()
{
	char ch1[20],ch2[20];
	int i;
	printf("Enter any name:");
	scanf("%s",ch1);
	for(i=0;ch1[i]!='\0';i++)
	{
		ch2[i]=ch1[i];
	}
	ch2[i]='\0';
	printf("\nThe copy string:%s",ch2);
	getch();
}
