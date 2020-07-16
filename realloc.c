//in this example realloc will create new memory for required number of elements and then copy all the old elements in this new area.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *p=(int*)malloc(2*sizeof(int));
	*p=10;  //*(p+0)=10
	*(p+1)=20;
	if(p==NULL)
	printf("memory not available");
	for( i=0;i<2;i++)
	{
		printf("\n%d", *(p+i));
	}
	int *p1=(int*)realloc(p,3*sizeof(int));
	*(p1+2)=50;
	for(i=0;i<3;i++)
	{
		printf("\n%d", *(p1+i));
	}
}
