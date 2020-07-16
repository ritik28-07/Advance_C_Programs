#include<stdio.h>
void sum(int,int);
void sub(int,int);
typedef struct complexno
{
	int real;
	int img;
}c;
int main()
{
	int a, b;
	scanf("%d", &a.real);
	scanf("%d", &a.img);
	scanf("%d", &b.real);
	scanf("%d", &b.img);
}
void sum(int a,int b)
{
	sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    printf("%d+%di",sum.real,sum.img);
}
void sub(int a,int b)
{
	sub.real = a.real - b.real;
    sub.img = a.img - b.img;
    printf("%d-%di",sub.real,sub.img);
}
