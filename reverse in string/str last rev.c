#include<stdio.h>
void main()
{
	char ch[30],ch1[30],ch2[30];
	int i,j,k=0,l;
	printf("Enter the sentence:");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++);
	printf("%c",ch[i-1]);
	for(j=i-1;j>=0;j--)
	{
		ch1[k++]=ch[j];
	}
	ch1[k++]=ch[j];
	ch1[k++]='\0';
	for(i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]!=' ')
			ch2[j++]=ch1[i];
		else
		{
			for(l=j-1;l>=0;l--)
			{
				printf("%c",ch2[l]);
			}
			printf(" ");
			j=0;
		}
	}
	ch2[j]='\0';
	for(i=0;ch2[i]!='\0';i++);
	for(j=i-1;j>=0;j--)
		printf("%c",ch2[j]);
}
