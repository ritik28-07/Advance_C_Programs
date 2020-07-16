//Passing and returning structure from function
#include<stdio.h>
struct distance
{
	int km,m;
};
struct distance add(struct distance d1,struct distance d2);  //struct distance add(struct distance *d1,struct distance *d2);
int main()
{
	struct distance d1,d2,d3;
	scanf("%d%d",&d1.km,&d1.m);
	scanf("%d%d",&d2.km,&d2.m);
	d3=add(d1,d2);
	printf("%d %d",d3.km,d3.m);
}
struct distance add(struct distance d1, struct distance d2)//struct distance add(struct distance *d1,struct distance *d2);
{
	struct distance sum;
	sum.km=d1.km+d2.km;       // sum.km=d1->km+d2->km;
	sum.m=d1.m+d2.m;	      // sum.m=d1->m+d2->m;
	if(sum.m>=1000)
	{
		sum.m=sum.m/1000;
	}
	return sum;
}
