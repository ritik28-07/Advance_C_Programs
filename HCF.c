#include<stdio.h>

int main()
{
	int result,a,b,low;
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);
	result=gcd(a,b);
	printf("HCF of %d and %d is %d", a,b,result);
	return 0;
}

int gcd(int a, int b)
{
	int i,low;
	low=(a<=b)?a:b;
	for(i=low;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			break;
		}
	}
	return i;
}	

