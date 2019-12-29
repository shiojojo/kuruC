#include <stdio.h>

int main(void)
{
    int month;

    printf("月を入力してください。\n");
    scanf("%d",&month);
    
    switch (month)
    {
    case 1:
        printf("睦月\n");
        break;
    case 2:
        printf("如月\n");
        break;
    case 3:
        printf("弥生\n");
        break;
    case 4:
        printf("卯月\n");
        break;
    default:
        printf("そんな暦はありません\n");
        break;
    }
}