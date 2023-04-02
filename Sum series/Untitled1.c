#include<stdio.h>
#include<string.h>
void main()
{
	char ch[20],ch1[20];
	int i,j=0;
	printf("Enter the sen:");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!='\0')
		{
			ch1[j++]=ch[i];
		}
		else
		{
			printf("%s",ch1);
			j=0;
		}
	}
}
