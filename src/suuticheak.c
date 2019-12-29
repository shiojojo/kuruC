#include<stdio.h>

void main (void)
{
    int suuti;
    char moji;

    moji = '2';
    suuti = 0;

    if ('0' <= moji && moji <= '9') {
        suuti = moji - '0';
    } else {
        suuti = 0;
    }
    printf("%cは%dです",moji,suuti);
}