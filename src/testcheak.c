#include <stdio.h>

int main (void)
{
    int score;

    do
    {
        printf("テストの点数を入力：");
        scanf("%d",&score);
    } while (score < 0 || 100 < score);

    printf("%3d",score);
    return 0;
    
}