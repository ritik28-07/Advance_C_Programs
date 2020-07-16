#include<stdio.h>
#include<string.h>
void band();
void bor();
void bxor();
void bnot();
int main()
{
	band();
	bor();
	bxor();
	bnot();
	int a=2,b=5;
	(a&b)?printf("\nTRUE"):printf("\nFALSE");
	(a&&b)?printf("\nTRUE"):printf("\nFALSE");
	printf("\n%d",a<<b);
	printf("\n%d",a>>b);
}
void band()
{
	int c,a=5,b=6;
	c=a&b;
	printf("%d ",c);
}
void bor()
{
	int c,a=5,b=6;
	c=a|b;  
	printf("%d ",c);
}
void bxor()
{
	int c,a=5,b=6;
	c=a^b;
	printf("%d ",c);
}
void bnot()
{
	int c,a=5,b=6;
	c=~a;
	printf("%d ",c);
}
/*  
& bitwise AND = result of AND is 1 if both bits are 1;
! bitwise OR = result of OR is 1 if any of two bits is 1;
^ bitwise exculsive OR or XOR = result of XOR is 1 if two bits are different;
~ bitwise NOT = inverts/toggle all the bits;
<< bitwise left shift = left shift bits of first operants and second operant decides number of places to shift;
>> bitwise right shift

a	b	a&b		a|b		a^b		~a
0	0	0		0		0		1
0	1	0		1		1		1
1	0	0		1		1		0	
1	1	1		1		0		0

in case of logical operator 0 or 1(true or false)is printed;
but in case of bitwise operator integer value is printed;
*/
