#include<stdio.h>
#include<conio.h>
void main()
{
	char a1[50],a2[30];
	int i,j;
	printf("enter first name:");
	scanf("%s\n",&a1);
	printf("enter last name:");
	scanf("%s\n",&a2);
	for(i=0;a1[i]!='\0';i++);
	for(j=0;a2[j]!='\0';j++)
	{
	a1[i]=a2[j];
	i++;	
    }
	while(a1[i]!='\0')
	{
	printf("%c",a1[i]);
	i++;	
	}
	getch();	
}
