#include <stdio.h>

int main (void)
{
    int listPrice;

    printf("定価を入力してください。\n");

    scanf("%d",&listPrice);

    printf("%d\n", (int)(listPrice * (1 - 0.1)));
    printf("%d\n", (int)(listPrice * (1 - 0.3)));
    printf("%d\n", (int)(listPrice * (1 - 0.5)));
    printf("%d\n", (int)(listPrice * (1 - 0.8)));

    return 0;
}