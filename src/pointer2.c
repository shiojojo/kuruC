#include<stdio.h>

void plus(int *p);

void main(void)
{
    int value;
    value = 100;
    printf("%d\n",value);
    plus(&value);
    printf("%d\n",value);
}

void plus(int *p)
{
    *p += 100;
}