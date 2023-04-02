#include<stdio.h>
void main()
{
	char ch[70],ch1[80],ch2[20];
	int i=0,j=0,k=0;
	printf("Enter the name:");
	scanf("%[^\n]s",ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>=65 && ch[i]<=90 || ch[i]>=97 && ch[i]<=122)
		{
			j=i;
			while(ch[j]>=65 && ch[j]<=90 || ch[j]>=97 && ch[j]<=122)
			{
				ch1[k++]=ch[j++];
			}
			ch1[k++]='.';
			i=j;
		}
		else
			i++;
	}
	ch1[k]='\0';
	j=0;
	for(i=0;ch1[i+1]!='\0';i++)
	{
		if(ch1[i]!='.')
			ch2[j++]=ch1[i];
		else
		{
			printf("%c.",ch2[0]);
			j=0;
		}
	}
	ch2[j]='\0';
	for(i=0;ch2[i]!='\0';i++)
		printf("%c",ch2[i]);
	printf("\n");
	printf("%s",ch1);
}
