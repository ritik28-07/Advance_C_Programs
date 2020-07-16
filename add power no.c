#include<stdio.h>
#include<math.h>
long int cal(int a,int n);
int main()
{
	int a,n,r=0;
	scanf("%d", &a);
	printf("enter power");
	scanf("%d", &n);
	r=cal(a,n);
	printf(" sum is %d", r);
}



long int cal(int a, int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+pow(a,n-i);
	}
	return sum;
}
