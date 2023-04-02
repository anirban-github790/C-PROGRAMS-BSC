#include<stdio.h>
#include<conio.h>
void main()
{
	char a1[30],a2[20];
	int i,j;
	printf("enter the name:");
	scanf("%s",&a2);
	while(a2[j]!='\0')
	{
	a1[i]=a2[j];
	j++;
	i++;	
	}
	while(a1[i]!='\0')
	{
		printf("%c",a1[i]);
		i++;
    }
    getch();
}
