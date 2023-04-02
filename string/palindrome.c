#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
	char ch[25];
	int i=0,len;
	printf("Enter any string:");
	scanf("%s",ch);
	while(ch[i]!='\0')
	{
		i++;
	}
	len=i-1;
	printf("The length of the string is %d\n",len+1);
	for(i=0;i<=len;i++,len--)
	{
		if(ch[i]!=ch[len])
		{
			printf("The string is not palindrome\n");
			exit(0);
		}
	}
	printf("The string is palindrome");
	getch();
}
