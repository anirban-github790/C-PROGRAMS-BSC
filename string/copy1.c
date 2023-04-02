#include<stdio.h>
#include<conio.h>
void copy(char*,char*);
void main()
{
char ch1[20],ch2[20];
printf("Enter any name:");
scanf("%s",ch1);
copy(ch1,ch2);
printf("The copy string:%s",ch2);
getch();
}
void copy(char*ptr1,char*ptr2)
{
	while(*ptr1!='\0')
	{
		*ptr2=*ptr1;
		ptr1++;
		ptr2++;
	}
	*ptr2='\0';
}
