#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int id;
};
void display(struct student *);
int main()
{
	struct student s;
	struct student *p;
	p=&s;
	p->id=10;
	strcpy(p->name,"abcd");
	display(&s);
}
void display(struct student *s)
{
	printf("%d\n", s->id);
	printf("%s", s->name);
}
