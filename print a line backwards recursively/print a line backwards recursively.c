#include<stdio.h>
void recur(char *,int);
void main()
{
	char ch[30];
	int i;
	printf("Enter the line:");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++);
	recur(ch,i-1);
}
void recur(char *p,int j)
{
	if(j>=0)
	{
		printf("%c",p[j]);
		recur(p,j-1);
	}
}
