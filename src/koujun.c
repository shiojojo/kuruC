#include<stdio.h>

void main(void)
{
    int num[10];
    int count;

    count = sizeof(num) / sizeof(num[0]);
    
    for (int i = 0;i < count;i++)
    {
        printf("%02d回目：",i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 9;i >= 0; i--)
    {
        printf("%02d番目%d\n", i+1,num[i]);
    }
}