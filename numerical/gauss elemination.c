#include<stdio.h>
void main()
{
	int i,j,k,l=0,m=0;
	float a[3][4],b[2][3],c[2],m21,m32,temp,m31,x,y,z;
	printf("Enter the data\n");//input to 1st array
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
	printf("The 1st array is\n");//print the 1st array
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f  ",a[i][j]);
		}
		printf("\n");
	}
	m21=-(a[1][0]/a[0][0]);//calculation of m21 that is 2 on 1
//	printf("m21=%f\n",m21);
	for(i=0,j=i+1,k=1;j<4;j++)//calculation of the 2nd array
	{
		temp=m21*a[i][j]+a[k][j];
	//	printf("temp=%f\n",temp);
		b[l][m++]=temp;
	}
	l++;
	m=0;
	m31=-(a[2][0]/a[0][0]);//calculation of m31 that is 3 on 1 
//	printf("m31=%f\n",m31);
	for(i=0,j=i+1,k=2;j<4;j++)//calculation of the 2nd array
	{
		temp=m31*a[i][j]+a[k][j];
		//printf("temp=%f\n",temp);
		b[l][m++]=temp;
	}
	printf("The 2nd array is\n");//print the contents of the 2nd array
	for(i=0;i<=l;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%f  ",b[i][j]);
		}
		printf("\n");
	}
	m32=-(b[1][0]/b[0][0]);//calculating the m32 that is 3 on 2
//	printf("m32=%f\n",m32);
	l=0;
	for(i=0,j=i+1,k=1;j<3;j++)//calculation of the 3rd array
	{
		temp=m32*b[i][j]+b[k][j];
		//printf("temp=%f\n",temp);
		c[l++]=temp;
	}
	printf("The 3rd array is\n");//print the 3rd array
	for(i=0;i<l;i++)
	{
		printf("%f ",c[i]);
	}
	z=c[1]/c[0];
//	printf("\nz=%f",z);
	y=(b[0][2]-(b[0][1]*z))/b[0][0];
//	printf("\ny=%f",y);
	x=(a[0][3]-(a[0][2]*z)-(a[0][1]*y))/a[0][0];
	printf("The values are\n");
	printf("\nz=%f",z);
	printf("\ny=%f",y);
	printf("\nx=%f",x);
}
