#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,c,n,k=1;
printf("enter the no");
scanf("%d",&n);
for(l=1;l<=n;l++)
{
for(b=1;b<=n-l;b++)
{
printf(" ");
}
for(c=1;c<=l;c++)
{
printf("%d",k++);
printf(" ");
}
printf("\n");
}
getch();
}
