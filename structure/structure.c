#include<stdio.h>
void main()
{
	struct address
	{
	char phone[20];
	char city[20];
	int pin;
	float kol;	
	};struct address b;
	struct emp
	{
		char name[20];
		struct address a;
	};
	struct emp e;
	printf("Enter the name,phone,city,pin,kol\n");
	scanf("%s%s%s%s%d%f",&e.name,&b.phone,&e.a.phone,&e.a.city,&e.a.pin,&e.a.kol);
	printf("name=%s\nphone=%s\nphone=%s\ncity=%s\npin=%d\nkol=%f",e.name,b.phone,e.a.phone,e.a.city,e.a.pin,e.a.kol);
}
