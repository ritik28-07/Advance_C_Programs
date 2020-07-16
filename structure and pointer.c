#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int id;
};
int main()
{
	struct student s;
	struct student *p;
	p=&s;
	p->id = 10;       // or (*p).id=10
	strcpy(p->name,"ABCD");
	printf("%d\n", p->id);
	printf("%s", p->name);
}

