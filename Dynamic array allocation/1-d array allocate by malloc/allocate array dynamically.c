#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,m;
	printf("Enter the size:");
	scanf("%d",&m);
	p=(int*)malloc(m*sizeof(int));
	printf("Enter the data\n");
	for(i=0;i<m;i++)
		scanf("%d",&p[i]);
	printf("The array is\n");
	for(i=0;i<m;i++)
		printf("%d  ",p[i]);
}
