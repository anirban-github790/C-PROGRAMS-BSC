#include<stdio.h>
#include<conio.h>
void display(int*,int);
void main()
{
	int a[20],n,k;
	printf("How many index need:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(k=0;k<n;k++)
	{
	scanf("%d",&a[k]);
    }
	display(&a[0],n);
	getch();
}
void display(int*j,int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("Element=%d\n",*j);
		j++;
	}
}
