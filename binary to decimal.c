#include<stdio.h>
#include<math.h>
int main()
{
	long long int n=0,i,r=0;
	scanf("%lld", &n);
	r=bin(n,i);
	printf("%lld", r);
}
int bin(int n, int i)
{
	int n1;
	n1=n%10;
	n=n/10;
	if(n==0)
	{
		return n1*pow(2,i);
	}
	else
	{
		return (n1*pow(2,i)+bin(n,i+1));
	}
}
