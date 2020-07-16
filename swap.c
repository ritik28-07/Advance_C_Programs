#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("\n%d %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swapping");
	printf("\n%d %d",a,b);
	
}
