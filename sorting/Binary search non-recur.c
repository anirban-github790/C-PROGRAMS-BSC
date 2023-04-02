#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true 1
#define false 0
void main()
{
	int *p,i,m,l,u,flag,mid,k;
	printf("Enter the size:");
	scanf("%d",&m);
	p=(int*)malloc(m*sizeof(int));
	printf("Enter the the data\n");
	for(i=0;i<m;i++)
		scanf("%d",&p[i]);
	l=0;
	u=m-1;
	flag=false;
	printf("Which data will search:");
	scanf("%d",&k);
	while(l<u && flag!=true)
	{
		mid=floor((l+u)/2);
		if(k==p[mid])
		{
			printf("The data is %d at the position %d",p[mid],mid+1);
			flag=true;
		}
		if(k<p[mid])
			u=mid-1;
		else
			l=mid+1;
	}
	if(flag==false)
	{
		printf("The data is not present\n");
		exit(0);
	}
}
