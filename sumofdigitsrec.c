#include<stdio.h>
int add(int n);
int main()
{
	int result=0,n;
	scanf("%d", &n);                 //scanf("%[^\n]s"str);
	result=add(n);
	printf("%d ", result);
	
}
int add(int n)
{
	if(n==0)
	return 0;
	return (n%10 +add(n/10));
}
