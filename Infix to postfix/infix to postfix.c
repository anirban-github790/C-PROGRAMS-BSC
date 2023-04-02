#include<stdio.h>
void main()
{
	char ch[80],post[80],stack[70];
	int i=0,j=0,top=-1;
	printf("Enter the infix natation:");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>=65 && ch[i]<=90 || ch[i]>=97 && ch[i]<=122 || ch[i]>=48 && ch[i]<=57)
			post[j++]=ch[i];
		else if(ch[i]==40 ||ch[i]>=42 && ch[i]<=94)
			stack[++top]=ch[i];
		else
		{
			post[j++]=stack[top--];
			top--;
		}
	}
	if(top>=0)
	{
		printf("Wrong infix natation\n");
	}
	post[j++]='\0';
	printf("The postfix natation is\n");
	for(i=0;post[i]!='\0';i++)
	{
		printf("%c",post[i]);
	}
}
