#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	int i;
	printf("enter the name:");
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		i++;
	}
	printf("the length=%d",i);
	getch();
}
