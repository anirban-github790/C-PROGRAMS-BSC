#include<stdio.h>
void main()
{
	char ch[70];
	int i=0,j=0;
	printf("Enter the name:");
	scanf("%[^\n]s",ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>=65 && ch[i]<=90||ch[i]>=97 && ch[i]<=122)
		{
			j=i;
			printf("%c.",ch[j]);
			while(ch[j]>=65 && ch[j]<=90||ch[j]>=97 && ch[j]<=122)
				j++;
			i=j;
		}
		else
			i++;
	}
}
