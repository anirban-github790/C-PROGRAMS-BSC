#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	for(i=1;i<=n;i++)
	{
		printf("%x\n",p);
		p++;
	}
/*	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("The array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",p[i]);
	}*/
}
