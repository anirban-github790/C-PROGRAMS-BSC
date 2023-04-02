#include<stdio.h>
void main()
{
	int arr[30],first,last,mid,key,n,i;
	printf("enter the size of the array between 30\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the value to be search\n");
	scanf("%d",&key);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(arr[mid]<key)
		first=mid+1;
		else if(arr[mid]==key)
		{
			printf("the number found at position %d",mid+1);
			break;
		}
		else
		{
		    last=mid-1;
		}
		mid=(first+last)/2;
	}
	if(first>last)
	printf("the element is not found\n");
}
