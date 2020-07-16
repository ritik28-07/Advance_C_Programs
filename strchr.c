#include<stdio.h>
#include<string.h>
int main()
{		//FIRST OCCURANCE OF THE CHARACTER
	char s[20]="PROGRAMMING";
	char *p;
	p=strchr(s,'M');
	if(p)
	{
	printf("FOUND");
	printf(" %d", p-s);	
	}
	else
	printf("NOT FOUND");
	return 0;
}
/* STRCHR FUNCTION FINDS FIRST OCCURANCE OF CHARACTER IN A STRING POINTED TO BY ARGUMENT STRING S. IT RETURNS 
POINTER POINTING TO FIRST MATCHING CHARACTER IF CHARACTER IS PRESENT IN A STRING OR NULL POINTER IF CHARACTER IS
NOT FOUND    */
