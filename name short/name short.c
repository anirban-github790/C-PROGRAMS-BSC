#include<stdio.h>
void main()
{
	char ch[40],ch1[20];
	int i,j=0,k=0;
	printf("Enter the name:");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=' ')
			ch1[k++]=ch[i];
		else
		{
			printf("%c.",ch1[0]);
			k=0;
		}
	}
	for(i=0;i<k;i++)
		printf("%c",ch1[i]);
}
