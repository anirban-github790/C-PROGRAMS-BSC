#include<stdio.h>
void main()
{
	int i;
	struct cricket
	{
		char name[10];
		int ball;
		float over;
	};
	struct cricket b[3];
	printf("Enter the name,ball,over:\n");
	for(i=0;i<3;i++)
	{
		scanf("%s\t%d\t%f\n",b[i].name,&b[i].ball,&b[i].over);
	}
	for(i=0;i<3;i++)
	{
		printf("%s\t%d\t%f\n",b[i].name,b[i].ball,b[i].over);
	}
}
