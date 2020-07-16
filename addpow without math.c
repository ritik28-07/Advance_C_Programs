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
	int i,j,sum=0,mul=1;
	
if(n==0)
return 1;
else
{

		for(j=0;j<n;j++)
		{
			mul=mul*a;
			sum=sum+mul;
		}
		
	return sum;
}
}
