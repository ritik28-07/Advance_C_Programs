#include<stdio.h>
/* Structures and Functions

1. Passing individual data member of structure
2. Passing entire structure
3. Passing address of the structure



// 1. PASSING INDIVIDUAL DATA MEMBER
typedef struct
{
	int a,b;
}POINT;
void display (int,int);
int main()
{												// void display(int *,int *)
	POINT p1={2,3};
	display(p1.a,p1.b);						// display(&p1.a,&p1.b);						
}
void display(int a,int b)				
{
	printf("%d %d",a,b);               
}


// 2. PASSING ENTIRE STRUCTURE
 typedef struct
 {
 	int a,b;
 }POINT;
 void display(POINT p);
 int main()									// void display(POINT *p)
 {
 	POINT p1={2,3};
 	display(p1);							// display(&p1)
 }
 void display(POINT p)						
 {
 	printf("%d %d",p.a,p.b);				// printf("%d %d",(*p).a,(*p).b);  or p->a  p->b
 }
 */
 


