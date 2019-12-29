#include<stdio.h>
#include<string.h>

void main(void)
{
    char myoji[12],name[6];
    
    printf("名字：");
    scanf("%6s", myoji);
    printf("名前：");
    scanf("%6s", name);

    strcat(myoji,name);

    printf("%sです。\n",myoji);


}
