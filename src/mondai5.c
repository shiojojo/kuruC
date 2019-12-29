#include <stdio.h>

int main (void)
{
    int intDrink = 198;
    int intMilk = 138;
    int intDrinkNumber = 1;
    int intMilkNumber = 2;
    int money = 1000;
    double TAX = 1.05;
    int intDrinkSum = intDrink * intDrinkNumber;
    int intMilkSum = intMilk * intMilkNumber;

    printf("%d円", money - (int)(TAX * (intDrinkSum + intMilkSum)));

    return 0;
}