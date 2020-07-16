#include<stdio.h>
#include<math.h>
int main()
{
/*	int n=0,i,r[100],c=0;
	scanf("%d", &n);
	
	for(i=0;;i++)
	{
	r[i]=bin(n);
	n=n/2;
	c++;
	if(n==0||n==1)
	{
		r[++i]=n;
		break;
	}
}
	for(i=c;i>=0;i--)
	printf("%d ", r[i]);
}
int bin(int n)
{
	int n1;
	n1=n%2;
	return n1;
}*/
	int i,n,a[100];
	scanf("%d",&n);
	for(i=0;n>0;i++)    
	{    
		a[i]=n%2;    
		n=n/2;    
	}        
	for(i=i-1;i>=0;i--)    
	{    
		printf("%d",a[i]); 
		  
	}    
	return 0;  	
}
