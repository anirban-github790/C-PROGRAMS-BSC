#include<stdio.h>
void main()
{
	char ch[40],ch1[40];
	int i,j=0,k;
	printf("Enter the sentence:");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=' ')
			ch1[j++]=ch[i];
		else
		{
			for(k=j-1;k>=0;k--)
			{
				printf("%c",ch1[k]);
			}
			printf(" ");
			j=0;
		}
	}
	i=0;
	while(ch1[i]!='\0')
		i++;
	for(j=i-1;j>=0;j--)
	{
		printf("%c",ch1[j]);
	}
}	
