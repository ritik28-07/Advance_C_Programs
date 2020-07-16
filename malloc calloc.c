#include<stdio.h>
#include<stdlib.h>
int main()
{

	int i,n=12;

	char *ptr=(char*)malloc(n*sizeof(char));
	
	if(ptr==NULL)
	{
		printf("memory is not available");
	}
	
	*(ptr+0)='P';
	*(ptr+1)='R';
	*(ptr+2)='O';
	*(ptr+3)='G';
	*(ptr+4)='R';
	*(ptr+5)='A';
	*(ptr+6)='M';
	*(ptr+7)='M';
	*(ptr+8)='I';
	*(ptr+9)='N';
	*(ptr+10)='G';
	*(ptr+11)='\0';

	for(i=0;i<12;i++)
	{
		printf("%c", *(ptr+i));
	}
}



/* 
 The size of dynamically created memry can be changed using re alloc function. 
 This func returns pointer to first byte of memory block.
 It returns void pointer if succesfull, otherwise null pointer if fails.
 Allocated new block may be or may not be at same region, it returns same pointer if able to make old block of memory bigger or has to go elsewhere to get contigious memory and then after copying old data there returns pointer to new memory.
 The syntax of re alloc function is 


 realloc()
	void *realloc(void *p, newsize);
	ptr= realloc(p,10); 
*/
