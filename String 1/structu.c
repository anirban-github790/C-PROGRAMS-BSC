#include<stdio.h>
struct book
{
	int page;
	float price;
	char author[10];
};
struct book b[3];
void main()
{
	int i,max;
	printf("Enter the page,price,author\n");
	for(i=0;i<3;i++)
	{
		scanf("%d%f%s",&b[i].page,&b[i].price,b[i].author);
	}
	for(i=0;i<3;i++)
	{
		printf("%d\t%f\t%s\n",b[i].page,b[i].price,b[i].author);
	}
	max=b[0].page;
	for(i=0;i<3;i++)
	{
		if(max<b[i].page)
			max=b[i].page;
	}
	printf("The min page is %d",max);
}
