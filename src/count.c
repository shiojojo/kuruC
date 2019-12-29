#include<stdio.h>

int countfluen(void);

void main(void)
{
    printf("%d\n",countfluen());
    printf("%d\n",countfluen());
    printf("%d\n",countfluen());
}

int countfluen(void)
{
    int count = 0;
    count++;
    return count;
}