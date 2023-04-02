#include<stdio.h>
void display(char*,char*,int*);
void main()
{
	struct book
	{
		char name[20];
		char author[20];
		int pages;
	};
	struct book b;
	struct book *p;
	printf("Enter the name,author,pages and price\n");
	scanf("%s%s%d",b.name,b.author,&b.pages);
	p=&b;
	printf("name=%s\tauthor=%s\tpages=%d\n",p->name,p->author,p->pages);
	display(b.name,b.author,b.pages);
}
void display(char*a,char*b,int*c);
{
printf("name=%s\tauthor=%s\tpages=%d",a,b,*c);	
}
