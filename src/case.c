#include <stdio.h>

int main(void) {
    int no;

    scanf("%d",&no);

    switch (no)
    {
    case 1:
        printf("のびた");
        break;
    case 2:
        printf("しずか");
        break;    
    default:
        printf("誰でもない");
        break; 
    }
}