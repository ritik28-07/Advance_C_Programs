#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Bits required to represent an integer */

int main()
{
    int num, count=0, i;
    scanf("%d", &num);
    for(i=0; i<8; i++)
    {
        if((num >> i ) & 1)
        {
            break;
        }
        count++;
    }

    printf("%d", count);

    return 0;
}
