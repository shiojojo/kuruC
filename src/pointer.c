#include<stdio.h>

void main(void)
{
    int *p = NULL;
    int i;

    p = &i;
    *p = 10;

    printf("%p\n", &i);
    printf("%p", p);
}