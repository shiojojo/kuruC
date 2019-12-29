#include <stdio.h>

int hikaku(int *min,int *max,int array[]);

void main(void)
{
    int i = 0;
    int array[10];
    int max,min;

	do {
		printf("%d 番目の数:",i + 1);
		scanf("%d",&array[i]);
		i++;
	} while (array[i - 1] != -1);

    hikaku(&min,&max,array);
    printf("最小値：%d\n",min);
    printf("最大値：%d\n",max);

}

int hikaku(int *min,int *max,int array[])
{
    int i;
    *max = 0;
    *min = 100;
    for (i = 0; array[i] != -1; i++)
    {
        if (*max < array[i]) {
            *max = array[i];
        }
        if (*min > array[i]) {
            *min = array[i];
        }
    }
    return 0;
    
}