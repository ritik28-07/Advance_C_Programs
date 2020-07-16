#include<stdio.h>

/* typedef declaration= by using typedef declaration no new data type is created but only alternate name 
is given to existing data type.

the syntax of typedef declaration is =      typedef  existingdatatype  newdatatype

typedef int INTEGER; // typedef float flt;      typedef unsignedlongint UNIT;
int main()
{
	INTEGER a=5;
	printf("%d",a);
}

typedef int* PTR;
int main()
{
	int a=5;
	PTR p;
	p=&a;
	printf("%d",*p);
}

1. typedef struct student 
   {
   }STUDENTDATA;
   
2. typedef struct
	{
	}STUDENT;
	
3. struct temp
	{
	int a;
	};
	typedef struct temp TEMP;
*/

