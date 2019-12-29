#include<stdio.h>

int orinpicCheack(int year);
enum{
    NASHI,
    KAKI,
    TOUKI,
};

int main(void)
{
    int year;
    scanf("%d",&year);

    switch (orinpicCheack(year))
    {
    case KAKI:
        printf("夏季オリンピック\n");
        break;
    case TOUKI:
        printf("冬季オリンピック\n");
        break;   
    default:
        printf("開催しません\n");
        break;
    }

}

int orinpicCheack(int year)
{
    if(year % 4 == 0 && year % 2 == 0) return KAKI;
    if(year % 4 != 0 && year % 2 == 0) return TOUKI;
    return NASHI;
}