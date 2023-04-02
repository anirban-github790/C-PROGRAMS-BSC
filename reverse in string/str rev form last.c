#include<stdio.h>
void main()
{
	char ch[20],ch1[20];
	int i,j,k=0,l;
	printf("Enter the sentence:");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++);
	for(j=i-1;j>=0;j--)
	{
		if(ch[j]!=' ')
			ch1[k++]=ch[j];
		else
		{
			for(l=0;l<k;l++)
				printf("%c",ch1[l]);
			k=0;
		}	
	}
}
