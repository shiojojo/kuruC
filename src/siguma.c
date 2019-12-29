#include <stdio.h>

int main(void)
{
    int max,min,sum;

    /*入力*/
    printf("最小値と最大値を,で区切って入力してください。\n");
    scanf("%d,%d",&min,&max);

    /*計算*/
    sum = (min + max) * (max - min + 1) / 2;

    /*表示*/
    printf("%d～%dの合計は%dです。\n", min,max,sum);

    return 0;

}