#include<stdio.h>
void display(char*,char*,int);
void main()
{
	struct book
	{
		char name[20];
		char author[20];
		int no;
	};
	struct book b1={"let","yp",19};
	display(b1.name,b1.author,b1.no);
}
void display(char*s,char*t,int n)
{
	printf("%s\n%s\n%d\n",s,t,n);
}
