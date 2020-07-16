#include<stdio.h>
int search(int num, int a[], int b);
int main()
{
	int num, a[20], b, i, result=0;
	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the number to be searched");
	scanf("%d", &b);
	
	result = search(num,a,b);
	if(result == -1)
	{
		printf("Do not found");
	}
	else
	{
		printf("%d is on position %d", b,result);
	}
}
int search(int num, int a[], int b)
{
	int i;
	for(i=0; i<num; i++)
	{
		if(a[i]==b)
		{
			return i;
		}
	}
		return -1;
}
