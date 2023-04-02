#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],i,j,k,l;
	printf("enter the number for the first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter the number for the second matrix:\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			scanf("%d",&b[k][l]);
		}
		printf("\n");
	}
	printf("the first matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("the second matrix is:\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			printf("%d",b[k][l]);
		}
		printf("\n");
	}
	printf("c[0][0]=%d\n",a[0][0]*b[0][0]+a[0][0]*b[1][0]+a[0][0]*b[2][0]);
	printf("c[0][1]=%d\n",a[0][1]*b[0][1]+a[1][0]*b[1][1]+a[1][0]*b[2][1]);
	printf("c[0][2]=%d\n\n",a[0][2]*b[0][2]+a[2][0]*b[1][2]+a[2][0]*b[2][2]);
	printf("c[1][0]=%d\n",a[1][0]*b[0][0]+a[1][0]*b[1][0]+a[1][0]*b[2][0]);
	printf("c[1][1]=%d\n",a[1][1]*b[0][1]+a[1][1]*b[1][1]+a[1][1]*b[2][1]);
	printf("c[1][2]=%d\n\n",a[1][2]*b[0][2]+a[1][2]*b[1][2]+a[1][2]*b[2][2]);
	printf("c[2][0]=%d\n",a[2][0]*b[0][0]+a[2][0]*b[1][0]+a[2][0]*b[2][0]);
	printf("c[2][1]=%d\n",a[2][1]*b[0][1]+a[2][1]*b[1][1]+a[2][1]*b[2][1]);
	printf("c[2][2]=%d\n",a[2][2]*b[0][2]+a[2][2]*b[1][2]+a[2][2]*b[2][2]);		
	getch();
}
