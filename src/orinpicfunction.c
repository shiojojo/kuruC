#include<stdio.h>

void orinpic (int year);

void main(void)
{
    int year;

    do
    {
    printf("西暦を入力してください。\n");
    scanf("%d",&year);       /* code */
    } while (year <= 0);
    orinpic(year);
}

void orinpic(int year)
{
    if (year % 4 != 0 && year % 2 == 0) {
        printf("冬季オリンピック開催");
    } else if (year % 4 == 0) {
        printf("夏季オリンピック開催");
    } else {
        printf("オリンピック開催ではありません。");
    }
}