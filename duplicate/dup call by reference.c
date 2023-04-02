#include<stdio.h>
void duplicate(int*,int);
void main()
{
	int a[20],n;
	printf("Enter the size of the array within 20:");
	scanf("%d",&n);
	duplicate(a,n);
}
void duplicate(int *b,int v)
{
	int i,j,k,l;
	printf("Enter the data\n");
	for(i=0;i<v;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<v;i++)
	{
		for(j=i+1;j<v;j++)
		{
			if(b[i]==b[j])
			{
				for(k=j,l=j+1;k<v;k++,l++)
				{
					b[k]=b[l];
				}
				v=v-1;
			}
		}
	}
	for(i=0,j=i+1;i<v;i++,j++)
	{
		if(b[i]==b[j])
		{
			b[j]=b[++j];
			v=v-1;
		}
	}
	printf("the duplicate array is\n");
	for(i=0;i<v;i++)
	{
		printf("%d\n",b[i]);
	}
}
