#include<stdio.h>
#include<string.h>
int main()
{		
	char s1[20]="PROGRAMMING IN C";
	char s2[20]="I	AQN";
	char *p;
	p=strstr(s1,s2);
	if(p)
	{
	printf("FOUND");	
	}
	else
	printf("NOT FOUND");
	return 0;
}
/* STRSTR FUNCTION FINDS FIRST OCCURANCE OF STRING 2 IN STRING 1. IT RETURNS A POINTR TO 1ST OCCURANCE OF 
STRING 2 IN STRING 1 IF STRING 2 IS THERE IN STRING 1 OR NULL POINTER IF STRING 2 IS NOT IN STRING 1.   
gets stands for get string*/ 

