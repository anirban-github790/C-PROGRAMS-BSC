#include<stdio.h>
#include<conio.h>
#include<process.h>
struct student
{
	int name[20],roll,marks;
};
void main()
{
struct student st;
FILE*fp,*fp1;
fp=fopen("student.txt","a");
fp1=fopen("student.txt","r");
if(fp==NULL)
    {
	printf("no such file exists\n");
	exit(0);
	}	
if(fp1==NULL)
    {
	printf("no such file exists\n");
	exit(0);
	}
	printf("enter the details thai is name,roll,marks\n");
	scanf("%s%d%d",st.name,&st.roll,&st.marks);
	fprintf(fp,"%s%d%d",st.name,st.roll,st.marks);
	fclose(fp);
	do
	{
	fscanf(fp1,"%s%d%d",st.name,&st.roll,&st.marks);
	printf("%s\t%d\t%d",st.name,st.roll,st.marks);
	}while(!feof(fp1));
	fclose(fp1);
	getch();
}
