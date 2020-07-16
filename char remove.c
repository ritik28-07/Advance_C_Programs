#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100],b[100];
    int j,i,k=0,temp;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(isalpha(a[i]))
        {
            b[k]=a[i];
        k++;
        }
    }
    printf(" %s\n",b);
    for(i=0;i<k-1;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf(" %s",b);
}
