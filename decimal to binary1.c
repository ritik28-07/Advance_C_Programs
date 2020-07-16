#include<stdio.h>
void main()
{
	int r=0,n,i;
	scanf("%d", &n);
	r=deci(n);
	printf("%d", r);
}

int deci(int n)
{
	int i=1,a=0,b=0;
	while(n!=0)
	{
		a=n%2;
		n=n/2;
		b=b+(a*i);
		i=i*10;
	}
	return b;
}
