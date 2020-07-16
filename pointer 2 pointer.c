#include<stdio.h>
int main()
{
	int num=50;
	int *ptr1,**ptr2;
	ptr1=&num;
	ptr2=&ptr1;
	printf("\n%d %d %d",&num,&ptr1,&ptr2);
	printf("\n%d %d %d", num, *ptr1, *ptr2);
	printf("\n%d %d ", num, **ptr2);
	printf("\n%d %d", ptr1, ptr2);
	return 0;
}
