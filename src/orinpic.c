#include <stdio.h>

int main (void) 
{
    int year,rest;

    printf("西暦を入力してください。\n");
    scanf("%d",&year);
    //rest = year % 4;

    if (year % 4 != 0 && year % 2 == 0) {
        printf("冬季オリンピック開催");
    } else if (year % 4 == 0) {
        printf("夏季オリンピック開催");
    } else {
        printf("オリンピック開催ではありません。");
    }
    return 0;
}